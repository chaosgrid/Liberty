#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec60f0);

#define public_6ec6104 _public_6ec6104
#define public_6ec610e _public_6ec610e
#define public_6ec6112 _public_6ec6112
#define public_6ec6117 _public_6ec6117

PROC_DECLARE(0x6ec60f0, internal_6ec60f0, public_6ec60f0);
extern "C" NAKED register_t __cdecl internal_6ec60f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6ec6117
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6ec6104 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jge public_6ec610e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6ec6112
        public_6ec610e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6ec6112 : nop
        cmp edx, ecx
        jne public_6ec6104
        pop esi
        public_6ec6117 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ec60f0)
    }
}

#undef public_6ec6104
#undef public_6ec610e
#undef public_6ec6112
#undef public_6ec6117
