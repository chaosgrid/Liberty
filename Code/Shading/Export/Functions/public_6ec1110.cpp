#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec1110);

#define public_6ec1124 _public_6ec1124
#define public_6ec1131 _public_6ec1131
#define public_6ec113a _public_6ec113a
#define public_6ec113d _public_6ec113d

PROC_DECLARE(0x6ec1110, internal_6ec1110, public_6ec1110);
extern "C" NAKED register_t __cdecl internal_6ec1110()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x20]
        xor eax, eax
        test edx, edx
        jbe public_6ec113d
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6ec1124 : nop
        mov edx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ecx+0x20]
        cmp edx, esi
        ja public_6ec1131
        cmp dword ptr ds : [edi], esi
        jbe public_6ec113a
        public_6ec1131 : nop
        shr edx, 1
        mov dword ptr ds : [ebx], edx
        shr dword ptr ds : [edi], 1
        inc eax
        jmp public_6ec1124
        public_6ec113a : nop
        pop edi
        pop esi
        pop ebx
        public_6ec113d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ec1110)
    }
}

#undef public_6ec1124
#undef public_6ec1131
#undef public_6ec113a
#undef public_6ec113d
