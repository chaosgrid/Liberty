#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220a20);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

PROC_DECLARE(0x6220a20, internal_6220a20, public_6220a20);
/* CHUNK of public_6220310 */
extern "C" NAKED register_t __cdecl internal_6220a20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_62460e0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6220a20)
    }
}
