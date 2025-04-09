#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54f960);

#define public_54f977 _public_54f977
#define public_54f98b _public_54f98b
#define public_54f99c _public_54f99c
#define public_54f9ad _public_54f9ad

PROC_DECLARE(0x54f960, internal_54f960, public_54f960);
extern "C" NAKED register_t __cdecl internal_54f960()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_54f977
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], 0
        public_54f977 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_54f98b
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x10], 0
        public_54f98b : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_54f99c
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_54f99c : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_54f9ad
        mov dword ptr ds : [esi+0x10], eax
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_54f9ad : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x54f960)
    }
}

#undef public_54f977
#undef public_54f98b
#undef public_54f99c
#undef public_54f9ad
