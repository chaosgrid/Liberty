#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4119e0);

#define public_4119f4 _public_4119f4
#define public_4119ff _public_4119ff
#define public_411a02 _public_411a02
#define public_411a07 _public_411a07

PROC_DECLARE(0x4119e0, internal_4119e0, public_4119e0);
extern "C" NAKED register_t __cdecl internal_4119e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_411a07
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_4119f4 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jae public_4119ff
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_411a02
        public_4119ff : nop
        mov edx, dword ptr ds : [edx+8]
        public_411a02 : nop
        cmp edx, ecx
        jne public_4119f4
        pop esi
        public_411a07 : nop
        ret 4
        UNREACHABLE_TRAP(0x4119e0)
    }
}

#undef public_4119f4
#undef public_4119ff
#undef public_411a02
#undef public_411a07
