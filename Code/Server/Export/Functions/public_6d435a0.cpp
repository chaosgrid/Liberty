#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d435a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d435b0 _public_6d435b0
#define public_6d435e2 _public_6d435e2

PROC_DECLARE(0x6d435a0, internal_6d435a0, public_6d435a0);
extern "C" NAKED register_t __cdecl internal_6d435a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8f62c]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_6d435e2
        nop 
        public_6d435b0 : nop
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
        mov ecx, dword ptr ds : [public_6d8f630]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6d8f630], ecx
        jne public_6d435b0
        mov eax, dword ptr ds : [public_6d8f62c]
        public_6d435e2 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6d8f62c], eax
        mov dword ptr ds : [public_6d8f630], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d435a0)
    }
}

#undef public_6d435b0
#undef public_6d435e2
