#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633d040);

PROC_DECLARE(0x633d040, internal_633d040, public_633d040);
extern "C" NAKED register_t __cdecl internal_633d040()
{
    __asm
    {
        sub esp, 0x24
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx]
        fsubp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax]
        fadd st(0), st
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx]
        faddp 
        fadd st(0), st
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fld st(1)
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax]
        fld st(0)
        fmulp 
        fadd st(0), st
        fsub dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ss : [esp]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp]
        fadd st, st(1)
        fxch 
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        mov ecx, dword ptr ss : [esp]
        fsub st, st(2)
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        fsub st, st(1)
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fstp st(0)
        mov dword ptr ds : [eax+8], ecx
        fstp st(0)
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x633d040)
    }
}
