#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d317a4);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf08);

PROC_DECLARE(0x6d317a4, internal_6d317a4, public_6d317a4);
extern "C" NAKED register_t __cdecl internal_6d317a4()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi]
        pop ecx
        push 1
        add eax, 0x84
        push eax
        call public_6d5cf08
        UNREACHABLE_TRAP(0x6d317a4)
    }
}
