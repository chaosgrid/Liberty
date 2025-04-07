#include "Alchemy-PCH.h"


#define public_623f01b _public_623f01b
#define public_623f01f _public_623f01f
#define public_623f027 _public_623f027

PROC_DECLARE(0x623f000, internal_623f000, public_623f000);
extern "C" NAKED register_t __cdecl internal_623f000()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp edx, eax
        jle public_623f01f
        add eax, esi
        cmp eax, edx
        mov dword ptr ds : [ecx], eax
        jge public_623f027
        public_623f01b : nop
        xor al, al
        pop esi
        ret 
        public_623f01f : nop
        sub eax, esi
        cmp eax, edx
        mov dword ptr ds : [ecx], eax
        jg public_623f01b
        public_623f027 : nop
        mov dword ptr ds : [ecx], edx
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x623f000)
    }
}

#undef public_623f01b
#undef public_623f01f
#undef public_623f027
