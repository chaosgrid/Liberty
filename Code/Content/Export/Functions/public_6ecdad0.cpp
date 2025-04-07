#include "Content-PCH.h"


#define public_6ecdaff _public_6ecdaff

PROC_DECLARE(0x6ecdad0, internal_6ecdad0, public_6ecdad0);
extern "C" NAKED register_t __cdecl internal_6ecdad0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0x30]
        push eax
        add ecx, 0xC
        push ecx
        call dword ptr ds : [public_6fb3410]
        add esp, 8
        test eax, eax
        jne public_6ecdaff
        mov eax, dword ptr ds : [esi+4]
        lea edx, ds:[esi+0xC]
        push edx
        add eax, 0xC
        push eax
        call dword ptr ds : [public_6fb340c]
        add esp, 8
        public_6ecdaff : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ecdad0)
    }
}

#undef public_6ecdaff
