#include "SoundStreamer-PCH.h"


#define public_6ef3baa _public_6ef3baa

PROC_DECLARE(0x6ef3b80, internal_6ef3b80, public_6ef3b80);
extern "C" NAKED register_t __cdecl internal_6ef3b80()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_6efe3d8
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_6ef3baa
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_6ef3baa : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ef3b80)
    }
}

#undef public_6ef3baa
