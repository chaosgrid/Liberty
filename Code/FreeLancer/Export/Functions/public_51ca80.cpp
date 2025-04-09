#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51b2f0);
CLANG_FORWARD_PROC_SYMBOL(public_51ca80);

PROC_DECLARE(0x51ca80, internal_51ca80, public_51ca80);
extern "C" NAKED register_t __cdecl internal_51ca80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_51b2f0
        mov dword ptr ds : [esi+0xF8], offset public_5cbed8
        mov byte ptr ds : [esi+0xFC], 0
        mov byte ptr ds : [esi+0xFE], 1
        mov dword ptr ds : [esi], offset public_5dc08c
        mov dword ptr ds : [esi+0xF8], offset public_5dc084
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x51ca80)
    }
}
