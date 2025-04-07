#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22bdf);

#define public_6d22bfa _public_6d22bfa
#define public_6d22c20 _public_6d22c20
#define public_6d22c29 _public_6d22c29
#define public_6d22c5b _public_6d22c5b
#define public_6d22c64 _public_6d22c64
#define public_6d22c7d _public_6d22c7d
#define public_6d22c8b _public_6d22c8b
#define public_6d22c8d _public_6d22c8d

PROC_DECLARE(0x6d22bdf, internal_6d22bdf, public_6d22bdf);
extern "C" NAKED register_t __cdecl internal_6d22bdf()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov dword ptr ss : [ebp-0x14], ecx
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-4], eax
        public_6d22bfa : nop
        mov ecx, dword ptr ss : [ebp-8]
        cmp ecx, dword ptr ss : [ebp-4]
        je public_6d22c8b
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d22c20
        mov ecx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x18], ecx
        jmp public_6d22c29
        public_6d22c20 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x18], eax
        public_6d22c29 : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        call dword ptr ds : [public_6d5e108]
        add esp, 8
        test eax, eax
        jne public_6d22c7d
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d22c5b
        mov edx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x1C], edx
        jmp public_6d22c64
        public_6d22c5b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x1C], ecx
        public_6d22c64 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call dword ptr ds : [public_6d5e154]
        add esp, 0xC
        mov al, 1
        jmp public_6d22c8d
        public_6d22c7d : nop
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0x20
        mov dword ptr ss : [ebp-8], edx
        jmp public_6d22bfa
        public_6d22c8b : nop
        xor al, al
        public_6d22c8d : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d22bdf)
    }
}

#undef public_6d22bfa
#undef public_6d22c20
#undef public_6d22c29
#undef public_6d22c5b
#undef public_6d22c64
#undef public_6d22c7d
#undef public_6d22c8b
#undef public_6d22c8d
