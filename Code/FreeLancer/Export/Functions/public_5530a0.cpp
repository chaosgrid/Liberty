#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5530a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5530b0 _public_5530b0
#define public_5530e2 _public_5530e2

PROC_DECLARE(0x5530a0, internal_5530a0, public_5530a0);
extern "C" NAKED register_t __cdecl internal_5530a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6798a4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_5530e2
        nop 
        public_5530b0 : nop
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
        mov ecx, dword ptr ds : [public_6798a8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6798a8], ecx
        jne public_5530b0
        mov eax, dword ptr ds : [public_6798a4]
        public_5530e2 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6798a4], eax
        mov dword ptr ds : [public_6798a8], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5530a0)
    }
}

#undef public_5530b0
#undef public_5530e2
