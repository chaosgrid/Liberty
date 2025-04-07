#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf90ef _public_6cf90ef
#define public_6cf90f1 _public_6cf90f1
#define public_6cf910c _public_6cf910c
#define public_6cf9110 _public_6cf9110
#define public_6cf9112 _public_6cf9112

PROC_DECLARE(0x6cf90b0, internal_6cf90b0, public_6cf90b0);
extern "C" NAKED register_t __cdecl internal_6cf90b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cf9112
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf9110
        add eax, 0xC
        test eax, eax
        je public_6cf90ef
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cf90ef
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cf90f1
        public_6cf90ef : nop
        xor eax, eax
        public_6cf90f1 : nop
        mov ecx, dword ptr ds : [eax+0x54]
        test ecx, ecx
        je public_6cf910c
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        push eax
        call dword ptr ds : [public_6d644b4]
        add esp, 0xC
        public_6cf910c : nop
        xor eax, eax
        pop esi
        ret 
        public_6cf9110 : nop
        mov eax, esi
        public_6cf9112 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf90b0)
    }
}

#undef public_6cf90ef
#undef public_6cf90f1
#undef public_6cf910c
#undef public_6cf9110
#undef public_6cf9112
