#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6120);

#define public_6ec6134 _public_6ec6134
#define public_6ec613e _public_6ec613e
#define public_6ec6142 _public_6ec6142
#define public_6ec6147 _public_6ec6147

PROC_DECLARE(0x6ec6120, internal_6ec6120, public_6ec6120);
extern "C" NAKED register_t __cdecl internal_6ec6120()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6ec6147
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6ec6134 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_6ec613e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6ec6142
        public_6ec613e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6ec6142 : nop
        cmp edx, ecx
        jne public_6ec6134
        pop esi
        public_6ec6147 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ec6120)
    }
}

#undef public_6ec6134
#undef public_6ec613e
#undef public_6ec6142
#undef public_6ec6147
