#include "Server-PCH.h"


#define public_6d5f865 _public_6d5f865

PROC_DECLARE(0x6d5f840, internal_6d5f840, public_6d5f840);
extern "C" NAKED register_t __cdecl internal_6d5f840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        xor esi, esi
        call dword ptr ds : [public_6d64a34]
        mov edx, dword ptr ss : [esp+0x10]
        add esp, 4
        mov dword ptr ds : [edx], eax
        cmp eax, 0xFFFFFFFF
        mov eax, 0xFFFFFFFE
        je public_6d5f865
        mov eax, esi
        public_6d5f865 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f840)
    }
}

#undef public_6d5f865
