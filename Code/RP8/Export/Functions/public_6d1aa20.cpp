#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1aa20);

#define public_6d1aa3b _public_6d1aa3b
#define public_6d1aa52 _public_6d1aa52

PROC_DECLARE(0x6d1aa20, internal_6d1aa20, public_6d1aa20);
extern "C" NAKED register_t __cdecl internal_6d1aa20()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d1aa3b
        mov dword ptr ss : [ebp-8], 0
        jmp public_6d1aa52
        public_6d1aa3b : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, dword ptr ds : [edx+4]
        cdq 
        mov ecx, 0x520
        idiv ecx
        mov dword ptr ss : [ebp-8], eax
        public_6d1aa52 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1aa20)
    }
}

#undef public_6d1aa3b
#undef public_6d1aa52
