# Artificial Ocean
interactive sound installation, 2021

Artist: Cristina Bodnarescu

Electronics Engineer: Valentin Bodnarescu

interactive sound installation using 7 IR sensors connected to an Arduino board, triggering sounds in MaxMsp.

# Link to demonstration
https://youtu.be/6qdcdp5Rjh8

# Concept
'Artificial Ocean' is a meditation on our place in the Anthropocene and the effects of that toxic positioning upon life itself. 
The plastic apparatus is a metaphor of the ocean, highlighting the massive change nature is undergoing, because of our self-centered behavior as a species. 

When there is no sensor interaction, the pure sound of the ocean is heard, but as soon as the sensors are triggered, so are disturbing sounds, covering the pleasant noise of the waves. The sensor interactivity only helps the user understand the powerful impact of our traces here on Earth.

Each sensor activates a sound that is both disturbing and disturbs the soundscape of the ocean: boat engines invading the water, whales crying, sea gulls clogged in litter, plastic floating adrift, carried away by the waves, slowly decomposing and polluting an entire ecosystem. The message is simple: people trigger/provoke pollution of any kind.

Sound is vital when talking about marine life. It is the sensory cue that travels the farthest through water. It is used to communicate, to interpret and explore the environment. But now, ocean soundscapes are changing incredibly fast because of massive increases in anthropogenic noise. Be it water littering, air or noise pollution, we are responsible for all the decay taking over life itself.

# Requirements
sensors, arduino board, laptop, Arduino IDE, MaxMsp 8, speakers 

# How to use

Arduino:
1. plug in arduino board into a COM port.
2. set the COM port in Arduino project (Citiresenzori.ino)
3. verify and upload the code to Arduino board
4. close Arduino and open MaxMsp sketch (ARTIFICIAL OCEAN - CRISTINA BODNARESCU - INTERACTIVE INSTALLATION PATCH MAX.maxpat)

MaxMsp
1. in the 'Read Sensor Input From Arduino' section activate the toggle button [X] to start receiving data from the sensors. 
2. in the 'Ocean Waves Noise Generator' section activate the toggle button [X] to start the metronome, which will make the ocean noise play in a loop
3. in the playlist section activate the toggle button [X] which will make all playlists play in loop. Set the gain volume for each playlist from the multislider in the right side. Check if there are sounds in the playlist, otherwise drag and drop each of them (dist01, dist02,...,dist07) in the playlist object.
4. activate speakers and add a gain to the reverb. 
5. start interacting with the sensors.

# Statement of originality
All the work is created by Cristina Bodnarescu, except for 'Ocean Wave Noise Generator' algorithm inside the Max patch. 
Author: Tristan Louth-Robins
Link: https://youtu.be/mqAIYQMm4DM
