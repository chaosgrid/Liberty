#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1670);

#define public_6ed1684 _public_6ed1684
#define public_6ed168f _public_6ed168f
#define public_6ed1692 _public_6ed1692
#define public_6ed1697 _public_6ed1697

PROC_DECLARE(0x6ed1670, internal_6ed1670, public_6ed1670);
extern "C" NAKED register_t __cdecl internal_6ed1670()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6ed1697
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6ed1684 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jae public_6ed168f
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_6ed1692
        public_6ed168f : nop
        mov edx, dword ptr ds : [edx+8]
        public_6ed1692 : nop
        cmp edx, ecx
        jne public_6ed1684
        pop esi
        public_6ed1697 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ed1670)
    }
}

#undef public_6ed1684
#undef public_6ed168f
#undef public_6ed1692
#undef public_6ed1697
