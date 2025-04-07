#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d76d5);
CLANG_FORWARD_PROC_SYMBOL(public_65d9b33);
CLANG_FORWARD_PROC_SYMBOL(public_65d9b3c);
CLANG_FORWARD_PROC_SYMBOL(public_65d9b5f);
CLANG_FORWARD_PROC_SYMBOL(public_65d9e87);

#define public_65d771e _public_65d771e
#define public_65d773b _public_65d773b
#define public_65d774a _public_65d774a

PROC_DECLARE(0x65d76d5, internal_65d76d5, public_65d76d5);
extern "C" NAKED register_t __cdecl internal_65d76d5()
{
    __asm
    {
        push esi
        call public_65d9b33
        push dword ptr ds : [public_65e7a50]
        call public_65d9e87
        mov edx, dword ptr ds : [public_65e7a50]
        pop ecx
        mov ecx, dword ptr ds : [public_65e7a4c]
        mov esi, ecx
        sub esi, edx
        add esi, 4
        cmp eax, esi
        jae public_65d773b
        push edx
        call public_65d9e87
        add eax, 0x10
        push eax
        push dword ptr ds : [public_65e7a50]
        call public_65d9b5f
        add esp, 0xC
        test eax, eax
        jne public_65d771e
        xor esi, esi
        jmp public_65d774a
        public_65d771e : nop
        mov ecx, dword ptr ds : [public_65e7a4c]
        sub ecx, dword ptr ds : [public_65e7a50]
        mov dword ptr ds : [public_65e7a50], eax
        sar ecx, 2
        lea ecx, ds:[eax+ecx*4]
        mov dword ptr ds : [public_65e7a4c], ecx
        public_65d773b : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        add dword ptr ds : [public_65e7a4c], 4
        mov esi, eax
        public_65d774a : nop
        call public_65d9b3c
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d76d5)
    }
}

#undef public_65d771e
#undef public_65d773b
#undef public_65d774a
