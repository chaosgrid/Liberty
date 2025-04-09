#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555d50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_555d60 _public_555d60
#define public_555d93 _public_555d93

PROC_DECLARE(0x555d50, internal_555d50, public_555d50);
extern "C" NAKED register_t __cdecl internal_555d50()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_67999c]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_555d93
        mov edi, edi
        public_555d60 : nop
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
        mov ecx, dword ptr ds : [public_6799a0]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6799a0], ecx
        jne public_555d60
        mov edi, dword ptr ds : [public_67999c]
        public_555d93 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_67999c], eax
        mov dword ptr ds : [public_6799a0], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x555d50)
    }
}

#undef public_555d60
#undef public_555d93
