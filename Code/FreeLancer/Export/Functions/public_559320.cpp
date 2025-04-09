#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559320);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_559330 _public_559330
#define public_559363 _public_559363

PROC_DECLARE(0x559320, internal_559320, public_559320);
extern "C" NAKED register_t __cdecl internal_559320()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_679a14]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_559363
        mov edi, edi
        public_559330 : nop
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
        mov ecx, dword ptr ds : [public_679a18]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_679a18], ecx
        jne public_559330
        mov edi, dword ptr ds : [public_679a14]
        public_559363 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_679a14], eax
        mov dword ptr ds : [public_679a18], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x559320)
    }
}

#undef public_559330
#undef public_559363
