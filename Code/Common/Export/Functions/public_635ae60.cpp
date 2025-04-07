#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635ae60);

PROC_DECLARE(0x635ae60, internal_635ae60, public_635ae60);
extern "C" NAKED register_t __cdecl internal_635ae60()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        add eax, 0x1C
        and ecx, 0xFFFF
        shl ecx, 4
        fld dword ptr ds : [ecx+edx]
        add ecx, edx
        fld dword ptr ds : [eax]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+0x20]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+4]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0x14]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+0x24]
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        fld dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+8]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+0x18]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [eax+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x28]
        fmul st, st(1)
        faddp st(2), st
        fxch 
        fadd dword ptr ds : [eax+0x38]
        mov eax, dword ptr ds : [ecx+8]
        fxch 
        fstp st(0)
        add eax, 0x1C
        fld dword ptr ss : [esp]
        fsub dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+4]
        fsub dword ptr ds : [eax+0x34]
        fstp dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [eax+0x38]
        fld dword ptr ds : [eax+0x20]
        fmul st, st(1)
        fld dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [eax+0x24]
        fmul st, st(1)
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x28]
        fmul st, st(1)
        fld dword ptr ds : [eax+0x18]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ds : [eax+8]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fstp dword ptr ds : [ecx+8]
        fstp st(0)
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x635ae60)
    }
}
