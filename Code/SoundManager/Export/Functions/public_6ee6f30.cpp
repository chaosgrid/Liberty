#include "SoundManager-PCH.h"


#define public_6ee6f46 _public_6ee6f46
#define public_6ee6f58 _public_6ee6f58
#define public_6ee6f69 _public_6ee6f69

PROC_DECLARE(0x6ee6f30, internal_6ee6f30, public_6ee6f30);
extern "C" NAKED register_t __cdecl internal_6ee6f30()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6eeaf04]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push esi
        mov edx, 1
        je public_6ee6f69
        mov esi, dword ptr ss : [esp+0xC]
        public_6ee6f46 : nop
        cmp esi, dword ptr ds : [eax+8]
        je public_6ee6f58
        mov eax, dword ptr ds : [eax]
        inc edx
        cmp eax, ecx
        jne public_6ee6f46
        xor eax, eax
        pop esi
        ret 8
        public_6ee6f58 : nop
        test edx, edx
        je public_6ee6f69
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6ee6f69
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x48]
        public_6ee6f69 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ee6f30)
    }
}

#undef public_6ee6f46
#undef public_6ee6f58
#undef public_6ee6f69
