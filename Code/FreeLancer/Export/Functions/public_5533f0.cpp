#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5533f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_553400 _public_553400
#define public_553432 _public_553432

PROC_DECLARE(0x5533f0, internal_5533f0, public_5533f0);
extern "C" NAKED register_t __cdecl internal_5533f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_679898]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_553432
        nop 
        public_553400 : nop
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
        mov ecx, dword ptr ds : [public_67989c]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_67989c], ecx
        jne public_553400
        mov eax, dword ptr ds : [public_679898]
        public_553432 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_679898], eax
        mov dword ptr ds : [public_67989c], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5533f0)
    }
}

#undef public_553400
#undef public_553432
