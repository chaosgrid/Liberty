#include "Movie-PCH.h"


#define public_6ac1b04 _public_6ac1b04
#define public_6ac1b2f _public_6ac1b2f
#define public_6ac1b54 _public_6ac1b54

PROC_DECLARE(0x6ac1af0, internal_6ac1af0, public_6ac1af0);
extern "C" NAKED register_t __cdecl internal_6ac1af0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        test edx, edx
        push edi
        jne public_6ac1b04
        pop edi
        mov eax, 0x80004003
        pop esi
        ret 0xC
        public_6ac1b04 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        mov ecx, 4
        mov edi, offset public_6ada960
        mov esi, eax
        xor ebx, ebx
        repe cmpsd
        pop ebx
        jne public_6ac1b2f
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_6ac1b2f : nop
        mov esi, eax
        mov ecx, 4
        mov edi, offset public_6ada980
        xor eax, eax
        repe cmpsd
        jne public_6ac1b54
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_6ac1b54 : nop
        pop edi
        mov eax, 0x80004002
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ac1af0)
    }
}

#undef public_6ac1b04
#undef public_6ac1b2f
#undef public_6ac1b54
