#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_553660);

#define public_553675 _public_553675
#define public_55367f _public_55367f
#define public_553689 _public_553689
#define public_55368d _public_55368d
#define public_553691 _public_553691

PROC_DECLARE(0x553660, internal_553660, public_553660);
extern "C" NAKED register_t __cdecl internal_553660()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_679880]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push esi
        je public_55368d
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+8]
        public_553675 : nop
        cmp edx, dword ptr ds : [eax+0xC]
        jne public_55367f
        cmp esi, dword ptr ds : [eax+8]
        je public_553689
        public_55367f : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_553675
        xor al, al
        pop esi
        ret 
        public_553689 : nop
        cmp eax, ecx
        jne public_553691
        public_55368d : nop
        xor al, al
        pop esi
        ret 
        public_553691 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x553660)
    }
}

#undef public_553675
#undef public_55367f
#undef public_553689
#undef public_55368d
#undef public_553691
