#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168b0);

#define public_6d168cb _public_6d168cb
#define public_6d168e2 _public_6d168e2

PROC_DECLARE(0x6d168b0, internal_6d168b0, public_6d168b0);
extern "C" NAKED register_t __cdecl internal_6d168b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d168cb
        mov dword ptr ss : [ebp-8], 0
        jmp public_6d168e2
        public_6d168cb : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx+8]
        sub eax, dword ptr ds : [edx+4]
        cdq 
        mov ecx, 0x520
        idiv ecx
        mov dword ptr ss : [ebp-8], eax
        public_6d168e2 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d168b0)
    }
}

#undef public_6d168cb
#undef public_6d168e2
