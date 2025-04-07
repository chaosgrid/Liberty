#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3db70);

#define public_6f3db84 _public_6f3db84
#define public_6f3db8e _public_6f3db8e
#define public_6f3db92 _public_6f3db92
#define public_6f3db97 _public_6f3db97

PROC_DECLARE(0x6f3db70, internal_6f3db70, public_6f3db70);
extern "C" NAKED register_t __cdecl internal_6f3db70()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6f3db97
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6f3db84 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jge public_6f3db8e
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f3db92
        public_6f3db8e : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6f3db92 : nop
        cmp eax, ecx
        jne public_6f3db84
        pop esi
        public_6f3db97 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6f3db70)
    }
}

#undef public_6f3db84
#undef public_6f3db8e
#undef public_6f3db92
#undef public_6f3db97
