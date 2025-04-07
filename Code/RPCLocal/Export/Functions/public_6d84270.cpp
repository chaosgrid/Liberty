#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84270);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

PROC_DECLARE(0x6d84270, internal_6d84270, public_6d84270);
/* CHUNK of public_6d81170 */
extern "C" NAKED register_t __cdecl internal_6d84270()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6db1dc2
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d84270)
    }
}
