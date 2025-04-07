#include "Common-PCH.h"


#define public_62ace0b _public_62ace0b
#define public_62ace11 _public_62ace11

PROC_DECLARE(0x62acd60, internal_62acd60, public_62acd60);
extern "C" NAKED register_t __cdecl internal_62acd60()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        xor dl, dl
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x98]
        fld st(1)
        fadd st, st(3)
        fadd st, st(4)
        fld st(1)
        fmul st, st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62ace11
        fadd st, st(1)
        mov eax, dword ptr ss : [esp+0x18]
        faddp st(2), st
        fxch 
        fsqrt 
        fstp st(1)
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp]
        fmul st, st(1)
        fld dword ptr ss : [esp+4]
        fmul st, st(2)
        fld dword ptr ss : [esp+8]
        fmul st, st(3)
        fmul dword ptr ds : [eax+8]
        fxch 
        fmul dword ptr ds : [eax+4]
        faddp 
        fxch 
        fmul dword ptr ds : [eax]
        faddp 
        fcomp dword ptr ds : [ecx+0x9C]
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_62ace0b
        mov al, 1
        add esp, 0xC
        ret 
        public_62ace0b : nop
        xor al, al
        add esp, 0xC
        ret 
        public_62ace11 : nop
        fstp st(0)
        mov al, dl
        fstp st(0)
        fstp st(0)
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62acd60)
    }
}

#undef public_62ace0b
#undef public_62ace11
