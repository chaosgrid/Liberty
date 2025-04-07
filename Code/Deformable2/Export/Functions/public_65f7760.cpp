#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f28b0);
CLANG_FORWARD_PROC_SYMBOL(public_65f3e80);
CLANG_FORWARD_PROC_SYMBOL(public_65f7760);
CLANG_FORWARD_PROC_SYMBOL(public_65f7c70);
CLANG_FORWARD_PROC_SYMBOL(public_65f7ca0);
CLANG_FORWARD_PROC_SYMBOL(public_65f7d10);
CLANG_FORWARD_PROC_SYMBOL(public_65f7d70);
CLANG_FORWARD_PROC_SYMBOL(public_65f7e00);
CLANG_FORWARD_PROC_SYMBOL(public_65f9150);
CLANG_FORWARD_PROC_SYMBOL(public_65f9170);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);
CLANG_FORWARD_PROC_SYMBOL(public_6600c00);

#define public_65f7796 _public_65f7796
#define public_65f77f4 _public_65f77f4
#define public_65f77fc _public_65f77fc
#define public_65f7828 _public_65f7828
#define public_65f7839 _public_65f7839
#define public_65f783d _public_65f783d
#define public_65f783f _public_65f783f
#define public_65f7867 _public_65f7867
#define public_65f7870 _public_65f7870
#define public_65f7927 _public_65f7927
#define public_65f79be _public_65f79be
#define public_65f79c2 _public_65f79c2
#define public_65f79df _public_65f79df
#define public_65f7a6a _public_65f7a6a
#define public_65f7a81 _public_65f7a81
#define public_65f7a95 _public_65f7a95
#define public_65f7b1c _public_65f7b1c
#define public_65f7b4e _public_65f7b4e
#define public_65f7bc0 _public_65f7bc0
#define public_65f7bcd _public_65f7bcd
#define public_65f7bd8 _public_65f7bd8
#define public_65f7bdf _public_65f7bdf
#define public_65f7c0f _public_65f7c0f
#define public_65f7c18 _public_65f7c18
#define public_65f7c44 _public_65f7c44
#define public_65f7c50 _public_65f7c50

PROC_DECLARE(0x65f7760, internal_65f7760, public_65f7760);
extern "C" NAKED register_t __cdecl internal_65f7760()
{
    __asm
    {
        mov eax, 0x425C
        call public_6600c00
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x4268]
        mov eax, dword ptr ss : [ebp]
/*FIXUP push offset public_660287c @0x65f7776*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660287c
        mov ebx, ecx
        push ebp
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [eax+0x60]
        test eax, eax
        jne public_65f7796
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x425C
        ret 4
        public_65f7796 : nop
        push esi
        push edi
/*FIXUP push offset public_6602040 @0x65f7798*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
        xor edi, edi
/*FIXUP push offset public_6602874 @0x65f779f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602874
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0x1C], edi
        call public_65f3e80
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x90]
        push edx
        push ebp
        call dword ptr ds : [ecx+0x7C]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_65f77fc
        mov eax, dword ptr ss : [ebp]
        push edi
        lea ecx, ss:[esp+0x20]
        push ecx
        push 4
        lea edx, ss:[esp+0x24]
        push edx
        push esi
        push ebp
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_65f77f4
        cmp dword ptr ss : [esp+0x1C], 4
        jne public_65f77f4
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        public_65f77f4 : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ebp
        call dword ptr ds : [ecx+0x10]
        public_65f77fc : nop
        lea edx, ds:[edi+edi*8]
        lea eax, ds:[edx*4+4]
        push eax
        call public_6600bb6
        add esp, 4
        test eax, eax
        je public_65f783d
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edi
        lea edi, ds:[eax+4]
        lea eax, ds:[ecx-1]
        test eax, eax
        mov esi, edi
        jl public_65f7839
        lea ebx, ds:[eax+1]
        public_65f7828 : nop
        mov ecx, esi
        call public_65f7c70
        add esi, 0x24
        dec ebx
        jne public_65f7828
        mov ebx, dword ptr ss : [esp+0x38]
        public_65f7839 : nop
        mov eax, edi
        jmp public_65f783f
        public_65f783d : nop
        xor eax, eax
        public_65f783f : nop
        mov dword ptr ds : [ebx+0x1C], eax
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x12C]
        push eax
/*FIXUP push offset public_660286c @0x65f784d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660286c
        push ebp
        call dword ptr ds : [edx+0x48]
        mov edx, eax
        cmp edx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], edx
        je public_65f7c50
        jmp public_65f7870
        public_65f7867 : nop
        mov ebx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        nop 
        public_65f7870 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        lea ecx, ds:[eax+eax*8]
        mov eax, dword ptr ds : [ebx+0x1C]
        lea ebx, ds:[eax+ecx*4]
        xor eax, eax
        mov dword ptr ss : [esp+0x60], offset public_6602040
        mov ecx, 0xB
        lea edi, ss:[esp+0x64]
        rep stosd
        lea ecx, ss:[esp+0x158]
        mov dword ptr ss : [esp+0x68], ecx
        xor esi, esi
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x6C], 0x80000000
        mov dword ptr ss : [esp+0x70], 1
        mov dword ptr ss : [esp+0x78], 3
        mov dword ptr ss : [esp+0x7C], 0x8000080
        mov dword ptr ss : [esp+0x5C], 0x34
        mov dword ptr ss : [esp+0x8C], edx
        call public_65f9170
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        push ebp
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jge public_65f7927
        lea edx, ss:[esp+0x26C]
/*FIXUP push offset public_6602850 @0x65f78fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602850
        push edx
        call public_65f28b0
        push eax
        mov eax, dword ptr ds : [public_6601008]
        push 0x37
/*FIXUP push offset public_66027f8 @0x65f790d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66027f8
        mov ecx, 0x100002
/*FIXUP push offset public_66024c8 @0x65f7917*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x1C
        jmp public_65f7c0f
        public_65f7927 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_65f9150
/*FIXUP push offset public_6602040 @0x65f7935*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
        or edi, 0xFFFFFFFF
/*FIXUP push offset public_66027e4 @0x65f793d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66027e4
        lea ecx, ss:[esp+0xCC]
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x34], esi
        call public_65f3e80
        mov eax, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0xC4]
        push ecx
        mov dword ptr ss : [esp+0xF8], edi
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x7C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], eax
        je public_65f79be
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x20]
        push esi
        push esi
        push esi
        push 2
        push esi
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], eax
        je public_65f79be
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [ecx]
        push esi
        push esi
        push esi
        push 4
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_65f79c2
        public_65f79be : nop
        mov eax, dword ptr ss : [esp+0x2C]
        public_65f79c2 : nop
        test eax, eax
        mov esi, eax
        jne public_65f79df
        lea ecx, ss:[esp+0x20]
        call public_65f7d10
        lea ecx, ss:[esp+0x30]
        call public_65f9170
        jmp public_65f7c0f
        public_65f79df : nop
        mov edi, dword ptr ds : [public_660100c]
        push eax
        call edi
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ss : [esp+0x58], esi
        call edi
        add esp, 8
        lea edx, ds:[ebx+8]
        push edx
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [public_660312c]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        test eax, eax
        jge public_65f7a81
/*FIXUP push offset public_66031ac @0x65f7a11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66031ac
/*FIXUP push offset public_66027e0 @0x65f7a16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66027e0
        lea eax, ss:[esp+0x2274]
/*FIXUP push offset public_66027c0 @0x65f7a22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66027c0
        push eax
        call public_65f28b0
        push eax
        push 0x45
/*FIXUP push offset public_66027f8 @0x65f7a30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66027f8
        mov ecx, 0x100002
/*FIXUP push offset public_66024c8 @0x65f7a3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push ecx
        mov ecx, dword ptr ds : [public_6601008]
        call dword ptr ds : [ecx]
        add esp, 0x24
        lea ecx, ss:[esp+0x20]
        call public_65f7d10
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        je public_65f7a6a
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x30], 0
        public_65f7a6a : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_65f7c18
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_65f7c18
        public_65f7a81 : nop
        mov eax, dword ptr ss : [esp+0x10]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x4C], eax
        je public_65f7a95
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
/*FIXUP public_65f7a95 : nop
        push offset public_6602040 @0x65f7a95*/
  FIXUP public_65f7a95 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
        or esi, 0xFFFFFFFF
/*FIXUP push offset public_66027ac @0x65f7a9d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66027ac
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x50], edi
        call public_65f3e80
        mov eax, dword ptr ss : [esp+0x4C]
        lea edx, ss:[esp+0x90]
        push edx
        mov dword ptr ss : [esp+0xC4], esi
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x7C]
        cmp eax, esi
        mov dword ptr ss : [esp+0x3C], eax
        je public_65f7b1c
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        push ecx
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x3C]
        push edi
        push edi
        push edi
        push 2
        push edi
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        cmp eax, esi
        mov dword ptr ss : [esp+0x44], eax
        je public_65f7b1c
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [ecx]
        push edi
        push edi
        push edi
        push 4
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ss : [esp+0x48], eax
        public_65f7b1c : nop
        mov esi, dword ptr ss : [esp+0x40]
        test esi, esi
        mov edi, dword ptr ss : [esp+0x48]
        je public_65f7b4e
        shr esi, 1
        lea eax, ds:[esi+esi*2]
        lea ecx, ds:[eax+eax-0xC]
        push ecx
        call public_6600bb6
        lea edx, ds:[ebx+0x1C]
        push edx
        push eax
        push esi
        push edi
        mov dword ptr ds : [ebx+0x18], eax
        call public_65f7d70
        add esp, 0x14
        jmp public_65f7bdf
        public_65f7b4e : nop
        mov esi, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_6602040 @0x65f7b52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
/*FIXUP push offset public_660279c @0x65f7b57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660279c
        lea ecx, ss:[esp+0x100]
        call public_65f3e80
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xF8]
        push ecx
        push esi
        call dword ptr ds : [eax+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_65f7bd8
        mov edx, dword ptr ds : [esi]
        push 0
        push ebp
        push esi
        call dword ptr ds : [edx+0x28]
        mov ebx, eax
        mov edi, ebx
        shr edi, 1
        lea eax, ds:[edi+edi]
        push eax
        call public_6600bb6
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea edx, ss:[esp+0x5C]
        push edx
        push ebx
        push eax
        push ebp
        push esi
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_65f7bc0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x1C], edi
        mov dword ptr ds : [eax+0x18], ecx
        jmp public_65f7bcd
        public_65f7bc0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6600bb0
        add esp, 4
        public_65f7bcd : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [eax+0x10]
        mov ebx, dword ptr ss : [esp+0x1C]
        public_65f7bd8 : nop
        mov ebp, dword ptr ss : [esp+0x4270]
        public_65f7bdf : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        lea ecx, ds:[ebx+0x14]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x18]
        lea edx, ds:[ebx+0x10]
        push edx
        push eax
        push ecx
        mov dword ptr ds : [ebx], 4
        call public_65f7e00
        add esp, 0x10
        lea ecx, ss:[esp+0x3C]
        call public_65f7ca0
        lea ecx, ss:[esp+0x20]
        call public_65f7ca0
        public_65f7c0f : nop
        lea ecx, ss:[esp+0x10]
        call public_65f9170
        public_65f7c18 : nop
        mov eax, dword ptr ss : [esp+0x38]
        inc dword ptr ds : [eax+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [eax+0x18], edx
        jge public_65f7c44
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x12C]
        push ecx
        push edx
        push ebp
        call dword ptr ds : [eax+0x4C]
        test eax, eax
        jne public_65f7867
        public_65f7c44 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [ebp]
        push ecx
        push ebp
        call dword ptr ds : [eax+0x50]
        public_65f7c50 : nop
        mov edx, dword ptr ss : [ebp]
/*FIXUP push offset public_6602020 @0x65f7c53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602020
        push ebp
        call dword ptr ds : [edx+0x60]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x425C
        ret 4
        UNREACHABLE_TRAP(0x65f7760)
    }
}

#undef public_65f7796
#undef public_65f77f4
#undef public_65f77fc
#undef public_65f7828
#undef public_65f7839
#undef public_65f783d
#undef public_65f783f
#undef public_65f7867
#undef public_65f7870
#undef public_65f7927
#undef public_65f79be
#undef public_65f79c2
#undef public_65f79df
#undef public_65f7a6a
#undef public_65f7a81
#undef public_65f7a95
#undef public_65f7b1c
#undef public_65f7b4e
#undef public_65f7bc0
#undef public_65f7bcd
#undef public_65f7bd8
#undef public_65f7bdf
#undef public_65f7c0f
#undef public_65f7c18
#undef public_65f7c44
#undef public_65f7c50
