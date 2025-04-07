#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ef70);

#define public_6f3ef84 _public_6f3ef84
#define public_6f3ef8e _public_6f3ef8e
#define public_6f3ef92 _public_6f3ef92
#define public_6f3ef97 _public_6f3ef97

PROC_DECLARE(0x6f3ef70, internal_6f3ef70, public_6f3ef70);
extern "C" NAKED register_t __cdecl internal_6f3ef70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6f3ef97
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6f3ef84 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jge public_6f3ef8e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6f3ef92
        public_6f3ef8e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6f3ef92 : nop
        cmp edx, ecx
        jne public_6f3ef84
        pop esi
        public_6f3ef97 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f3ef70)
    }
}

#undef public_6f3ef84
#undef public_6f3ef8e
#undef public_6f3ef92
#undef public_6f3ef97
