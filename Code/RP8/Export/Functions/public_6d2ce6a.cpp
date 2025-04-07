#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2be34);
CLANG_FORWARD_PROC_SYMBOL(public_6d2ce6a);
CLANG_FORWARD_PROC_SYMBOL(public_6d2d520);
CLANG_FORWARD_PROC_SYMBOL(public_6d2d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f000);

#define public_6d2ce8c _public_6d2ce8c
#define public_6d2ce9d _public_6d2ce9d
#define public_6d2ceb5 _public_6d2ceb5
#define public_6d2cec7 _public_6d2cec7
#define public_6d2ceea _public_6d2ceea
#define public_6d2cefc _public_6d2cefc
#define public_6d2cf0d _public_6d2cf0d
#define public_6d2cf3e _public_6d2cf3e
#define public_6d2cf6a _public_6d2cf6a
#define public_6d2cf92 _public_6d2cf92
#define public_6d2cfae _public_6d2cfae
#define public_6d2cfbf _public_6d2cfbf
#define public_6d2cfc5 _public_6d2cfc5
#define public_6d2d008 _public_6d2d008
#define public_6d2d029 _public_6d2d029
#define public_6d2d02e _public_6d2d02e

PROC_DECLARE(0x6d2ce6a, internal_6d2ce6a, public_6d2ce6a);
extern "C" NAKED register_t __cdecl internal_6d2ce6a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x44
        mov dword ptr ss : [ebp-0x38], ecx
        mov dword ptr ss : [ebp-0xC], 0
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2ce8c
        mov dword ptr ss : [ebp-0x3C], 0
        jmp public_6d2ce9d
        public_6d2ce8c : nop
        mov eax, dword ptr ds : [public_6d728f8]
        sub eax, dword ptr ds : [public_6d728f4]
        sar eax, 2
        mov dword ptr ss : [ebp-0x3C], eax
        public_6d2ce9d : nop
        cmp dword ptr ss : [ebp-0x3C], 0
        jae public_6d2ceea
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2ceb5
        mov dword ptr ss : [ebp-0x40], 0
        jmp public_6d2cec7
        public_6d2ceb5 : nop
        mov ecx, dword ptr ds : [public_6d728f8]
        sub ecx, dword ptr ds : [public_6d728f4]
        sar ecx, 2
        mov dword ptr ss : [ebp-0x40], ecx
        public_6d2cec7 : nop
        mov edx, dword ptr ds : [public_6d728f8]
        mov dword ptr ss : [ebp-0x18], edx
        lea eax, ss:[ebp-0xC]
        push eax
        xor ecx, ecx
        sub ecx, dword ptr ss : [ebp-0x40]
        push ecx
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        mov ecx, offset public_6d728f0
        call public_6d2d5b0
        jmp public_6d2cf3e
        public_6d2ceea : nop
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2cefc
        mov dword ptr ss : [ebp-0x44], 0
        jmp public_6d2cf0d
        public_6d2cefc : nop
        mov eax, dword ptr ds : [public_6d728f8]
        sub eax, dword ptr ds : [public_6d728f4]
        sar eax, 2
        mov dword ptr ss : [ebp-0x44], eax
        public_6d2cf0d : nop
        cmp dword ptr ss : [ebp-0x44], 0
        jbe public_6d2cf3e
        mov ecx, dword ptr ds : [public_6d728f8]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        xor ecx, ecx
        shl ecx, 2
        mov edx, dword ptr ss : [ebp-0x20]
        add edx, ecx
        push edx
        mov ecx, offset public_6d728f0
        call public_6d2d520
        public_6d2cf3e : nop
        mov eax, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d2cfc5
        public_6d2cf6a : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx+0x21]
        test eax, eax
        jne public_6d2cf92
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        push edx
        call public_6d2f000
        add esp, 4
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d2cfbf
        public_6d2cf92 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x30], ecx
        mov edx, dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d2cfae
        mov ecx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d2cf92
        public_6d2cfae : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ss : [ebp-0x30]
        je public_6d2cfbf
        mov ecx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-4], ecx
        public_6d2cfbf : nop
        mov edx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x10], edx
        public_6d2cfc5 : nop
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x34], eax
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-4]
        sub edx, dword ptr ss : [ebp-0x14]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d2d02e
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0x10
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [eax+0xC], 0
        je public_6d2d008
        mov ecx, dword ptr ss : [ebp-8]
        mov byte ptr ds : [ecx+2], 1
        public_6d2d008 : nop
        mov edx, dword ptr ss : [ebp-8]
        movzx eax, byte ptr ds : [edx+1]
        test eax, eax
        je public_6d2d029
        mov ecx, dword ptr ss : [ebp-8]
        mov byte ptr ds : [ecx], 0
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ss : [ebp-0x38]
        push eax
        call public_6d2be34
        add esp, 8
        public_6d2d029 : nop
        jmp public_6d2cf6a
        public_6d2d02e : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2ce6a)
    }
}

#undef public_6d2ce8c
#undef public_6d2ce9d
#undef public_6d2ceb5
#undef public_6d2cec7
#undef public_6d2ceea
#undef public_6d2cefc
#undef public_6d2cf0d
#undef public_6d2cf3e
#undef public_6d2cf6a
#undef public_6d2cf92
#undef public_6d2cfae
#undef public_6d2cfbf
#undef public_6d2cfc5
#undef public_6d2d008
#undef public_6d2d029
#undef public_6d2d02e
