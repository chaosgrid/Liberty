#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f670);

#define public_627f684 _public_627f684
#define public_627f68e _public_627f68e
#define public_627f692 _public_627f692
#define public_627f697 _public_627f697

PROC_DECLARE(0x627f670, internal_627f670, public_627f670);
extern "C" NAKED register_t __cdecl internal_627f670()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_627f697
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_627f684 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jge public_627f68e
        mov eax, dword ptr ds : [eax+8]
        jmp public_627f692
        public_627f68e : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_627f692 : nop
        cmp eax, ecx
        jne public_627f684
        pop esi
        public_627f697 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x627f670)
    }
}

#undef public_627f684
#undef public_627f68e
#undef public_627f692
#undef public_627f697
