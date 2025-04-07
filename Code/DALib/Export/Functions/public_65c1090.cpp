#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c1090);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a3c);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a42);

PROC_DECLARE(0x65c1090, internal_65c1090, public_65c1090);
/* CHUNK of public_65c2080 */
extern "C" NAKED register_t __cdecl internal_65c1090()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea eax, ds:[esi+4]
        push eax
        mov dword ptr ds : [esi], offset public_65c713c
        call public_65c6a42
        add esi, 0x3C
        push esi
        call public_65c6a3c
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65c1090)
    }
}
