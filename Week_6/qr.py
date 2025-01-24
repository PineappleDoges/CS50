import os
import qrcode

img = qrcode.make("hettps://youtube.be/xvFZjo5PgG0")

img.save("qr.png", "PNG")
