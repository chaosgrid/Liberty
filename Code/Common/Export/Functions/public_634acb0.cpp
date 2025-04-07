#include "Common-PCH.h"

PROC_DECLARE(0x634acb0, internal_634acb0, public_634acb0);
extern "C" NAKED register_t __cdecl internal_634acb0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [edx]
        fld dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], 0
        fsub dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ds : [edx+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld st(0)
        fadd dword ptr ds : [eax+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        and edx, 0xFF
        mov dword ptr ss : [esp], edx
        fild qword ptr ss : [esp]
        fmul dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [public_63a54b4]
        fadd st, st(1)
        fstp dword ptr ds : [eax]
        fstp st(0)
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x634acb0)
    }
}
