#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

PROC_DECLARE(0x6f98760, internal_6f98760, public_6f98760);
extern "C" NAKED register_t __cdecl internal_6f98760()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f98760)
    }
}
