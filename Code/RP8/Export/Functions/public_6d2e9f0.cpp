#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2e9f0);

#define public_6d2ea0e _public_6d2ea0e
#define public_6d2ea3b _public_6d2ea3b
#define public_6d2ea49 _public_6d2ea49
#define public_6d2ea4b _public_6d2ea4b

PROC_DECLARE(0x6d2e9f0, internal_6d2e9f0, public_6d2e9f0);
extern "C" NAKED register_t __cdecl internal_6d2e9f0()
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
        public_6d2ea0e : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d2ea4b
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, dword ptr ds : [edx]
        sbb ecx, ecx
        neg ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d2ea3b
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d2ea49
        public_6d2ea3b : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        public_6d2ea49 : nop
        jmp public_6d2ea0e
        public_6d2ea4b : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d2e9f0)
    }
}

#undef public_6d2ea0e
#undef public_6d2ea3b
#undef public_6d2ea49
#undef public_6d2ea4b
