#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62e8e8e _public_62e8e8e
#define public_62e8e90 _public_62e8e90
#define public_62e8ec4 _public_62e8ec4
#define public_62e8f41 _public_62e8f41
#define public_62e9012 _public_62e9012

PROC_DECLARE(0x62e8e60, internal_62e8e60, public_62e8e60);
extern "C" NAKED register_t __cdecl internal_62e8e60()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x34]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e8e8e
        lea ecx, ds:[eax-8]
        jmp public_62e8e90
        public_62e8e8e : nop
        xor ecx, ecx
        public_62e8e90 : nop
        mov edx, dword ptr ds : [ecx]
        push edi
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ds : [esi]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov edi, eax
        mov eax, dword ptr ds : [public_63fca58]
        test eax, eax
        jne public_62e8ec4
        call public_6391cf0
        mov dword ptr ds : [public_63fca58], eax
        public_62e8ec4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push edi
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+8], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xC], ecx
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        mov dword ptr ss : [esp+0x18], edx
        call public_62e1680
        add esp, 8
        push eax
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call public_62e1680
        add esp, 8
        push eax
        call public_62e1630
        fcomp dword ptr ds : [public_639e6cc]
        add esp, 8
        pop edi
        fnstsw ax
        test ah, 5
        jp public_62e8f41
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        public_62e8f41 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fsqrt 
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62e9012
        fld dword ptr ds : [public_63ec6ac]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_63ec6ac]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_63ec6ac]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x30]
        fxch 
        fmul dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(3)
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x2C]
        fmulp 
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x10], ecx
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x20]
        fadd st, st(1)
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], eax
        public_62e9012 : nop
        lea ecx, ss:[esp+0x10]
        fstp st(0)
        push ecx
        mov ecx, esi
        call public_62e8ce0
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x62e8e60)
    }
}

#undef public_62e8e8e
#undef public_62e8e90
#undef public_62e8ec4
#undef public_62e8f41
#undef public_62e9012
