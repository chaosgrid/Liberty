#include "System-PCH.h"


#define public_6f1185a _public_6f1185a

PROC_DECLARE(0x6f11830, internal_6f11830, public_6f11830);
extern "C" NAKED register_t __cdecl internal_6f11830()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_6f13170
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_6f1185a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_6f1185a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f11830)
    }
}

#undef public_6f1185a
