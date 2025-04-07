#include "Common-PCH.h"


#define public_626f8d0 _public_626f8d0
#define public_626f8e3 _public_626f8e3
#define public_626f8e7 _public_626f8e7

PROC_DECLARE(0x626f8c0, internal_626f8c0, public_626f8c0);
extern "C" NAKED register_t __cdecl internal_626f8c0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push esi
        je public_626f8e3
        mov edx, 0x3FFFFFFF
        nop 
        public_626f8d0 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp byte ptr ds : [esi], 0
        je public_626f8e7
        test dword ptr ds : [eax+0xC], edx
        je public_626f8e7
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_626f8d0
        public_626f8e3 : nop
        pop esi
        mov al, 1
        ret 
        public_626f8e7 : nop
        pop esi
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x626f8c0)
    }
}

#undef public_626f8d0
#undef public_626f8e3
#undef public_626f8e7
