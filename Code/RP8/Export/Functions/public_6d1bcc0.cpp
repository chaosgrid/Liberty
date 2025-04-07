#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c910);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d1bd0a _public_6d1bd0a
#define public_6d1bd25 _public_6d1bd25
#define public_6d1bd2e _public_6d1bd2e
#define public_6d1bd45 _public_6d1bd45
#define public_6d1bd54 _public_6d1bd54
#define public_6d1bd8b _public_6d1bd8b
#define public_6d1bdc0 _public_6d1bdc0
#define public_6d1bde2 _public_6d1bde2
#define public_6d1be08 _public_6d1be08
#define public_6d1be14 _public_6d1be14
#define public_6d1be57 _public_6d1be57
#define public_6d1be85 _public_6d1be85
#define public_6d1beab _public_6d1beab
#define public_6d1beb7 _public_6d1beb7
#define public_6d1becf _public_6d1becf
#define public_6d1bef9 _public_6d1bef9
#define public_6d1beff _public_6d1beff
#define public_6d1bf16 _public_6d1bf16
#define public_6d1bf2a _public_6d1bf2a
#define public_6d1bf3d _public_6d1bf3d
#define public_6d1bf61 _public_6d1bf61
#define public_6d1bf67 _public_6d1bf67
#define public_6d1bf80 _public_6d1bf80
#define public_6d1bf8f _public_6d1bf8f
#define public_6d1bf9f _public_6d1bf9f
#define public_6d1c03f _public_6d1c03f
#define public_6d1c06d _public_6d1c06d
#define public_6d1c093 _public_6d1c093
#define public_6d1c09f _public_6d1c09f
#define public_6d1c0bc _public_6d1c0bc
#define public_6d1c0ee _public_6d1c0ee
#define public_6d1c141 _public_6d1c141
#define public_6d1c16f _public_6d1c16f
#define public_6d1c18b _public_6d1c18b
#define public_6d1c19c _public_6d1c19c
#define public_6d1c1ba _public_6d1c1ba
#define public_6d1c215 _public_6d1c215
#define public_6d1c243 _public_6d1c243
#define public_6d1c269 _public_6d1c269
#define public_6d1c275 _public_6d1c275
#define public_6d1c28b _public_6d1c28b
#define public_6d1c290 _public_6d1c290
#define public_6d1c318 _public_6d1c318
#define public_6d1c352 _public_6d1c352
#define public_6d1c37a _public_6d1c37a
#define public_6d1c397 _public_6d1c397
#define public_6d1c3cc _public_6d1c3cc
#define public_6d1c3fe _public_6d1c3fe
#define public_6d1c45c _public_6d1c45c
#define public_6d1c490 _public_6d1c490
#define public_6d1c4c5 _public_6d1c4c5
#define public_6d1c4d4 _public_6d1c4d4
#define public_6d1c502 _public_6d1c502
#define public_6d1c575 _public_6d1c575
#define public_6d1c5af _public_6d1c5af
#define public_6d1c5d7 _public_6d1c5d7
#define public_6d1c5f4 _public_6d1c5f4
#define public_6d1c614 _public_6d1c614
#define public_6d1c619 _public_6d1c619
#define public_6d1c620 _public_6d1c620

PROC_DECLARE(0x6d1bcc0, internal_6d1bcc0, public_6d1bcc0);
extern "C" NAKED register_t __cdecl internal_6d1bcc0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xB4
        mov dword ptr ss : [ebp-0xB4], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x1C], eax
        lea ecx, ss:[ebp+0xC]
        call public_6d1c910
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d1bd0a
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d1bd54
        public_6d1bd0a : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d1bd25
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d1bd54
        public_6d1bd25 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x20], eax
        public_6d1bd2e : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx]
        movsx eax, byte ptr ds : [edx+0x25]
        test eax, eax
        jne public_6d1bd45
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x20], edx
        jmp public_6d1bd2e
        public_6d1bd45 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], edx
        public_6d1bd54 : nop
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, dword ptr ss : [ebp-0xC]
        je public_6d1be57
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-8]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d1bd8b
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d1bdc0
        public_6d1bd8b : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], edx
        public_6d1bdc0 : nop
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ss : [ebp-0xC]
        jne public_6d1bde2
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], edx
        jmp public_6d1be14
        public_6d1bde2 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [ebp-0xC]
        jne public_6d1be08
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        jmp public_6d1be14
        public_6d1be08 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+8], ecx
        public_6d1be14 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0x24
        mov dword ptr ss : [ebp-0x38], edx
        mov eax, dword ptr ss : [ebp-8]
        add eax, 0x24
        mov dword ptr ss : [ebp-0x34], eax
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ss : [ebp-0x2D], dl
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ss : [ebp-0x38]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        mov eax, dword ptr ss : [ebp-0x38]
        mov cl, byte ptr ss : [ebp-0x2D]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-8], edx
        jmp public_6d1bf8f
        public_6d1be57 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ss : [ebp-0xC]
        jne public_6d1be85
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+4], edx
        jmp public_6d1beb7
        public_6d1be85 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x3C], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [ebp-0xC]
        jne public_6d1beab
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x40], edx
        mov eax, dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        jmp public_6d1beb7
        public_6d1beab : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], ecx
        public_6d1beb7 : nop
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ss : [ebp-0xC]
        je public_6d1becf
        jmp public_6d1bf2a
        public_6d1becf : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d1bef9
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x48], ecx
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ecx
        jmp public_6d1bf2a
        public_6d1bef9 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x4C], edx
        public_6d1beff : nop
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ds : [eax]
        movsx edx, byte ptr ds : [ecx+0x25]
        test edx, edx
        jne public_6d1bf16
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x4C], ecx
        jmp public_6d1beff
        public_6d1bf16 : nop
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [ecx], edx
        public_6d1bf2a : nop
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ss : [ebp-0xC]
        je public_6d1bf3d
        jmp public_6d1bf8f
        public_6d1bf3d : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d1bf61
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+8], eax
        jmp public_6d1bf8f
        public_6d1bf61 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x54], ecx
        public_6d1bf67 : nop
        mov edx, dword ptr ss : [ebp-0x54]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax+0x25]
        test ecx, ecx
        jne public_6d1bf80
        mov edx, dword ptr ss : [ebp-0x54]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x54], eax
        jmp public_6d1bf67
        public_6d1bf80 : nop
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [edx+8], eax
        public_6d1bf8f : nop
        mov ecx, dword ptr ss : [ebp-8]
        movsx edx, byte ptr ds : [ecx+0x24]
        cmp edx, 1
        jne public_6d1c620
        public_6d1bf9f : nop
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ds : [ecx+4]
        je public_6d1c619
        mov eax, dword ptr ss : [ebp-4]
        movsx ecx, byte ptr ds : [eax+0x24]
        cmp ecx, 1
        jne public_6d1c619
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp-0x58]
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d1c290
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x10]
        movsx ecx, byte ptr ds : [eax+0x24]
        test ecx, ecx
        jne public_6d1c0bc
        mov edx, dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x68], eax
        mov ecx, dword ptr ss : [ebp-0x68]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x5C], edx
        mov eax, dword ptr ss : [ebp-0x68]
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [ecx+8]
        je public_6d1c03f
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [ecx+4], edx
        public_6d1c03f : nop
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ss : [ebp-0x68]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x68]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6d1c06d
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [ecx+4], edx
        jmp public_6d1c09f
        public_6d1c06d : nop
        mov eax, dword ptr ss : [ebp-0x68]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x60], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ss : [ebp-0x68]
        cmp eax, dword ptr ds : [edx]
        jne public_6d1c093
        mov ecx, dword ptr ss : [ebp-0x68]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x64], edx
        mov eax, dword ptr ss : [ebp-0x64]
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [eax], ecx
        jmp public_6d1c09f
        public_6d1c093 : nop
        mov edx, dword ptr ss : [ebp-0x68]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [eax+8], ecx
        public_6d1c09f : nop
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x68]
        mov edx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x10], edx
        public_6d1c0bc : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        movsx edx, byte ptr ds : [ecx+0x24]
        cmp edx, 1
        jne public_6d1c0ee
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx+0x24]
        cmp edx, 1
        jne public_6d1c0ee
        mov eax, dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d1c28b
        public_6d1c0ee : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx+0x24]
        cmp edx, 1
        jne public_6d1c1ba
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x6C], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d1c141
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+4], ecx
        public_6d1c141 : nop
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d1c16f
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d1c19c
        public_6d1c16f : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1c18b
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d1c19c
        public_6d1c18b : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x70], eax
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [ecx], edx
        public_6d1c19c : nop
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x10], eax
        public_6d1c1ba : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x10]
        mov cl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [eax+0x24], cl
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x80], ecx
        mov edx, dword ptr ss : [ebp-0x80]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x74], eax
        mov ecx, dword ptr ss : [ebp-0x80]
        mov edx, dword ptr ss : [ebp-0x74]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d1c215
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x80]
        mov dword ptr ds : [edx+4], eax
        public_6d1c215 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ss : [ebp-0x80]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x80]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1c243
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1c275
        public_6d1c243 : nop
        mov ecx, dword ptr ss : [ebp-0x80]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x78], edx
        mov eax, dword ptr ss : [ebp-0x78]
        mov ecx, dword ptr ss : [ebp-0x80]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1c269
        mov edx, dword ptr ss : [ebp-0x80]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x7C], eax
        mov ecx, dword ptr ss : [ebp-0x7C]
        mov edx, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1c275
        public_6d1c269 : nop
        mov eax, dword ptr ss : [ebp-0x80]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [ecx+8], edx
        public_6d1c275 : nop
        mov eax, dword ptr ss : [ebp-0x74]
        mov ecx, dword ptr ss : [ebp-0x80]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x80]
        mov eax, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1c619
        public_6d1c28b : nop
        jmp public_6d1c614
        public_6d1c290 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x84], edx
        mov eax, dword ptr ss : [ebp-0x84]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        movsx eax, byte ptr ds : [edx+0x24]
        test eax, eax
        jne public_6d1c3cc
        mov ecx, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x90], edx
        mov eax, dword ptr ss : [ebp-0x90]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x88], ecx
        mov edx, dword ptr ss : [ebp-0x90]
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d1c318
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp-0x90]
        mov dword ptr ds : [eax+4], ecx
        public_6d1c318 : nop
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ss : [ebp-0x90]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x90]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d1c352
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d1c397
        public_6d1c352 : nop
        mov edx, dword ptr ss : [ebp-0x90]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x90]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1c37a
        mov edx, dword ptr ss : [ebp-0x90]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d1c397
        public_6d1c37a : nop
        mov edx, dword ptr ss : [ebp-0x90]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x8C], eax
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov edx, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [ecx], edx
        public_6d1c397 : nop
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ss : [ebp-0x90]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x90]
        mov eax, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x94], edx
        mov eax, dword ptr ss : [ebp-0x94]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x14], ecx
        public_6d1c3cc : nop
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax+0x24]
        cmp ecx, 1
        jne public_6d1c3fe
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        movsx ecx, byte ptr ds : [eax+0x24]
        cmp ecx, 1
        jne public_6d1c3fe
        mov edx, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d1c614
        public_6d1c3fe : nop
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        movsx ecx, byte ptr ds : [eax+0x24]
        cmp ecx, 1
        jne public_6d1c502
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+8]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x98], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0x98]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x98]
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d1c45c
        mov ecx, dword ptr ss : [ebp-0x98]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx+4], eax
        public_6d1c45c : nop
        mov ecx, dword ptr ss : [ebp-0x98]
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x14]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1c490
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x98]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1c4d4
        public_6d1c490 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x9C], edx
        mov eax, dword ptr ss : [ebp-0x9C]
        mov ecx, dword ptr ss : [ebp-0x14]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1c4c5
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0xA0], eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov edx, dword ptr ss : [ebp-0x98]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1c4d4
        public_6d1c4c5 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x98]
        mov dword ptr ds : [ecx+8], edx
        public_6d1c4d4 : nop
        mov eax, dword ptr ss : [ebp-0x98]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x98]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0xA4], edx
        mov eax, dword ptr ss : [ebp-0xA4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x14], ecx
        public_6d1c502 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dl, byte ptr ds : [eax+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0xB0], edx
        mov eax, dword ptr ss : [ebp-0xB0]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0xA8], ecx
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ss : [ebp-0xA8]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0xA8]
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d1c575
        mov edx, dword ptr ss : [ebp-0xA8]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [eax+4], ecx
        public_6d1c575 : nop
        mov edx, dword ptr ss : [ebp-0xA8]
        mov eax, dword ptr ss : [ebp-0xB0]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0xB0]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d1c5af
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d1c5f4
        public_6d1c5af : nop
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0xB0]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1c5d7
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d1c5f4
        public_6d1c5d7 : nop
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0xAC], eax
        mov ecx, dword ptr ss : [ebp-0xAC]
        mov edx, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [ecx], edx
        public_6d1c5f4 : nop
        mov eax, dword ptr ss : [ebp-0xA8]
        mov ecx, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1c619
        public_6d1c614 : nop
        jmp public_6d1bf9f
        public_6d1c619 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov byte ptr ds : [ecx+0x24], 1
        public_6d1c620 : nop
        mov edx, dword ptr ss : [ebp-8]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+0x10]
        sub ecx, 1
        mov edx, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [edx+0x10], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d1bcc0)
    }
}

#undef public_6d1bd0a
#undef public_6d1bd25
#undef public_6d1bd2e
#undef public_6d1bd45
#undef public_6d1bd54
#undef public_6d1bd8b
#undef public_6d1bdc0
#undef public_6d1bde2
#undef public_6d1be08
#undef public_6d1be14
#undef public_6d1be57
#undef public_6d1be85
#undef public_6d1beab
#undef public_6d1beb7
#undef public_6d1becf
#undef public_6d1bef9
#undef public_6d1beff
#undef public_6d1bf16
#undef public_6d1bf2a
#undef public_6d1bf3d
#undef public_6d1bf61
#undef public_6d1bf67
#undef public_6d1bf80
#undef public_6d1bf8f
#undef public_6d1bf9f
#undef public_6d1c03f
#undef public_6d1c06d
#undef public_6d1c093
#undef public_6d1c09f
#undef public_6d1c0bc
#undef public_6d1c0ee
#undef public_6d1c141
#undef public_6d1c16f
#undef public_6d1c18b
#undef public_6d1c19c
#undef public_6d1c1ba
#undef public_6d1c215
#undef public_6d1c243
#undef public_6d1c269
#undef public_6d1c275
#undef public_6d1c28b
#undef public_6d1c290
#undef public_6d1c318
#undef public_6d1c352
#undef public_6d1c37a
#undef public_6d1c397
#undef public_6d1c3cc
#undef public_6d1c3fe
#undef public_6d1c45c
#undef public_6d1c490
#undef public_6d1c4c5
#undef public_6d1c4d4
#undef public_6d1c502
#undef public_6d1c575
#undef public_6d1c5af
#undef public_6d1c5d7
#undef public_6d1c5f4
#undef public_6d1c614
#undef public_6d1c619
#undef public_6d1c620
