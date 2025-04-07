#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f23090);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e440);
CLANG_FORWARD_PROC_SYMBOL(public_6f37570);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b670);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b970);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f444c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f44ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f47d02 _public_6f47d02
#define public_6f47d97 _public_6f47d97
#define public_6f47db1 _public_6f47db1
#define public_6f47df3 _public_6f47df3
#define public_6f47e09 _public_6f47e09
#define public_6f47e3f _public_6f47e3f
#define public_6f47e6c _public_6f47e6c
#define public_6f47eac _public_6f47eac
#define public_6f47eca _public_6f47eca
#define public_6f47efe _public_6f47efe
#define public_6f47f07 _public_6f47f07
#define public_6f47f3d _public_6f47f3d
#define public_6f47f6a _public_6f47f6a
#define public_6f4800d _public_6f4800d
#define public_6f4801a _public_6f4801a
#define public_6f48038 _public_6f48038

PROC_DECLARE(0x6f47c30, internal_6f47c30, public_6f47c30);
extern "C" NAKED register_t __cdecl internal_6f47c30()
{
    __asm
    {
        sub esp, 0xEC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xFC]
        mov ebx, ecx
        push edi
        lea eax, ds:[ebx+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_6f4aa40
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [esi+4]
        je public_6f4801a
        lea eax, ds:[ebx+0x18]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_6f4aa40
        mov edi, dword ptr ss : [esp+0x1C]
        cmp edi, dword ptr ds : [esi+4]
        je public_6f4801a
        lea ecx, ss:[esp+0x38]
        call public_6f37570
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x5C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x60], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x64], eax
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov esi, eax
        mov eax, dword ptr ds : [ebx+0x6C]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x38]
        rep movsd
        je public_6f47d97
        mov eax, dword ptr ds : [ebx+0x60]
        test eax, eax
        je public_6f47d97
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 2
        je public_6f47d02
        cmp eax, 1
        jne public_6f47d97
        public_6f47d02 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f47d97
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        mov edx, dword ptr ds : [ebx+0x6C]
        push edx
        mov edx, dword ptr ds : [ebx+0x60]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_6f47d97
        lea eax, ds:[esi+0x24]
        push eax
        lea ecx, ss:[esp+0x24]
        push esi
        push ecx
        call public_6f3b9a0
        add esp, 0xC
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x24]
        call public_6f23090
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x9C]
        push ecx
        mov ecx, esi
        call public_6f3b670
        push eax
        lea ecx, ss:[esp+0xD0]
        call public_6f3b970
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0xD0]
        call public_6f44ce0
        mov ecx, 0xC
        lea esi, ss:[esp+0x68]
        lea edi, ss:[esp+0x38]
        rep movsd
        public_6f47d97 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        test al, 0x40
        je public_6f47e09
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f47db1
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f47db1 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x80]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+0x70]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x9C]
        call public_6f444c0
        test byte ptr ds : [ebx+0x30], 2
        je public_6f47df3
        mov ecx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xBC]
        push eax
        call dword ptr ds : [edx+0xC]
        public_6f47df3 : nop
        test byte ptr ds : [ebx+0x30], 4
        je public_6f4801a
        lea eax, ss:[esp+0x98]
        jmp public_6f4800d
        public_6f47e09 : nop
        test al, 2
        je public_6f47eac
        test al, 0x20
        lea ecx, ds:[ebx+0x54]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], ecx
        je public_6f47e6c
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f47e3f
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f47e3f : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        public_6f47e6c : nop
        fld dword ptr ss : [esp+0x64]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [eax+0xC]
        public_6f47eac : nop
        mov eax, dword ptr ds : [ebx+0x30]
        test al, 4
        je public_6f47f07
        test al, al
        jns public_6f47efe
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f47eca
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f47eca : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x80]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+0x70]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0xCC]
        call public_6f444c0
        lea eax, ss:[esp+0xC8]
        jmp public_6f4800d
        public_6f47efe : nop
        lea eax, ss:[esp+0x38]
        jmp public_6f4800d
        public_6f47f07 : nop
        test al, 8
        je public_6f4801a
        test al, 0x20
        lea ecx, ds:[ebx+0x54]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], ecx
        je public_6f47f6a
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f47f3d
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f47f3d : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        public_6f47f6a : nop
        fld dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x34]
        call dword ptr ds : [eax+0x14]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x20]
        fst dword ptr ss : [esp+0x24]
        fld st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ds : [public_6f5a1d4]
        fnstsw ax
        fstp st(0)
        test ah, 0x44
        fstp st(0)
        jnp public_6f4801a
        mov ecx, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ds : [ebx+0x64]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x68]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0xAC]
        push eax
        call public_6f2e440
        add esp, 0x18
        lea eax, ss:[esp+0x98]
        public_6f4800d : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x10]
        public_6f4801a : nop
        mov ebx, dword ptr ds : [ebx+0x1C]
        cmp dword ptr ss : [esp+0xFC], ebx
        jb public_6f48038
        test ebx, ebx
        jl public_6f48038
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xEC
        ret 8
        public_6f48038 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0xEC
        ret 8
        UNREACHABLE_TRAP(0x6f47c30)
    }
}

#undef public_6f47d02
#undef public_6f47d97
#undef public_6f47db1
#undef public_6f47df3
#undef public_6f47e09
#undef public_6f47e3f
#undef public_6f47e6c
#undef public_6f47eac
#undef public_6f47eca
#undef public_6f47efe
#undef public_6f47f07
#undef public_6f47f3d
#undef public_6f47f6a
#undef public_6f4800d
#undef public_6f4801a
#undef public_6f48038
