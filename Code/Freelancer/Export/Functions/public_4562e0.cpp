#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f950);
CLANG_FORWARD_PROC_SYMBOL(public_4562e0);

PROC_DECLARE(0x4562e0, internal_4562e0, public_4562e0);
/* CHUNK of public_445280 */
extern "C" NAKED register_t __cdecl internal_4562e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        mov ecx, dword ptr ds : [esi+0xB4]
        shl eax, 6
        mov ecx, dword ptr ds : [eax+ecx]
        call public_44f950
        mov byte ptr ds : [esi+0x2D], 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4562e0)
    }
}
