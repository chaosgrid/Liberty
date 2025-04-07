#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd43b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

PROC_DECLARE(0x6bd43b0, internal_6bd43b0, public_6bd43b0);
/* CHUNK of public_6bd1260 */
extern "C" NAKED register_t __cdecl internal_6bd43b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6c09aaa
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bd43b0)
    }
}
