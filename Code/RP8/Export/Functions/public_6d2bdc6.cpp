#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2bdc6);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d2bdd6 _public_6d2bdd6
#define public_6d2bddf _public_6d2bddf
#define public_6d2bdec _public_6d2bdec

PROC_DECLARE(0x6d2bdc6, internal_6d2bdc6, public_6d2bdc6);
extern "C" NAKED register_t __cdecl internal_6d2bdc6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d2bddf
        public_6d2bdd6 : nop
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 4
        mov dword ptr ss : [ebp-4], ecx
        public_6d2bddf : nop
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ds : [public_6d728f8]
        je public_6d2bdec
        jmp public_6d2bdd6
        public_6d2bdec : nop
        mov eax, dword ptr ds : [public_6d728fc]
        sub eax, dword ptr ds : [public_6d728f4]
        sar eax, 2
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-8]
        push edx
        call public_6d2f249
        add esp, 4
        mov dword ptr ds : [public_6d728f4], 0
        mov dword ptr ds : [public_6d728f8], 0
        mov dword ptr ds : [public_6d728fc], 0
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2bdc6)
    }
}

#undef public_6d2bdd6
#undef public_6d2bddf
#undef public_6d2bdec
