#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_571f50);
CLANG_FORWARD_PROC_SYMBOL(public_579890);

PROC_DECLARE(0x571f50, internal_571f50, public_571f50);
extern "C" NAKED register_t __cdecl internal_571f50()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC4]
        push edi
        call public_579890
        mov ecx, dword ptr ds : [esi+0xB8]
        push edi
        call public_579890
        mov ecx, dword ptr ds : [esi+0xBC]
        push edi
        call public_579890
        mov ecx, dword ptr ds : [esi+0xC0]
        push edi
        call public_579890
        mov ecx, dword ptr ds : [esi+0xD0]
        push edi
        call public_579890
        mov ecx, dword ptr ds : [esi+0xE8]
        push 0
        call public_579890
        mov ecx, dword ptr ds : [esi+0xD4]
        push edi
        call public_579890
        mov ecx, dword ptr ds : [esi+0xCC]
        push edi
        call public_579890
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x571f50)
    }
}
