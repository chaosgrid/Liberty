#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1e200);
CLANG_FORWARD_PROC_SYMBOL(public_6d1ee50);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d1e223 _public_6d1e223
#define public_6d1e2b5 _public_6d1e2b5
#define public_6d1e2e2 _public_6d1e2e2
#define public_6d1e306 _public_6d1e306
#define public_6d1e308 _public_6d1e308
#define public_6d1e32b _public_6d1e32b
#define public_6d1e331 _public_6d1e331
#define public_6d1e3bb _public_6d1e3bb
#define public_6d1e402 _public_6d1e402
#define public_6d1e42a _public_6d1e42a
#define public_6d1e450 _public_6d1e450
#define public_6d1e45c _public_6d1e45c
#define public_6d1e46d _public_6d1e46d
#define public_6d1e4bd _public_6d1e4bd
#define public_6d1e4e5 _public_6d1e4e5
#define public_6d1e501 _public_6d1e501
#define public_6d1e512 _public_6d1e512
#define public_6d1e524 _public_6d1e524
#define public_6d1e529 _public_6d1e529
#define public_6d1e577 _public_6d1e577
#define public_6d1e5c4 _public_6d1e5c4
#define public_6d1e5ec _public_6d1e5ec
#define public_6d1e608 _public_6d1e608
#define public_6d1e619 _public_6d1e619
#define public_6d1e62b _public_6d1e62b
#define public_6d1e67a _public_6d1e67a
#define public_6d1e6a2 _public_6d1e6a2
#define public_6d1e6c8 _public_6d1e6c8
#define public_6d1e6d4 _public_6d1e6d4
#define public_6d1e6e5 _public_6d1e6e5
#define public_6d1e6ea _public_6d1e6ea

PROC_DECLARE(0x6d1e200, internal_6d1e200, public_6d1e200);
extern "C" NAKED register_t __cdecl internal_6d1e200()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x60
        mov dword ptr ss : [ebp-0x60], ecx
        mov dword ptr ss : [ebp-0x14], 0x38
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x10], eax
        cmp dword ptr ss : [ebp-0x10], 0
        jge public_6d1e223
        mov dword ptr ss : [ebp-0x10], 0
        public_6d1e223 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0xC], eax
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [edx+0x35], 0
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
        call public_6d1ee50
        add esp, 8
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+0x10]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [edx+0x10], ecx
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax+4]
        je public_6d1e2b5
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d1e2b5
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+0xC]
        sbb ecx, ecx
        neg ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d1e308
        public_6d1e2b5 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1e2e2
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+8], eax
        jmp public_6d1e306
        public_6d1e2e2 : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1e306
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        public_6d1e306 : nop
        jmp public_6d1e32b
        public_6d1e308 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1e32b
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], ecx
        public_6d1e32b : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0xC], edx
        public_6d1e331 : nop
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx+4]
        je public_6d1e6ea
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        movsx edx, byte ptr ds : [ecx+0x34]
        test edx, edx
        jne public_6d1e6ea
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d1e529
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        movsx edx, byte ptr ds : [ecx+0x34]
        test edx, edx
        jne public_6d1e3bb
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [edx+0x34], 1
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp+0xC], edx
        jmp public_6d1e524
        public_6d1e3bb : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d1e46d
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d1e402
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx+4], eax
        public_6d1e402 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1e42a
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1e45c
        public_6d1e42a : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1e450
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x30]
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1e45c
        public_6d1e450 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ecx+8], edx
        public_6d1e45c : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+4], eax
        public_6d1e46d : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 1
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x3C], edx
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x34], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d1e4bd
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+4], ecx
        public_6d1e4bd : nop
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x3C]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d1e4e5
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d1e512
        public_6d1e4e5 : nop
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x3C]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1e501
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d1e512
        public_6d1e501 : nop
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x38]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx], edx
        public_6d1e512 : nop
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [edx+4], eax
        public_6d1e524 : nop
        jmp public_6d1e6e5
        public_6d1e529 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x40], eax
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+0x10], edx
        mov eax, dword ptr ss : [ebp+0x10]
        movsx ecx, byte ptr ds : [eax+0x34]
        test ecx, ecx
        jne public_6d1e577
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x34], 1
        mov ecx, dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0xC], ecx
        jmp public_6d1e6e5
        public_6d1e577 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d1e62b
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x48], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [ecx+8]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d1e5c4
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx+4], eax
        public_6d1e5c4 : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1e5ec
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1e619
        public_6d1e5ec : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d1e608
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [edx+8], eax
        jmp public_6d1e619
        public_6d1e608 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [eax], ecx
        public_6d1e619 : nop
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [ecx+4], edx
        public_6d1e62b : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x5C], ecx
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d1e67a
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [edx+4], eax
        public_6d1e67a : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x5C]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1e6a2
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1e6d4
        public_6d1e6a2 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x54], edx
        mov eax, dword ptr ss : [ebp-0x54]
        mov ecx, dword ptr ss : [ebp-0x5C]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1e6c8
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp-0x58]
        mov edx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1e6d4
        public_6d1e6c8 : nop
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [ecx+8], edx
        public_6d1e6d4 : nop
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx+4], eax
        public_6d1e6e5 : nop
        jmp public_6d1e331
        public_6d1e6ea : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x34], 1
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d1e200)
    }
}

#undef public_6d1e223
#undef public_6d1e2b5
#undef public_6d1e2e2
#undef public_6d1e306
#undef public_6d1e308
#undef public_6d1e32b
#undef public_6d1e331
#undef public_6d1e3bb
#undef public_6d1e402
#undef public_6d1e42a
#undef public_6d1e450
#undef public_6d1e45c
#undef public_6d1e46d
#undef public_6d1e4bd
#undef public_6d1e4e5
#undef public_6d1e501
#undef public_6d1e512
#undef public_6d1e524
#undef public_6d1e529
#undef public_6d1e577
#undef public_6d1e5c4
#undef public_6d1e5ec
#undef public_6d1e608
#undef public_6d1e619
#undef public_6d1e62b
#undef public_6d1e67a
#undef public_6d1e6a2
#undef public_6d1e6c8
#undef public_6d1e6d4
#undef public_6d1e6e5
#undef public_6d1e6ea
