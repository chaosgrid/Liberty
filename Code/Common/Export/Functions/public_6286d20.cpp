#include "Common-PCH.h"


#define public_6286d49 _public_6286d49

PROC_DECLARE(0x6286d20, internal_6286d20, public_6286d20);
extern "C" NAKED register_t __cdecl internal_6286d20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        test al, al
        je public_6286d49
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        test al, al
        jne public_6286d49
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6286d49
        mov eax, 1
        pop esi
        ret 
        public_6286d49 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6286d20)
    }
}

#undef public_6286d49
