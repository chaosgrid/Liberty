#include "EngBase-PCH.h"


#define public_662186d _public_662186d
#define public_662187d _public_662187d

PROC_DECLARE(0x6621850, internal_6621850, public_6621850);
extern "C" NAKED register_t __cdecl internal_6621850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        cmp eax, 0xFFFFFFFF
        je public_662187d
        test eax, eax
        je public_662187d
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [public_662901c]
        test ecx, ecx
        je public_662186d
        mov edx, ecx
        public_662186d : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        ret 0xC
        public_662187d : nop
        mov esi, dword ptr ss : [esp+0xC]
        push 0
        mov dword ptr ds : [esi], 0
        call dword ptr ds : [public_662900c]
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6621850)
    }
}

#undef public_662186d
#undef public_662187d
