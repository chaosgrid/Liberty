#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b060);

#define public_6d1b082 _public_6d1b082
#define public_6d1b09a _public_6d1b09a
#define public_6d1b0b1 _public_6d1b0b1
#define public_6d1b0c8 _public_6d1b0c8
#define public_6d1b0d4 _public_6d1b0d4
#define public_6d1b0de _public_6d1b0de

PROC_DECLARE(0x6d1b060, internal_6d1b060, public_6d1b060);
extern "C" NAKED register_t __cdecl internal_6d1b060()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push esi
        push edi
        mov dword ptr ss : [ebp-0x1C], ecx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d1b09a
        public_6d1b082 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x520
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0x520
        mov dword ptr ss : [ebp-0xC], edx
        public_6d1b09a : nop
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, dword ptr ss : [ebp-8]
        je public_6d1b0b1
        mov esi, dword ptr ss : [ebp-0xC]
        mov ecx, 0x148
        mov edi, dword ptr ss : [ebp-0x10]
        rep movsd
        jmp public_6d1b082
        public_6d1b0b1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x18], ecx
        jmp public_6d1b0d4
        public_6d1b0c8 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 0x520
        mov dword ptr ss : [ebp-0x18], edx
        public_6d1b0d4 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        cmp eax, dword ptr ss : [ebp-0x14]
        je public_6d1b0de
        jmp public_6d1b0c8
        public_6d1b0de : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d1b060)
    }
}

#undef public_6d1b082
#undef public_6d1b09a
#undef public_6d1b0b1
#undef public_6d1b0c8
#undef public_6d1b0d4
#undef public_6d1b0de
