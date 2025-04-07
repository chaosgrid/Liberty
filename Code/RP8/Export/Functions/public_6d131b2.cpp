#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d13220 _public_6d13220
#define public_6d1327b _public_6d1327b
#define public_6d132b2 _public_6d132b2
#define public_6d132ce _public_6d132ce
#define public_6d13397 _public_6d13397
#define public_6d1339d _public_6d1339d
#define public_6d133a2 _public_6d133a2
#define public_6d133d9 _public_6d133d9
#define public_6d133f5 _public_6d133f5
#define public_6d134d4 _public_6d134d4
#define public_6d134dd _public_6d134dd
#define public_6d134e3 _public_6d134e3
#define public_6d134e6 _public_6d134e6

PROC_DECLARE(0x6d131b2, internal_6d131b2, public_6d131b2);
extern "C" NAKED register_t __cdecl internal_6d131b2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x4034
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x124], 0
        jne public_6d13220
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
/*FIXUP push offset public_6d69a90 @0x6d131f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69a90
        push 0x1131
/*FIXUP push offset public_6d69ac0 @0x6d13200*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69ac0
/*FIXUP push offset public_6d69b0c @0x6d13205*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69b0c
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d134e6
        public_6d13220 : nop
        mov dword ptr ss : [ebp-4], 0x80004005
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        je public_6d134e3
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], ecx
        cmp dword ptr ss : [ebp-8], 0
        je public_6d134e3
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x124]
        mov dword ptr ss : [ebp-0x4034], eax
        mov dword ptr ss : [ebp-0x10], 0x80004005
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d133a2
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, dword ptr ds : [edx+0x18]
        jne public_6d1327b
        mov dword ptr ss : [ebp-0x10], 0
        jmp public_6d1339d
        public_6d1327b : nop
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d132ce
        mov edx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [edx+4], 0
        je public_6d132ce
        mov eax, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [eax+8], 0
        je public_6d132b2
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x30]
        public_6d132b2 : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+4], 0
        public_6d132ce : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ss : [ebp+0x10]
        shl ecx, 1
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 4
        push edx
        push 0
        push 0x65
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        mov eax, dword ptr ss : [ebp-0x4034]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x4034]
        push edx
        call dword ptr ds : [ecx+0x60]
        mov dword ptr ss : [ebp-0x14], eax
        cmp dword ptr ss : [ebp-0x14], 0
        jge public_6d13397
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
/*FIXUP push offset public_6d6afd4 @0x6d13321*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6afd4
        lea edx, ss:[ebp-0x2018]
        push edx
        call public_6d168f0
        add esp, 0x10
        mov dword ptr ss : [ebp-0x2020], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x201C]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x201C], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x201C]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x201C], eax
        mov ecx, dword ptr ss : [ebp-0x2020]
        push ecx
        push 0x31
/*FIXUP push offset public_6d6af80 @0x6d1337c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6af80
/*FIXUP push offset public_6d6ade0 @0x6d13381*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov edx, dword ptr ss : [ebp-0x201C]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d13397 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x10], ecx
        public_6d1339d : nop
        jmp public_6d134dd
        public_6d133a2 : nop
        mov edx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [edx+4], 0
        je public_6d133f5
        mov eax, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [eax+4], 0
        je public_6d133f5
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+8], 0
        je public_6d133d9
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x30]
        public_6d133d9 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], 0
        public_6d133f5 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edx+0x18], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ss : [ebp+0x10]
        shl edx, 1
        mov dword ptr ss : [ebp-0x2028], edx
        mov eax, dword ptr ss : [ebp-8]
        add eax, 4
        push eax
        push 0
        push 0x65
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx]
        push edx
        mov eax, dword ptr ss : [ebp-0x2028]
        push eax
        mov ecx, dword ptr ss : [ebp-0x4034]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x4034]
        push eax
        call dword ptr ds : [edx+0x60]
        mov dword ptr ss : [ebp-0x2024], eax
        cmp dword ptr ss : [ebp-0x2024], 0
        jge public_6d134d4
        mov ecx, dword ptr ss : [ebp-0x2028]
        push ecx
        mov edx, dword ptr ss : [ebp-0x2024]
        push edx
/*FIXUP push offset public_6d6afd4 @0x6d1345e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6afd4
        lea eax, ss:[ebp-0x4028]
        push eax
        call public_6d168f0
        add esp, 0x10
        mov dword ptr ss : [ebp-0x4030], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x402C]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x402C], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x402C]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x402C], ecx
        mov edx, dword ptr ss : [ebp-0x4030]
        push edx
        push 0x31
/*FIXUP push offset public_6d6af80 @0x6d134b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6af80
/*FIXUP push offset public_6d6ade0 @0x6d134bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ade0
        mov eax, dword ptr ss : [ebp-0x402C]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d134d4 : nop
        mov edx, dword ptr ss : [ebp-0x2024]
        mov dword ptr ss : [ebp-0x10], edx
        public_6d134dd : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], eax
        public_6d134e3 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d134e6 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d131b2)
    }
}

#undef public_6d13220
#undef public_6d1327b
#undef public_6d132b2
#undef public_6d132ce
#undef public_6d13397
#undef public_6d1339d
#undef public_6d133a2
#undef public_6d133d9
#undef public_6d133f5
#undef public_6d134d4
#undef public_6d134dd
#undef public_6d134e3
#undef public_6d134e6
