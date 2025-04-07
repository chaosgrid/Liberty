#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_638cf40);

#define public_638cf59 _public_638cf59
#define public_638cf65 _public_638cf65
#define public_638cfa2 _public_638cfa2
#define public_638cfc3 _public_638cfc3
#define public_638cfd4 _public_638cfd4
#define public_638cffc _public_638cffc
#define public_638d044 _public_638d044
#define public_638d070 _public_638d070
#define public_638d079 _public_638d079
#define public_638d0f3 _public_638d0f3
#define public_638d10c _public_638d10c
#define public_638d135 _public_638d135
#define public_638d145 _public_638d145
#define public_638d19b _public_638d19b
#define public_638d1ae _public_638d1ae
#define public_638d1cc _public_638d1cc
#define public_638d1d1 _public_638d1d1
#define public_638d1eb _public_638d1eb
#define public_638d1f7 _public_638d1f7
#define public_638d234 _public_638d234

PROC_DECLARE(0x638cf40, internal_638cf40, public_638cf40);
extern "C" NAKED register_t __cdecl internal_638cf40()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        push ebx
        push esi
        push edi
        je public_638cfc3
        mov edx, dword ptr ds : [public_658b810]
        public_638cf59 : nop
        test edx, edx
        je public_638d1ae
        mov dword ptr ss : [esp+0xC], edx
        public_638cf65 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx+0x30]
        xor ebx, ebx
        cmp eax, ebx
        je public_638d1ae
        inc dword ptr ds : [public_658b8e4]
        mov eax, dword ptr ds : [ecx+0x3C]
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x14], ebx
        je public_638d10c
        mov ebx, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_638d10c
        public_638cfa2 : nop
        test edi, edi
        jne public_638d079
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        jne public_638d079
        mov dword ptr ss : [esp+0x14], ebx
        mov edi, 1
        jmp public_638d0f3
        public_638cfc3 : nop
        mov edx, dword ptr ds : [public_658b81c]
        test edx, edx
        je public_638cffc
        mov eax, edx
        mov esi, 0x1000
        public_638cfd4 : nop
        mov ecx, dword ptr ds : [eax+0x30]
        test ecx, ecx
        je public_638cffc
        mov edi, dword ptr ds : [eax+0x3C]
        mov edi, dword ptr ds : [edi+4]
        test dword ptr ds : [edi+0x50], esi
        je public_638d044
        test dword ptr ds : [eax+0x50], 0x108000
        jne public_638d044
        mov edi, dword ptr ds : [eax+0x18]
        test edi, edi
        je public_638d044
        mov eax, ecx
        test eax, eax
        jne public_638cfd4
        public_638cffc : nop
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        je public_638cf59
        mov eax, dword ptr ds : [public_658b8e8]
        test eax, eax
        je public_638cf59
        cmp dword ptr ds : [public_658b078], 2
        jl public_638d1eb
        mov edx, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fa1a0 @0x638d029*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa1a0
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638d044 : nop
        cmp dword ptr ds : [public_658b078], 2
        mov dword ptr ds : [public_658b8e8], 0
        jl public_638d070
        mov eax, dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63fa174 @0x638d061*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa174
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_638d070 : nop
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638d079 : nop
        mov eax, dword ptr ds : [ecx+0x34]
        mov esi, dword ptr ds : [eax+edi*4+4]
        mov ecx, dword ptr ds : [public_658b8e4]
        mov dword ptr ds : [esi+0x10], ecx
        mov ecx, dword ptr ds : [public_658bb90]
        lea edx, ss:[esp+0x18]
        inc edi
        inc ecx
        push edx
        mov dword ptr ds : [public_658bb90], ecx
        mov eax, dword ptr ds : [esi+8]
        push ebx
        push eax
        call public_637fd60
        fld qword ptr ds : [public_658b6a0]
        fchs 
        add esp, 0xC
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        je public_638d0f3
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        mov dword ptr ds : [public_658b8e8], 0
        je public_638d1f7
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        jne public_638d1f7
        fld qword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_658b6a0]
        fnstsw ax
        test ah, 0x41
        je public_638d1f7
        public_638d0f3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0xC]
        add eax, 4
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], eax
        jne public_638cfa2
        public_638d10c : nop
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        jne public_638d19b
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x34]
        test eax, eax
        je public_638d19b
        mov esi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test esi, esi
        je public_638d19b
        mov edx, dword ptr ds : [public_658b8e4]
        public_638d135 : nop
        cmp dword ptr ds : [esi+0x10], edx
        jne public_638d145
        mov esi, dword ptr ds : [eax]
        add eax, 4
        test esi, esi
        jne public_638d135
        jmp public_638d19b
        public_638d145 : nop
        mov edi, dword ptr ds : [public_658bb90]
        lea eax, ss:[esp+0x18]
        push eax
        inc edi
        push ecx
        mov dword ptr ds : [public_658bb90], edi
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_637fd60
        fld qword ptr ds : [public_658b6a0]
        fchs 
        add esp, 0xC
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        je public_638d19b
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        mov dword ptr ds : [public_658b8e8], 0
        je public_638d1f7
        fld qword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_658b6a0]
        fnstsw ax
        test ah, 0x41
        je public_638d1f7
        public_638d19b : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx+0x30]
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_638cf65
        public_638d1ae : nop
        cmp dword ptr ds : [public_658b078], 2
        jl public_638d1eb
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        je public_638d1cc
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        mov eax, offset public_63fa148
        je public_638d1d1
        public_638d1cc : nop
        mov eax, offset public_63fa138
        public_638d1d1 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63fa10c @0x638d1dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa10c
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_638d1eb : nop
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638d1f7 : nop
        cmp dword ptr ds : [public_658b078], 2
        jl public_638d234
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x14]
        push eax
        mov eax, dword ptr ds : [ebx+0x4C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        and edx, 0xFFFFFF
        push edx
        mov edx, dword ptr ds : [ecx+0x4C]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
/*FIXUP push offset public_63fa0c4 @0x638d225*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa0c4
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x1C
        public_638d234 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638cf40)
    }
}

#undef public_638cf59
#undef public_638cf65
#undef public_638cfa2
#undef public_638cfc3
#undef public_638cfd4
#undef public_638cffc
#undef public_638d044
#undef public_638d070
#undef public_638d079
#undef public_638d0f3
#undef public_638d10c
#undef public_638d135
#undef public_638d145
#undef public_638d19b
#undef public_638d1ae
#undef public_638d1cc
#undef public_638d1d1
#undef public_638d1eb
#undef public_638d1f7
#undef public_638d234
