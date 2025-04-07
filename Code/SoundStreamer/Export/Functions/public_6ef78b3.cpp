#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef78b3);

PROC_DECLARE(0x6ef78b3, internal_6ef78b3, public_6ef78b3);
extern "C" NAKED register_t __cdecl internal_6ef78b3()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add dword ptr ds : [eax], 4
        mov eax, dword ptr ds : [eax]
        mov ax, word ptr ds : [eax-4]
        ret 
        UNREACHABLE_TRAP(0x6ef78b3)
    }
}
