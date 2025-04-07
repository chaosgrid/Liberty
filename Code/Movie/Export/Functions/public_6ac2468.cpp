#include "Movie-PCH.h"


#define public_6ac248f _public_6ac248f
#define public_6ac24a1 _public_6ac24a1
#define public_6ac24ac _public_6ac24ac

PROC_DECLARE(0x6ac2468, internal_6ac2468, public_6ac2468);
extern "C" NAKED register_t __cdecl internal_6ac2468()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        push 4
        pop ecx
        mov esi, offset public_6ada960
        xor eax, eax
        repe cmpsd
        je public_6ac248f
        mov edi, dword ptr ss : [ebp+0xC]
        push 4
        pop ecx
        mov esi, offset public_6ada760
        xor eax, eax
        repe cmpsd
        jne public_6ac24a1
        public_6ac248f : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        jmp public_6ac24ac
        public_6ac24a1 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        and dword ptr ds : [eax], 0
        mov eax, 0x80004002
        public_6ac24ac : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ac2468)
    }
}

#undef public_6ac248f
#undef public_6ac24a1
#undef public_6ac24ac
