#include "ReadFile-PCH.h"


#define public_6b7344d _public_6b7344d
#define public_6b73454 _public_6b73454

PROC_DECLARE(0x6b73410, internal_6b73410, public_6b73410);
extern "C" NAKED register_t __cdecl internal_6b73410()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edi+0x234]
        test eax, eax
        je public_6b73454
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_6b73454
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_6b7344d
        mov eax, dword ptr ds : [edi+0x234]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x78]
        mov dword ptr ds : [edi+0x1C], eax
        public_6b7344d : nop
        mov eax, esi
        pop esi
        pop edi
        ret 0xC
        public_6b73454 : nop
        mov dword ptr ds : [edi+0x1C], 5
        xor eax, eax
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6b73410)
    }
}

#undef public_6b7344d
#undef public_6b73454
