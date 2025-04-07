#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef78a3);

PROC_DECLARE(0x6ef78a3, internal_6ef78a3, public_6ef78a3);
extern "C" NAKED register_t __cdecl internal_6ef78a3()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add dword ptr ds : [eax], 8
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx-8]
        mov edx, dword ptr ds : [ecx-4]
        ret 
        UNREACHABLE_TRAP(0x6ef78a3)
    }
}
