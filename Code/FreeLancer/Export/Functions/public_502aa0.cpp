#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502aa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_502ab0 _public_502ab0
#define public_502add _public_502add
#define public_502afb _public_502afb

PROC_DECLARE(0x502aa0, internal_502aa0, public_502aa0);
extern "C" NAKED register_t __cdecl internal_502aa0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_674fd8]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_502add
        mov edi, edi
        public_502ab0 : nop
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
        jne public_502ab0
        public_502add : nop
        mov eax, dword ptr ds : [public_674fd0]
        test eax, eax
        pop edi
        pop esi
        je public_502afb
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [public_674fd0], 0
        public_502afb : nop
        ret 
        UNREACHABLE_TRAP(0x502aa0)
    }
}

#undef public_502ab0
#undef public_502add
#undef public_502afb
