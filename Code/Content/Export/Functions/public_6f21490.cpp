#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21490);

#define public_6f214a4 _public_6f214a4
#define public_6f214af _public_6f214af
#define public_6f214b2 _public_6f214b2
#define public_6f214b7 _public_6f214b7

PROC_DECLARE(0x6f21490, internal_6f21490, public_6f21490);
extern "C" NAKED register_t __cdecl internal_6f21490()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6f214b7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6f214a4 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jge public_6f214af
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_6f214b2
        public_6f214af : nop
        mov edx, dword ptr ds : [edx+8]
        public_6f214b2 : nop
        cmp edx, ecx
        jne public_6f214a4
        pop esi
        public_6f214b7 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f21490)
    }
}

#undef public_6f214a4
#undef public_6f214af
#undef public_6f214b2
#undef public_6f214b7
