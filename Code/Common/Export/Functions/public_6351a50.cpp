#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6351a50);

#define public_6351b55 _public_6351b55
#define public_6351b72 _public_6351b72

PROC_DECLARE(0x6351a50, internal_6351a50, public_6351a50);
extern "C" NAKED register_t __cdecl internal_6351a50()
{
    __asm
    {
        sub esp, 0x10
        mov edx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edx+8]
        fld dword ptr ds : [edx+4]
        fld dword ptr ds : [edx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_6351b55
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        fsqrt 
        fdivr dword ptr ds : [public_63a53d0]
        fld st(0)
        fmul dword ptr ss : [esp+0x14]
        fld st(0)
        fmul st, st(1)
        fld st(0)
        fmul st, st(2)
        fld st(0)
        fmul st, st(2)
        fmul dword ptr ds : [public_63a5644]
        fxch 
        fmul dword ptr ds : [public_63a5624]
        faddp 
        faddp st(2), st
        fstp st(0)
        fmul dword ptr ds : [eax+0x70]
        fadd st(0), st
        fstp dword ptr ds : [eax+0x148]
        mov eax, dword ptr ds : [ecx]
        fld dword ptr ds : [eax+0xFC]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [eax+0xF8]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ds : [eax+0xF4]
        fmul dword ptr ds : [edx]
        faddp 
        fld dword ptr ds : [eax+0x104]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [eax+0x10C]
        fmul dword ptr ds : [edx+8]
        faddp 
        fld dword ptr ds : [eax+0x108]
        fmul dword ptr ds : [edx+4]
        faddp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x114]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [eax+0x11C]
        fmul dword ptr ds : [edx+8]
        faddp 
        fld dword ptr ds : [eax+0x118]
        fmul dword ptr ds : [edx+4]
        faddp 
        fstp dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x134]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x138]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x13C]
        fstp st(0)
        jmp public_6351b72
        public_6351b55 : nop
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        mov dword ptr ds : [eax+0x148], edx
        mov eax, dword ptr ds : [ecx]
        add eax, 0x134
        mov dword ptr ds : [eax], 0x3F800000
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        public_6351b72 : nop
        mov ecx, dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+0x148]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+0x14C]
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6351a50)
    }
}

#undef public_6351b55
#undef public_6351b72
