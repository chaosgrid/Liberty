#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d18a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d18a70 _public_6d18a70
#define public_6d18aa2 _public_6d18aa2

PROC_DECLARE(0x6d18a60, internal_6d18a60, public_6d18a60);
extern "C" NAKED register_t __cdecl internal_6d18a60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8f5c0]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_6d18aa2
        nop 
        public_6d18a70 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [public_6d8f5c4]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6d8f5c4], ecx
        jne public_6d18a70
        mov eax, dword ptr ds : [public_6d8f5c0]
        public_6d18aa2 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6d8f5c0], eax
        mov dword ptr ds : [public_6d8f5c4], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d18a60)
    }
}

#undef public_6d18a70
#undef public_6d18aa2
