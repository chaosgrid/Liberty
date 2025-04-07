#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2be34);
CLANG_FORWARD_PROC_SYMBOL(public_6d2c487);
CLANG_FORWARD_PROC_SYMBOL(public_6d2cb6f);
CLANG_FORWARD_PROC_SYMBOL(public_6d2e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f150);

#define public_6d2cbce _public_6d2cbce
#define public_6d2cbe2 _public_6d2cbe2
#define public_6d2cc1a _public_6d2cc1a
#define public_6d2cc23 _public_6d2cc23
#define public_6d2cc3a _public_6d2cc3a
#define public_6d2cca3 _public_6d2cca3
#define public_6d2ccb7 _public_6d2ccb7
#define public_6d2ccef _public_6d2ccef
#define public_6d2ccf8 _public_6d2ccf8
#define public_6d2cd19 _public_6d2cd19

PROC_DECLARE(0x6d2cb6f, internal_6d2cb6f, public_6d2cb6f);
extern "C" NAKED register_t __cdecl internal_6d2cb6f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x6C
        mov dword ptr ss : [ebp-0x64], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x30], eax
        lea ecx, ss:[ebp-0x30]
        push ecx
        lea edx, ss:[ebp-0x10]
        push edx
        mov ecx, offset public_6d728cc
        call public_6d2e9f0
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        sub edx, dword ptr ss : [ebp-0x18]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d2cbce
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0x30]
        cmp edx, dword ptr ds : [ecx+0xC]
        sbb eax, eax
        neg eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d2cbce
        lea edx, ss:[ebp-0x10]
        mov dword ptr ss : [ebp-0x68], edx
        jmp public_6d2cbe2
        public_6d2cbce : nop
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x1C], ecx
        lea edx, ss:[ebp-0x1C]
        mov dword ptr ss : [ebp-0x68], edx
        public_6d2cbe2 : nop
        mov eax, dword ptr ss : [ebp-0x68]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-8]
        sub edx, dword ptr ss : [ebp-0xC]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d2cc1a
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d2cc23
        public_6d2cc1a : nop
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 0x10
        mov dword ptr ss : [ebp-4], ecx
        public_6d2cc23 : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d2ccf8
        cmp dword ptr ss : [ebp+0xC], 0
        jne public_6d2cc3a
        mov al, 1
        jmp public_6d2cd19
        public_6d2cc3a : nop
        push 0
        mov edx, dword ptr ss : [ebp+8]
        push edx
        mov ecx, dword ptr ss : [ebp-0x64]
        call public_6d2c487
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x60], eax
        lea ecx, ss:[ebp-0x60]
        push ecx
        mov ecx, offset public_6d728cc
        call public_6d2f150
        mov dword ptr ss : [ebp-0x4C], eax
        mov edx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ss : [ebp-0x3C], edx
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov dword ptr ss : [ebp-0x44], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        sub edx, dword ptr ss : [ebp-0x44]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d2cca3
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ss : [ebp-0x60]
        cmp edx, dword ptr ds : [ecx+0xC]
        sbb eax, eax
        neg eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d2cca3
        lea edx, ss:[ebp-0x3C]
        mov dword ptr ss : [ebp-0x6C], edx
        jmp public_6d2ccb7
        public_6d2cca3 : nop
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp-0x58]
        mov dword ptr ss : [ebp-0x48], ecx
        lea edx, ss:[ebp-0x48]
        mov dword ptr ss : [ebp-0x6C], edx
        public_6d2ccb7 : nop
        mov eax, dword ptr ss : [ebp-0x6C]
        mov dword ptr ss : [ebp-0x40], eax
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x5C], eax
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ss : [ebp-0x38], ecx
        mov edx, dword ptr ss : [ebp-0x34]
        sub edx, dword ptr ss : [ebp-0x38]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d2ccef
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d2ccf8
        public_6d2ccef : nop
        mov ecx, dword ptr ss : [ebp-0x34]
        add ecx, 0x10
        mov dword ptr ss : [ebp-4], ecx
        public_6d2ccf8 : nop
        xor edx, edx
        cmp dword ptr ss : [ebp+0xC], 0
        setne dl
        mov eax, dword ptr ss : [ebp-4]
        mov byte ptr ds : [eax+1], dl
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ss : [ebp-0x64]
        push edx
        call public_6d2be34
        add esp, 8
        mov al, 1
        public_6d2cd19 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d2cb6f)
    }
}

#undef public_6d2cbce
#undef public_6d2cbe2
#undef public_6d2cc1a
#undef public_6d2cc23
#undef public_6d2cc3a
#undef public_6d2cca3
#undef public_6d2ccb7
#undef public_6d2ccef
#undef public_6d2ccf8
#undef public_6d2cd19
