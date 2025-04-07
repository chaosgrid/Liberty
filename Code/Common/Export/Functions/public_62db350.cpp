#include "Common-PCH.h"


#define public_62db372 _public_62db372

PROC_DECLARE(0x62db350, internal_62db350, public_62db350);
extern "C" NAKED register_t __cdecl internal_62db350()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [eax]
        test al, al
        je public_62db372
        mov edx, dword ptr ds : [esi+0x7C]
        lea ecx, ds:[esi+0x7C]
        call dword ptr ds : [edx]
        test al, al
        je public_62db372
        mov eax, 1
        pop esi
        ret 
        public_62db372 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62db350)
    }
}

#undef public_62db372
