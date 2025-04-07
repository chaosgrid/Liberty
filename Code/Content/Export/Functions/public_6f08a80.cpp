#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f08a80);

#define public_6f08ac2 _public_6f08ac2
#define public_6f08b8c _public_6f08b8c
#define public_6f08c2d _public_6f08c2d
#define public_6f08c3d _public_6f08c3d
#define public_6f08c46 _public_6f08c46
#define public_6f08c4b _public_6f08c4b
#define public_6f08c4e _public_6f08c4e

PROC_DECLARE(0x6f08a80, internal_6f08a80, public_6f08a80);
extern "C" NAKED register_t __cdecl internal_6f08a80()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x188]
        xor bl, bl
        test eax, eax
        je public_6f08c3d
        mov edx, dword ptr ds : [edi+0x168]
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3664]
        mov eax, dword ptr ds : [edi+0x184]
        mov esi, dword ptr ds : [eax]
        add esp, 0xC
        cmp esi, eax
        je public_6f08c3d
        public_6f08ac2 : nop
        cmp esi, dword ptr ds : [eax]
        je public_6f08b8c
        fld dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ds : [public_6fb810c]
        fmul dword ptr ds : [public_6fb810c]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6f08b8c
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x3C]
        push eax
        call public_6eb70f0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x14]
        sub esp, 0xC
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fcomp dword ptr ds : [public_6fb844c]
        fnstsw ax
        test ah, 1
        je public_6f08c46
        public_6f08b8c : nop
        fld dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ds : [public_6fb810c]
        fmul dword ptr ds : [public_6fb810c]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6f08c2d
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        call public_6eb70f0
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x14]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6fb844c]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        je public_6f08c4b
        public_6f08c2d : nop
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+0x184]
        cmp esi, eax
        jne public_6f08ac2
        public_6f08c3d : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x6C
        ret 
        public_6f08c46 : nop
        add esi, 0xC
        jmp public_6f08c4e
        public_6f08c4b : nop
        add esi, 0x18
        public_6f08c4e : nop
        mov edx, dword ptr ds : [esi]
        add edi, 0x18C
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x6f08a80)
    }
}

#undef public_6f08ac2
#undef public_6f08b8c
#undef public_6f08c2d
#undef public_6f08c3d
#undef public_6f08c46
#undef public_6f08c4b
#undef public_6f08c4e
