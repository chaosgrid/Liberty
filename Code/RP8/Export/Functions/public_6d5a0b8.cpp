#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a0b8);

#define public_6d5a0ea _public_6d5a0ea

PROC_DECLARE(0x6d5a0b8, internal_6d5a0b8, public_6d5a0b8);
extern "C" NAKED register_t __cdecl internal_6d5a0b8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0x18]
        push 0x1C
        push 1
        push dword ptr ds : [eax+0x28]
        call dword ptr ds : [eax+0x20]
        add esp, 0xC
        test eax, eax
        je public_6d5a0ea
        mov cl, byte ptr ss : [ebp+8]
        and dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+0x10], cl
        mov cl, byte ptr ss : [ebp+0xC]
        mov byte ptr ds : [eax+0x11], cl
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [eax+0x18], ecx
        public_6d5a0ea : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d5a0b8)
    }
}

#undef public_6d5a0ea
