#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1c990);
CLANG_FORWARD_PROC_SYMBOL(public_6d1d590);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d1c9da _public_6d1c9da
#define public_6d1c9f5 _public_6d1c9f5
#define public_6d1c9fe _public_6d1c9fe
#define public_6d1ca15 _public_6d1ca15
#define public_6d1ca24 _public_6d1ca24
#define public_6d1ca5b _public_6d1ca5b
#define public_6d1ca90 _public_6d1ca90
#define public_6d1cab2 _public_6d1cab2
#define public_6d1cad8 _public_6d1cad8
#define public_6d1cae4 _public_6d1cae4
#define public_6d1cb27 _public_6d1cb27
#define public_6d1cb55 _public_6d1cb55
#define public_6d1cb7b _public_6d1cb7b
#define public_6d1cb87 _public_6d1cb87
#define public_6d1cb9f _public_6d1cb9f
#define public_6d1cbc9 _public_6d1cbc9
#define public_6d1cbcf _public_6d1cbcf
#define public_6d1cbe6 _public_6d1cbe6
#define public_6d1cbfa _public_6d1cbfa
#define public_6d1cc0d _public_6d1cc0d
#define public_6d1cc31 _public_6d1cc31
#define public_6d1cc37 _public_6d1cc37
#define public_6d1cc50 _public_6d1cc50
#define public_6d1cc5f _public_6d1cc5f
#define public_6d1cc6f _public_6d1cc6f
#define public_6d1cd0f _public_6d1cd0f
#define public_6d1cd3d _public_6d1cd3d
#define public_6d1cd63 _public_6d1cd63
#define public_6d1cd6f _public_6d1cd6f
#define public_6d1cd8c _public_6d1cd8c
#define public_6d1cdbe _public_6d1cdbe
#define public_6d1ce11 _public_6d1ce11
#define public_6d1ce3f _public_6d1ce3f
#define public_6d1ce5b _public_6d1ce5b
#define public_6d1ce6c _public_6d1ce6c
#define public_6d1ce8a _public_6d1ce8a
#define public_6d1cee5 _public_6d1cee5
#define public_6d1cf13 _public_6d1cf13
#define public_6d1cf39 _public_6d1cf39
#define public_6d1cf45 _public_6d1cf45
#define public_6d1cf5b _public_6d1cf5b
#define public_6d1cf60 _public_6d1cf60
#define public_6d1cfe8 _public_6d1cfe8
#define public_6d1d022 _public_6d1d022
#define public_6d1d04a _public_6d1d04a
#define public_6d1d067 _public_6d1d067
#define public_6d1d09c _public_6d1d09c
#define public_6d1d0ce _public_6d1d0ce
#define public_6d1d12c _public_6d1d12c
#define public_6d1d160 _public_6d1d160
#define public_6d1d195 _public_6d1d195
#define public_6d1d1a4 _public_6d1d1a4
#define public_6d1d1d2 _public_6d1d1d2
#define public_6d1d245 _public_6d1d245
#define public_6d1d27f _public_6d1d27f
#define public_6d1d2a7 _public_6d1d2a7
#define public_6d1d2c4 _public_6d1d2c4
#define public_6d1d2e4 _public_6d1d2e4
#define public_6d1d2e9 _public_6d1d2e9
#define public_6d1d2f0 _public_6d1d2f0
#define public_6d1d348 _public_6d1d348
#define public_6d1d36d _public_6d1d36d
#define public_6d1d385 _public_6d1d385

PROC_DECLARE(0x6d1c990, internal_6d1c990, public_6d1c990);
extern "C" NAKED register_t __cdecl internal_6d1c990()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xBC
        mov dword ptr ss : [ebp-0xBC], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x1C], eax
        lea ecx, ss:[ebp+0xC]
        call public_6d1d590
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d1c9da
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d1ca24
        public_6d1c9da : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d1c9f5
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d1ca24
        public_6d1c9f5 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x20], eax
        public_6d1c9fe : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx]
        movsx eax, byte ptr ds : [edx+0x35]
        test eax, eax
        jne public_6d1ca15
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x20], edx
        jmp public_6d1c9fe
        public_6d1ca15 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], edx
        public_6d1ca24 : nop
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, dword ptr ss : [ebp-0xC]
        je public_6d1cb27
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
        jne public_6d1ca5b
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d1ca90
        public_6d1ca5b : nop
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
        public_6d1ca90 : nop
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ss : [ebp-0xC]
        jne public_6d1cab2
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], edx
        jmp public_6d1cae4
        public_6d1cab2 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [ebp-0xC]
        jne public_6d1cad8
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        jmp public_6d1cae4
        public_6d1cad8 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+8], ecx
        public_6d1cae4 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0x34
        mov dword ptr ss : [ebp-0x38], edx
        mov eax, dword ptr ss : [ebp-8]
        add eax, 0x34
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
        jmp public_6d1cc5f
        public_6d1cb27 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ss : [ebp-0xC]
        jne public_6d1cb55
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+4], edx
        jmp public_6d1cb87
        public_6d1cb55 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x3C], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [ebp-0xC]
        jne public_6d1cb7b
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x40], edx
        mov eax, dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        jmp public_6d1cb87
        public_6d1cb7b : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], ecx
        public_6d1cb87 : nop
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ss : [ebp-0xC]
        je public_6d1cb9f
        jmp public_6d1cbfa
        public_6d1cb9f : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d1cbc9
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x48], ecx
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ecx
        jmp public_6d1cbfa
        public_6d1cbc9 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x4C], edx
        public_6d1cbcf : nop
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ds : [eax]
        movsx edx, byte ptr ds : [ecx+0x35]
        test edx, edx
        jne public_6d1cbe6
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x4C], ecx
        jmp public_6d1cbcf
        public_6d1cbe6 : nop
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [ecx], edx
        public_6d1cbfa : nop
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ss : [ebp-0xC]
        je public_6d1cc0d
        jmp public_6d1cc5f
        public_6d1cc0d : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d1cc31
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+8], eax
        jmp public_6d1cc5f
        public_6d1cc31 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x54], ecx
        public_6d1cc37 : nop
        mov edx, dword ptr ss : [ebp-0x54]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax+0x35]
        test ecx, ecx
        jne public_6d1cc50
        mov edx, dword ptr ss : [ebp-0x54]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x54], eax
        jmp public_6d1cc37
        public_6d1cc50 : nop
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [edx+8], eax
        public_6d1cc5f : nop
        mov ecx, dword ptr ss : [ebp-8]
        movsx edx, byte ptr ds : [ecx+0x34]
        cmp edx, 1
        jne public_6d1d2f0
        public_6d1cc6f : nop
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ds : [ecx+4]
        je public_6d1d2e9
        mov eax, dword ptr ss : [ebp-4]
        movsx ecx, byte ptr ds : [eax+0x34]
        cmp ecx, 1
        jne public_6d1d2e9
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp-0x58]
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d1cf60
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x10]
        movsx ecx, byte ptr ds : [eax+0x34]
        test ecx, ecx
        jne public_6d1cd8c
        mov edx, dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [edx+0x34], 1
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
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
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [ecx+8]
        je public_6d1cd0f
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [ecx+4], edx
        public_6d1cd0f : nop
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ss : [ebp-0x68]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x68]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6d1cd3d
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [ecx+4], edx
        jmp public_6d1cd6f
        public_6d1cd3d : nop
        mov eax, dword ptr ss : [ebp-0x68]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x60], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ss : [ebp-0x68]
        cmp eax, dword ptr ds : [edx]
        jne public_6d1cd63
        mov ecx, dword ptr ss : [ebp-0x68]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x64], edx
        mov eax, dword ptr ss : [ebp-0x64]
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [eax], ecx
        jmp public_6d1cd6f
        public_6d1cd63 : nop
        mov edx, dword ptr ss : [ebp-0x68]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [eax+8], ecx
        public_6d1cd6f : nop
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
        public_6d1cd8c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        movsx edx, byte ptr ds : [ecx+0x34]
        cmp edx, 1
        jne public_6d1cdbe
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx+0x34]
        cmp edx, 1
        jne public_6d1cdbe
        mov eax, dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [eax+0x34], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d1cf5b
        public_6d1cdbe : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx+0x34]
        cmp edx, 1
        jne public_6d1ce8a
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x6C], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d1ce11
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+4], ecx
        public_6d1ce11 : nop
        mov edx, dword ptr ss : [ebp-0x6C]
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d1ce3f
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d1ce6c
        public_6d1ce3f : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1ce5b
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d1ce6c
        public_6d1ce5b : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x70], eax
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [ecx], edx
        public_6d1ce6c : nop
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
        public_6d1ce8a : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x10]
        mov cl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [eax+0x34], cl
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x34], 1
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x34], 1
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
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d1cee5
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x80]
        mov dword ptr ds : [edx+4], eax
        public_6d1cee5 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        mov edx, dword ptr ss : [ebp-0x80]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x80]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1cf13
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1cf45
        public_6d1cf13 : nop
        mov ecx, dword ptr ss : [ebp-0x80]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x78], edx
        mov eax, dword ptr ss : [ebp-0x78]
        mov ecx, dword ptr ss : [ebp-0x80]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1cf39
        mov edx, dword ptr ss : [ebp-0x80]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x7C], eax
        mov ecx, dword ptr ss : [ebp-0x7C]
        mov edx, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1cf45
        public_6d1cf39 : nop
        mov eax, dword ptr ss : [ebp-0x80]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [ecx+8], edx
        public_6d1cf45 : nop
        mov eax, dword ptr ss : [ebp-0x74]
        mov ecx, dword ptr ss : [ebp-0x80]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x80]
        mov eax, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1d2e9
        public_6d1cf5b : nop
        jmp public_6d1d2e4
        public_6d1cf60 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x84], edx
        mov eax, dword ptr ss : [ebp-0x84]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        movsx eax, byte ptr ds : [edx+0x34]
        test eax, eax
        jne public_6d1d09c
        mov ecx, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x34], 0
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
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d1cfe8
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp-0x90]
        mov dword ptr ds : [eax+4], ecx
        public_6d1cfe8 : nop
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ss : [ebp-0x90]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x90]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d1d022
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d1d067
        public_6d1d022 : nop
        mov edx, dword ptr ss : [ebp-0x90]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x90]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1d04a
        mov edx, dword ptr ss : [ebp-0x90]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d1d067
        public_6d1d04a : nop
        mov edx, dword ptr ss : [ebp-0x90]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x8C], eax
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov edx, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [ecx], edx
        public_6d1d067 : nop
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
        public_6d1d09c : nop
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+8]
        movsx ecx, byte ptr ds : [eax+0x34]
        cmp ecx, 1
        jne public_6d1d0ce
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        movsx ecx, byte ptr ds : [eax+0x34]
        cmp ecx, 1
        jne public_6d1d0ce
        mov edx, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d1d2e4
        public_6d1d0ce : nop
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        movsx ecx, byte ptr ds : [eax+0x34]
        cmp ecx, 1
        jne public_6d1d1d2
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+8]
        mov byte ptr ds : [eax+0x34], 1
        mov ecx, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x98], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0x98]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x98]
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d1d12c
        mov ecx, dword ptr ss : [ebp-0x98]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx+4], eax
        public_6d1d12c : nop
        mov ecx, dword ptr ss : [ebp-0x98]
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x14]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1d160
        mov ecx, dword ptr ss : [ebp-0xBC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x98]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1d1a4
        public_6d1d160 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x9C], edx
        mov eax, dword ptr ss : [ebp-0x9C]
        mov ecx, dword ptr ss : [ebp-0x14]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1d195
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0xA0], eax
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov edx, dword ptr ss : [ebp-0x98]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1d1a4
        public_6d1d195 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x98]
        mov dword ptr ds : [ecx+8], edx
        public_6d1d1a4 : nop
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
        public_6d1d1d2 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dl, byte ptr ds : [eax+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        mov byte ptr ds : [eax+0x34], 1
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
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d1d245
        mov edx, dword ptr ss : [ebp-0xA8]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [eax+4], ecx
        public_6d1d245 : nop
        mov edx, dword ptr ss : [ebp-0xA8]
        mov eax, dword ptr ss : [ebp-0xB0]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0xB0]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d1d27f
        mov edx, dword ptr ss : [ebp-0xBC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d1d2c4
        public_6d1d27f : nop
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0xB0]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1d2a7
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d1d2c4
        public_6d1d2a7 : nop
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0xAC], eax
        mov ecx, dword ptr ss : [ebp-0xAC]
        mov edx, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [ecx], edx
        public_6d1d2c4 : nop
        mov eax, dword ptr ss : [ebp-0xA8]
        mov ecx, dword ptr ss : [ebp-0xB0]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0xB0]
        mov eax, dword ptr ss : [ebp-0xA8]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1d2e9
        public_6d1d2e4 : nop
        jmp public_6d1cc6f
        public_6d1d2e9 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov byte ptr ds : [ecx+0x34], 1
        public_6d1d2f0 : nop
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0xC
        mov dword ptr ss : [ebp-0xB8], edx
        mov eax, dword ptr ss : [ebp-0xB8]
        add eax, 4
        mov dword ptr ss : [ebp-0xB4], eax
        mov ecx, dword ptr ss : [ebp-0xB4]
        cmp dword ptr ds : [ecx+0x20], 0
        je public_6d1d36d
        mov edx, dword ptr ss : [ebp-0xB4]
        cmp dword ptr ds : [edx+0x10], 0
        je public_6d1d348
        mov eax, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ss : [ebp-0xB4]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x30]
        public_6d1d348 : nop
        mov eax, dword ptr ss : [ebp-0xB4]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [ebp-0xB4]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp-0xB4]
        mov dword ptr ds : [edx+0x20], 0
        public_6d1d36d : nop
        xor eax, eax
        and eax, 1
        test eax, eax
        je public_6d1d385
        mov ecx, dword ptr ss : [ebp-0xB8]
        push ecx
        call public_6d2f249
        add esp, 4
        public_6d1d385 : nop
        mov edx, dword ptr ss : [ebp-8]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-0xBC]
        mov ecx, dword ptr ds : [eax+0x10]
        sub ecx, 1
        mov edx, dword ptr ss : [ebp-0xBC]
        mov dword ptr ds : [edx+0x10], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d1c990)
    }
}

#undef public_6d1c9da
#undef public_6d1c9f5
#undef public_6d1c9fe
#undef public_6d1ca15
#undef public_6d1ca24
#undef public_6d1ca5b
#undef public_6d1ca90
#undef public_6d1cab2
#undef public_6d1cad8
#undef public_6d1cae4
#undef public_6d1cb27
#undef public_6d1cb55
#undef public_6d1cb7b
#undef public_6d1cb87
#undef public_6d1cb9f
#undef public_6d1cbc9
#undef public_6d1cbcf
#undef public_6d1cbe6
#undef public_6d1cbfa
#undef public_6d1cc0d
#undef public_6d1cc31
#undef public_6d1cc37
#undef public_6d1cc50
#undef public_6d1cc5f
#undef public_6d1cc6f
#undef public_6d1cd0f
#undef public_6d1cd3d
#undef public_6d1cd63
#undef public_6d1cd6f
#undef public_6d1cd8c
#undef public_6d1cdbe
#undef public_6d1ce11
#undef public_6d1ce3f
#undef public_6d1ce5b
#undef public_6d1ce6c
#undef public_6d1ce8a
#undef public_6d1cee5
#undef public_6d1cf13
#undef public_6d1cf39
#undef public_6d1cf45
#undef public_6d1cf5b
#undef public_6d1cf60
#undef public_6d1cfe8
#undef public_6d1d022
#undef public_6d1d04a
#undef public_6d1d067
#undef public_6d1d09c
#undef public_6d1d0ce
#undef public_6d1d12c
#undef public_6d1d160
#undef public_6d1d195
#undef public_6d1d1a4
#undef public_6d1d1d2
#undef public_6d1d245
#undef public_6d1d27f
#undef public_6d1d2a7
#undef public_6d1d2c4
#undef public_6d1d2e4
#undef public_6d1d2e9
#undef public_6d1d2f0
#undef public_6d1d348
#undef public_6d1d36d
#undef public_6d1d385
