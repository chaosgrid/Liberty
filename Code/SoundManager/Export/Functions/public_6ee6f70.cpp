#include "SoundManager-PCH.h"


#define public_6ee6f85 _public_6ee6f85
#define public_6ee6f97 _public_6ee6f97
#define public_6ee6fbc _public_6ee6fbc

PROC_DECLARE(0x6ee6f70, internal_6ee6f70, public_6ee6f70);
extern "C" NAKED register_t __cdecl internal_6ee6f70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6eeaf04]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edx, 1
        je public_6ee6fbc
        mov ecx, dword ptr ss : [esp+0xC]
        public_6ee6f85 : nop
        cmp ecx, dword ptr ds : [esi+8]
        je public_6ee6f97
        mov esi, dword ptr ds : [esi]
        inc edx
        cmp esi, eax
        jne public_6ee6f85
        xor eax, eax
        pop esi
        ret 8
        public_6ee6f97 : nop
        test edx, edx
        je public_6ee6fbc
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6ee6fbc
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+0x1C]
        mov esi, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi]
        neg al
        sbb eax, eax
        neg eax
        push eax
        push 0
        push 0
        push esi
        call dword ptr ds : [ecx+0x30]
        public_6ee6fbc : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ee6f70)
    }
}

#undef public_6ee6f85
#undef public_6ee6f97
#undef public_6ee6fbc
