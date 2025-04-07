#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c31c);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d2c351 _public_6d2c351
#define public_6d2c363 _public_6d2c363
#define public_6d2c382 _public_6d2c382
#define public_6d2c3ae _public_6d2c3ae
#define public_6d2c3c0 _public_6d2c3c0
#define public_6d2c3e6 _public_6d2c3e6
#define public_6d2c3ed _public_6d2c3ed
#define public_6d2c3ef _public_6d2c3ef
#define public_6d2c3fa _public_6d2c3fa
#define public_6d2c403 _public_6d2c403
#define public_6d2c410 _public_6d2c410
#define public_6d2c457 _public_6d2c457
#define public_6d2c469 _public_6d2c469
#define public_6d2c480 _public_6d2c480

PROC_DECLARE(0x6d2c31c, internal_6d2c31c, public_6d2c31c);
extern "C" NAKED register_t __cdecl internal_6d2c31c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x38
        mov dword ptr ss : [ebp-0x2C], ecx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [ecx], 0
        mov dword ptr ss : [ebp-0x28], 0x40
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2c351
        mov dword ptr ss : [ebp-0x30], 0
        jmp public_6d2c363
        public_6d2c351 : nop
        mov edx, dword ptr ds : [public_6d728fc]
        sub edx, dword ptr ds : [public_6d728f4]
        sar edx, 2
        mov dword ptr ss : [ebp-0x30], edx
        public_6d2c363 : nop
        mov eax, dword ptr ss : [ebp-0x30]
        cmp eax, dword ptr ss : [ebp-0x28]
        jae public_6d2c480
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-8], ecx
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d2c382
        mov dword ptr ss : [ebp-8], 0
        public_6d2c382 : nop
        mov edx, dword ptr ss : [ebp-8]
        shl edx, 2
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ds : [public_6d728f8]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-0x10], edx
        jmp public_6d2c3c0
        public_6d2c3ae : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 4
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        mov dword ptr ss : [ebp-0x10], ecx
        public_6d2c3c0 : nop
        mov edx, dword ptr ss : [ebp-0x10]
        cmp edx, dword ptr ss : [ebp-0x14]
        je public_6d2c3ef
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d2c3e6
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x34], ecx
        jmp public_6d2c3ed
        public_6d2c3e6 : nop
        mov dword ptr ss : [ebp-0x34], 0
        public_6d2c3ed : nop
        jmp public_6d2c3ae
        public_6d2c3ef : nop
        mov edx, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-0x1C], edx
        jmp public_6d2c403
        public_6d2c3fa : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 4
        mov dword ptr ss : [ebp-0x1C], eax
        public_6d2c403 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        cmp ecx, dword ptr ds : [public_6d728f8]
        je public_6d2c410
        jmp public_6d2c3fa
        public_6d2c410 : nop
        mov edx, dword ptr ds : [public_6d728fc]
        sub edx, dword ptr ds : [public_6d728f4]
        sar edx, 2
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        push ecx
        call public_6d2f249
        add esp, 4
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ss : [ebp-4]
        lea ecx, ds:[eax+edx*4]
        mov dword ptr ds : [public_6d728fc], ecx
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2c457
        mov dword ptr ss : [ebp-0x38], 0
        jmp public_6d2c469
        public_6d2c457 : nop
        mov edx, dword ptr ds : [public_6d728f8]
        sub edx, dword ptr ds : [public_6d728f4]
        sar edx, 2
        mov dword ptr ss : [ebp-0x38], edx
        public_6d2c469 : nop
        mov eax, dword ptr ss : [ebp-0x38]
        mov ecx, dword ptr ss : [ebp-4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [public_6d728f8], edx
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [public_6d728f4], eax
        public_6d2c480 : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2c31c)
    }
}

#undef public_6d2c351
#undef public_6d2c363
#undef public_6d2c382
#undef public_6d2c3ae
#undef public_6d2c3c0
#undef public_6d2c3e6
#undef public_6d2c3ed
#undef public_6d2c3ef
#undef public_6d2c3fa
#undef public_6d2c403
#undef public_6d2c410
#undef public_6d2c457
#undef public_6d2c469
#undef public_6d2c480
