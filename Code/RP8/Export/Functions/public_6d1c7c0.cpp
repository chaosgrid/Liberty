#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1c7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d1c7d1 _public_6d1c7d1
#define public_6d1c7d7 _public_6d1c7d7
#define public_6d1c807 _public_6d1c807

PROC_DECLARE(0x6d1c7c0, internal_6d1c7c0, public_6d1c7c0);
extern "C" NAKED register_t __cdecl internal_6d1c7c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-8], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d1c7d7
        public_6d1c7d1 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+8], ecx
        public_6d1c7d7 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d1c807
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        push edx
        mov ecx, dword ptr ss : [ebp-8]
        call public_6d1c7c0
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call public_6d2f249
        add esp, 4
        jmp public_6d1c7d1
        public_6d1c807 : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d1c7c0)
    }
}

#undef public_6d1c7d1
#undef public_6d1c7d7
#undef public_6d1c807
