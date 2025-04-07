#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b970);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f428b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f498f5 _public_6f498f5
#define public_6f49906 _public_6f49906
#define public_6f49910 _public_6f49910
#define public_6f49918 _public_6f49918
#define public_6f4991a _public_6f4991a
#define public_6f49959 _public_6f49959
#define public_6f49962 _public_6f49962
#define public_6f499d4 _public_6f499d4
#define public_6f49af1 _public_6f49af1
#define public_6f49b20 _public_6f49b20
#define public_6f49b27 _public_6f49b27
#define public_6f49b5a _public_6f49b5a
#define public_6f49b78 _public_6f49b78

PROC_DECLARE(0x6f49890, internal_6f49890, public_6f49890);
extern "C" NAKED register_t __cdecl internal_6f49890()
{
    __asm
    {
        sub esp, 0xD8
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xE0]
        mov eax, dword ptr ds : [ebx]
        push 0x3F800000
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x18]
        fld st(0)
        fsub dword ptr ds : [ebx+0x74]
        fst dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_6f5a1d4]
        fnstsw ax
        test ah, 0x44
        jnp public_6f49910
        fcom qword ptr ds : [public_6f5a1c0]
        fnstsw ax
        test ah, 5
        jp public_6f49906
        fld dword ptr ds : [public_6f5a1b8]
        fsub dword ptr ds : [ebx+0x74]
        fcom dword ptr ds : [public_6f5a1d4]
        fnstsw ax
        test ah, 0x44
        jp public_6f498f5
        fstp st(0)
        mov dword ptr ss : [esp+8], 0x3F800000
        fstp dword ptr ds : [ebx+0x74]
        jmp public_6f4991a
        public_6f498f5 : nop
        fld dword ptr ss : [esp+4]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fstp dword ptr ds : [ebx+0x74]
        jmp public_6f4991a
        public_6f49906 : nop
        mov dword ptr ss : [esp+8], 0x3F800000
        jmp public_6f49918
        public_6f49910 : nop
        mov dword ptr ss : [esp+8], 0
        public_6f49918 : nop
        fstp st(0)
        public_6f4991a : nop
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xEC]
        lea edx, ds:[ebx+0x14]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f49b5a
        mov ebp, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [ebp+0xCC]
        test eax, eax
        je public_6f49959
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x70]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        jmp public_6f49962
        public_6f49959 : nop
        mov eax, dword ptr ss : [ebp+0xD8]
        mov dword ptr ds : [ebx+0x70], eax
        public_6f49962 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        cmp ecx, 0xFFFFFFFF
        lea eax, ds:[ebx+0x18]
        je public_6f49b27
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f49b27
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x54], eax
        mov eax, dword ptr ds : [ebx+0x58]
        test eax, eax
        je public_6f49b27
        mov eax, dword ptr ds : [ebx+0x5C]
        test eax, eax
        je public_6f49b27
        mov ecx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ebx+0x58]
        test ecx, ecx
        je public_6f49b27
        cmp eax, 2
        je public_6f499d4
        cmp eax, 1
        jne public_6f49b27
        public_6f499d4 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f49b27
        lea esi, ss:[esp+0x24]
        push esi
        push ecx
        mov ecx, dword ptr ds : [ebx+0x5C]
        push ecx
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x24]
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_6f49b20
        lea edx, ds:[esi+0x24]
        push edx
        lea eax, ss:[esp+0x1C]
        push esi
        push eax
        call public_6f3b9a0
        fld dword ptr ss : [esp+0x2C]
        fchs 
        lea ecx, ss:[esp+0x60]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        push edx
        mov edx, dword ptr ds : [esi+0x10]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push ecx
        mov ecx, dword ptr ds : [esi+0x18]
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x84]
        call public_6f428b0
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        lea ecx, ss:[esp+0x8C]
        call public_6f3b970
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f49af1
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f49af1 : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x8C]
        push edx
        lea edx, ss:[esp+0xC0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[esp+0xB8]
        lea edi, ss:[esp+0x28]
        rep movsd
        pop edi
        public_6f49b20 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ebx+0x54], eax
        public_6f49b27 : nop
        mov eax, dword ptr ss : [ebp+0xCC]
        test eax, eax
        je public_6f49b5a
        fld dword ptr ds : [ebx+0x70]
        mov ecx, dword ptr ds : [eax]
        fld dword ptr ds : [ebx+0x54]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        fstp st(0)
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [ebp+0xD8], eax
        public_6f49b5a : nop
        mov ebx, dword ptr ds : [ebx+0x1C]
        cmp dword ptr ss : [esp+0xE8], ebx
        pop esi
        pop ebp
        jb public_6f49b78
        test ebx, ebx
        jl public_6f49b78
        xor eax, eax
        pop ebx
        add esp, 0xD8
        ret 8
        public_6f49b78 : nop
        mov eax, 1
        pop ebx
        add esp, 0xD8
        ret 8
        UNREACHABLE_TRAP(0x6f49890)
    }
}

#undef public_6f498f5
#undef public_6f49906
#undef public_6f49910
#undef public_6f49918
#undef public_6f4991a
#undef public_6f49959
#undef public_6f49962
#undef public_6f499d4
#undef public_6f49af1
#undef public_6f49b20
#undef public_6f49b27
#undef public_6f49b5a
#undef public_6f49b78
