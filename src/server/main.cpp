//
// Created by ezra on 12/28/2025.
//
#include <Windows.Graphics.Capture.Interop.h>


int main() {


    IGraphicsCaptureItemInterop *graphicsCaptureItemInterop;
    ABI::Windows::Graphics::Capture::GraphicsCaptureItem* captureItem;
    graphicsCaptureItemInterop->CreateForWindow();
    return 0;
}