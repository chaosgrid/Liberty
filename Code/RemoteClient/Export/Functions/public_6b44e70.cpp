#include "RemoteClient-PCH.h"


#define public_6b44e80 _public_6b44e80
#define public_6b44e8b _public_6b44e8b
#define public_6b44e91 _public_6b44e91

PROC_DECLARE(0x6b44e70, internal_6b44e70, public_6b44e70);
extern "C" NAKED register_t __cdecl internal_6b44e70()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, ecx
        push esi
        je public_6b44e8b
        mov esi, dword ptr ss : [esp+8]
        public_6b44e80 : nop
        cmp edx, esi
        je public_6b44e91
        mov eax, dword ptr ds : [eax]
        inc edx
        cmp eax, ecx
        jne public_6b44e80
        public_6b44e8b : nop
        xor eax, eax
        pop esi
        ret 4
        public_6b44e91 : nop
        mov eax, dword ptr ds : [eax+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b44e70)
    }
}

#undef public_6b44e80
#undef public_6b44e8b
#undef public_6b44e91
