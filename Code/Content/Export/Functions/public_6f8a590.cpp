#include "Content-PCH.h"


#define public_6f8a5bb _public_6f8a5bb

PROC_DECLARE(0x6f8a590, internal_6f8a590, public_6f8a590);
extern "C" NAKED register_t __cdecl internal_6f8a590()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3124]
        mov esi, ecx
        call edi
        cmp eax, 5
        je public_6f8a5bb
        mov ecx, esi
        call edi
        cmp eax, 6
        je public_6f8a5bb
        mov ecx, esi
        call edi
        cmp eax, 7
        je public_6f8a5bb
        pop edi
        mov eax, 1
        pop esi
        ret 
        public_6f8a5bb : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f8a590)
    }
}

#undef public_6f8a5bb
