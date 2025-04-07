#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45c20);

PROC_DECLARE(0x6d5f3e0, internal_6d5f3e0, public_6d5f3e0);
extern "C" NAKED register_t __cdecl internal_6d5f3e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        call dword ptr ds : [public_6d648e0]
        push esi
        mov edi, eax
        call public_6d45c20
        add esp, 8
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f3e0)
    }
}
