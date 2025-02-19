import websockets 
import json
import asyncio

socket = f'wss://stream.binance.com:9443/ws/btcusdt@avgPrice'

async def binance_ws():

    async with websockets.connect(socket) as ws:
        while True:
            data = await ws.recv()
            data_json =json.loads(data)
            print(f'Order book update : {data_json}')

asyncio.run(binance_ws())


