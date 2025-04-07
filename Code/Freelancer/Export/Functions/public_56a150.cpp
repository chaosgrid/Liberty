#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56a150);
CLANG_FORWARD_PROC_SYMBOL(public_579890);

PROC_DECLARE(0x56a150, internal_56a150, public_56a150);
extern "C" NAKED register_t __cdecl internal_56a150()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x2C0]
        push 0
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2C4]
        push 0
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2C8]
        push 0
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2CC]
        push 0
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2D0]
        push 0
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2E4]
        push 0
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2E8]
        push 0
        call public_579890
        pop esi
        ret 
        UNREACHABLE_TRAP(0x56a150)
    }
}
