#include "DALib-PCH.h"


#define public_65c5476 _public_65c5476

PROC_DECLARE(0x65c5440, internal_65c5440, public_65c5440);
extern "C" NAKED register_t __cdecl internal_65c5440()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_65c5476
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        je public_65c5476
        push esi
        mov dword ptr ds : [edx], 0x5C
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+0x568]
        mov esi, dword ptr ds : [eax]
        push 0
        push edx
        push ecx
        push eax
        call dword ptr ds : [esi+0x80]
        neg eax
        sbb al, al
        inc al
        pop esi
        ret 4
        public_65c5476 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x65c5440)
    }
}

#undef public_65c5476
