#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5d83);

#define public_6ad5d8f _public_6ad5d8f
#define public_6ad5daa _public_6ad5daa
#define public_6ad5ddc _public_6ad5ddc
#define public_6ad5dea _public_6ad5dea

PROC_DECLARE(0x6ad5d83, internal_6ad5d83, public_6ad5d83);
extern "C" NAKED register_t __cdecl internal_6ad5d83()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        jne public_6ad5d8f
        pop ebp
        ret 
        public_6ad5d8f : nop
        cmp dword ptr ds : [public_6ae0f64], 0
        jne public_6ad5daa
        mov cx, word ptr ss : [ebp+0xC]
        cmp cx, 0xFF
        ja public_6ad5ddc
        push 1
        mov byte ptr ds : [eax], cl
        pop eax
        pop ebp
        ret 
        public_6ad5daa : nop
        lea ecx, ss:[ebp+8]
        and dword ptr ss : [ebp+8], 0
        push ecx
        push 0
        push dword ptr ds : [public_6addc10]
        push eax
        lea eax, ss:[ebp+0xC]
        push 1
        push eax
        push 0x220
        push dword ptr ds : [public_6ae0f74]
        call dword ptr ds : [public_6ada03c]
        test eax, eax
        je public_6ad5ddc
        cmp dword ptr ss : [ebp+8], 0
        je public_6ad5dea
        public_6ad5ddc : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 0x2A
        or eax, 0xFFFFFFFF
        public_6ad5dea : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad5d83)
    }
}

#undef public_6ad5d8f
#undef public_6ad5daa
#undef public_6ad5ddc
#undef public_6ad5dea
