#include "Common-PCH.h"


#define public_62acedf _public_62acedf
#define public_62acee8 _public_62acee8

PROC_DECLARE(0x62ace20, internal_62ace20, public_62ace20);
extern "C" NAKED register_t __cdecl internal_62ace20()
{
    __asm
    {
        sub esp, 0x18
        fld dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [ecx+0x28]
        push ebx
        fstp dword ptr ss : [esp+0xC]
        fxch 
        xor bl, bl
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fchs 
        fld dword ptr ss : [esp+0xC]
        fchs 
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+0x34]
        fst dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ds : [edx+0x98]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62acee8
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fld dword ptr ss : [esp+8]
        fmul st, st(2)
        fld dword ptr ss : [esp+0xC]
        fmul st, st(3)
        fmul st, st(4)
        fxch 
        fmul st, st(5)
        faddp 
        fxch 
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fcomp dword ptr ds : [edx+0x9C]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        jne public_62acedf
        mov al, 1
        pop ebx
        add esp, 0x18
        ret 4
        public_62acedf : nop
        xor al, al
        pop ebx
        add esp, 0x18
        ret 4
        public_62acee8 : nop
        fstp st(0)
        mov al, bl
        fstp st(0)
        pop ebx
        fstp st(0)
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62ace20)
    }
}

#undef public_62acedf
#undef public_62acee8
