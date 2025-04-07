#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2ec70);

#define public_6c2ec84 _public_6c2ec84
#define public_6c2ec8e _public_6c2ec8e
#define public_6c2ec92 _public_6c2ec92
#define public_6c2ec97 _public_6c2ec97

PROC_DECLARE(0x6c2ec70, internal_6c2ec70, public_6c2ec70);
extern "C" NAKED register_t __cdecl internal_6c2ec70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6c2ec97
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6c2ec84 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_6c2ec8e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6c2ec92
        public_6c2ec8e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6c2ec92 : nop
        cmp edx, ecx
        jne public_6c2ec84
        pop esi
        public_6c2ec97 : nop
        ret 4
        UNREACHABLE_TRAP(0x6c2ec70)
    }
}

#undef public_6c2ec84
#undef public_6c2ec8e
#undef public_6c2ec92
#undef public_6c2ec97
