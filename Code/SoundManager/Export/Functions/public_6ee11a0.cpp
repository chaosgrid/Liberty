#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee11a0);

#define public_6ee11b7 _public_6ee11b7
#define public_6ee11d4 _public_6ee11d4
#define public_6ee11e6 _public_6ee11e6

PROC_DECLARE(0x6ee11a0, internal_6ee11a0, public_6ee11a0);
extern "C" NAKED register_t __cdecl internal_6ee11a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6ee11b7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], 0
        public_6ee11b7 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ee11d4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x48]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_6ee11d4 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ee11e6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], 0
        public_6ee11e6 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ee11a0)
    }
}

#undef public_6ee11b7
#undef public_6ee11d4
#undef public_6ee11e6
