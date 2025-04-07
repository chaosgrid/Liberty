#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5db87 _public_6d5db87
#define public_6d5db9b _public_6d5db9b

PROC_DECLARE(0x6d5db70, internal_6d5db70, public_6d5db70);
extern "C" NAKED register_t __cdecl internal_6d5db70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        jne public_6d5db87
        mov eax, 5
        ret 
        public_6d5db87 : nop
        push eax
        call dword ptr ds : [public_6d644dc]
        add esp, 4
        test eax, eax
        jne public_6d5db9b
        mov eax, 5
        ret 
        public_6d5db9b : nop
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_6d649c0]
        ret 
        UNREACHABLE_TRAP(0x6d5db70)
    }
}

#undef public_6d5db87
#undef public_6d5db9b
