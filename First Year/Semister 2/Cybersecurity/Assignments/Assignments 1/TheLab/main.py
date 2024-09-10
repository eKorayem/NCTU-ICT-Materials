from kivy.uix.widget import Widget

from kivy.app import App
from kivy.uix.button import Button

import os
os.environ['KIVY_GL_BACKEND'] = 'angle_sdl2'

class MainWidget(Widget):
    pass

class TheLapApp(App):
    pass

TheLapApp().run()