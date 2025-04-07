#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef65a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef66b9);

#define public_6ef66fd _public_6ef66fd

PROC_DECLARE(0x6ef66b9, internal_6ef66b9, public_6ef66b9);
extern "C" NAKED register_t __cdecl internal_6ef66b9()
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
        jne public_6ef66fd
        inc dword ptr ds : [public_6f010c4]
        cmp dword ptr ds : [public_6f010c4], 0x20
        jne public_6ef66fd
        push 0x10
        call public_6ef65a0
        pop ecx
        public_6ef66fd : nop
        ret 
        UNREACHABLE_TRAP(0x6ef66b9)
    }
}

#undef public_6ef66fd
