#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f537a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f564d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf708);

#define public_6f56543 _public_6f56543
#define public_6f5657d _public_6f5657d
#define public_6f56586 _public_6f56586
#define public_6f565a0 _public_6f565a0
#define public_6f565dc _public_6f565dc
#define public_6f565e5 _public_6f565e5
#define public_6f56610 _public_6f56610
#define public_6f56657 _public_6f56657
#define public_6f5666e _public_6f5666e
#define public_6f56670 _public_6f56670
#define public_6f56672 _public_6f56672
#define public_6f56674 _public_6f56674

PROC_DECLARE(0x6f564d0, internal_6f564d0, public_6f564d0);
extern "C" NAKED register_t __cdecl internal_6f564d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf708 @0x6f564d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf708
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        mov al, byte ptr ss : [esp+0x34]
        push ebx
        xor ebx, ebx
        push esi
        push edi
        mov byte ptr ss : [esp+0x1C], al
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
/*FIXUP push offset public_6fbb9b8 @0x6f56501*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb9b8
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fd0d2c
        mov dword ptr ss : [esp+0x3C], ebx
        call public_6f7b0f0
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fd0d2c
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [public_6fd0d30]
        je public_6f56586
        mov esi, dword ptr ds : [eax+0x14]
        lea edi, ds:[eax+0x18]
        cmp esi, dword ptr ds : [edi]
        je public_6f56586
        public_6f56543 : nop
        fld dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 0x41
        jp public_6f5657d
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_6f5657d
        fld dword ptr ds : [esi+0x14]
        mov edx, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x14]
        push ecx
        fstp dword ptr ss : [esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1C], esi
        call public_6f537a0
        public_6f5657d : nop
        mov eax, dword ptr ds : [edi]
        add esi, 0x18
        cmp esi, eax
        jne public_6f56543
        public_6f56586 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd0d30]
        je public_6f565e5
        mov esi, dword ptr ds : [eax+0x14]
        lea edi, ds:[eax+0x18]
        cmp esi, dword ptr ds : [edi]
        je public_6f565e5
        lea esp, ss:[esp]
        public_6f565a0 : nop
        fld dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 0x41
        jp public_6f565dc
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_6f565dc
        mov ecx, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x14]
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ecx
        fstp dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], esi
        call public_6f96770
        public_6f565dc : nop
        mov eax, dword ptr ds : [edi]
        add esi, 0x18
        cmp esi, eax
        jne public_6f565a0
        public_6f565e5 : nop
        mov edx, dword ptr ss : [esp+0x20]
        cmp edx, ebx
        je public_6f56674
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, ecx
        sub eax, edx
        sar eax, 3
        cmp eax, ebx
        je public_6f56674
        cmp edx, ecx
        fld dword ptr ds : [public_6fb444c]
        mov esi, ecx
        mov eax, edx
        je public_6f56670
        mov edi, edi
        public_6f56610 : nop
        fadd dword ptr ds : [eax+4]
        add eax, 8
        cmp eax, ecx
        jne public_6f56610
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f56672
        call dword ptr ds : [public_6fb3370]
        mov edx, dword ptr ss : [esp+0x20]
        cmp edx, esi
        mov dword ptr ss : [esp+0x40], eax
        fild dword ptr ss : [esp+0x40]
        mov ecx, edx
        fmul dword ptr ds : [public_6fb4448]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [public_6fb444c]
        je public_6f5666e
        public_6f56657 : nop
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x40]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6f56670
        add ecx, 8
        cmp ecx, esi
        jne public_6f56657
        public_6f5666e : nop
        mov ecx, esi
        public_6f56670 : nop
        fstp st(0)
        public_6f56672 : nop
        mov ebx, dword ptr ds : [ecx]
        public_6f56674 : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x6f564d0)
    }
}

#undef public_6f56543
#undef public_6f5657d
#undef public_6f56586
#undef public_6f565a0
#undef public_6f565dc
#undef public_6f565e5
#undef public_6f56610
#undef public_6f56657
#undef public_6f5666e
#undef public_6f56670
#undef public_6f56672
#undef public_6f56674
