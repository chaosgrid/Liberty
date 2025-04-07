#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f25230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f25230, internal_6f25230, public_6f25230);
extern "C" NAKED register_t __cdecl internal_6f25230()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x114]
        push eax
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ds : [esi+0x114], eax
        mov dword ptr ds : [esi+0x118], eax
        mov dword ptr ds : [esi+0x11C], eax
        add esp, 4
        mov dword ptr ds : [esi], offset public_6fb43f8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f25230)
    }
}
