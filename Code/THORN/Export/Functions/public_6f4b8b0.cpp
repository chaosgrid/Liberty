#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);

#define public_6f4b8ed _public_6f4b8ed

PROC_DECLARE(0x6f4b8b0, internal_6f4b8b0, public_6f4b8b0);
extern "C" NAKED register_t __cdecl internal_6f4b8b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [eax+8]
        jb public_6f4b8ed
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4b8ed : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4b8b0)
    }
}

#undef public_6f4b8ed
