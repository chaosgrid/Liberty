#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6380c50);
CLANG_FORWARD_PROC_SYMBOL(public_6380d90);
CLANG_FORWARD_PROC_SYMBOL(public_638cd80);
CLANG_FORWARD_PROC_SYMBOL(public_6391400);

#define public_6391451 _public_6391451
#define public_6391467 _public_6391467
#define public_6391502 _public_6391502
#define public_639150a _public_639150a
#define public_639151d _public_639151d
#define public_6391569 _public_6391569
#define public_639157c _public_639157c
#define public_63915bc _public_63915bc
#define public_63915ce _public_63915ce
#define public_63915d7 _public_63915d7
#define public_63915df _public_63915df
#define public_639160f _public_639160f
#define public_639163f _public_639163f
#define public_63916a9 _public_63916a9
#define public_639170c _public_639170c

PROC_DECLARE(0x6391400, internal_6391400, public_6391400);
extern "C" NAKED register_t __cdecl internal_6391400()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        mov eax, dword ptr ds : [public_658b1ec]
        push ebx
        xor ebx, ebx
        push esi
        cmp eax, ebx
        mov eax, dword ptr ds : [public_658b8c0]
        push edi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], 0xFFEFFFFF
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], 0xFFEFFFFF
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        je public_6391451
        cmp eax, ebx
        jne public_6391451
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6391451 : nop
        cmp dword ptr ds : [public_658b0a0], ebx
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+8]
        je public_6391467
        cmp eax, ebx
        je public_639150a
        public_6391467 : nop
        fld qword ptr ds : [public_658b698]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_639150a
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [edi+0x18]
        push eax
        push ecx
        call public_6380c50
        fst qword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_658ba10]
        fcomp qword ptr ds : [public_658b698]
        add esp, 8
        inc eax
        mov dword ptr ds : [public_658ba10], eax
        fnstsw ax
        test ah, 0x41
        jne public_6391502
        inc dword ptr ds : [public_658bab8]
        lea edx, ss:[esp+0x18]
        push edx
        push 2
        push esi
        push edi
        call public_638cd80
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 2
        jl public_639170c
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63fb920 @0x63914e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb920
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6391502 : nop
        mov dword ptr ss : [esp+0x14], 1
        public_639150a : nop
        mov eax, dword ptr ds : [edi+0x28]
        test eax, eax
        jne public_639151d
        push edi
        call public_6380d90
        add esp, 4
        mov dword ptr ds : [edi+0x28], eax
        public_639151d : nop
        mov ecx, dword ptr ds : [public_658ba60]
        lea edx, ss:[esp+0x28]
        inc ecx
        push edx
        mov dword ptr ds : [public_658ba60], ecx
        mov eax, dword ptr ds : [edi+0x28]
        push esi
        push eax
        call public_637fd60
        fld qword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_658b690]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        je public_63915d7
        fld qword ptr ds : [public_658b690]
        fchs 
        fcomp qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 1
        je public_6391569
        mov ebx, 1
        public_6391569 : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jne public_639157c
        push esi
        call public_6380d90
        add esp, 4
        mov dword ptr ds : [esi+0x28], eax
        public_639157c : nop
        inc dword ptr ds : [public_658ba60]
        mov edx, dword ptr ds : [esi+0x28]
        lea ecx, ss:[esp+0x20]
        push ecx
        push edi
        push edx
        call public_637fd60
        fld qword ptr ss : [esp+0x2C]
        fcomp qword ptr ds : [public_658b690]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        je public_63915d7
        test ebx, ebx
        jne public_63915bc
        fld qword ptr ds : [public_658b690]
        fchs 
        fcomp qword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 1
        je public_63915ce
        public_63915bc : nop
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        je public_63915df
        mov eax, dword ptr ds : [public_658b8c0]
        test eax, eax
        jne public_63915df
        public_63915ce : nop
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_63915d7 : nop
        mov dword ptr ss : [esp+0x10], 1
        public_63915df : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_639160f
        mov eax, dword ptr ds : [public_658b014]
        test eax, eax
        je public_639160f
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [edi+0x18]
        push eax
        push ecx
        call public_6380c50
        fstp qword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_658ba10]
        add esp, 8
        inc eax
        mov dword ptr ds : [public_658ba10], eax
        public_639160f : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_63916a9
        mov ecx, dword ptr ds : [public_658ba98]
        mov eax, dword ptr ds : [public_658b014]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_658ba98], ecx
        je public_639163f
        fld qword ptr ss : [esp+0x18]
        fadd qword ptr ds : [public_63a5a78]
        fstp qword ptr ss : [esp+0x18]
        public_639163f : nop
        lea edx, ss:[esp+0x18]
        push edx
        push 3
        push esi
        push edi
        call public_638cd80
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        test eax, eax
        je public_639170c
        mov eax, dword ptr ds : [public_658b870]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, dword ptr ds : [esi+0x4C]
        push edx
        mov edx, dword ptr ds : [edi+0x4C]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63fb8bc @0x639168e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb8bc
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x2C
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_63916a9 : nop
        mov ebx, dword ptr ds : [public_658bac0]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 1
        push esi
        inc ebx
        push edi
        mov dword ptr ds : [public_658bac0], ebx
        call public_638cd80
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 2
        jl public_639170c
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ds : [esi+0x4C]
        push eax
        mov eax, dword ptr ds : [edi+0x4C]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63fb864 @0x63916fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb864
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x28
        public_639170c : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6391400)
    }
}

#undef public_6391451
#undef public_6391467
#undef public_6391502
#undef public_639150a
#undef public_639151d
#undef public_6391569
#undef public_639157c
#undef public_63915bc
#undef public_63915ce
#undef public_63915d7
#undef public_63915df
#undef public_639160f
#undef public_639163f
#undef public_63916a9
#undef public_639170c
