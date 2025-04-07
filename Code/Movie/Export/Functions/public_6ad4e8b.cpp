#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad4d72);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4e8b);

#define public_6ad4ecf _public_6ad4ecf

PROC_DECLARE(0x6ad4e8b, internal_6ad4e8b, public_6ad4e8b);
extern "C" NAKED register_t __cdecl internal_6ad4e8b()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        sub ecx, dword ptr ds : [eax+0x10]
        sar ecx, 0xC
        lea eax, ds:[eax+ecx*8+0x18]
        mov ecx, dword ptr ss : [esp+0xC]
        movzx edx, byte ptr ds : [ecx]
        add dword ptr ds : [eax], edx
        and byte ptr ds : [ecx], 0
        cmp dword ptr ds : [eax], 0xF0
        mov dword ptr ds : [eax+4], 0xF1
        jne public_6ad4ecf
        inc dword ptr ds : [public_6ae1088]
        cmp dword ptr ds : [public_6ae1088], 0x20
        jne public_6ad4ecf
        push 0x10
        call public_6ad4d72
        pop ecx
        public_6ad4ecf : nop
        ret 
        UNREACHABLE_TRAP(0x6ad4e8b)
    }
}

#undef public_6ad4ecf
