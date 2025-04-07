#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6342c40);
CLANG_FORWARD_PROC_SYMBOL(public_6343020);

PROC_DECLARE(0x6343020, internal_6343020, public_6343020);
extern "C" NAKED register_t __cdecl internal_6343020()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6342c40
        mov eax, 0x41200000
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x28], 0x3FC90FDB
        mov dword ptr ds : [esi+0x30], 0x60AD78EC
        mov dword ptr ds : [esi+0x34], 0x40A00000
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6343020)
    }
}
