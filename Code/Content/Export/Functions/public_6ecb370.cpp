#include "Content-PCH.h"

PROC_DECLARE(0x6ecb370, internal_6ecb370, public_6ecb370);
extern "C" NAKED register_t __cdecl internal_6ecb370()
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
        fstp dword ptr ds : [esi+0xC]
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+0x10]
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+0x14]
        push 3
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0xC]
        push 3
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ss : [esp+0xC]
        pop edi
        fstp dword ptr ds : [esi+0x18]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecb370)
    }
}
