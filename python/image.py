
from telegram.ext import Updater, CommandHandler, MessageHandler, Filters
import requests
import re

def get_url():
    contents = requests.get('https://random.dog/woof.json').json()    
    url = contents['url']
    return url

def bop(update, context):
    url = get_url()
    context.bot.send_photo(chat_id=update.effective_chat.id, photo = url)

def main():
    updater = Updater('1652016015:AAFvl924BYzMzQGol7CcFlCZIhlJnyHKYEw')
    dp = updater.dispatcher
    dp.add_handler(CommandHandler('bop',bop))
    updater.start_polling()
    updater.idle()

if __name__ == '__main__':
    main()