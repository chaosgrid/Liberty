#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_422c70);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_422c8e _public_422c8e
#define public_422d18 _public_422d18
#define public_422d7b _public_422d7b
#define public_422e29 _public_422e29

PROC_DECLARE(0x422c70, internal_422c70, public_422c70);
extern "C" NAKED register_t __cdecl internal_422c70()
{
    __asm
    {
        sub esp, 0x34
        mov eax, dword ptr ds : [public_6649c0]
        test eax, eax
        mov dword ptr ss : [esp], 0x3F800000
        jne public_422c8e
        call public_5b73e0
        mov dword ptr ds : [public_6649c0], eax
        public_422c8e : nop
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x40]
        fsub dword ptr ds : [esi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_422d18
        mov ecx, dword ptr ss : [esp+0x50]
        fstp st(0)
        mov edx, dword ptr ds : [esi]
        fld dword ptr ss : [esp+8]
        mov eax, ecx
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [esi+8]
        jmp public_422d7b
        public_422d18 : nop
        fld st(0)
        fmul dword ptr ds : [ecx]
        fld st(1)
        fmul dword ptr ds : [ecx+4]
        fld st(2)
        fmul dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x50]
        mov eax, ecx
        fstp dword ptr ss : [esp+0x38]
        fxch 
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fdivp 
        public_422d7b : nop
        mov dword ptr ds : [eax+8], edx
        fld dword ptr ds : [ecx]
        fsub dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ss : [esp+0x20]
        fst dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fld dword ptr ss : [esp+0x4C]
        fdiv st, st(1)
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x10]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x18]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fstp st(0)
        mov dword ptr ds : [eax], edx
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+4], esi
        fstp dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+8], edi
        fnstsw ax
        test ah, 5
        jp public_422e29
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], edi
        public_422e29 : nop
        pop edi
        pop esi
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x422c70)
    }
}

#undef public_422c8e
#undef public_422d18
#undef public_422d7b
#undef public_422e29
