#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636ed80);
CLANG_FORWARD_PROC_SYMBOL(public_636edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_638cd80);
CLANG_FORWARD_PROC_SYMBOL(public_638d9f0);
CLANG_FORWARD_PROC_SYMBOL(public_638dba0);
CLANG_FORWARD_PROC_SYMBOL(public_638e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_638fae0);

#define public_638dbd0 _public_638dbd0
#define public_638dbd7 _public_638dbd7
#define public_638dbf9 _public_638dbf9
#define public_638dc00 _public_638dc00
#define public_638dc44 _public_638dc44
#define public_638dc7c _public_638dc7c
#define public_638dccc _public_638dccc
#define public_638dd28 _public_638dd28
#define public_638dd2a _public_638dd2a
#define public_638dd33 _public_638dd33
#define public_638dd44 _public_638dd44
#define public_638dd55 _public_638dd55
#define public_638dd79 _public_638dd79
#define public_638dd81 _public_638dd81
#define public_638dd8d _public_638dd8d
#define public_638dda7 _public_638dda7
#define public_638ddc6 _public_638ddc6

PROC_DECLARE(0x638dba0, internal_638dba0, public_638dba0);
extern "C" NAKED register_t __cdecl internal_638dba0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp eax, 4
        mov dword ptr ss : [esp+0x14], edi
        jl public_638dbd0
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fa634 @0x638dbc1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa634
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638dbd0 : nop
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        je public_638dc00
        public_638dbd7 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_638dc00
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x80
        je public_638dbf9
        test ah, 4
        jne public_638dbf9
        push 0
        push 4
        push esi
        push esi
        call public_638cd80
        add esp, 0x10
        public_638dbf9 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_638dbd7
        public_638dc00 : nop
        call public_636ed80
        mov ecx, dword ptr ds : [public_658b80c]
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        call public_636ec70
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov dword ptr ds : [public_658b8f0], eax
        call public_636edf0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        test ecx, ecx
        je public_638dd8d
        mov eax, dword ptr ds : [ecx+4]
        lea ebx, ds:[ecx+4]
        add ebx, 4
        test eax, eax
        je public_638dd44
        public_638dc44 : nop
        cmp dword ptr ds : [eax+0x10], 4
        mov esi, dword ptr ds : [eax+8]
        jne public_638dd33
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 4
        jne public_638dd33
        mov eax, dword ptr ds : [public_658b218]
        mov ecx, dword ptr ds : [public_658bf58]
        dec eax
        cmp eax, ecx
        jne public_638dc7c
        mov eax, dword ptr ds : [public_658b200]
        mov dword ptr ds : [public_658b078], eax
        mov dword ptr ds : [public_658b998], eax
        public_638dc7c : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        push esi
        call public_638d9f0
        mov edi, eax
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        test eax, eax
        je public_638dccc
        mov ecx, dword ptr ds : [public_658b870]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [edi+0x4C]
        push edx
        mov edx, dword ptr ds : [esi+0x4C]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63fa5f0 @0x638dcbd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa5f0
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x1C
        public_638dccc : nop
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        push edi
        push esi
        call public_638fae0
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [public_658b190]
        add esp, 0x14
        inc ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_638dd2a
        fld qword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [public_658bc38]
        fld qword ptr ds : [public_658bc48]
        inc eax
        fadd st, st(1)
        mov dword ptr ds : [public_658bc38], eax
        fstp qword ptr ds : [public_658bc48]
        fld qword ptr ds : [public_658bc40]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_638dd28
        fstp qword ptr ds : [public_658bc40]
        jmp public_638dd2a
        public_638dd28 : nop
        fstp st(0)
        public_638dd2a : nop
        call public_638e9e0
        mov ecx, dword ptr ss : [esp+0x10]
        public_638dd33 : nop
        mov eax, dword ptr ds : [ebx]
        add ebx, 4
        test eax, eax
        jne public_638dc44
        mov edi, dword ptr ss : [esp+0x14]
        public_638dd44 : nop
        test ecx, ecx
        je public_638dd8d
        mov eax, dword ptr ds : [ecx+4]
        lea esi, ds:[ecx+4]
        add esi, 4
        test eax, eax
        je public_638dd8d
        public_638dd55 : nop
        mov edx, dword ptr ds : [eax+8]
        mov ebx, dword ptr ds : [edx+0x50]
        mov ecx, 0x400
        test ecx, ebx
        jne public_638dd79
        mov edx, dword ptr ds : [eax+0xC]
        test dword ptr ds : [edx+0x50], ecx
        jne public_638dd79
        push eax
/*FIXUP push offset public_658b8f0 @0x638dd6d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f0
        call public_636e1b0
        jmp public_638dd81
        public_638dd79 : nop
        push 0x18
        push eax
        call public_6377fe0
        public_638dd81 : nop
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, 4
        test eax, eax
        jne public_638dd55
        public_638dd8d : nop
        lea eax, ss:[esp+0x10]
        push eax
        call public_636ecc0
        add esp, 4
        test edi, edi
        je public_638dda7
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], 1
        public_638dda7 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_638ddc6
        mov edx, dword ptr ds : [public_658b7fc]
        push edi
/*FIXUP push offset public_63fa5ac @0x638ddb7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa5ac
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_638ddc6 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638dba0)
    }
}

#undef public_638dbd0
#undef public_638dbd7
#undef public_638dbf9
#undef public_638dc00
#undef public_638dc44
#undef public_638dc7c
#undef public_638dccc
#undef public_638dd28
#undef public_638dd2a
#undef public_638dd33
#undef public_638dd44
#undef public_638dd55
#undef public_638dd79
#undef public_638dd81
#undef public_638dd8d
#undef public_638dda7
#undef public_638ddc6
