#include "Server-PCH.h"


#define public_6d5e46e _public_6d5e46e

PROC_DECLARE(0x6d5e440, internal_6d5e440, public_6d5e440);
extern "C" NAKED register_t __cdecl internal_6d5e440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        mov esi, 0xFFFFFFFC
        call dword ptr ds : [public_6d64774]
        add esp, 4
        test eax, eax
        je public_6d5e46e
        mov edx, dword ptr ds : [eax+0x4C]
        mov eax, dword ptr ss : [esp+0xC]
        xor ecx, ecx
        test edx, edx
        sete dl
        mov byte ptr ds : [eax], dl
        mov eax, ecx
        pop esi
        ret 
        public_6d5e46e : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5e440)
    }
}

#undef public_6d5e46e
