#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c34ac4 _public_6c34ac4
#define public_6c34ace _public_6c34ace
#define public_6c34ad2 _public_6c34ad2
#define public_6c34ad7 _public_6c34ad7

PROC_DECLARE(0x6c34ab0, internal_6c34ab0, public_6c34ab0);
extern "C" NAKED register_t __cdecl internal_6c34ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6c34ad7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6c34ac4 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jge public_6c34ace
        mov edx, dword ptr ds : [edx+8]
        jmp public_6c34ad2
        public_6c34ace : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6c34ad2 : nop
        cmp edx, ecx
        jne public_6c34ac4
        pop esi
        public_6c34ad7 : nop
        ret 4
        UNREACHABLE_TRAP(0x6c34ab0)
    }
}

#undef public_6c34ac4
#undef public_6c34ace
#undef public_6c34ad2
#undef public_6c34ad7
