#include "Server-PCH.h"


#define public_6d5e546 _public_6d5e546
#define public_6d5e54c _public_6d5e54c

PROC_DECLARE(0x6d5e520, internal_6d5e520, public_6d5e520);
extern "C" NAKED register_t __cdecl internal_6d5e520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d5e54c
        cmp byte ptr ds : [eax], 0
        je public_6d5e54c
        push eax
        call dword ptr ds : [public_6d64918]
        add esp, 4
        test eax, eax
        je public_6d5e546
        mov edx, dword ptr ss : [esp+4]
        xor ecx, ecx
        mov dword ptr ds : [edx], eax
        mov eax, ecx
        ret 
        public_6d5e546 : nop
        mov eax, 0xFFFFFFFE
        ret 
        public_6d5e54c : nop
        mov eax, 0xFFFFFFFC
        ret 
        UNREACHABLE_TRAP(0x6d5e520)
    }
}

#undef public_6d5e546
#undef public_6d5e54c
