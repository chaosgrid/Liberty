#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6206b80);
CLANG_FORWARD_PROC_SYMBOL(public_6206bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_6208690);
CLANG_FORWARD_PROC_SYMBOL(public_6208a70);
CLANG_FORWARD_PROC_SYMBOL(public_620f830);
CLANG_FORWARD_PROC_SYMBOL(public_62107b0);
CLANG_FORWARD_PROC_SYMBOL(public_62107d0);
CLANG_FORWARD_PROC_SYMBOL(public_6210830);
CLANG_FORWARD_JUMP_SYMBOL(public_6247c40);

#define public_620f981 _public_620f981
#define public_620f9f0 _public_620f9f0
#define public_620f9f7 _public_620f9f7
#define public_620fa05 _public_620fa05
#define public_620fa92 _public_620fa92
#define public_620fb01 _public_620fb01
#define public_620fb08 _public_620fb08
#define public_620fb16 _public_620fb16
#define public_620fb55 _public_620fb55
#define public_620fb58 _public_620fb58

PROC_DECLARE(0x620f830, internal_620f830, public_620f830);
extern "C" NAKED register_t __cdecl internal_620f830()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247c40 @0x620f832*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247c40
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        push ebx
        mov ebx, dword ptr ss : [esp+0x58]
        push ebp
        push esi
        lea ebp, ds:[ebx+0xD8]
        lea eax, ss:[esp+0x60]
        push edi
        push eax
        mov ecx, ebp
        call public_62107d0
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], esi
        lea ecx, ss:[esp+0x14]
        xor eax, eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x68], eax
        call public_62107b0
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], edi
        cmp edi, esi
        mov byte ptr ss : [esp+0x5C], 1
        mov dword ptr ss : [esp+0x14], 0
        je public_620fb55
        fld dword ptr ds : [edi+0x24]
        fmul dword ptr ds : [edi+0x2C]
        mov edx, dword ptr ds : [ebx+0xE8]
        mov eax, dword ptr ds : [edx+0x78]
        fstp dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [ebx+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ds:[edi+0xC]
        mov esi, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [eax]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        fstp dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, ebp
        call public_6210830
        mov ebp, dword ptr ds : [eax]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_620fb16
        fld dword ptr ds : [edi+0x24]
        fmul dword ptr ds : [edi+0x2C]
        mov edx, dword ptr ds : [ebx+0xE8]
        mov eax, dword ptr ds : [edx+0x78]
        fstp dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [ebx+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[ebp+0xC]
        push esi
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
        add esp, 0xC
        lea ecx, ss:[esp+0x1C]
        call public_6206ad0
        fst dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 5
        jp public_620f981
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        jmp public_620f9f7
        public_620f981 : nop
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x64]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_620f9f7
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [esi+0xC]
        fadd dword ptr ss : [esp+0x64]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x64]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_620f9f0
        mov eax, dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0x1C]
        push eax
        call public_6206bb0
        push ecx
        lea ecx, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x6C]
        fsub dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6206c40
        add esp, 0xC
        lea eax, ss:[esp+0x28]
        mov ecx, esi
        push eax
        call public_6206b80
        public_620f9f0 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [esi+0xC], ecx
        public_620f9f7 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], edi
        je public_620fb16
        public_620fa05 : nop
        fld dword ptr ds : [edi+0x2C]
        fmul dword ptr ds : [edi+0x24]
        mov edx, dword ptr ds : [ebx+0xE8]
        mov eax, dword ptr ds : [edx+0x78]
        fstp dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [ebx+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ds:[edi+0xC]
        push esi
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
        add esp, 0xC
        lea ecx, ss:[esp+0x1C]
        call public_6206ad0
        fst dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 5
        jp public_620fa92
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        jmp public_620fb08
        public_620fa92 : nop
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x64]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_620fb08
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [esi+0xC]
        fadd dword ptr ss : [esp+0x64]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x64]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_620fb01
        mov eax, dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0x1C]
        push eax
        call public_6206bb0
        push ecx
        lea ecx, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x6C]
        fsub dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6206c40
        add esp, 0xC
        lea eax, ss:[esp+0x28]
        mov ecx, esi
        push eax
        call public_6206b80
        public_620fb01 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [esi+0xC], ecx
        public_620fb08 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], edi
        jne public_620fa05
        public_620fb16 : nop
        lea edx, ss:[esp+0x28]
        push esi
        push edx
        lea ecx, ds:[ebx+0x4C]
        call public_6208690
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x28]
        push eax
        push ecx
        lea ecx, ss:[esp+0x4C]
        call public_6208a70
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], edx
        xor eax, eax
        jmp public_620fb58
        public_620fb55 : nop
        or eax, 0xFFFFFFFF
        public_620fb58 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x620f830)
    }
}

#undef public_620f981
#undef public_620f9f0
#undef public_620f9f7
#undef public_620fa05
#undef public_620fa92
#undef public_620fb01
#undef public_620fb08
#undef public_620fb16
#undef public_620fb55
#undef public_620fb58
