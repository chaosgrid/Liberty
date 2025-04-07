#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cffd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cffd70 _public_6cffd70
#define public_6cffda3 _public_6cffda3

PROC_DECLARE(0x6cffd60, internal_6cffd60, public_6cffd60);
extern "C" NAKED register_t __cdecl internal_6cffd60()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_6d8d8f8]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6cffda3
        mov edi, edi
        public_6cffd70 : nop
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
        mov ecx, dword ptr ds : [public_6d8d8fc]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6d8d8fc], ecx
        jne public_6cffd70
        mov edi, dword ptr ds : [public_6d8d8f8]
        public_6cffda3 : nop
        push edi
        call public_6d5ffb0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6d8d8f8], eax
        mov dword ptr ds : [public_6d8d8fc], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cffd60)
    }
}

#undef public_6cffd70
#undef public_6cffda3
