#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632fee0);

#define public_632ffe6 _public_632ffe6

PROC_DECLARE(0x632fee0, internal_632fee0, public_632fee0);
extern "C" NAKED register_t __cdecl internal_632fee0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edx]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 0x41
        jne public_632ffe6
        fld dword ptr ds : [edx+0xC]
        mov eax, ecx
        fadd dword ptr ds : [public_639d20c]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fld st(1)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edx+8]
        mov edx, dword ptr ss : [esp]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], edx
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fld st(2)
        mov al, 1
        fmul st, st(3)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fst dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fst dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+8]
        fst dword ptr ds : [ecx+8]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [ecx+0xC]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        add esp, 0x18
        ret 8
        public_632ffe6 : nop
        xor al, al
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x632fee0)
    }
}

#undef public_632ffe6
