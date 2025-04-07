#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4023c0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

PROC_DECLARE(0x4023c0, internal_4023c0, public_4023c0);
/* CHUNK of public_401440 */
extern "C" NAKED register_t __cdecl internal_4023c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_418978
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4023c0)
    }
}
