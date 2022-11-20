from pytube import YouTube
link = input('Digite o link do  youtube: ')
yt = YouTube(link)
yt.streams.first().download()
