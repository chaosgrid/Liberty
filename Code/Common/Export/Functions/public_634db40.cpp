#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634da50);
CLANG_FORWARD_PROC_SYMBOL(public_634db30);
CLANG_FORWARD_PROC_SYMBOL(public_634db40);

PROC_DECLARE(0x634db40, internal_634db40, public_634db40);
/* CHUNK of public_634da40 */
extern "C" NAKED register_t __cdecl internal_634db40()
{
    __asm
    {
        push esi
        mov esi, ecx
        push 0x3C23D70A
        call public_634da50
        push 0x3F800000
        mov ecx, esi
        call public_634db30
        mov dword ptr ds : [esi+0x12C], 0x3E8
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x634db40)
    }
}
