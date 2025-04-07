#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d162b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16310);
CLANG_FORWARD_PROC_SYMBOL(public_6d163b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d163f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1a920);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b480);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bc60);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c770);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d11934 _public_6d11934
#define public_6d119d9 _public_6d119d9
#define public_6d11a0b _public_6d11a0b
#define public_6d11a93 _public_6d11a93
#define public_6d11aa7 _public_6d11aa7
#define public_6d11ae2 _public_6d11ae2
#define public_6d11bd3 _public_6d11bd3
#define public_6d11bfc _public_6d11bfc
#define public_6d11c16 _public_6d11c16
#define public_6d11ca6 _public_6d11ca6
#define public_6d11cb0 _public_6d11cb0
#define public_6d11cfd _public_6d11cfd
#define public_6d11d1b _public_6d11d1b
#define public_6d11d34 _public_6d11d34
#define public_6d11d43 _public_6d11d43
#define public_6d11d9a _public_6d11d9a
#define public_6d11da8 _public_6d11da8
#define public_6d11dab _public_6d11dab

PROC_DECLARE(0x6d118c8, internal_6d118c8, public_6d118c8);
extern "C" NAKED register_t __cdecl internal_6d118c8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC4
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x120], 0
        jne public_6d11934
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
/*FIXUP push offset public_6d693a0 @0x6d1190a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d693a0
        push 0xFD0
/*FIXUP push offset public_6d693d0 @0x6d11914*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d693d0
/*FIXUP push offset public_6d6941c @0x6d11919*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6941c
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d11dab
        public_6d11934 : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov dword ptr ss : [ebp-8], 0
        mov ecx, dword ptr ss : [ebp+0x18]
        and ecx, 1
        test ecx, ecx
        je public_6d11bfc
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0xAC], edx
        mov eax, dword ptr ss : [ebp+8]
        sub eax, 0x10
        mov dword ptr ss : [ebp-0xA8], eax
        push 0x200
        lea ecx, ss:[ebp-0x74]
        call public_6d1b480
        push eax
        lea ecx, ss:[ebp-0xAC]
        push ecx
        lea ecx, ss:[ebp-0x50]
        call public_6d1a920
        push eax
        lea edx, ss:[ebp-0x7C]
        push edx
        mov ecx, dword ptr ss : [ebp-0xA8]
        add ecx, 0x16C
        call public_6d19aa0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x28], eax
        lea ecx, ss:[ebp-0x4C]
        call public_6d1bc60
        lea ecx, ss:[ebp-0x74]
        call public_6d1bc60
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        xor eax, eax
        cmp dword ptr ds : [edx+0x20], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d119d9
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ss : [ebp+0x10]
        jae public_6d11bd3
        public_6d119d9 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x8C], edx
        mov dword ptr ss : [ebp-0x88], 0
        mov eax, dword ptr ss : [ebp-0x8C]
        and eax, 0x10
        test eax, eax
        je public_6d11a0b
        mov ecx, dword ptr ss : [ebp-0x88]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x88], ecx
        public_6d11a0b : nop
        mov edx, dword ptr ss : [ebp-0x8C]
        push edx
        call public_6d16310
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp-0x8C]
        push eax
        call public_6d163b0
        add esp, 4
        mov edi, eax
        mov ecx, dword ptr ss : [ebp-0x8C]
        push ecx
        call public_6d162b0
        add esp, 4
        add eax, dword ptr ss : [ebp-0x88]
        add eax, edi
        add eax, esi
        mov dword ptr ss : [ebp-0x80], eax
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x80]
        imul eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x84], eax
        mov ecx, dword ptr ss : [ebp-0x84]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0xA8]
        mov eax, dword ptr ds : [edx+0x180]
        sub eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [ecx+0x180], eax
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x24], eax
        cmp dword ptr ss : [ebp-0x24], 0
        jne public_6d11a93
        mov dword ptr ss : [ebp-0x24], 0x400
        public_6d11a93 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        cmp ecx, dword ptr ss : [ebp+0x10]
        jae public_6d11aa7
        mov edx, dword ptr ss : [ebp+0x10]
        add edx, 0x3FF
        mov dword ptr ss : [ebp-0x24], edx
        public_6d11aa7 : nop
        mov eax, dword ptr ss : [ebp-0x24]
        shr eax, 0xA
        shl eax, 0xA
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0xAC]
        mov dword ptr ss : [ebp-0x9C], ecx
        mov edx, dword ptr ss : [ebp-0xA8]
        mov eax, dword ptr ds : [edx+0x130]
        mov dword ptr ss : [ebp-0x98], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        cmp dword ptr ds : [ecx+0x20], 0
        je public_6d11ae2
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d1bc60
        public_6d11ae2 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6d163f0
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx+8]
        imul edx, eax
        mov dword ptr ss : [ebp-0x90], edx
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x20
        push eax
        push 0
        mov ecx, dword ptr ss : [ebp-0x9C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        push eax
        mov ecx, dword ptr ss : [ebp-0x90]
        push ecx
        mov edx, dword ptr ss : [ebp-0x98]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x98]
        push ecx
        call dword ptr ds : [eax+0x5C]
        mov dword ptr ss : [ebp-0x94], eax
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6d163f0
        add esp, 4
        mov dword ptr ss : [ebp-0xA0], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0xA0]
        imul edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0xA4], edx
        mov eax, dword ptr ss : [ebp-0xA4]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov edx, dword ptr ds : [ecx+0x180]
        add edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [eax+0x180], edx
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov edx, dword ptr ss : [ebp-0x14]
        cmp edx, dword ptr ds : [ecx+0x13C]
        jne public_6d11bd3
        push 0
        mov eax, dword ptr ss : [ebp-0xA8]
        add eax, 0x10
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov edx, dword ptr ds : [ecx+0x10]
        push eax
        call dword ptr ds : [edx+0x28]
        public_6d11bd3 : nop
        push 0
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0xA8]
        add ecx, 0x138
        call public_6d1c770
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d11d9a
        public_6d11bfc : nop
        mov dword ptr ss : [ebp-0xC], 0
        mov edx, dword ptr ss : [ebp+0x18]
        and edx, 2
        test edx, edx
        je public_6d11c16
        mov eax, dword ptr ss : [ebp-0xC]
        or eax, 0x10
        mov dword ptr ss : [ebp-0xC], eax
        public_6d11c16 : nop
        push 0x24
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0xB4], eax
        cmp dword ptr ss : [ebp-0xB4], 0
        je public_6d11ca6
        mov ecx, dword ptr ss : [ebp-0xC]
        or ecx, 8
        mov edx, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [edx+0x18], 0
        mov eax, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov dword ptr ss : [ebp-0xC4], ecx
        jmp public_6d11cb0
        public_6d11ca6 : nop
        mov dword ptr ss : [ebp-0xC4], 0
        public_6d11cb0 : nop
        mov edx, dword ptr ss : [ebp-0xC4]
        mov dword ptr ss : [ebp-0xB0], edx
        mov dword ptr ss : [ebp-0xC0], 0
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x22D4
        mov dword ptr ss : [ebp-0xBC], eax
        cmp dword ptr ss : [ebp-0xC0], 0
        jne public_6d11cfd
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0xB8], edx
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d11d1b
        public_6d11cfd : nop
        mov edx, dword ptr ss : [ebp-0xC0]
        mov eax, dword ptr ds : [edx+0x18]
        mov dword ptr ss : [ebp-0xB8], eax
        mov ecx, dword ptr ss : [ebp-0xC0]
        mov edx, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [ecx+0x18], edx
        public_6d11d1b : nop
        cmp dword ptr ss : [ebp-0xB8], 0
        jne public_6d11d34
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [eax], ecx
        jmp public_6d11d43
        public_6d11d34 : nop
        mov edx, dword ptr ss : [ebp-0xB8]
        mov eax, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [edx+0x14], eax
        public_6d11d43 : nop
        mov ecx, dword ptr ss : [ebp-0xB0]
        mov edx, dword ptr ss : [ebp-0xC0]
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ss : [ebp-0xB0]
        mov ecx, dword ptr ss : [ebp-0xB8]
        mov dword ptr ds : [eax+0x18], ecx
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [edx+8]
        add eax, 1
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov dword ptr ds : [ecx+8], eax
        mov edx, dword ptr ss : [ebp-0xB0]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov dword ptr ss : [ebp-4], eax
        public_6d11d9a : nop
        cmp dword ptr ss : [ebp-4], 0
        jl public_6d11da8
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        public_6d11da8 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d11dab : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d118c8)
    }
}

#undef public_6d11934
#undef public_6d119d9
#undef public_6d11a0b
#undef public_6d11a93
#undef public_6d11aa7
#undef public_6d11ae2
#undef public_6d11bd3
#undef public_6d11bfc
#undef public_6d11c16
#undef public_6d11ca6
#undef public_6d11cb0
#undef public_6d11cfd
#undef public_6d11d1b
#undef public_6d11d34
#undef public_6d11d43
#undef public_6d11d9a
#undef public_6d11da8
#undef public_6d11dab
