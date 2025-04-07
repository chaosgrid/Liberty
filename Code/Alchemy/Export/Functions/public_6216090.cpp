#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6206b80);
CLANG_FORWARD_PROC_SYMBOL(public_6206bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_6208690);
CLANG_FORWARD_PROC_SYMBOL(public_6208a70);
CLANG_FORWARD_PROC_SYMBOL(public_6216090);
CLANG_FORWARD_PROC_SYMBOL(public_6217b60);
CLANG_FORWARD_PROC_SYMBOL(public_6217b80);
CLANG_FORWARD_PROC_SYMBOL(public_6217be0);
CLANG_FORWARD_JUMP_SYMBOL(public_62482d0);

#define public_621620b _public_621620b
#define public_621627a _public_621627a
#define public_6216281 _public_6216281
#define public_6216297 _public_6216297
#define public_621632c _public_621632c
#define public_621639b _public_621639b
#define public_62163a2 _public_62163a2
#define public_62163b8 _public_62163b8
#define public_6216409 _public_6216409

PROC_DECLARE(0x6216090, internal_6216090, public_6216090);
extern "C" NAKED register_t __cdecl internal_6216090()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62482d0 @0x6216092*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62482d0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        lea eax, ss:[esp+0xC]
        push eax
        lea ebx, ds:[edi+0xD8]
        mov ecx, ebx
        call public_6217b80
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x54], 0
        push ecx
        mov ecx, ebx
        call public_6217b60
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0xC]
        cmp edx, eax
        mov byte ptr ss : [esp+0x54], 1
        je public_6216409
        mov eax, dword ptr ds : [edi+0xF0]
        mov edx, dword ptr ds : [edi+0x90]
        push esi
        push edx
        mov eax, dword ptr ds : [eax+0x5C]
        mov edx, dword ptr ds : [edi+0x8C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov eax, dword ptr ds : [edi+0xF0]
        mov eax, dword ptr ds : [eax+0x78]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [edi+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+0x60]
        mov esi, dword ptr ss : [esp+0x64]
        add eax, 0xC
        mov ecx, esi
        fmul dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        fstp dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, ebx
        call public_6217be0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x10], eax
        cmp ecx, eax
        je public_62163b8
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov edx, dword ptr ds : [edi+0xF0]
        mov eax, dword ptr ds : [edx+0x78]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [edi+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        push esi
        mov eax, dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x18]
        add eax, 0xC
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], ecx
        lea ecx, ss:[esp+0x34]
        mov edx, dword ptr ds : [eax+4]
        push ecx
        mov dword ptr ss : [esp+0x3C], edx
        lea edx, ss:[esp+0x20]
        mov eax, dword ptr ds : [eax+8]
        push edx
        fstp dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x44], eax
        call public_6206c10
        add esp, 0xC
        lea ecx, ss:[esp+0x18]
        call public_6206ad0
        fst dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x3C]
        fnstsw ax
        test ah, 5
        jp public_621620b
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        jmp public_6216281
        public_621620b : nop
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x64]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_6216281
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [esi+0xC]
        fadd dword ptr ss : [esp+0x64]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x64]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_621627a
        mov eax, dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0x18]
        push eax
        call public_6206bb0
        push ecx
        lea ecx, ss:[esp+0x1C]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x28]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6206c40
        add esp, 0xC
        lea eax, ss:[esp+0x24]
        mov ecx, esi
        push eax
        call public_6206b80
        public_621627a : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        public_6216281 : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x60], eax
        je public_62163b8
        public_6216297 : nop
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov eax, dword ptr ds : [edi+0xF0]
        mov eax, dword ptr ds : [eax+0x78]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [edi+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        push esi
        mov eax, dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x18]
        add eax, 0xC
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x44], ecx
        lea ecx, ss:[esp+0x44]
        mov edx, dword ptr ds : [eax+4]
        push ecx
        mov dword ptr ss : [esp+0x4C], edx
        lea edx, ss:[esp+0x20]
        mov eax, dword ptr ds : [eax+8]
        push edx
        fstp dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x54], eax
        call public_6206c10
        add esp, 0xC
        lea ecx, ss:[esp+0x18]
        call public_6206ad0
        fst dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x4C]
        fnstsw ax
        test ah, 5
        jp public_621632c
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        jmp public_62163a2
        public_621632c : nop
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x64]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_62163a2
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [esi+0xC]
        fadd dword ptr ss : [esp+0x64]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x64]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_621639b
        mov eax, dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0x18]
        push eax
        call public_6206bb0
        push ecx
        lea ecx, ss:[esp+0x1C]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x28]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6206c40
        add esp, 0xC
        lea eax, ss:[esp+0x24]
        mov ecx, esi
        push eax
        call public_6206b80
        public_621639b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        public_62163a2 : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x60], eax
        jne public_6216297
        public_62163b8 : nop
        lea eax, ss:[esp+0x24]
        push esi
        push eax
        lea ecx, ds:[edi+0x4C]
        call public_6208690
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x24]
        push ecx
        push edx
        lea ecx, ss:[esp+0x48]
        call public_6208a70
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop edi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 8
        public_6216409 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        pop edi
        or eax, 0xFFFFFFFF
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x6216090)
    }
}

#undef public_621620b
#undef public_621627a
#undef public_6216281
#undef public_6216297
#undef public_621632c
#undef public_621639b
#undef public_62163a2
#undef public_62163b8
#undef public_6216409
