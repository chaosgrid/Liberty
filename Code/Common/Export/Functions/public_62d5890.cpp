#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d5890);

PROC_DECLARE(0x62d5890, internal_62d5890, public_62d5890);
extern "C" NAKED register_t __cdecl internal_62d5890()
{
    __asm
    {
        lea eax, ds:[ecx+0x28]
        mov dword ptr ds : [ecx+0x48], 3
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        pop esi
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
        ret 4
        UNREACHABLE_TRAP(0x62d5890)
    }
}
