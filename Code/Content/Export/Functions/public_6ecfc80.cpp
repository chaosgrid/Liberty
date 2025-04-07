#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfc80);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);

PROC_DECLARE(0x6ecfc80, internal_6ecfc80, public_6ecfc80);
extern "C" NAKED register_t __cdecl internal_6ecfc80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push eax
        push esi
        call public_6f20e00
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ecfc80)
    }
}
