#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ace834);

#define public_6ace85b _public_6ace85b
#define public_6ace85d _public_6ace85d

PROC_DECLARE(0x6ace834, internal_6ace834, public_6ace834);
extern "C" NAKED register_t __cdecl internal_6ace834()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6ace85b
        cmp dword ptr ds : [eax], 0x1423
        jne public_6ace85b
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ds:[eax+0x20]
        push 1
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        pop eax
        jmp public_6ace85d
        public_6ace85b : nop
        xor eax, eax
        public_6ace85d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ace834)
    }
}

#undef public_6ace85b
#undef public_6ace85d
