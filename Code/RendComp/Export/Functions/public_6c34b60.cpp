#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34b60);

#define public_6c34b74 _public_6c34b74
#define public_6c34b7f _public_6c34b7f
#define public_6c34b82 _public_6c34b82
#define public_6c34b87 _public_6c34b87

PROC_DECLARE(0x6c34b60, internal_6c34b60, public_6c34b60);
extern "C" NAKED register_t __cdecl internal_6c34b60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6c34b87
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6c34b74 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jge public_6c34b7f
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_6c34b82
        public_6c34b7f : nop
        mov edx, dword ptr ds : [edx+8]
        public_6c34b82 : nop
        cmp edx, ecx
        jne public_6c34b74
        pop esi
        public_6c34b87 : nop
        ret 4
        UNREACHABLE_TRAP(0x6c34b60)
    }
}

#undef public_6c34b74
#undef public_6c34b7f
#undef public_6c34b82
#undef public_6c34b87
