#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f56db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f570c0);

#define public_6f56dd5 _public_6f56dd5
#define public_6f56dea _public_6f56dea
#define public_6f56df0 _public_6f56df0

PROC_DECLARE(0x6f56db0, internal_6f56db0, public_6f56db0);
extern "C" NAKED register_t __cdecl internal_6f56db0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        mov al, byte ptr ds : [ecx]
        cmp al, 0x25
        je public_6f56df0
        cmp al, 0x2E
        je public_6f56dea
        cmp al, 0x5B
        je public_6f56dd5
        mov ecx, dword ptr ss : [esp+4]
        and eax, 0xFF
        sub eax, ecx
        neg eax
        sbb eax, eax
        inc eax
        ret 
        public_6f56dd5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        dec eax
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        call public_6f570c0
        add esp, 0xC
        ret 
        public_6f56dea : nop
        mov eax, 1
        ret 
        public_6f56df0 : nop
        mov eax, dword ptr ss : [esp+4]
        xor edx, edx
        mov dl, byte ptr ds : [ecx+1]
        push edx
        push eax
        call public_6f56e10
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f56db0)
    }
}

#undef public_6f56dd5
#undef public_6f56dea
#undef public_6f56df0
