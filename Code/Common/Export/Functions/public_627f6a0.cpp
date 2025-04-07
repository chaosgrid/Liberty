#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f6a0);

#define public_627f6b4 _public_627f6b4
#define public_627f6bf _public_627f6bf
#define public_627f6c2 _public_627f6c2
#define public_627f6c7 _public_627f6c7

PROC_DECLARE(0x627f6a0, internal_627f6a0, public_627f6a0);
extern "C" NAKED register_t __cdecl internal_627f6a0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_627f6c7
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_627f6b4 : nop
        cmp esi, dword ptr ds : [eax+0xC]
        jge public_627f6bf
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        jmp public_627f6c2
        public_627f6bf : nop
        mov eax, dword ptr ds : [eax+8]
        public_627f6c2 : nop
        cmp eax, ecx
        jne public_627f6b4
        pop esi
        public_627f6c7 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x627f6a0)
    }
}

#undef public_627f6b4
#undef public_627f6bf
#undef public_627f6c2
#undef public_627f6c7
