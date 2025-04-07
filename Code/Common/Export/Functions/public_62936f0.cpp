#include "Common-PCH.h"


#define public_6293705 _public_6293705

PROC_DECLARE(0x62936f0, internal_62936f0, public_62936f0);
extern "C" NAKED register_t __cdecl internal_62936f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x58]
        test al, al
        je public_6293705
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        pop esi
        jmp dword ptr ds : [edx+4]
        public_6293705 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62936f0)
    }
}

#undef public_6293705
