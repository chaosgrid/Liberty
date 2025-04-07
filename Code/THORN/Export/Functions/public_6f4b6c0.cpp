#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);

#define public_6f4b6e8 _public_6f4b6e8

PROC_DECLARE(0x6f4b6c0, internal_6f4b6c0, public_6f4b6c0);
extern "C" NAKED register_t __cdecl internal_6f4b6c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], 0xFFFFFFFA
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [eax+8]
        jb public_6f4b6e8
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4b6e8 : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4b6c0)
    }
}

#undef public_6f4b6e8
