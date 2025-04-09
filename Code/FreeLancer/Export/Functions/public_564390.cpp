#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57c0e0);

PROC_DECLARE(0x564390, internal_564390, public_564390);
extern "C" NAKED register_t __cdecl internal_564390()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x94]
        push 0
        push edi
        call public_57c0e0
        mov ecx, dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x14]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x564390)
    }
}
