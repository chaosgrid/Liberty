#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f8298c);

PROC_DECLARE(0x6f82690, internal_6f82690, public_6f82690);
extern "C" NAKED register_t __cdecl internal_6f82690()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+4]
        push edi
        fmul dword ptr ds : [public_6f830e0]
        call public_6f8298c
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_6f830e0]
        mov edi, eax
        and edi, 0xFF
        call public_6f8298c
        fld dword ptr ds : [esi+8]
        or eax, 0xFFFFFF00
        shl eax, 8
        fmul dword ptr ds : [public_6f830e0]
        or edi, eax
        shl edi, 8
        call public_6f8298c
        and eax, 0xFF
        or edi, eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x28], edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f82690)
    }
}
