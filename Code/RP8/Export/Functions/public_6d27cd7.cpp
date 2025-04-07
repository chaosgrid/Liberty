#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22851);
CLANG_FORWARD_PROC_SYMBOL(public_6d27cd7);

#define public_6d27cf2 _public_6d27cf2
#define public_6d27d1d _public_6d27d1d
#define public_6d27d26 _public_6d27d26
#define public_6d27d39 _public_6d27d39
#define public_6d27d42 _public_6d27d42
#define public_6d27d5d _public_6d27d5d

PROC_DECLARE(0x6d27cd7, internal_6d27cd7, public_6d27cd7);
extern "C" NAKED register_t __cdecl internal_6d27cd7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov dword ptr ss : [ebp-0x14], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-4], eax
        public_6d27cf2 : nop
        mov ecx, dword ptr ss : [ebp-8]
        cmp ecx, dword ptr ss : [ebp-4]
        je public_6d27d5d
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d27d1d
        mov edx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x18], edx
        jmp public_6d27d26
        public_6d27d1d : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x18], ecx
        public_6d27d26 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d27d39
        mov eax, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x1C], eax
        jmp public_6d27d42
        public_6d27d39 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x1C], edx
        public_6d27d42 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d22851
        mov edx, dword ptr ss : [ebp-8]
        add edx, 0x20
        mov dword ptr ss : [ebp-8], edx
        jmp public_6d27cf2
        public_6d27d5d : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d27cd7)
    }
}

#undef public_6d27cf2
#undef public_6d27d1d
#undef public_6d27d26
#undef public_6d27d39
#undef public_6d27d42
#undef public_6d27d5d
