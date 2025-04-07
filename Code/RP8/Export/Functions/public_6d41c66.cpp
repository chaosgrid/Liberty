#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41c66);
CLANG_FORWARD_PROC_SYMBOL(public_6d46f37);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf5c);

PROC_DECLARE(0x6d41c66, internal_6d41c66, public_6d41c66);
extern "C" NAKED register_t __cdecl internal_6d41c66()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        push esi
        call public_6d46f37
        pop ecx
        pop ecx
        push 1
        call public_6d5cf5c
        UNREACHABLE_TRAP(0x6d41c66)
    }
}
