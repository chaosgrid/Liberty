#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ca610);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x4ca610, internal_4ca610, public_4ca610);
/* CHUNK of public_4c9a80 */
extern "C" NAKED register_t __cdecl internal_4ca610()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x110]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x110], eax
        mov dword ptr ds : [esi+0x114], eax
        mov dword ptr ds : [esi+0x118], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4ca610)
    }
}
