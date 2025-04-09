#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d980);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x43d980, internal_43d980, public_43d980);
/* CHUNK of public_43d6e0 */
extern "C" NAKED register_t __cdecl internal_43d980()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x43d980)
    }
}
