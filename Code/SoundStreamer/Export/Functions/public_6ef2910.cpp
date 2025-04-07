#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2910);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4a15);

PROC_DECLARE(0x6ef2910, internal_6ef2910, public_6ef2910);
extern "C" NAKED register_t __cdecl internal_6ef2910()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        push 0x2000
        push esi
        call public_6ef4a15
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef2910)
    }
}
