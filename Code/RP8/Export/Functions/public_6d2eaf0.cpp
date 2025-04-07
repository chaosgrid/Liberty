#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d2eb13 _public_6d2eb13
#define public_6d2eba5 _public_6d2eba5
#define public_6d2ebd2 _public_6d2ebd2
#define public_6d2ebf6 _public_6d2ebf6
#define public_6d2ebf8 _public_6d2ebf8
#define public_6d2ec1b _public_6d2ec1b
#define public_6d2ec21 _public_6d2ec21
#define public_6d2ecab _public_6d2ecab
#define public_6d2ecf2 _public_6d2ecf2
#define public_6d2ed1a _public_6d2ed1a
#define public_6d2ed40 _public_6d2ed40
#define public_6d2ed4c _public_6d2ed4c
#define public_6d2ed5d _public_6d2ed5d
#define public_6d2edad _public_6d2edad
#define public_6d2edd5 _public_6d2edd5
#define public_6d2edf1 _public_6d2edf1
#define public_6d2ee02 _public_6d2ee02
#define public_6d2ee14 _public_6d2ee14
#define public_6d2ee19 _public_6d2ee19
#define public_6d2ee67 _public_6d2ee67
#define public_6d2eeb4 _public_6d2eeb4
#define public_6d2eedc _public_6d2eedc
#define public_6d2eef8 _public_6d2eef8
#define public_6d2ef09 _public_6d2ef09
#define public_6d2ef1b _public_6d2ef1b
#define public_6d2ef6a _public_6d2ef6a
#define public_6d2ef92 _public_6d2ef92
#define public_6d2efb8 _public_6d2efb8
#define public_6d2efc4 _public_6d2efc4
#define public_6d2efd5 _public_6d2efd5
#define public_6d2efda _public_6d2efda

PROC_DECLARE(0x6d2eaf0, internal_6d2eaf0, public_6d2eaf0);
extern "C" NAKED register_t __cdecl internal_6d2eaf0()
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
        jge public_6d2eb13
        mov dword ptr ss : [ebp-0x10], 0
        public_6d2eb13 : nop
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
        call public_6d2f1c0
        add esp, 8
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+0x10]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [edx+0x10], ecx
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax+4]
        je public_6d2eba5
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d2eba5
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+0xC]
        sbb ecx, ecx
        neg ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d2ebf8
        public_6d2eba5 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d2ebd2
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+8], eax
        jmp public_6d2ebf6
        public_6d2ebd2 : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d2ebf6
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        public_6d2ebf6 : nop
        jmp public_6d2ec1b
        public_6d2ebf8 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d2ec1b
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], ecx
        public_6d2ec1b : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0xC], edx
        public_6d2ec21 : nop
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx+4]
        je public_6d2efda
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        movsx edx, byte ptr ds : [ecx+0x20]
        test edx, edx
        jne public_6d2efda
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d2ee19
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        movsx edx, byte ptr ds : [ecx+0x20]
        test edx, edx
        jne public_6d2ecab
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
        jmp public_6d2ee14
        public_6d2ecab : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d2ed5d
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
        je public_6d2ecf2
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx+4], eax
        public_6d2ecf2 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d2ed1a
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d2ed4c
        public_6d2ed1a : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d2ed40
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x30]
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ecx], edx
        jmp public_6d2ed4c
        public_6d2ed40 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ecx+8], edx
        public_6d2ed4c : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+4], eax
        public_6d2ed5d : nop
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
        je public_6d2edad
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+4], ecx
        public_6d2edad : nop
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x3C]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d2edd5
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d2ee02
        public_6d2edd5 : nop
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x3C]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d2edf1
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d2ee02
        public_6d2edf1 : nop
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x38]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx], edx
        public_6d2ee02 : nop
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [edx+4], eax
        public_6d2ee14 : nop
        jmp public_6d2efd5
        public_6d2ee19 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x40], eax
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+0x10], edx
        mov eax, dword ptr ss : [ebp+0x10]
        movsx ecx, byte ptr ds : [eax+0x20]
        test ecx, ecx
        jne public_6d2ee67
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0xC], ecx
        jmp public_6d2efd5
        public_6d2ee67 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d2ef1b
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
        je public_6d2eeb4
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx+4], eax
        public_6d2eeb4 : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d2eedc
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d2ef09
        public_6d2eedc : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d2eef8
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [edx+8], eax
        jmp public_6d2ef09
        public_6d2eef8 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [eax], ecx
        public_6d2ef09 : nop
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [ecx+4], edx
        public_6d2ef1b : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
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
        je public_6d2ef6a
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [edx+4], eax
        public_6d2ef6a : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x5C]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d2ef92
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d2efc4
        public_6d2ef92 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x54], edx
        mov eax, dword ptr ss : [ebp-0x54]
        mov ecx, dword ptr ss : [ebp-0x5C]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d2efb8
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp-0x58]
        mov edx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [ecx], edx
        jmp public_6d2efc4
        public_6d2efb8 : nop
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [ecx+8], edx
        public_6d2efc4 : nop
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx+4], eax
        public_6d2efd5 : nop
        jmp public_6d2ec21
        public_6d2efda : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d2eaf0)
    }
}

#undef public_6d2eb13
#undef public_6d2eba5
#undef public_6d2ebd2
#undef public_6d2ebf6
#undef public_6d2ebf8
#undef public_6d2ec1b
#undef public_6d2ec21
#undef public_6d2ecab
#undef public_6d2ecf2
#undef public_6d2ed1a
#undef public_6d2ed40
#undef public_6d2ed4c
#undef public_6d2ed5d
#undef public_6d2edad
#undef public_6d2edd5
#undef public_6d2edf1
#undef public_6d2ee02
#undef public_6d2ee14
#undef public_6d2ee19
#undef public_6d2ee67
#undef public_6d2eeb4
#undef public_6d2eedc
#undef public_6d2eef8
#undef public_6d2ef09
#undef public_6d2ef1b
#undef public_6d2ef6a
#undef public_6d2ef92
#undef public_6d2efb8
#undef public_6d2efc4
#undef public_6d2efd5
#undef public_6d2efda
