#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9d010);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9d020 _public_6f9d020
#define public_6f9d052 _public_6f9d052

PROC_DECLARE(0x6f9d010, internal_6f9d010, public_6f9d010);
extern "C" NAKED register_t __cdecl internal_6f9d010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd3cac]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_6f9d052
        nop 
        public_6f9d020 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [public_6fd3cb0]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6fd3cb0], ecx
        jne public_6f9d020
        mov eax, dword ptr ds : [public_6fd3cac]
        public_6f9d052 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6fd3cac], eax
        mov dword ptr ds : [public_6fd3cb0], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f9d010)
    }
}

#undef public_6f9d020
#undef public_6f9d052
