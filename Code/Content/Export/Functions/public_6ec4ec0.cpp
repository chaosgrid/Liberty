#include "Content-PCH.h"

PROC_DECLARE(0x6ec4ec0, internal_6ec4ec0, public_6ec4ec0);
extern "C" NAKED register_t __cdecl internal_6ec4ec0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], eax
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+0x10]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec4ec0)
    }
}
