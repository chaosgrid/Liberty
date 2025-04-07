#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d401f7);
CLANG_FORWARD_PROC_SYMBOL(public_6d403ee);
CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);
CLANG_FORWARD_PROC_SYMBOL(public_6d47590);
CLANG_FORWARD_PROC_SYMBOL(public_6d476a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d47885);
CLANG_FORWARD_PROC_SYMBOL(public_6d47f07);

#define public_6d404cb _public_6d404cb
#define public_6d40516 _public_6d40516
#define public_6d40538 _public_6d40538
#define public_6d40556 _public_6d40556
#define public_6d40572 _public_6d40572
#define public_6d40573 _public_6d40573
#define public_6d40574 _public_6d40574

PROC_DECLARE(0x6d404a2, internal_6d404a2, public_6d404a2);
extern "C" NAKED register_t __cdecl internal_6d404a2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+8], 0
        push esi
        push edi
        jne public_6d404cb
        push 0x39
        pop ecx
        mov esi, offset public_6d6cb28
        mov edi, offset public_6d6ca40
        mov dword ptr ds : [public_6d6d3bc], 0xFFFF
        rep movsd
        jmp public_6d40574
        public_6d404cb : nop
        cmp dword ptr ds : [public_6d6d3bc], 0xFFFF
        jne public_6d40574
        and dword ptr ds : [public_6d6d3bc], 0
        push ebx
        push 0x39
        mov ebx, offset public_6d6ca40
        pop ecx
        mov esi, offset public_6d6cb28
        mov edi, ebx
        push ebx
        rep movsd
        call public_6d47f07
        push 4
        lea eax, ss:[ebp+8]
        push eax
/*FIXUP push offset public_6d5f934 @0x6d40500*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5f934
        push 4
        call public_6d401f7
        add esp, 0x14
        test eax, eax
        jne public_6d40516
        and dword ptr ss : [ebp+8], eax
        public_6d40516 : nop
        xor esi, esi
        inc esi
        cmp dword ptr ss : [ebp+8], esi
        je public_6d40573
        push 7
        call public_6d403ee
        test eax, eax
        pop ecx
        je public_6d40538
        push ebx
        call public_6d47885
        mov dword ptr ds : [public_6d6d3bc], esi
        jmp public_6d40572
        public_6d40538 : nop
        push 0xA
        call public_6d403ee
        test eax, eax
        pop ecx
        je public_6d40556
        push ebx
        call public_6d476a0
        mov dword ptr ds : [public_6d6d3bc], 2
        jmp public_6d40572
        public_6d40556 : nop
        push 6
        call public_6d403ee
        test eax, eax
        pop ecx
        je public_6d40573
        push ebx
        call public_6d47590
        mov dword ptr ds : [public_6d6d3bc], 3
        public_6d40572 : nop
        pop ecx
        public_6d40573 : nop
        pop ebx
        public_6d40574 : nop
        mov eax, dword ptr ds : [public_6d6d3bc]
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d404a2)
    }
}

#undef public_6d404cb
#undef public_6d40516
#undef public_6d40538
#undef public_6d40556
#undef public_6d40572
#undef public_6d40573
#undef public_6d40574
