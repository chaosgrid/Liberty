#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16310);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d11fe6 _public_6d11fe6
#define public_6d1204d _public_6d1204d
#define public_6d12069 _public_6d12069
#define public_6d120c4 _public_6d120c4
#define public_6d120e3 _public_6d120e3
#define public_6d12100 _public_6d12100
#define public_6d12126 _public_6d12126
#define public_6d1214c _public_6d1214c
#define public_6d1216b _public_6d1216b
#define public_6d12268 _public_6d12268
#define public_6d12284 _public_6d12284
#define public_6d12286 _public_6d12286

PROC_DECLARE(0x6d11f78, internal_6d11f78, public_6d11f78);
extern "C" NAKED register_t __cdecl internal_6d11f78()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2030
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x120], 0
        jne public_6d11fe6
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0xC]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0xC]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0xC], ecx
/*FIXUP push offset public_6d694d0 @0x6d11fbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d694d0
        push 0x1010
/*FIXUP push offset public_6d69500 @0x6d11fc6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69500
/*FIXUP push offset public_6d6954c @0x6d11fcb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6954c
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d12286
        public_6d11fe6 : nop
        mov dword ptr ss : [ebp-4], 0x80004005
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        je public_6d12284
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], ecx
        cmp dword ptr ss : [ebp-8], 0
        je public_6d12284
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x120]
        mov dword ptr ss : [ebp-0x202C], eax
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+0x20], 0
        je public_6d12069
        mov edx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [edx+0x20], 0
        je public_6d12069
        mov eax, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [eax+0x10], 0
        je public_6d1204d
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x30]
        public_6d1204d : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+0x20], 0
        public_6d12069 : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x2028], edx
        mov dword ptr ss : [ebp-0x201C], 0
        mov eax, dword ptr ss : [ebp-0x2028]
        and eax, 0xC
        cmp eax, 0xC
        jne public_6d120c4
        mov ecx, dword ptr ss : [ebp-0x201C]
        add ecx, 0x1C
        mov dword ptr ss : [ebp-0x201C], ecx
        jmp public_6d12100
        public_6d120c4 : nop
        mov edx, dword ptr ss : [ebp-0x2028]
        and edx, 4
        cmp edx, 4
        jne public_6d120e3
        mov eax, dword ptr ss : [ebp-0x201C]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x201C], eax
        jmp public_6d12100
        public_6d120e3 : nop
        mov ecx, dword ptr ss : [ebp-0x2028]
        and ecx, 2
        cmp ecx, 2
        jne public_6d12100
        mov edx, dword ptr ss : [ebp-0x201C]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x201C], edx
        public_6d12100 : nop
        mov dword ptr ss : [ebp-0x2020], 0
        mov eax, dword ptr ss : [ebp-0x2028]
        and eax, 0x10
        test eax, eax
        je public_6d12126
        mov ecx, dword ptr ss : [ebp-0x2020]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x2020], ecx
        public_6d12126 : nop
        mov dword ptr ss : [ebp-0x2024], 0
        mov edx, dword ptr ss : [ebp-0x2028]
        and edx, 0x40
        test edx, edx
        je public_6d1214c
        mov eax, dword ptr ss : [ebp-0x2024]
        add eax, 4
        mov dword ptr ss : [ebp-0x2024], eax
        public_6d1214c : nop
        mov ecx, dword ptr ss : [ebp-0x2028]
        and ecx, 0x80
        test ecx, ecx
        je public_6d1216b
        mov edx, dword ptr ss : [ebp-0x2024]
        add edx, 4
        mov dword ptr ss : [ebp-0x2024], edx
        public_6d1216b : nop
        mov eax, dword ptr ss : [ebp-0x2028]
        push eax
        call public_6d16310
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x201C]
        add ecx, dword ptr ss : [ebp-0x2020]
        add ecx, dword ptr ss : [ebp-0x2024]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+8]
        imul eax, ecx
        mov dword ptr ss : [ebp-0x2014], eax
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 0x20
        push ecx
        push 0
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        mov edx, dword ptr ss : [ebp-0x2014]
        push edx
        mov eax, dword ptr ss : [ebp-0x202C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x202C]
        push edx
        call dword ptr ds : [ecx+0x5C]
        mov dword ptr ss : [ebp-0x2018], eax
        mov eax, dword ptr ss : [ebp-0x2018]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d12268
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d69568 @0x6d121ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69568
        lea edx, ss:[ebp-0x200C]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2030], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2010]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2010], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2010]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2010], eax
        mov ecx, dword ptr ss : [ebp-0x2030]
        push ecx
        push 0x101B
/*FIXUP push offset public_6d69578 @0x6d1224d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69578
/*FIXUP push offset public_6d695c4 @0x6d12252*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d695c4
        mov edx, dword ptr ss : [ebp-0x2010]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d12268 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-8]
        cmp edx, dword ptr ds : [ecx+0x12C]
        jne public_6d12284
        push 0
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x28]
        public_6d12284 : nop
        xor eax, eax
        public_6d12286 : nop
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d11f78)
    }
}

#undef public_6d11fe6
#undef public_6d1204d
#undef public_6d12069
#undef public_6d120c4
#undef public_6d120e3
#undef public_6d12100
#undef public_6d12126
#undef public_6d1214c
#undef public_6d1216b
#undef public_6d12268
#undef public_6d12284
#undef public_6d12286
