#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6d0);

#define public_66ff6e4 _public_66ff6e4
#define public_66ff6ee _public_66ff6ee
#define public_66ff6f2 _public_66ff6f2
#define public_66ff6f7 _public_66ff6f7

PROC_DECLARE(0x66ff6d0, internal_66ff6d0, public_66ff6d0);
extern "C" NAKED register_t __cdecl internal_66ff6d0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_66ff6f7
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_66ff6e4 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jge public_66ff6ee
        mov eax, dword ptr ds : [eax+8]
        jmp public_66ff6f2
        public_66ff6ee : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_66ff6f2 : nop
        cmp eax, ecx
        jne public_66ff6e4
        pop esi
        public_66ff6f7 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x66ff6d0)
    }
}

#undef public_66ff6e4
#undef public_66ff6ee
#undef public_66ff6f2
#undef public_66ff6f7
