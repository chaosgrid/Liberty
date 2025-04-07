#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c7a2);
CLANG_FORWARD_PROC_SYMBOL(public_6d2ea60);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d2ea71 _public_6d2ea71
#define public_6d2ea77 _public_6d2ea77
#define public_6d2eac3 _public_6d2eac3
#define public_6d2ead8 _public_6d2ead8
#define public_6d2eae6 _public_6d2eae6

PROC_DECLARE(0x6d2ea60, internal_6d2ea60, public_6d2ea60);
extern "C" NAKED register_t __cdecl internal_6d2ea60()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d2ea77
        public_6d2ea71 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+8], ecx
        public_6d2ea77 : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d2eae6
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        push edx
        mov ecx, dword ptr ss : [ebp-0x10]
        call public_6d2ea60
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0xC
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 4
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+8], 0xFFFFFFFF
        je public_6d2eac3
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+8]
        push eax
        call public_6d2c7a2
        add esp, 4
        public_6d2eac3 : nop
        xor ecx, ecx
        and ecx, 1
        test ecx, ecx
        je public_6d2ead8
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d2ead8 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d2ea71
        public_6d2eae6 : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2ea60)
    }
}

#undef public_6d2ea71
#undef public_6d2ea77
#undef public_6d2eac3
#undef public_6d2ead8
#undef public_6d2eae6
