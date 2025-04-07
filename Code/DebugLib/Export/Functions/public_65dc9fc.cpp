#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dc8e3);
CLANG_FORWARD_PROC_SYMBOL(public_65dc9fc);

#define public_65dca40 _public_65dca40

PROC_DECLARE(0x65dc9fc, internal_65dc9fc, public_65dc9fc);
extern "C" NAKED register_t __cdecl internal_65dc9fc()
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
        jne public_65dca40
        inc dword ptr ds : [public_65e6368]
        cmp dword ptr ds : [public_65e6368], 0x20
        jne public_65dca40
        push 0x10
        call public_65dc8e3
        pop ecx
        public_65dca40 : nop
        ret 
        UNREACHABLE_TRAP(0x65dc9fc)
    }
}

#undef public_65dca40
