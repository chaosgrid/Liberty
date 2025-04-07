#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d1e93c _public_6d1e93c
#define public_6d1e96a _public_6d1e96a
#define public_6d1e970 _public_6d1e970

PROC_DECLARE(0x6d1e920, internal_6d1e920, public_6d1e920);
extern "C" NAKED register_t __cdecl internal_6d1e920()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+4], 0
        jbe public_6d1e93c
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+4], edx
        public_6d1e93c : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d1e96a
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        add eax, 1
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-4]
        push eax
        call public_6d2f249
        add esp, 4
        xor eax, eax
        jmp public_6d1e970
        public_6d1e96a : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+4]
        public_6d1e970 : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d1e920)
    }
}

#undef public_6d1e93c
#undef public_6d1e96a
#undef public_6d1e970
