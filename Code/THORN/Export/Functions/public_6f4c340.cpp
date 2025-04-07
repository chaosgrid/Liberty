#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c340);

#define public_6f4c37d _public_6f4c37d

PROC_DECLARE(0x6f4c340, internal_6f4c340, public_6f4c340);
extern "C" NAKED register_t __cdecl internal_6f4c340()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        shl eax, 4
        sub ecx, eax
        push eax
        push ecx
        add ecx, 0x10
        push ecx
        call dword ptr ds : [public_6f5a078]
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 0xC
        cmp edx, ecx
        jb public_6f4c37d
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4c37d : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4c340)
    }
}

#undef public_6f4c37d
