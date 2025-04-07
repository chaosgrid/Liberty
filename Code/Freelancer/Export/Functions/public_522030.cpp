#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_522030);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x522030, internal_522030, public_522030);
extern "C" NAKED register_t __cdecl internal_522030()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        call public_5b7e1d
        add esp, 8
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x522030)
    }
}
