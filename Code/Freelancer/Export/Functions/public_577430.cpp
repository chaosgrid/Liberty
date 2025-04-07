#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_577430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_577440 _public_577440
#define public_577473 _public_577473

PROC_DECLARE(0x577430, internal_577430, public_577430);
extern "C" NAKED register_t __cdecl internal_577430()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_67c21c]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_577473
        mov edi, edi
        public_577440 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67c220]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_67c220], ecx
        jne public_577440
        mov edi, dword ptr ds : [public_67c21c]
        public_577473 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_67c21c], eax
        mov dword ptr ds : [public_67c220], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x577430)
    }
}

#undef public_577440
#undef public_577473
