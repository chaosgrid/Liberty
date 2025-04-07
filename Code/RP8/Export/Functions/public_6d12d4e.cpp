#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d12dbc _public_6d12dbc
#define public_6d12de7 _public_6d12de7
#define public_6d12dfa _public_6d12dfa
#define public_6d12e70 _public_6d12e70
#define public_6d12e7a _public_6d12e7a
#define public_6d12ec8 _public_6d12ec8
#define public_6d12ee6 _public_6d12ee6
#define public_6d12eff _public_6d12eff
#define public_6d12f0e _public_6d12f0e
#define public_6d12ff1 _public_6d12ff1
#define public_6d12ffc _public_6d12ffc

PROC_DECLARE(0x6d12d4e, internal_6d12d4e, public_6d12d4e);
extern "C" NAKED register_t __cdecl internal_6d12d4e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2030
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x124], 0
        jne public_6d12dbc
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x10]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x10]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x10], ecx
/*FIXUP push offset public_6d698d0 @0x6d12d92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d698d0
        push 0x10FB
/*FIXUP push offset public_6d69908 @0x6d12d9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69908
/*FIXUP push offset public_6d69954 @0x6d12da1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69954
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d12ffc
        public_6d12dbc : nop
        mov dword ptr ss : [ebp-0xC], 0x80004005
        mov dword ptr ss : [ebp-8], 0
        mov dword ptr ss : [ebp-4], 0
        mov ecx, dword ptr ss : [ebp+0x14]
        and ecx, 1
        test ecx, ecx
        je public_6d12de7
        mov edx, dword ptr ss : [ebp-4]
        or edx, 0x200
        mov dword ptr ss : [ebp-4], edx
        public_6d12de7 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        and eax, 2
        test eax, eax
        je public_6d12dfa
        mov ecx, dword ptr ss : [ebp-4]
        or ecx, 0x10
        mov dword ptr ss : [ebp-4], ecx
        public_6d12dfa : nop
        push 0x1C
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x201C], eax
        cmp dword ptr ss : [ebp-0x201C], 0
        je public_6d12e70
        mov edx, dword ptr ss : [ebp-4]
        or edx, 8
        mov eax, dword ptr ss : [ebp-0x201C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp-0x201C]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x201C]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x201C]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x201C]
        mov dword ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ss : [ebp-0x201C]
        mov dword ptr ds : [edx+0x18], 0
        mov eax, dword ptr ss : [ebp-0x201C]
        mov dword ptr ss : [ebp-0x2030], eax
        jmp public_6d12e7a
        public_6d12e70 : nop
        mov dword ptr ss : [ebp-0x2030], 0
        public_6d12e7a : nop
        mov ecx, dword ptr ss : [ebp-0x2030]
        mov dword ptr ss : [ebp-0x2018], ecx
        mov dword ptr ss : [ebp-0x2028], 0
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x22E4
        mov dword ptr ss : [ebp-0x2024], edx
        cmp dword ptr ss : [ebp-0x2028], 0
        jne public_6d12ec8
        mov eax, dword ptr ss : [ebp-0x2024]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x2020], ecx
        mov edx, dword ptr ss : [ebp-0x2024]
        mov eax, dword ptr ss : [ebp-0x2018]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d12ee6
        public_6d12ec8 : nop
        mov ecx, dword ptr ss : [ebp-0x2028]
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [ebp-0x2020], edx
        mov eax, dword ptr ss : [ebp-0x2028]
        mov ecx, dword ptr ss : [ebp-0x2018]
        mov dword ptr ds : [eax+0x10], ecx
        public_6d12ee6 : nop
        cmp dword ptr ss : [ebp-0x2020], 0
        jne public_6d12eff
        mov edx, dword ptr ss : [ebp-0x2024]
        mov eax, dword ptr ss : [ebp-0x2018]
        mov dword ptr ds : [edx], eax
        jmp public_6d12f0e
        public_6d12eff : nop
        mov ecx, dword ptr ss : [ebp-0x2020]
        mov edx, dword ptr ss : [ebp-0x2018]
        mov dword ptr ds : [ecx+0xC], edx
        public_6d12f0e : nop
        mov eax, dword ptr ss : [ebp-0x2018]
        mov ecx, dword ptr ss : [ebp-0x2028]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [ebp-0x2018]
        mov eax, dword ptr ss : [ebp-0x2020]
        mov dword ptr ds : [edx+0x10], eax
        mov ecx, dword ptr ss : [ebp-0x2024]
        mov edx, dword ptr ds : [ecx+8]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x2024]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ss : [ebp-0x2018]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp-8]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        jge public_6d12ff1
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d69970 @0x6d12f78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69970
        lea edx, ss:[ebp-0x2010]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x202C], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2014]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2014], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2014]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2014], eax
        mov ecx, dword ptr ss : [ebp-0x202C]
        push ecx
        push 0x110B
/*FIXUP push offset public_6d69980 @0x6d12fd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69980
/*FIXUP push offset public_6d699cc @0x6d12fdb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d699cc
        mov edx, dword ptr ss : [ebp-0x2014]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d12ff1 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0xC]
        public_6d12ffc : nop
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d12d4e)
    }
}

#undef public_6d12dbc
#undef public_6d12de7
#undef public_6d12dfa
#undef public_6d12e70
#undef public_6d12e7a
#undef public_6d12ec8
#undef public_6d12ee6
#undef public_6d12eff
#undef public_6d12f0e
#undef public_6d12ff1
#undef public_6d12ffc
