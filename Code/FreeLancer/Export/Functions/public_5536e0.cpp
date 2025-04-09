#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5536e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5536f0 _public_5536f0
#define public_553722 _public_553722

PROC_DECLARE(0x5536e0, internal_5536e0, public_5536e0);
extern "C" NAKED register_t __cdecl internal_5536e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_679874]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_553722
        nop 
        public_5536f0 : nop
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
        mov ecx, dword ptr ds : [public_679878]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_679878], ecx
        jne public_5536f0
        mov eax, dword ptr ds : [public_679874]
        public_553722 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_679874], eax
        mov dword ptr ds : [public_679878], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5536e0)
    }
}

#undef public_5536f0
#undef public_553722
