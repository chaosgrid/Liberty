#include "FLServer-PCH.h"


#define public_40d8ff _public_40d8ff

PROC_DECLARE(0x40d8d0, internal_40d8d0, public_40d8d0);
extern "C" NAKED register_t __cdecl internal_40d8d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xF4]
        test eax, eax
        je public_40d8ff
        push edi
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_41b1b4]
        mov eax, dword ptr ds : [esi+0xF4]
        mov edi, dword ptr ds : [esi+0xF8]
        push eax
        call dword ptr ds : [public_41b1a4]
        mov eax, edi
        pop edi
        pop esi
        ret 
        public_40d8ff : nop
        mov eax, dword ptr ds : [esi+0xF8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40d8d0)
    }
}

#undef public_40d8ff
