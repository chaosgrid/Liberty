#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x6269110, internal_6269110, public_6269110);
extern "C" NAKED register_t __cdecl internal_6269110()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6269110)
    }
}
