#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428850);
CLANG_FORWARD_PROC_SYMBOL(public_429040);

PROC_DECLARE(0x428850, internal_428850, public_428850);
extern "C" NAKED register_t __cdecl internal_428850()
{
    __asm
    {
        push esi
        push 0
        mov esi, ecx
        call public_429040
        mov dword ptr ds : [esi+0x30], 0
        mov dword ptr ds : [esi+0x34], 0
        mov dword ptr ds : [esi+0x38], 0xBF800000
        mov byte ptr ds : [esi+0x3C], 0
        mov dword ptr ds : [esi], offset public_5ca05c
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x428850)
    }
}
