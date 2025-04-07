#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f575a0);

#define public_6f575b6 _public_6f575b6
#define public_6f575c1 _public_6f575c1
#define public_6f575c3 _public_6f575c3

PROC_DECLARE(0x6f575a0, internal_6f575a0, public_6f575a0);
extern "C" NAKED register_t __cdecl internal_6f575a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x12C]
        mov ecx, dword ptr ds : [ecx+0x130]
        cmp eax, ecx
        je public_6f575c1
        mov edx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [edx]
        public_6f575b6 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f575c3
        add eax, 4
        cmp eax, ecx
        jne public_6f575b6
        public_6f575c1 : nop
        mov eax, ecx
        public_6f575c3 : nop
        cmp eax, ecx
        setne al
        ret 4
        UNREACHABLE_TRAP(0x6f575a0)
    }
}

#undef public_6f575b6
#undef public_6f575c1
#undef public_6f575c3
