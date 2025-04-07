#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635af70);

PROC_DECLARE(0x635af70, internal_635af70, public_635af70);
extern "C" NAKED register_t __cdecl internal_635af70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x24]
        add eax, 0x1C
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ds : [eax+0x18]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ds : [eax+0x28]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+0x24]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx+8]
        faddp 
        mov edx, dword ptr ds : [eax+0x24]
        fld dword ptr ds : [eax+0x20]
        add eax, 0x1C
        fld dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        fld dword ptr ds : [eax+0x24]
        mov dword ptr ss : [esp+0xC], edx
        fld dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x28]
        fmul st, st(4)
        fld dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+8], edx
        fmul st, st(6)
        mov dword ptr ss : [esp+4], ecx
        faddp 
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        fmul st, st(7)
        faddp 
        fstp dword ptr ds : [eax]
        fld st(3)
        fmul st, st(1)
        fxch st(2)
        fmul st, st(5)
        faddp st(2), st
        fxch st(2)
        fmul st, st(5)
        faddp 
        fstp dword ptr ds : [eax+4]
        fstp st(0)
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+4]
        fmul st, st(2)
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul st, st(3)
        faddp 
        fstp dword ptr ds : [eax+8]
        fstp st(0)
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x635af70)
    }
}
