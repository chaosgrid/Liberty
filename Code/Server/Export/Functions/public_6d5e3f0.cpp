#include "Server-PCH.h"


#define public_6d5e434 _public_6d5e434
#define public_6d5e436 _public_6d5e436

PROC_DECLARE(0x6d5e3f0, internal_6d5e3f0, public_6d5e3f0);
extern "C" NAKED register_t __cdecl internal_6d5e3f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6d5e436
        push ecx
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d644d4]
        push eax
        call dword ptr ds : [public_6d642fc]
        add esp, 8
        test eax, eax
        je public_6d5e434
        mov edx, dword ptr ds : [eax+0x5C]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop esi
        ret 
        public_6d5e434 : nop
        mov eax, esi
        public_6d5e436 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5e3f0)
    }
}

#undef public_6d5e434
#undef public_6d5e436
