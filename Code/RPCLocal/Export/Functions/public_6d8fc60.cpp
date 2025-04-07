#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8fc60);

#define public_6d8fc70 _public_6d8fc70
#define public_6d8fc7b _public_6d8fc7b
#define public_6d8fc81 _public_6d8fc81

PROC_DECLARE(0x6d8fc60, internal_6d8fc60, public_6d8fc60);
extern "C" NAKED register_t __cdecl internal_6d8fc60()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, ecx
        push esi
        je public_6d8fc7b
        mov esi, dword ptr ss : [esp+8]
        public_6d8fc70 : nop
        cmp edx, esi
        je public_6d8fc81
        mov eax, dword ptr ds : [eax]
        inc edx
        cmp eax, ecx
        jne public_6d8fc70
        public_6d8fc7b : nop
        xor eax, eax
        pop esi
        ret 4
        public_6d8fc81 : nop
        mov eax, dword ptr ds : [eax+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d8fc60)
    }
}

#undef public_6d8fc70
#undef public_6d8fc7b
#undef public_6d8fc81
