#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52cfd0);
CLANG_FORWARD_PROC_SYMBOL(public_5532d0);

#define public_52d534 _public_52d534
#define public_52d545 _public_52d545

PROC_DECLARE(0x52d510, internal_52d510, public_52d510);
extern "C" NAKED register_t __cdecl internal_52d510()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_52d545
        call public_52cfd0
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_52d534
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x94]
        public_52d534 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        push eax
        call public_5532d0
        add esp, 4
        public_52d545 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52d510)
    }
}

#undef public_52d534
#undef public_52d545
