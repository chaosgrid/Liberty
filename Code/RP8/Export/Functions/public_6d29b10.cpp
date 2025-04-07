#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d29b10);

#define public_6d29b2e _public_6d29b2e
#define public_6d29b5f _public_6d29b5f
#define public_6d29b6d _public_6d29b6d
#define public_6d29b6f _public_6d29b6f

PROC_DECLARE(0x6d29b10, internal_6d29b10, public_6d29b10);
extern "C" NAKED register_t __cdecl internal_6d29b10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-8], ecx
        public_6d29b2e : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d29b6f
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0xC
        push edx
        call dword ptr ds : [public_6d5e0ac]
        add esp, 8
        movzx eax, al
        test eax, eax
        je public_6d29b5f
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d29b6d
        public_6d29b5f : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-4], edx
        public_6d29b6d : nop
        jmp public_6d29b2e
        public_6d29b6f : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d29b10)
    }
}

#undef public_6d29b2e
#undef public_6d29b5f
#undef public_6d29b6d
#undef public_6d29b6f
