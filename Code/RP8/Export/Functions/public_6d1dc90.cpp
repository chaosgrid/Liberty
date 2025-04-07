#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1dc90);
CLANG_FORWARD_PROC_SYMBOL(public_6d1edb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d1dcb3 _public_6d1dcb3
#define public_6d1dd45 _public_6d1dd45
#define public_6d1dd72 _public_6d1dd72
#define public_6d1dd96 _public_6d1dd96
#define public_6d1dd98 _public_6d1dd98
#define public_6d1ddbb _public_6d1ddbb
#define public_6d1ddc1 _public_6d1ddc1
#define public_6d1de4b _public_6d1de4b
#define public_6d1de92 _public_6d1de92
#define public_6d1deba _public_6d1deba
#define public_6d1dee0 _public_6d1dee0
#define public_6d1deec _public_6d1deec
#define public_6d1defd _public_6d1defd
#define public_6d1df4d _public_6d1df4d
#define public_6d1df75 _public_6d1df75
#define public_6d1df91 _public_6d1df91
#define public_6d1dfa2 _public_6d1dfa2
#define public_6d1dfb4 _public_6d1dfb4
#define public_6d1dfb9 _public_6d1dfb9
#define public_6d1e007 _public_6d1e007
#define public_6d1e054 _public_6d1e054
#define public_6d1e07c _public_6d1e07c
#define public_6d1e098 _public_6d1e098
#define public_6d1e0a9 _public_6d1e0a9
#define public_6d1e0bb _public_6d1e0bb
#define public_6d1e10a _public_6d1e10a
#define public_6d1e132 _public_6d1e132
#define public_6d1e158 _public_6d1e158
#define public_6d1e164 _public_6d1e164
#define public_6d1e175 _public_6d1e175
#define public_6d1e17a _public_6d1e17a

PROC_DECLARE(0x6d1dc90, internal_6d1dc90, public_6d1dc90);
extern "C" NAKED register_t __cdecl internal_6d1dc90()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x60
        mov dword ptr ss : [ebp-0x60], ecx
        mov dword ptr ss : [ebp-0x14], 0x28
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x10], eax
        cmp dword ptr ss : [ebp-0x10], 0
        jge public_6d1dcb3
        mov dword ptr ss : [ebp-0x10], 0
        public_6d1dcb3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0xC], eax
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [edx+0x25], 0
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
        call public_6d1edb0
        add esp, 8
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+0x10]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [edx+0x10], ecx
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax+4]
        je public_6d1dd45
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d1dd45
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+0xC]
        sbb ecx, ecx
        neg ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d1dd98
        public_6d1dd45 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1dd72
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+8], eax
        jmp public_6d1dd96
        public_6d1dd72 : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1dd96
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        public_6d1dd96 : nop
        jmp public_6d1ddbb
        public_6d1dd98 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1ddbb
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], ecx
        public_6d1ddbb : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0xC], edx
        public_6d1ddc1 : nop
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx+4]
        je public_6d1e17a
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        movsx edx, byte ptr ds : [ecx+0x24]
        test edx, edx
        jne public_6d1e17a
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d1dfb9
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        movsx edx, byte ptr ds : [ecx+0x24]
        test edx, edx
        jne public_6d1de4b
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp+0xC], edx
        jmp public_6d1dfb4
        public_6d1de4b : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d1defd
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
        je public_6d1de92
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx+4], eax
        public_6d1de92 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1deba
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1deec
        public_6d1deba : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1dee0
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x30]
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1deec
        public_6d1dee0 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ecx+8], edx
        public_6d1deec : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+4], eax
        public_6d1defd : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
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
        je public_6d1df4d
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+4], ecx
        public_6d1df4d : nop
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x3C]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d1df75
        mov edx, dword ptr ss : [ebp-0x60]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d1dfa2
        public_6d1df75 : nop
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x3C]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d1df91
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d1dfa2
        public_6d1df91 : nop
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x38]
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx], edx
        public_6d1dfa2 : nop
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [edx+4], eax
        public_6d1dfb4 : nop
        jmp public_6d1e175
        public_6d1dfb9 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x40], eax
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+0x10], edx
        mov eax, dword ptr ss : [ebp+0x10]
        movsx ecx, byte ptr ds : [eax+0x24]
        test ecx, ecx
        jne public_6d1e007
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0xC], ecx
        jmp public_6d1e175
        public_6d1e007 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d1e0bb
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
        je public_6d1e054
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx+4], eax
        public_6d1e054 : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1e07c
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1e0a9
        public_6d1e07c : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d1e098
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [edx+8], eax
        jmp public_6d1e0a9
        public_6d1e098 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [eax], ecx
        public_6d1e0a9 : nop
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [ecx+4], edx
        public_6d1e0bb : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
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
        je public_6d1e10a
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [edx+4], eax
        public_6d1e10a : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x5C]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d1e132
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d1e164
        public_6d1e132 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x54], edx
        mov eax, dword ptr ss : [ebp-0x54]
        mov ecx, dword ptr ss : [ebp-0x5C]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d1e158
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp-0x58]
        mov edx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1e164
        public_6d1e158 : nop
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [ecx+8], edx
        public_6d1e164 : nop
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx+4], eax
        public_6d1e175 : nop
        jmp public_6d1ddc1
        public_6d1e17a : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d1dc90)
    }
}

#undef public_6d1dcb3
#undef public_6d1dd45
#undef public_6d1dd72
#undef public_6d1dd96
#undef public_6d1dd98
#undef public_6d1ddbb
#undef public_6d1ddc1
#undef public_6d1de4b
#undef public_6d1de92
#undef public_6d1deba
#undef public_6d1dee0
#undef public_6d1deec
#undef public_6d1defd
#undef public_6d1df4d
#undef public_6d1df75
#undef public_6d1df91
#undef public_6d1dfa2
#undef public_6d1dfb4
#undef public_6d1dfb9
#undef public_6d1e007
#undef public_6d1e054
#undef public_6d1e07c
#undef public_6d1e098
#undef public_6d1e0a9
#undef public_6d1e0bb
#undef public_6d1e10a
#undef public_6d1e132
#undef public_6d1e158
#undef public_6d1e164
#undef public_6d1e175
#undef public_6d1e17a
