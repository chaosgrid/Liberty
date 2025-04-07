#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5df00);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d5df10 _public_6d5df10
#define public_6d5df42 _public_6d5df42

PROC_DECLARE(0x6d5df00, internal_6d5df00, public_6d5df00);
extern "C" NAKED register_t __cdecl internal_6d5df00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d90468]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_6d5df42
        nop 
        public_6d5df10 : nop
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
        mov ecx, dword ptr ds : [public_6d9046c]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6d9046c], ecx
        jne public_6d5df10
        mov eax, dword ptr ds : [public_6d90468]
        public_6d5df42 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6d90468], eax
        mov dword ptr ds : [public_6d9046c], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5df00)
    }
}

#undef public_6d5df10
#undef public_6d5df42
