#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502040);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_502050 _public_502050
#define public_502083 _public_502083

PROC_DECLARE(0x502040, internal_502040, public_502040);
extern "C" NAKED register_t __cdecl internal_502040()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_674fd8]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_502083
        mov edi, edi
        public_502050 : nop
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
        mov ecx, dword ptr ds : [public_674fdc]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_674fdc], ecx
        jne public_502050
        mov edi, dword ptr ds : [public_674fd8]
        public_502083 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_674fd8], eax
        mov dword ptr ds : [public_674fdc], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x502040)
    }
}

#undef public_502050
#undef public_502083
