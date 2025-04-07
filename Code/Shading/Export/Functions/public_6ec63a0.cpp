#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec63a0);

#define public_6ec63b4 _public_6ec63b4
#define public_6ec63be _public_6ec63be
#define public_6ec63c2 _public_6ec63c2
#define public_6ec63c7 _public_6ec63c7

PROC_DECLARE(0x6ec63a0, internal_6ec63a0, public_6ec63a0);
extern "C" NAKED register_t __cdecl internal_6ec63a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6ec63c7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6ec63b4 : nop
        cmp dword ptr ds : [edx+0x10], esi
        jge public_6ec63be
        mov edx, dword ptr ds : [edx+8]
        jmp public_6ec63c2
        public_6ec63be : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6ec63c2 : nop
        cmp edx, ecx
        jne public_6ec63b4
        pop esi
        public_6ec63c7 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ec63a0)
    }
}

#undef public_6ec63b4
#undef public_6ec63be
#undef public_6ec63c2
#undef public_6ec63c7
