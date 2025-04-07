#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d29dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2a8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d29de3 _public_6d29de3
#define public_6d29e79 _public_6d29e79
#define public_6d29ea6 _public_6d29ea6
#define public_6d29eca _public_6d29eca
#define public_6d29ecc _public_6d29ecc
#define public_6d29eef _public_6d29eef
#define public_6d29ef5 _public_6d29ef5
#define public_6d29f7f _public_6d29f7f
#define public_6d29fc6 _public_6d29fc6
#define public_6d29fee _public_6d29fee
#define public_6d2a014 _public_6d2a014
#define public_6d2a020 _public_6d2a020
#define public_6d2a031 _public_6d2a031
#define public_6d2a081 _public_6d2a081
#define public_6d2a0a9 _public_6d2a0a9
#define public_6d2a0c5 _public_6d2a0c5
#define public_6d2a0d6 _public_6d2a0d6
#define public_6d2a0e8 _public_6d2a0e8
#define public_6d2a0ed _public_6d2a0ed
#define public_6d2a13b _public_6d2a13b
#define public_6d2a188 _public_6d2a188
#define public_6d2a1b0 _public_6d2a1b0
#define public_6d2a1cc _public_6d2a1cc
#define public_6d2a1dd _public_6d2a1dd
#define public_6d2a1ef _public_6d2a1ef
#define public_6d2a23e _public_6d2a23e
#define public_6d2a266 _public_6d2a266
#define public_6d2a28c _public_6d2a28c
#define public_6d2a298 _public_6d2a298
#define public_6d2a2a9 _public_6d2a2a9
#define public_6d2a2ae _public_6d2a2ae

PROC_DECLARE(0x6d29dc0, internal_6d29dc0, public_6d29dc0);
extern "C" NAKED register_t __cdecl internal_6d29dc0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x60
        mov dword ptr ss : [ebp-0x60], ecx
        mov dword ptr ss : [ebp-0x14], 0x24
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x10], eax
        cmp dword ptr ss : [ebp-0x10], 0
        jge public_6d29de3
        mov dword ptr ss : [ebp-0x10], 0
        public_6d29de3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0xC], eax
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [edx+0x21], 0
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0xC
        push edx
        call public_6d2a8c0
        add esp, 8
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+0x10]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [edx+0x10], ecx
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax+4]
        je public_6d29e79
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d29e79
        mov ecx, dword ptr ss : [ebp+0x10]
        add ecx, 0xC
        push ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        call dword ptr ds : [public_6d5e0ac]
        add esp, 8
        movzx eax, al
        test eax, eax
        je public_6d29ecc
        public_6d29e79 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d29ea6
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d29eca
        public_6d29ea6 : nop
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp+0x10]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d29eca
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], eax
        public_6d29eca : nop
        jmp public_6d29eef
        public_6d29ecc : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp+0x10]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d29eef
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+8], edx
        public_6d29eef : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0xC], eax
        public_6d29ef5 : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+4]
        je public_6d2a2ae
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        movsx eax, byte ptr ds : [edx+0x20]
        test eax, eax
        jne public_6d2a2ae
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6d2a0ed
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        movsx eax, byte ptr ds : [edx+0x20]
        test eax, eax
        jne public_6d29f7f
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp+0xC], eax
        jmp public_6d2a0e8
        public_6d29f7f : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d2a031
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d29fc6
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_6d29fc6 : nop
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d29fee
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d2a020
        public_6d29fee : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d2a014
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x30], ecx
        mov edx, dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx], eax
        jmp public_6d2a020
        public_6d2a014 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+8], eax
        public_6d2a020 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [eax+4], ecx
        public_6d2a031 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [ecx+8]
        je public_6d2a081
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [ecx+4], edx
        public_6d2a081 : nop
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x3C]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6d2a0a9
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx+4], edx
        jmp public_6d2a0d6
        public_6d2a0a9 : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x3C]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d2a0c5
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx+8], edx
        jmp public_6d2a0d6
        public_6d2a0c5 : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x38], ecx
        mov edx, dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [edx], eax
        public_6d2a0d6 : nop
        mov ecx, dword ptr ss : [ebp-0x34]
        mov edx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+4], ecx
        public_6d2a0e8 : nop
        jmp public_6d2a2a9
        public_6d2a0ed : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ss : [ebp-0x40]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        movsx edx, byte ptr ds : [ecx+0x20]
        test edx, edx
        jne public_6d2a13b
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp+0xC], edx
        jmp public_6d2a2a9
        public_6d2a13b : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x44], ecx
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx]
        jne public_6d2a1ef
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x48], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d2a188
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_6d2a188 : nop
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d2a1b0
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d2a1dd
        public_6d2a1b0 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d2a1cc
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d2a1dd
        public_6d2a1cc : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x4C], eax
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov edx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [ecx], edx
        public_6d2a1dd : nop
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [edx+4], eax
        public_6d2a1ef : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x5C], edx
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x50], ecx
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d2a23e
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [eax+4], ecx
        public_6d2a23e : nop
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x5C]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d2a266
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d2a298
        public_6d2a266 : nop
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x54], eax
        mov ecx, dword ptr ss : [ebp-0x54]
        mov edx, dword ptr ss : [ebp-0x5C]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d2a28c
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x58], ecx
        mov edx, dword ptr ss : [ebp-0x58]
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx], eax
        jmp public_6d2a298
        public_6d2a28c : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx+8], eax
        public_6d2a298 : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [eax+4], ecx
        public_6d2a2a9 : nop
        jmp public_6d29ef5
        public_6d2a2ae : nop
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d29dc0)
    }
}

#undef public_6d29de3
#undef public_6d29e79
#undef public_6d29ea6
#undef public_6d29eca
#undef public_6d29ecc
#undef public_6d29eef
#undef public_6d29ef5
#undef public_6d29f7f
#undef public_6d29fc6
#undef public_6d29fee
#undef public_6d2a014
#undef public_6d2a020
#undef public_6d2a031
#undef public_6d2a081
#undef public_6d2a0a9
#undef public_6d2a0c5
#undef public_6d2a0d6
#undef public_6d2a0e8
#undef public_6d2a0ed
#undef public_6d2a13b
#undef public_6d2a188
#undef public_6d2a1b0
#undef public_6d2a1cc
#undef public_6d2a1dd
#undef public_6d2a1ef
#undef public_6d2a23e
#undef public_6d2a266
#undef public_6d2a28c
#undef public_6d2a298
#undef public_6d2a2a9
#undef public_6d2a2ae
