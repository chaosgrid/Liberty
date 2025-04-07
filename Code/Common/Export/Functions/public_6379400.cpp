#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6379400);

PROC_DECLARE(0x6379400, internal_6379400, public_6379400);
extern "C" NAKED register_t __cdecl internal_6379400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(5)
        fmul st, st(6)
        faddp 
        fld st(6)
        fmul st, st(7)
        faddp 
        fstp st(6)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6379400)
    }
}
