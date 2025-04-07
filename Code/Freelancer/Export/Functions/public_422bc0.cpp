#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422bc0);

PROC_DECLARE(0x422bc0, internal_422bc0, public_422bc0);
extern "C" NAKED register_t __cdecl internal_422bc0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ds : [eax]
        mov edx, ecx
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        lea eax, ds:[ecx+0xC]
        fsub dword ptr ds : [ecx+8]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+4], esi
        fstp dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+8], esi
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
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        xor eax, eax
        mov dword ptr ds : [ecx+0x18], 0xBF800000
        mov dword ptr ds : [ecx+0x54], eax
        mov dword ptr ds : [ecx+0x50], 0xFFFFFFFF
        mov dword ptr ds : [ecx+0x58], eax
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x422bc0)
    }
}
