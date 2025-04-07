#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);

#define public_6f4b72e _public_6f4b72e

PROC_DECLARE(0x6f4b6f0, internal_6f4b6f0, public_6f4b6f0);
extern "C" NAKED register_t __cdecl internal_6f4b6f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [eax+8]
        jb public_6f4b72e
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4b72e : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4b6f0)
    }
}

#undef public_6f4b72e
