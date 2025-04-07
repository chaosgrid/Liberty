#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63480a0);

PROC_DECLARE(0x63480a0, internal_63480a0, public_63480a0);
extern "C" NAKED register_t __cdecl internal_63480a0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax]
        fsub st, st(3)
        fld dword ptr ds : [eax+4]
        fsub st, st(3)
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x10]
        fsub st, st(3)
        fld dword ptr ds : [eax]
        fsub st, st(6)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+4]
        fsub st, st(5)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        fsub st, st(4)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+8]
        fmul st, st(3)
        fsubp 
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp]
        fmul st, st(3)
        mov dword ptr ds : [ecx], eax
        fld dword ptr ss : [esp+0xC]
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        fstp st(0)
        mov dword ptr ds : [ecx+4], edx
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x10]
        fmul st, st(3)
        fsubp 
        fstp st(2)
        fstp st(0)
        fst dword ptr ds : [ecx+8]
        fmul st, st(1)
        fld dword ptr ss : [esp+8]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp]
        fmul st, st(4)
        faddp 
        fchs 
        fstp dword ptr ds : [ecx+0xC]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x63480a0)
    }
}
