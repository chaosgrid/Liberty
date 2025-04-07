#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7896);

PROC_DECLARE(0x6ef7896, internal_6ef7896, public_6ef7896);
extern "C" NAKED register_t __cdecl internal_6ef7896()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add dword ptr ds : [eax], 4
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax-4]
        ret 
        UNREACHABLE_TRAP(0x6ef7896)
    }
}
