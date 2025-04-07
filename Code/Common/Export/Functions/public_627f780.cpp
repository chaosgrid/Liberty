#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f780);

#define public_627f794 _public_627f794
#define public_627f79f _public_627f79f
#define public_627f7a2 _public_627f7a2
#define public_627f7a7 _public_627f7a7

PROC_DECLARE(0x627f780, internal_627f780, public_627f780);
extern "C" NAKED register_t __cdecl internal_627f780()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_627f7a7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_627f794 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jge public_627f79f
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_627f7a2
        public_627f79f : nop
        mov edx, dword ptr ds : [edx+8]
        public_627f7a2 : nop
        cmp edx, ecx
        jne public_627f794
        pop esi
        public_627f7a7 : nop
        ret 4
        UNREACHABLE_TRAP(0x627f780)
    }
}

#undef public_627f794
#undef public_627f79f
#undef public_627f7a2
#undef public_627f7a7
