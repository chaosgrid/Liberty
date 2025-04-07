#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206b30);
CLANG_FORWARD_PROC_SYMBOL(public_6206b80);
CLANG_FORWARD_PROC_SYMBOL(public_6206bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_6208a70);
CLANG_FORWARD_PROC_SYMBOL(public_622bed0);
CLANG_FORWARD_PROC_SYMBOL(public_622d220);
CLANG_FORWARD_PROC_SYMBOL(public_622d240);
CLANG_FORWARD_PROC_SYMBOL(public_622d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_JUMP_SYMBOL(public_6249510);

#define public_622bfc4 _public_622bfc4
#define public_622c07b _public_622c07b
#define public_622c110 _public_622c110
#define public_622c17f _public_622c17f
#define public_622c186 _public_622c186
#define public_622c19c _public_622c19c
#define public_622c211 _public_622c211
#define public_622c2a6 _public_622c2a6
#define public_622c315 _public_622c315
#define public_622c31c _public_622c31c
#define public_622c332 _public_622c332
#define public_622c345 _public_622c345
#define public_622c3b0 _public_622c3b0

PROC_DECLARE(0x622bed0, internal_622bed0, public_622bed0);
extern "C" NAKED register_t __cdecl internal_622bed0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249510 @0x622bed2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249510
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x60]
        lea eax, ss:[esp+0x10]
        push eax
        lea ebx, ds:[esi+0xD8]
        mov ecx, ebx
        call public_622d240
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x58], 0
        push ecx
        mov ecx, ebx
        call public_622d220
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x10]
        cmp edx, eax
        mov byte ptr ss : [esp+0x58], 1
        je public_622c3b0
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x90]
        push edi
        push edx
        mov eax, dword ptr ds : [eax+0x5C]
        mov edx, dword ptr ds : [esi+0x8C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [esi+0x8C]
        mov eax, dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov eax, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [eax+0x78]
        fstp dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fmul dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+0x7C]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x80]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fcom dword ptr ss : [esp+0xC]
        fnstsw ax
        and eax, 0x4100
        je public_622bfc4
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        public_622bfc4 : nop
        mov eax, dword ptr ss : [esp+0x64]
        mov edi, dword ptr ss : [esp+0x68]
        add eax, 0xC
        mov ecx, edi
        fmul dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        fstp dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, ebx
        call public_622d2a0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x14], ecx
        cmp eax, ecx
        je public_622c332
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [edx+0x78]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fmul dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+0x7C]
        push ebx
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x80]
        push ebx
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fcom dword ptr ss : [esp+0xC]
        fnstsw ax
        and eax, 0x4100
        je public_622c07b
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        public_622c07b : nop
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        fmul dword ptr ss : [esp+0x14]
        add eax, 0xC
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x38], ecx
        lea ecx, ss:[esp+0x38]
        mov edx, dword ptr ds : [eax+4]
        push ecx
        mov dword ptr ss : [esp+0x40], edx
        lea edx, ss:[esp+0x24]
        mov eax, dword ptr ds : [eax+8]
        push edx
        fstp dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x48], eax
        call public_6206c10
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fstp dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x74]
        push eax
        call public_6206b30
        fmul dword ptr ss : [esp+0x78]
        add esp, 0x10
        fst dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [edi+0xC]
        fcomp dword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 5
        jp public_622c110
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_622c186
        public_622c110 : nop
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [edi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_622c186
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [edi+0xC]
        fadd dword ptr ss : [esp+0x68]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x68]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_622c17f
        mov ecx, dword ptr ss : [esp+0x68]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6206bb0
        push ecx
        lea edx, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0x2C]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6206c40
        add esp, 0xC
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6206b80
        public_622c17f : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0xC], edx
        public_622c186 : nop
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x64], eax
        je public_622c332
        public_622c19c : nop
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [ecx+0x78]
        mov ecx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ds : [esi+0xF0]
        push ebx
        fmul dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [esi+0x8C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x80]
        push ebx
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fcom dword ptr ss : [esp+0xC]
        fnstsw ax
        and eax, 0x4100
        je public_622c211
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        public_622c211 : nop
        mov eax, dword ptr ss : [esp+0x64]
        push edi
        fmul dword ptr ss : [esp+0x14]
        add eax, 0xC
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x48], ecx
        lea ecx, ss:[esp+0x48]
        mov edx, dword ptr ds : [eax+4]
        push ecx
        mov dword ptr ss : [esp+0x50], edx
        lea edx, ss:[esp+0x24]
        mov eax, dword ptr ds : [eax+8]
        push edx
        fstp dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x58], eax
        call public_6206c10
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fstp dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x74]
        push eax
        call public_6206b30
        fmul dword ptr ss : [esp+0x78]
        add esp, 0x10
        fst dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [edi+0xC]
        fcomp dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 5
        jp public_622c2a6
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_622c31c
        public_622c2a6 : nop
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [edi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_622c31c
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [edi+0xC]
        fadd dword ptr ss : [esp+0x68]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x68]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_622c315
        mov ecx, dword ptr ss : [esp+0x68]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6206bb0
        push ecx
        lea edx, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0x2C]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6206c40
        add esp, 0xC
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6206b80
        public_622c315 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0xC], edx
        public_622c31c : nop
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x64], eax
        jne public_622c19c
        public_622c332 : nop
        mov eax, dword ptr ds : [public_6257ac0]
        test eax, eax
        jne public_622c345
        call public_623e830
        mov dword ptr ds : [public_6257ac0], eax
        public_622c345 : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 0x4C
        push edi
        lea edx, ss:[esp+0x20]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x2C], ecx
        lea ecx, ss:[esp+0x28]
        push eax
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x38], edx
        call public_6208a70
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], edx
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 8
        public_622c3b0 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x622bed0)
    }
}

#undef public_622bfc4
#undef public_622c07b
#undef public_622c110
#undef public_622c17f
#undef public_622c186
#undef public_622c19c
#undef public_622c211
#undef public_622c2a6
#undef public_622c315
#undef public_622c31c
#undef public_622c332
#undef public_622c345
#undef public_622c3b0
