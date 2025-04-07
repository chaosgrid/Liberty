#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6aca7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6aca860);

#define public_6aca870 _public_6aca870
#define public_6aca87b _public_6aca87b
#define public_6aca881 _public_6aca881

PROC_DECLARE(0x6aca860, internal_6aca860, public_6aca860);
extern "C" NAKED register_t __cdecl internal_6aca860()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae0988]
        test eax, eax
        jne public_6aca870
        push 0
        call public_6aca7d0
        public_6aca870 : nop
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        mov ecx, offset public_6ae0abc
        public_6aca87b : nop
        cmp dword ptr ds : [ecx], edx
        jb public_6aca881
        mov eax, ecx
        public_6aca881 : nop
        sub ecx, 0x1C
        cmp ecx, offset public_6ae0988
        jge public_6aca87b
        ret 4
        UNREACHABLE_TRAP(0x6aca860)
    }
}

#undef public_6aca870
#undef public_6aca87b
#undef public_6aca881
