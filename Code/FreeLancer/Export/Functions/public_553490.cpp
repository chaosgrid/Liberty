#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_553490);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5534a0 _public_5534a0
#define public_5534d2 _public_5534d2

PROC_DECLARE(0x553490, internal_553490, public_553490);
extern "C" NAKED register_t __cdecl internal_553490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67988c]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_5534d2
        nop 
        public_5534a0 : nop
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
        mov ecx, dword ptr ds : [public_679890]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_679890], ecx
        jne public_5534a0
        mov eax, dword ptr ds : [public_67988c]
        public_5534d2 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_67988c], eax
        mov dword ptr ds : [public_679890], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x553490)
    }
}

#undef public_5534a0
#undef public_5534d2
