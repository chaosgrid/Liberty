#include "Freelancer-PCH.h"


#define public_56908c _public_56908c
#define public_5690a0 _public_5690a0

PROC_DECLARE(0x569070, internal_569070, public_569070);
extern "C" NAKED register_t __cdecl internal_569070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_5c700c]
        add eax, 0x204
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov ecx, edx
        je public_56908c
        mov ecx, eax
        public_56908c : nop
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        add eax, 0x204
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_5690a0
        mov eax, edx
        public_5690a0 : nop
        push ecx
        push eax
        call dword ptr ds : [public_5c7138]
        add esp, 8
        neg eax
        ret 
        UNREACHABLE_TRAP(0x569070)
    }
}

#undef public_56908c
#undef public_5690a0
