#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01689);

#define public_6d1ecce _public_6d1ecce
#define public_6d1ed1c _public_6d1ed1c
#define public_6d1ed24 _public_6d1ed24
#define public_6d1ed2b _public_6d1ed2b
#define public_6d1ed2f _public_6d1ed2f
#define public_6d1ed35 _public_6d1ed35

PROC_DECLARE(0x6d1ecb0, internal_6d1ecb0, public_6d1ecb0);
extern "C" NAKED register_t __cdecl internal_6d1ecb0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+4], 0
        jbe public_6d1ecce
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+4], edx
        public_6d1ecce : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d1ed2f
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        add eax, 1
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d1ed24
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d01689
        mov edx, 1
        and edx, 1
        test edx, edx
        je public_6d1ed1c
        mov eax, dword ptr ss : [ebp-4]
        push eax
        call dword ptr ds : [public_6d5e11c]
        add esp, 4
        public_6d1ed1c : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0xC], ecx
        jmp public_6d1ed2b
        public_6d1ed24 : nop
        mov dword ptr ss : [ebp-0xC], 0
        public_6d1ed2b : nop
        xor eax, eax
        jmp public_6d1ed35
        public_6d1ed2f : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        public_6d1ed35 : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d1ecb0)
    }
}

#undef public_6d1ecce
#undef public_6d1ed1c
#undef public_6d1ed24
#undef public_6d1ed2b
#undef public_6d1ed2f
#undef public_6d1ed35
