#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2d032);
CLANG_FORWARD_PROC_SYMBOL(public_6d2d4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2d520);
CLANG_FORWARD_PROC_SYMBOL(public_6d2db10);
CLANG_FORWARD_PROC_SYMBOL(public_6d2db40);
CLANG_FORWARD_PROC_SYMBOL(public_6d2e9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d2d054 _public_6d2d054
#define public_6d2d065 _public_6d2d065
#define public_6d2d074 _public_6d2d074
#define public_6d2d07d _public_6d2d07d
#define public_6d2d0f4 _public_6d2d0f4
#define public_6d2d143 _public_6d2d143
#define public_6d2d151 _public_6d2d151
#define public_6d2d178 _public_6d2d178
#define public_6d2d185 _public_6d2d185
#define public_6d2d18a _public_6d2d18a
#define public_6d2d1a3 _public_6d2d1a3
#define public_6d2d1b5 _public_6d2d1b5
#define public_6d2d1d1 _public_6d2d1d1
#define public_6d2d1e3 _public_6d2d1e3
#define public_6d2d229 _public_6d2d229
#define public_6d2d22f _public_6d2d22f
#define public_6d2d252 _public_6d2d252
#define public_6d2d32a _public_6d2d32a
#define public_6d2d394 _public_6d2d394
#define public_6d2d39d _public_6d2d39d
#define public_6d2d3af _public_6d2d3af
#define public_6d2d3c5 _public_6d2d3c5
#define public_6d2d410 _public_6d2d410
#define public_6d2d436 _public_6d2d436
#define public_6d2d43e _public_6d2d43e
#define public_6d2d447 _public_6d2d447
#define public_6d2d45f _public_6d2d45f
#define public_6d2d470 _public_6d2d470
#define public_6d2d472 _public_6d2d472
#define public_6d2d484 _public_6d2d484
#define public_6d2d495 _public_6d2d495
#define public_6d2d4c6 _public_6d2d4c6

PROC_DECLARE(0x6d2d032, internal_6d2d032, public_6d2d032);
extern "C" NAKED register_t __cdecl internal_6d2d032()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x78
        mov dword ptr ss : [ebp-0x64], ecx
        mov dword ptr ss : [ebp-0xC], 0
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2d054
        mov dword ptr ss : [ebp-0x68], 0
        jmp public_6d2d065
        public_6d2d054 : nop
        mov eax, dword ptr ds : [public_6d728f8]
        sub eax, dword ptr ds : [public_6d728f4]
        sar eax, 2
        mov dword ptr ss : [ebp-0x68], eax
        public_6d2d065 : nop
        mov ecx, dword ptr ss : [ebp-0x68]
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d2d07d
        public_6d2d074 : nop
        mov edx, dword ptr ss : [ebp-4]
        add edx, 1
        mov dword ptr ss : [ebp-4], edx
        public_6d2d07d : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-8]
        jge public_6d2d18a
        mov ecx, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov dword ptr ss : [ebp-0x10], ecx
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6d2d185
        mov edx, dword ptr ss : [ebp-0x10]
        mov al, byte ptr ds : [edx]
        mov byte ptr ss : [ebp-0x11], al
        mov dword ptr ss : [ebp-0x20], 0
        mov ecx, dword ptr ss : [ebp-0x10]
        movzx edx, byte ptr ds : [ecx+2]
        test edx, edx
        je public_6d2d0f4
        mov eax, dword ptr ss : [ebp-0x10]
        movzx ecx, byte ptr ds : [eax+1]
        test ecx, ecx
        je public_6d2d0f4
        mov edx, dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [edx+2], 0
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+8]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call dword ptr ds : [edx+0xB0]
        mov dword ptr ss : [ebp-0x20], eax
        public_6d2d0f4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        movzx edx, byte ptr ds : [ecx+1]
        mov eax, dword ptr ss : [ebp-0x10]
        movzx ecx, byte ptr ds : [eax]
        cmp edx, ecx
        je public_6d2d143
        cmp dword ptr ss : [ebp-0x20], 0
        jl public_6d2d143
        mov edx, dword ptr ss : [ebp-0x10]
        movzx eax, byte ptr ds : [edx+1]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        push ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+8]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ss : [ebp-0x20], eax
        cmp dword ptr ss : [ebp-0x20], 0
        jl public_6d2d143
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0x10]
        mov al, byte ptr ds : [edx+1]
        mov byte ptr ds : [ecx], al
        public_6d2d143 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0xC], ecx
        cmp dword ptr ss : [ebp-0xC], 0
        jge public_6d2d151
        jmp public_6d2d18a
        public_6d2d151 : nop
        movzx edx, byte ptr ss : [ebp-0x11]
        mov eax, dword ptr ss : [ebp-0x10]
        movzx ecx, byte ptr ds : [eax]
        cmp edx, ecx
        je public_6d2d185
        mov edx, dword ptr ss : [ebp-0x10]
        movzx eax, byte ptr ds : [edx]
        test eax, eax
        je public_6d2d178
        mov ecx, dword ptr ss : [ebp-0x64]
        mov edx, dword ptr ds : [ecx]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x64]
        mov dword ptr ds : [eax], edx
        jmp public_6d2d185
        public_6d2d178 : nop
        mov ecx, dword ptr ss : [ebp-0x64]
        mov edx, dword ptr ds : [ecx]
        sub edx, 1
        mov eax, dword ptr ss : [ebp-0x64]
        mov dword ptr ds : [eax], edx
        public_6d2d185 : nop
        jmp public_6d2d074
        public_6d2d18a : nop
        mov dword ptr ss : [ebp-0x18], 0
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2d1a3
        mov dword ptr ss : [ebp-0x6C], 0
        jmp public_6d2d1b5
        public_6d2d1a3 : nop
        mov ecx, dword ptr ds : [public_6d728f8]
        sub ecx, dword ptr ds : [public_6d728f4]
        sar ecx, 2
        mov dword ptr ss : [ebp-0x6C], ecx
        public_6d2d1b5 : nop
        cmp dword ptr ss : [ebp-0x6C], 0
        jae public_6d2d472
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2d1d1
        mov dword ptr ss : [ebp-0x70], 0
        jmp public_6d2d1e3
        public_6d2d1d1 : nop
        mov edx, dword ptr ds : [public_6d728f8]
        sub edx, dword ptr ds : [public_6d728f4]
        sar edx, 2
        mov dword ptr ss : [ebp-0x70], edx
        public_6d2d1e3 : nop
        mov eax, dword ptr ds : [public_6d728f8]
        mov dword ptr ss : [ebp-0x28], eax
        xor ecx, ecx
        sub ecx, dword ptr ss : [ebp-0x70]
        mov dword ptr ss : [ebp-0x58], ecx
        mov edx, dword ptr ds : [public_6d728fc]
        sub edx, dword ptr ds : [public_6d728f8]
        sar edx, 2
        cmp edx, dword ptr ss : [ebp-0x58]
        jae public_6d2d32a
        mov ecx, offset public_6d728f0
        call public_6d2d4e0
        cmp dword ptr ss : [ebp-0x58], eax
        jae public_6d2d229
        mov ecx, offset public_6d728f0
        call public_6d2d4e0
        mov dword ptr ss : [ebp-0x74], eax
        jmp public_6d2d22f
        public_6d2d229 : nop
        mov eax, dword ptr ss : [ebp-0x58]
        mov dword ptr ss : [ebp-0x74], eax
        public_6d2d22f : nop
        mov ecx, offset public_6d728f0
        call public_6d2d4e0
        add eax, dword ptr ss : [ebp-0x74]
        mov dword ptr ss : [ebp-0x34], eax
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x38], ecx
        cmp dword ptr ss : [ebp-0x38], 0
        jge public_6d2d252
        mov dword ptr ss : [ebp-0x38], 0
        public_6d2d252 : nop
        mov edx, dword ptr ss : [ebp-0x38]
        shl edx, 2
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x30], eax
        mov eax, dword ptr ss : [ebp-0x30]
        push eax
        mov ecx, dword ptr ss : [ebp-0x28]
        push ecx
        mov edx, dword ptr ds : [public_6d728f4]
        push edx
        mov ecx, offset public_6d728f0
        call public_6d2db40
        mov dword ptr ss : [ebp-0x2C], eax
        lea eax, ss:[ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x58]
        push ecx
        mov edx, dword ptr ss : [ebp-0x2C]
        push edx
        mov ecx, offset public_6d728f0
        call public_6d2e9a0
        mov eax, dword ptr ss : [ebp-0x58]
        mov ecx, dword ptr ss : [ebp-0x2C]
        lea edx, ds:[ecx+eax*4]
        push edx
        mov eax, dword ptr ds : [public_6d728f8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x28]
        push ecx
        mov ecx, offset public_6d728f0
        call public_6d2db40
        mov edx, dword ptr ds : [public_6d728f8]
        push edx
        mov eax, dword ptr ds : [public_6d728f4]
        push eax
        mov ecx, offset public_6d728f0
        call public_6d2db10
        mov ecx, dword ptr ds : [public_6d728fc]
        sub ecx, dword ptr ds : [public_6d728f4]
        sar ecx, 2
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-0x3C], edx
        mov eax, dword ptr ss : [ebp-0x3C]
        push eax
        call public_6d2f249
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x34]
        mov edx, dword ptr ss : [ebp-0x30]
        lea eax, ds:[edx+ecx*4]
        mov dword ptr ds : [public_6d728fc], eax
        mov ecx, offset public_6d728f0
        call public_6d2d4e0
        mov ecx, dword ptr ss : [ebp-0x30]
        lea edx, ds:[ecx+eax*4]
        mov eax, dword ptr ss : [ebp-0x58]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [public_6d728f8], ecx
        mov edx, dword ptr ss : [ebp-0x30]
        mov dword ptr ds : [public_6d728f4], edx
        jmp public_6d2d470
        public_6d2d32a : nop
        mov eax, dword ptr ds : [public_6d728f8]
        sub eax, dword ptr ss : [ebp-0x28]
        sar eax, 2
        cmp eax, dword ptr ss : [ebp-0x58]
        jae public_6d2d3c5
        mov ecx, dword ptr ss : [ebp-0x58]
        mov edx, dword ptr ss : [ebp-0x28]
        lea eax, ds:[edx+ecx*4]
        push eax
        mov ecx, dword ptr ds : [public_6d728f8]
        push ecx
        mov edx, dword ptr ss : [ebp-0x28]
        push edx
        mov ecx, offset public_6d728f0
        call public_6d2db40
        lea eax, ss:[ebp-0x18]
        push eax
        mov ecx, dword ptr ds : [public_6d728f8]
        sub ecx, dword ptr ss : [ebp-0x28]
        sar ecx, 2
        mov edx, dword ptr ss : [ebp-0x58]
        sub edx, ecx
        push edx
        mov eax, dword ptr ds : [public_6d728f8]
        push eax
        mov ecx, offset public_6d728f0
        call public_6d2e9a0
        mov ecx, dword ptr ds : [public_6d728f8]
        mov dword ptr ss : [ebp-0x48], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x44], edx
        jmp public_6d2d39d
        public_6d2d394 : nop
        mov eax, dword ptr ss : [ebp-0x44]
        add eax, 4
        mov dword ptr ss : [ebp-0x44], eax
        public_6d2d39d : nop
        mov ecx, dword ptr ss : [ebp-0x44]
        cmp ecx, dword ptr ss : [ebp-0x48]
        je public_6d2d3af
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx], eax
        jmp public_6d2d394
        public_6d2d3af : nop
        mov ecx, dword ptr ds : [public_6d728f8]
        mov edx, dword ptr ss : [ebp-0x58]
        lea eax, ds:[ecx+edx*4]
        mov dword ptr ds : [public_6d728f8], eax
        jmp public_6d2d470
        public_6d2d3c5 : nop
        cmp dword ptr ss : [ebp-0x58], 0
        jbe public_6d2d470
        mov ecx, dword ptr ds : [public_6d728f8]
        push ecx
        mov edx, dword ptr ds : [public_6d728f8]
        push edx
        mov eax, dword ptr ss : [ebp-0x58]
        shl eax, 2
        mov ecx, dword ptr ds : [public_6d728f8]
        sub ecx, eax
        push ecx
        mov ecx, offset public_6d728f0
        call public_6d2db40
        mov edx, dword ptr ds : [public_6d728f8]
        mov dword ptr ss : [ebp-0x50], edx
        mov eax, dword ptr ss : [ebp-0x58]
        shl eax, 2
        mov ecx, dword ptr ds : [public_6d728f8]
        sub ecx, eax
        mov dword ptr ss : [ebp-0x4C], ecx
        public_6d2d410 : nop
        mov edx, dword ptr ss : [ebp-0x28]
        cmp edx, dword ptr ss : [ebp-0x4C]
        je public_6d2d436
        mov eax, dword ptr ss : [ebp-0x4C]
        sub eax, 4
        mov dword ptr ss : [ebp-0x4C], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        sub ecx, 4
        mov dword ptr ss : [ebp-0x50], ecx
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        jmp public_6d2d410
        public_6d2d436 : nop
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x54], edx
        jmp public_6d2d447
        public_6d2d43e : nop
        mov eax, dword ptr ss : [ebp-0x54]
        add eax, 4
        mov dword ptr ss : [ebp-0x54], eax
        public_6d2d447 : nop
        mov ecx, dword ptr ss : [ebp-0x58]
        mov edx, dword ptr ss : [ebp-0x28]
        lea eax, ds:[edx+ecx*4]
        cmp dword ptr ss : [ebp-0x54], eax
        je public_6d2d45f
        mov ecx, dword ptr ss : [ebp-0x54]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx], edx
        jmp public_6d2d43e
        public_6d2d45f : nop
        mov eax, dword ptr ds : [public_6d728f8]
        mov ecx, dword ptr ss : [ebp-0x58]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ds : [public_6d728f8], edx
        public_6d2d470 : nop
        jmp public_6d2d4c6
        public_6d2d472 : nop
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2d484
        mov dword ptr ss : [ebp-0x78], 0
        jmp public_6d2d495
        public_6d2d484 : nop
        mov eax, dword ptr ds : [public_6d728f8]
        sub eax, dword ptr ds : [public_6d728f4]
        sar eax, 2
        mov dword ptr ss : [ebp-0x78], eax
        public_6d2d495 : nop
        cmp dword ptr ss : [ebp-0x78], 0
        jbe public_6d2d4c6
        mov ecx, dword ptr ds : [public_6d728f8]
        mov dword ptr ss : [ebp-0x5C], ecx
        mov edx, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-0x60], edx
        mov eax, dword ptr ss : [ebp-0x5C]
        push eax
        xor ecx, ecx
        shl ecx, 2
        mov edx, dword ptr ss : [ebp-0x60]
        add edx, ecx
        push edx
        mov ecx, offset public_6d728f0
        call public_6d2d520
        public_6d2d4c6 : nop
        mov eax, dword ptr ss : [ebp-0x64]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0x64]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [ebp-0xC]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2d032)
    }
}

#undef public_6d2d054
#undef public_6d2d065
#undef public_6d2d074
#undef public_6d2d07d
#undef public_6d2d0f4
#undef public_6d2d143
#undef public_6d2d151
#undef public_6d2d178
#undef public_6d2d185
#undef public_6d2d18a
#undef public_6d2d1a3
#undef public_6d2d1b5
#undef public_6d2d1d1
#undef public_6d2d1e3
#undef public_6d2d229
#undef public_6d2d22f
#undef public_6d2d252
#undef public_6d2d32a
#undef public_6d2d394
#undef public_6d2d39d
#undef public_6d2d3af
#undef public_6d2d3c5
#undef public_6d2d410
#undef public_6d2d436
#undef public_6d2d43e
#undef public_6d2d447
#undef public_6d2d45f
#undef public_6d2d470
#undef public_6d2d472
#undef public_6d2d484
#undef public_6d2d495
#undef public_6d2d4c6
