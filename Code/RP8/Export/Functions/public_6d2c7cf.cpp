#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c7cf);
CLANG_FORWARD_PROC_SYMBOL(public_6d2dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2e9f0);

#define public_6d2c829 _public_6d2c829
#define public_6d2c83e _public_6d2c83e
#define public_6d2c875 _public_6d2c875
#define public_6d2c890 _public_6d2c890
#define public_6d2c8a2 _public_6d2c8a2
#define public_6d2c8b1 _public_6d2c8b1
#define public_6d2c8ba _public_6d2c8ba
#define public_6d2c8f0 _public_6d2c8f0
#define public_6d2c908 _public_6d2c908
#define public_6d2c90a _public_6d2c90a
#define public_6d2c924 _public_6d2c924

PROC_DECLARE(0x6d2c7cf, internal_6d2c7cf, public_6d2c7cf);
extern "C" NAKED register_t __cdecl internal_6d2c7cf()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x50
        mov dword ptr ss : [ebp-0x48], ecx
        lea eax, ss:[ebp+8]
        push eax
        lea ecx, ss:[ebp-0x1C]
        push ecx
        mov ecx, offset public_6d728cc
        call public_6d2e9f0
        mov edx, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        sub ecx, dword ptr ss : [ebp-0x24]
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d2c829
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ds : [eax+0xC]
        sbb edx, edx
        neg edx
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d2c829
        lea ecx, ss:[ebp-0x1C]
        mov dword ptr ss : [ebp-0x4C], ecx
        jmp public_6d2c83e
        public_6d2c829 : nop
        mov edx, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x28], eax
        lea ecx, ss:[ebp-0x28]
        mov dword ptr ss : [ebp-0x4C], ecx
        public_6d2c83e : nop
        mov edx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x38], edx
        mov eax, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        sub ecx, dword ptr ss : [ebp-0x14]
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d2c875
        xor al, al
        jmp public_6d2c924
        public_6d2c875 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x10
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2c890
        mov dword ptr ss : [ebp-0x50], 0
        jmp public_6d2c8a2
        public_6d2c890 : nop
        mov ecx, dword ptr ds : [public_6d728f8]
        sub ecx, dword ptr ds : [public_6d728f4]
        sar ecx, 2
        mov dword ptr ss : [ebp-0x50], ecx
        public_6d2c8a2 : nop
        mov edx, dword ptr ss : [ebp-0x50]
        mov dword ptr ss : [ebp-0xC], edx
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d2c8ba
        public_6d2c8b1 : nop
        mov eax, dword ptr ss : [ebp-4]
        add eax, 1
        mov dword ptr ss : [ebp-4], eax
        public_6d2c8ba : nop
        mov ecx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ss : [ebp-0xC]
        jge public_6d2c90a
        mov edx, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-0x3C], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+eax*4]
        cmp edx, dword ptr ss : [ebp-8]
        jne public_6d2c908
        mov eax, dword ptr ss : [ebp-8]
        movzx ecx, byte ptr ds : [eax]
        test ecx, ecx
        je public_6d2c8f0
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ds : [edx]
        sub eax, 1
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [ecx], eax
        public_6d2c8f0 : nop
        mov edx, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-0x40], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [ecx+eax*4], 0
        jmp public_6d2c90a
        public_6d2c908 : nop
        jmp public_6d2c8b1
        public_6d2c90a : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x44], edx
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        lea ecx, ss:[ebp-0x18]
        push ecx
        mov ecx, offset public_6d728cc
        call public_6d2dfb0
        mov al, 1
        public_6d2c924 : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2c7cf)
    }
}

#undef public_6d2c829
#undef public_6d2c83e
#undef public_6d2c875
#undef public_6d2c890
#undef public_6d2c8a2
#undef public_6d2c8b1
#undef public_6d2c8ba
#undef public_6d2c8f0
#undef public_6d2c908
#undef public_6d2c90a
#undef public_6d2c924
