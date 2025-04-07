#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6eb7230, internal_6eb7230, public_6eb7230);
extern "C" NAKED register_t __cdecl internal_6eb7230()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fb464c
        mov eax, dword ptr ds : [esi+0x10C]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x10C], eax
        mov dword ptr ds : [esi+0x110], eax
        mov dword ptr ds : [esi+0x114], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb7230)
    }
}
