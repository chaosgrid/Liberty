#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71af0);

#define public_6f72009 _public_6f72009
#define public_6f72093 _public_6f72093
#define public_6f720f8 _public_6f720f8
#define public_6f7210b _public_6f7210b
#define public_6f72142 _public_6f72142

PROC_DECLARE(0x6f71fb0, internal_6f71fb0, public_6f71fb0);
extern "C" NAKED register_t __cdecl internal_6f71fb0()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [esi+0x24]
        fcomp dword ptr ds : [public_6f730fc]
        fnstsw ax
        test ah, 0x44
        jp public_6f72009
        fld dword ptr ds : [esi+0x28]
        fcomp dword ptr ds : [public_6f730fc]
        fnstsw ax
        test ah, 0x44
        jp public_6f72009
        fld dword ptr ds : [esi+0x2C]
        fcomp dword ptr ds : [public_6f730fc]
        fnstsw ax
        test ah, 0x44
        jp public_6f72009
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x44]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x44]
        pop esi
        add esp, 0x3C
        ret 0x14
        public_6f72009 : nop
        fld dword ptr ds : [esi]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+8]
        push ebp
        push edi
        fstp dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0xC]
        call public_6f71af0
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x20]
        call public_6f71af0
        fld dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x20]
        fstp dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x34]
        call public_6f71af0
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x1C]
        add ecx, eax
        mov eax, dword ptr ss : [esp+0x5C]
        add ecx, edx
        cmp ecx, 4
        jge public_6f720f8
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ss : [esp+0x58]
        lea edx, ds:[eax+edx*4]
        cmp eax, edx
        jae public_6f72142
        mov ecx, dword ptr ss : [esp+0x50]
        public_6f72093 : nop
        fld dword ptr ds : [eax]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld st(2)
        fmul dword ptr ds : [esi]
        fld st(1)
        fmul dword ptr ds : [esi+8]
        add eax, 0xC
        add ecx, 0xC
        faddp 
        fld st(2)
        fmul dword ptr ds : [esi+4]
        cmp eax, edx
        faddp 
        fadd dword ptr ds : [esi+0x24]
        fstp dword ptr ds : [ecx-0xC]
        fld st(0)
        fmul dword ptr ds : [esi+0x14]
        fld st(2)
        fmul dword ptr ds : [esi+0x10]
        faddp 
        fld st(3)
        fmul dword ptr ds : [esi+0xC]
        faddp 
        fadd dword ptr ds : [esi+0x28]
        fstp dword ptr ds : [ecx-8]
        fmul dword ptr ds : [esi+0x20]
        fxch 
        fmul dword ptr ds : [esi+0x1C]
        faddp 
        fxch 
        fmul dword ptr ds : [esi+0x18]
        faddp 
        fadd dword ptr ds : [esi+0x2C]
        fstp dword ptr ds : [ecx-4]
        jb public_6f72093
        pop edi
        pop ebp
        xor eax, eax
        pop esi
        add esp, 0x3C
        ret 0x14
        public_6f720f8 : nop
        mov edi, dword ptr ss : [esp+0x58]
        lea eax, ds:[eax+eax*2]
        lea ebp, ds:[edi+eax*4]
        cmp edi, ebp
        jae public_6f72142
        push ebx
        mov ebx, dword ptr ss : [esp+0x54]
        public_6f7210b : nop
        push edi
        lea ecx, ss:[esp+0x14]
        call dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0x24]
        push edi
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ds : [ebx]
        call dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+0x28]
        push edi
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ds : [ebx+4]
        call dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [esi+0x2C]
        add edi, 0xC
        add ebx, 0xC
        cmp edi, ebp
        fstp dword ptr ds : [ebx-4]
        jb public_6f7210b
        pop ebx
        public_6f72142 : nop
        pop edi
        pop ebp
        xor eax, eax
        pop esi
        add esp, 0x3C
        ret 0x14
        UNREACHABLE_TRAP(0x6f71fb0)
    }
}

#undef public_6f72009
#undef public_6f72093
#undef public_6f720f8
#undef public_6f7210b
#undef public_6f72142
