#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_553530);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_553540 _public_553540
#define public_553572 _public_553572

PROC_DECLARE(0x553530, internal_553530, public_553530);
extern "C" NAKED register_t __cdecl internal_553530()
{
    __asm
    {
        mov eax, dword ptr ds : [public_679880]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_553572
        nop 
        public_553540 : nop
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
        mov ecx, dword ptr ds : [public_679884]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_679884], ecx
        jne public_553540
        mov eax, dword ptr ds : [public_679880]
        public_553572 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_679880], eax
        mov dword ptr ds : [public_679884], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x553530)
    }
}

#undef public_553540
#undef public_553572
