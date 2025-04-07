#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51ad30);
CLANG_FORWARD_PROC_SYMBOL(public_51ca80);

PROC_DECLARE(0x51ad30, internal_51ad30, public_51ad30);
extern "C" NAKED register_t __cdecl internal_51ad30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_51ca80
        mov dword ptr ds : [esi+0x100], 0
        mov dword ptr ds : [esi+0x104], 0x40A00000
        mov dword ptr ds : [esi+0x108], 0x41A00000
        mov dword ptr ds : [esi], offset public_5dbe24
        mov dword ptr ds : [esi+0xF8], offset public_5dbe18
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x51ad30)
    }
}
