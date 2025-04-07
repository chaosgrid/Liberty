#include "Content-PCH.h"


#define public_6f278ef _public_6f278ef

PROC_DECLARE(0x6f278a0, internal_6f278a0, public_6f278a0);
extern "C" NAKED register_t __cdecl internal_6f278a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        push 0
        mov ecx, edi
        call ebx
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi+0x118], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f278ef
        push 1
        mov ecx, edi
        call ebx
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x11C], eax
        pop esi
        pop ebx
        ret 4
        public_6f278ef : nop
        pop edi
        mov dword ptr ds : [esi+0x11C], 0
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f278a0)
    }
}

#undef public_6f278ef
