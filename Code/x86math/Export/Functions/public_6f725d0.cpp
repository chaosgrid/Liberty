#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f72720);

PROC_DECLARE(0x6f725d0, internal_6f725d0, public_6f725d0);
extern "C" NAKED register_t __cdecl internal_6f725d0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi]
        fld st(0)
        fmulp 
        fld dword ptr ds : [esi+0xC]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [esi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x14]
        faddp 
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+4]
        faddp 
        fsubp 
        fld st(0)
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_6f72720
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [esi+4]
        fadd st(0), st
        fld dword ptr ds : [esi+8]
        fadd st(0), st
        fld dword ptr ds : [esi+0xC]
        fadd st(0), st
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0xC]
        fmul dword ptr ds : [edi+8]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [edi+4]
        faddp 
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [edi]
        faddp 
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [eax]
        fst dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [eax]
        fxch 
        fadd dword ptr ds : [eax+4]
        fst dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [eax+4]
        fadd dword ptr ds : [eax+8]
        fst dword ptr ds : [eax+8]
        fld dword ptr ds : [edi+8]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [edi+4]
        fmul dword ptr ds : [esi+0xC]
        fsubp 
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ds : [edi+8]
        fmul dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x2C], ecx
        fsubp 
        fld dword ptr ds : [edi+4]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [esi+8]
        pop edi
        pop esi
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp]
        fadd st(0), st
        fstp dword ptr ss : [esp]
        fxch 
        fadd st(0), st
        fstp dword ptr ss : [esp+4]
        fadd st(0), st
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+4]
        fxch 
        fadd st, st(1)
        fstp dword ptr ds : [eax+8]
        xor eax, eax
        fstp st(0)
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x6f725d0)
    }
}
