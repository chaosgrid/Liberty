#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_534ff0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x534ff0, internal_534ff0, public_534ff0);
/* CHUNK of public_535010 */
extern "C" NAKED register_t __cdecl internal_534ff0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x534ff0)
    }
}
