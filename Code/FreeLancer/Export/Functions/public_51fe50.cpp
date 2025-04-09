#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51fe50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_51fe60 _public_51fe60
#define public_51fe92 _public_51fe92

PROC_DECLARE(0x51fe50, internal_51fe50, public_51fe50);
extern "C" NAKED register_t __cdecl internal_51fe50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6753c4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_51fe92
        nop 
        public_51fe60 : nop
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
        mov ecx, dword ptr ds : [public_6753c8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6753c8], ecx
        jne public_51fe60
        mov eax, dword ptr ds : [public_6753c4]
        public_51fe92 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6753c4], eax
        mov dword ptr ds : [public_6753c8], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x51fe50)
    }
}

#undef public_51fe60
#undef public_51fe92
