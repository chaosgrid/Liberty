#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_52c7b4 _public_52c7b4
#define public_52c7be _public_52c7be
#define public_52c7c2 _public_52c7c2
#define public_52c7c7 _public_52c7c7

PROC_DECLARE(0x52c7a0, internal_52c7a0, public_52c7a0);
extern "C" NAKED register_t __cdecl internal_52c7a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_52c7c7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_52c7b4 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_52c7be
        mov edx, dword ptr ds : [edx+8]
        jmp public_52c7c2
        public_52c7be : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_52c7c2 : nop
        cmp edx, ecx
        jne public_52c7b4
        pop esi
        public_52c7c7 : nop
        ret 4
        UNREACHABLE_TRAP(0x52c7a0)
    }
}

#undef public_52c7b4
#undef public_52c7be
#undef public_52c7c2
#undef public_52c7c7
