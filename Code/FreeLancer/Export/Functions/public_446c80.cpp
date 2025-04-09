#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446c80);
CLANG_FORWARD_PROC_SYMBOL(public_5574a0);

PROC_DECLARE(0x446c80, internal_446c80, public_446c80);
extern "C" NAKED register_t __cdecl internal_446c80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5574a0
        xor eax, eax
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x3C], al
        mov dword ptr ds : [esi+0x40], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x446c80)
    }
}
