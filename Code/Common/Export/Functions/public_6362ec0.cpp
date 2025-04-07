#include "Common-PCH.h"


#define public_6362ed9 _public_6362ed9

PROC_DECLARE(0x6362ec0, internal_6362ec0, public_6362ec0);
extern "C" NAKED register_t __cdecl internal_6362ec0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi-0x78]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        test eax, eax
        jle public_6362ed9
        mov ecx, dword ptr ds : [esi-0x78]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        pop esi
        ret 
        public_6362ed9 : nop
        mov eax, dword ptr ds : [esi+0x10]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6362ec0)
    }
}

#undef public_6362ed9
