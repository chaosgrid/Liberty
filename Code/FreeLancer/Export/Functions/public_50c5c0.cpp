#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c5c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_50c5d0 _public_50c5d0
#define public_50c603 _public_50c603

PROC_DECLARE(0x50c5c0, internal_50c5c0, public_50c5c0);
extern "C" NAKED register_t __cdecl internal_50c5c0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_675180]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_50c603
        mov edi, edi
        public_50c5d0 : nop
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
        mov ecx, dword ptr ds : [public_675184]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_675184], ecx
        jne public_50c5d0
        mov edi, dword ptr ds : [public_675180]
        public_50c603 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_675180], eax
        mov dword ptr ds : [public_675184], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x50c5c0)
    }
}

#undef public_50c5d0
#undef public_50c603
