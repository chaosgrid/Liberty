#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51b2f0);
CLANG_FORWARD_PROC_SYMBOL(public_51ea20);

PROC_DECLARE(0x51ea20, internal_51ea20, public_51ea20);
extern "C" NAKED register_t __cdecl internal_51ea20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_51b2f0
        xor eax, eax
        mov byte ptr ds : [esi+0xF8], al
        mov dword ptr ds : [esi+0xFC], eax
        mov dword ptr ds : [esi+0x100], eax
        mov dword ptr ds : [esi], offset public_5dc2d4
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x51ea20)
    }
}
