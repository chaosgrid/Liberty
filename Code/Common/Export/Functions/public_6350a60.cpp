#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350a60);
CLANG_FORWARD_PROC_SYMBOL(public_6391fce);

PROC_DECLARE(0x6350a60, internal_6350a60, public_6350a60);
extern "C" NAKED register_t __cdecl internal_6350a60()
{
    __asm
    {
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi]
        push edi
        call public_6391fce
        mov edi, dword ptr ss : [esp+0xC]
        fadd st(0), st
        fstp dword ptr ds : [edi]
        fld dword ptr ds : [esi+4]
        call public_6391fce
        fadd st(0), st
        fstp dword ptr ds : [edi+4]
        fld dword ptr ds : [esi+8]
        call public_6391fce
        fadd st(0), st
        fstp dword ptr ds : [edi+8]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6350a60)
    }
}
