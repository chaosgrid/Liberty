#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4278e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4278f0 _public_4278f0
#define public_427923 _public_427923

PROC_DECLARE(0x4278e0, internal_4278e0, public_4278e0);
extern "C" NAKED register_t __cdecl internal_4278e0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_667c70]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_427923
        mov edi, edi
        public_4278f0 : nop
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
        mov ecx, dword ptr ds : [public_667c74]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_667c74], ecx
        jne public_4278f0
        mov edi, dword ptr ds : [public_667c70]
        public_427923 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_667c70], eax
        mov dword ptr ds : [public_667c74], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4278e0)
    }
}

#undef public_4278f0
#undef public_427923
