#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf9170 _public_6cf9170
#define public_6cf9172 _public_6cf9172
#define public_6cf918c _public_6cf918c
#define public_6cf9193 _public_6cf9193
#define public_6cf9195 _public_6cf9195

PROC_DECLARE(0x6cf9120, internal_6cf9120, public_6cf9120);
extern "C" NAKED register_t __cdecl internal_6cf9120()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], 0
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cf9195
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf9193
        add eax, 0xC
        test eax, eax
        je public_6cf9170
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cf9170
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_6cf9172
        public_6cf9170 : nop
        xor eax, eax
        public_6cf9172 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d6448c]
        test eax, eax
        je public_6cf918c
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ds : [edi], eax
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6cf918c : nop
        xor eax, eax
        mov dword ptr ds : [edi], eax
        pop edi
        pop esi
        ret 
        public_6cf9193 : nop
        mov eax, esi
        public_6cf9195 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf9120)
    }
}

#undef public_6cf9170
#undef public_6cf9172
#undef public_6cf918c
#undef public_6cf9193
#undef public_6cf9195
