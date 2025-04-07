#include "x86math-PCH.h"

PROC_DECLARE(0x6f72740, internal_6f72740, public_6f72740);
extern "C" NAKED register_t __cdecl internal_6f72740()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x38]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fsubp 
        fstp dword ptr ds : [edx]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+8]
        fsubp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+0xC]
        fsubp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fld st(1)
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [ecx+0xC]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp]
        fld st(0)
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp]
        fadd st, st(1)
        fxch 
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x20]
        fadd st, st(2)
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x1C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ss : [esp+4]
        add edx, 4
        fstp dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        xor eax, eax
        add esp, 0x30
        ret 0x10
        UNREACHABLE_TRAP(0x6f72740)
    }
}
