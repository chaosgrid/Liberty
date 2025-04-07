#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636ed80);
CLANG_FORWARD_PROC_SYMBOL(public_636edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_637e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6380e30);
CLANG_FORWARD_PROC_SYMBOL(public_638ddd0);
CLANG_FORWARD_PROC_SYMBOL(public_638fae0);

#define public_638de05 _public_638de05
#define public_638de23 _public_638de23
#define public_638de6b _public_638de6b
#define public_638de87 _public_638de87
#define public_638de8f _public_638de8f
#define public_638de94 _public_638de94
#define public_638de9c _public_638de9c
#define public_638dee1 _public_638dee1
#define public_638df00 _public_638df00
#define public_638df6e _public_638df6e
#define public_638df99 _public_638df99
#define public_638dfb3 _public_638dfb3
#define public_638dfd3 _public_638dfd3
#define public_638dfd7 _public_638dfd7
#define public_638e010 _public_638e010
#define public_638e012 _public_638e012
#define public_638e02f _public_638e02f
#define public_638e040 _public_638e040
#define public_638e050 _public_638e050
#define public_638e05b _public_638e05b
#define public_638e067 _public_638e067
#define public_638e081 _public_638e081
#define public_638e0a5 _public_638e0a5

PROC_DECLARE(0x638ddd0, internal_638ddd0, public_638ddd0);
extern "C" NAKED register_t __cdecl internal_638ddd0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x44
        mov eax, dword ptr ds : [public_658b218]
        mov ecx, dword ptr ds : [public_658bf58]
        push ebx
        push esi
        push edi
        xor edi, edi
        dec eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        jne public_638de05
        mov eax, dword ptr ds : [public_658b200]
        mov dword ptr ds : [public_658b078], eax
        mov dword ptr ds : [public_658b998], eax
        public_638de05 : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_638de23
        mov ecx, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fa784 @0x638de14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa784
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638de23 : nop
        call public_636ed80
        mov edx, dword ptr ds : [public_658b80c]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        call public_636ec70
        mov dword ptr ds : [public_658b8f0], eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_636edf0
        mov esi, dword ptr ss : [esp+0x18]
        add esp, 8
        cmp esi, edi
        je public_638e067
        mov ebx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+4]
        add eax, 4
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], eax
        je public_638e02f
        public_638de6b : nop
        cmp dword ptr ds : [ebx+0x10], 5
        jne public_638e012
        mov esi, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [esi+0x50]
        mov edi, dword ptr ds : [ebx+0xC]
        mov eax, 0x400
        test eax, ecx
        je public_638de8f
        public_638de87 : nop
        mov esi, dword ptr ds : [esi+0x20]
        test dword ptr ds : [esi+0x50], eax
        jne public_638de87
        public_638de8f : nop
        test dword ptr ds : [edi+0x50], eax
        je public_638de9c
        public_638de94 : nop
        mov edi, dword ptr ds : [edi+0x20]
        test dword ptr ds : [edi+0x50], eax
        jne public_638de94
        public_638de9c : nop
        cmp esi, edi
        je public_638e012
        mov ecx, dword ptr ds : [edi+0x3C]
        push esi
        push ecx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_638dee1
        mov edx, dword ptr ds : [edi+0x4C]
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [ebx+0xC]
        push edx
        mov edx, dword ptr ds : [ecx+0x4C]
        push eax
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+0x4C]
        push edx
        push ecx
/*FIXUP push offset public_63fa708 @0x638decb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa708
        call public_6356960
        push edi
        push esi
        push 5
        call public_637e2e0
        add esp, 0x20
        public_638dee1 : nop
        mov edx, dword ptr ds : [public_658b218]
        mov eax, dword ptr ds : [public_658bf58]
        dec edx
        cmp edx, eax
        jne public_638df00
        mov eax, dword ptr ds : [public_658b200]
        mov dword ptr ds : [public_658b078], eax
        mov dword ptr ds : [public_658b998], eax
        public_638df00 : nop
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        push edi
        push esi
        call public_6380e30
        fstp qword ptr ss : [esp+0x30]
        lea edx, ss:[esp+0x50]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        push esi
        push edi
        call public_6380e30
        fstp qword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x20
        test eax, eax
        je public_638df6e
        mov ecx, dword ptr ds : [public_658b870]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ds : [edi+0x4C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x4C]
        push edx
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63fa6a4 @0x638df5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa6a4
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x24
        public_638df6e : nop
        fld qword ptr ss : [esp+0x20]
        push 0
        fcomp qword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 1
        je public_638df99
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        push edi
        push esi
        call public_638fae0
        fld qword ptr ss : [esp+0x34]
        add esp, 0x14
        jmp public_638dfb3
        public_638df99 : nop
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        push esi
        push edi
        call public_638fae0
        fld qword ptr ss : [esp+0x3C]
        add esp, 0x14
        mov esi, edi
        public_638dfb3 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x80
        je public_638dfd3
        mov ecx, dword ptr ds : [public_658bd10]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        inc eax
        mov dword ptr ds : [public_658bd10], ecx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_638dfd7
        public_638dfd3 : nop
        inc dword ptr ss : [esp+0x14]
        public_638dfd7 : nop
        mov eax, dword ptr ds : [public_658b190]
        test eax, eax
        je public_638e010
        fld qword ptr ds : [public_658bc18]
        mov eax, dword ptr ds : [public_658bc08]
        fadd st, st(1)
        inc eax
        mov dword ptr ds : [public_658bc08], eax
        fstp qword ptr ds : [public_658bc18]
        fld qword ptr ds : [public_658bc10]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_638e010
        fstp qword ptr ds : [public_658bc10]
        jmp public_638e012
        public_638e010 : nop
        fstp st(0)
        public_638e012 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [eax]
        add eax, 4
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_638de6b
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        public_638e02f : nop
        test esi, esi
        je public_638e067
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_638e067
        public_638e040 : nop
        cmp dword ptr ds : [eax+0x10], 5
        jne public_638e050
        push 0x18
        push eax
        call public_6377fe0
        jmp public_638e05b
        public_638e050 : nop
        push eax
/*FIXUP push offset public_658b8f0 @0x638e051*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f0
        call public_636e1b0
        public_638e05b : nop
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, 4
        test eax, eax
        jne public_638e040
        public_638e067 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_636ecc0
        add esp, 4
        test edi, edi
        je public_638e081
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx], 1
        public_638e081 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_638e0a5
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
        push edi
/*FIXUP push offset public_63fa650 @0x638e096*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa650
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_638e0a5 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638ddd0)
    }
}

#undef public_638de05
#undef public_638de23
#undef public_638de6b
#undef public_638de87
#undef public_638de8f
#undef public_638de94
#undef public_638de9c
#undef public_638dee1
#undef public_638df00
#undef public_638df6e
#undef public_638df99
#undef public_638dfb3
#undef public_638dfd3
#undef public_638dfd7
#undef public_638e010
#undef public_638e012
#undef public_638e02f
#undef public_638e040
#undef public_638e050
#undef public_638e05b
#undef public_638e067
#undef public_638e081
#undef public_638e0a5
