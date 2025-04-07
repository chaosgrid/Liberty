#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7d70);

#define public_6ec7d84 _public_6ec7d84
#define public_6ec7d8f _public_6ec7d8f
#define public_6ec7d92 _public_6ec7d92
#define public_6ec7d97 _public_6ec7d97

PROC_DECLARE(0x6ec7d70, internal_6ec7d70, public_6ec7d70);
extern "C" NAKED register_t __cdecl internal_6ec7d70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6ec7d97
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6ec7d84 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jae public_6ec7d8f
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_6ec7d92
        public_6ec7d8f : nop
        mov edx, dword ptr ds : [edx+8]
        public_6ec7d92 : nop
        cmp edx, ecx
        jne public_6ec7d84
        pop esi
        public_6ec7d97 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ec7d70)
    }
}

#undef public_6ec7d84
#undef public_6ec7d8f
#undef public_6ec7d92
#undef public_6ec7d97
