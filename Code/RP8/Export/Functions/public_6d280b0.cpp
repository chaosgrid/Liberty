#include "RP8-PCH.h"


#define public_6d280d6 _public_6d280d6
#define public_6d280df _public_6d280df

PROC_DECLARE(0x6d280b0, internal_6d280b0, public_6d280b0);
extern "C" NAKED register_t __cdecl internal_6d280b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-8], ecx
        mov eax, dword ptr ss : [ebp-8]
        add eax, 0x20
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d280d6
        mov edx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d280df
        public_6d280d6 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0xC], ecx
        public_6d280df : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d280b0)
    }
}

#undef public_6d280d6
#undef public_6d280df
