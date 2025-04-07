#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6206b30);
CLANG_FORWARD_PROC_SYMBOL(public_6206b80);
CLANG_FORWARD_PROC_SYMBOL(public_6206bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_622fa10);
CLANG_FORWARD_PROC_SYMBOL(public_6230790);
CLANG_FORWARD_PROC_SYMBOL(public_62307b0);
CLANG_FORWARD_JUMP_SYMBOL(public_62498a0);

#define public_622fa72 _public_622fa72
#define public_622fab6 _public_622fab6
#define public_622fb06 _public_622fb06
#define public_622fb85 _public_622fb85
#define public_622fb8c _public_622fb8c
#define public_622fb8d _public_622fb8d
#define public_622fbb3 _public_622fbb3
#define public_622fbd5 _public_622fbd5
#define public_622fc97 _public_622fc97
#define public_622fc9e _public_622fc9e
#define public_622fc9f _public_622fc9f
#define public_622fcb5 _public_622fcb5
#define public_622fccc _public_622fccc

PROC_DECLARE(0x622fa10, internal_622fa10, public_622fa10);
extern "C" NAKED register_t __cdecl internal_622fa10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62498a0 @0x622fa12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62498a0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        mov eax, dword ptr ss : [esp+0x58]
        push ebx
        push esi
        lea ecx, ss:[esp+0x60]
        push edi
        lea esi, ds:[eax+0xB4]
        push ecx
        mov ecx, esi
        xor edi, edi
        call public_62307b0
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        lea edx, ss:[esp+0xC]
        mov ecx, esi
        push edx
        mov dword ptr ss : [esp+0x60], edi
        mov dword ptr ss : [esp+0x68], edi
        call public_6230790
        mov eax, dword ptr ss : [esp+0xC]
        mov byte ptr ss : [esp+0x5C], 1
        cmp eax, ebx
        je public_622fcb5
        mov esi, dword ptr ss : [esp+0x68]
        public_622fa72 : nop
        mov eax, dword ptr ds : [eax+0x6C]
        test eax, eax
        je public_622fb8d
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        test eax, eax
        jne public_622fb8d
        test edi, edi
        jne public_622fab6
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        jmp public_622fb8c
        public_622fab6 : nop
        lea eax, ss:[esp+0x44]
        push esi
        lea ecx, ss:[esp+0x24]
        push eax
        push ecx
        call public_6206c10
        add esp, 0xC
        lea ecx, ss:[esp+0x20]
        call public_6206ad0
        fst dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 5
        jp public_622fb06
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        jmp public_622fb8c
        public_622fb06 : nop
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x64]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_622fb8c
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [esi+0xC]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x64]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_622fb85
        mov edx, dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0x20]
        push edx
        call public_6206bb0
        push ecx
        lea eax, ss:[esp+0x24]
        fld dword ptr ss : [esp+0x6C]
        fsub dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        call public_6206c40
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi]
        add esp, 0xC
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        public_622fb85 : nop
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [esi+0xC], edx
        public_622fb8c : nop
        inc edi
        public_622fb8d : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x70]
        test eax, eax
        je public_622fc9f
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        test eax, eax
        jne public_622fc9f
        test edi, edi
        jne public_622fbd5
        public_622fbb3 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        jmp public_622fc9e
        public_622fbd5 : nop
        lea eax, ss:[esp+0x44]
        push esi
        lea ecx, ss:[esp+0x18]
        push eax
        push ecx
        call public_6206c10
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fstp dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x70]
        push edx
        call public_6206b30
        fmul dword ptr ss : [esp+0x74]
        add esp, 0x10
        fst dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 5
        jnp public_622fbb3
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x64]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_622fc9e
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [esi+0xC]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x64]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_622fc97
        mov eax, dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0x14]
        push eax
        call public_6206bb0
        push ecx
        lea ecx, ss:[esp+0x18]
        fld dword ptr ss : [esp+0x6C]
        fsub dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6206c40
        add esp, 0xC
        lea eax, ss:[esp+0x38]
        mov ecx, esi
        push eax
        call public_6206b80
        public_622fc97 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [esi+0xC], ecx
        public_622fc9e : nop
        inc edi
        public_622fc9f : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0xC], eax
        jne public_622fa72
        test edi, edi
        jne public_622fccc
        public_622fcb5 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 8
        public_622fccc : nop
        mov ecx, dword ptr ss : [esp+0x54]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x622fa10)
    }
}

#undef public_622fa72
#undef public_622fab6
#undef public_622fb06
#undef public_622fb85
#undef public_622fb8c
#undef public_622fb8d
#undef public_622fbb3
#undef public_622fbd5
#undef public_622fc97
#undef public_622fc9e
#undef public_622fc9f
#undef public_622fcb5
#undef public_622fccc
