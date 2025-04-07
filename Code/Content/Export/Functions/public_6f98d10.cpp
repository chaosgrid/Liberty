#include "Content-PCH.h"

PROC_DECLARE(0x6f98d10, internal_6f98d10, public_6f98d10);
extern "C" NAKED register_t __cdecl internal_6f98d10()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+4]
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+8]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f98d10)
    }
}
