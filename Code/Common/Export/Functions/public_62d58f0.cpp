#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d58f0);

PROC_DECLARE(0x62d58f0, internal_62d58f0, public_62d58f0);
extern "C" NAKED register_t __cdecl internal_62d58f0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        lea eax, ds:[ecx+0x28]
        fstp dword ptr ss : [esp+0x14]
        fxch 
        mov dword ptr ds : [ecx+0x48], 3
        fchs 
        mov ecx, eax
        fstp dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp]
        fchs 
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        fchs 
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
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
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62d58f0)
    }
}
