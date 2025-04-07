#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6d3fb17);

#define public_6d3fb3d _public_6d3fb3d
#define public_6d3fb93 _public_6d3fb93
#define public_6d3fbac _public_6d3fbac
#define public_6d3fbbe _public_6d3fbbe
#define public_6d3fbd2 _public_6d3fbd2
#define public_6d3fbd4 _public_6d3fbd4

PROC_DECLARE(0x6d3fb17, internal_6d3fb17, public_6d3fb17);
extern "C" NAKED register_t __cdecl internal_6d3fb17()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x70]
        sub esp, 0x98
        push ebx
        mov ebx, dword ptr ss : [ebp+0x78]
        push esi
        push edi
        xor esi, esi
        cmp ebx, esi
        mov edi, ecx
        mov dword ptr ss : [ebp+0x6C], edi
        jne public_6d3fb3d
        mov eax, 0x8876086C
        jmp public_6d3fbd4
        public_6d3fb3d : nop
        cmp dword ptr ss : [ebp+0x7C], esi
        je public_6d3fbac
        lea eax, ss:[ebp-0x28]
        push eax
        mov dword ptr ss : [ebp-0x28], 0x94
        call dword ptr ds : [public_6d5e034]
        cmp dword ptr ss : [ebp-0x18], 2
        je public_6d3fb93
        mov edi, dword ptr ds : [public_6d5e060]
        push esi
        push esi
        push esi
        push esi
        push 0xFFFFFFFF
        push ebx
        push esi
        push esi
        call edi
        mov dword ptr ss : [ebp+0x78], eax
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_6d2f270
        mov dword ptr ss : [ebp+0x7C], esp
        push esi
        push esi
        push dword ptr ss : [ebp+0x78]
        push dword ptr ss : [ebp+0x7C]
        push 0xFFFFFFFF
        push ebx
        push esi
        push esi
        call edi
        mov ebx, dword ptr ss : [ebp+0x7C]
        mov edi, dword ptr ss : [ebp+0x6C]
        mov dword ptr ss : [ebp+0x7C], esi
        public_6d3fb93 : nop
        cmp dword ptr ss : [ebp+0x7C], esi
        je public_6d3fbac
        push esi
        push esi
        push 2
        push esi
        push esi
        push 0x40000000
        push ebx
        call dword ptr ds : [public_6d5e040]
        jmp public_6d3fbbe
        public_6d3fbac : nop
        push esi
        push esi
        push 2
        push esi
        push esi
        push 0x40000000
        push ebx
        call dword ptr ds : [public_6d5e030]
        public_6d3fbbe : nop
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [edi], eax
        jne public_6d3fbd2
        call dword ptr ds : [public_6d5e04c]
        mov eax, 0x88760B59
        jmp public_6d3fbd4
        public_6d3fbd2 : nop
        xor eax, eax
        public_6d3fbd4 : nop
        lea esp, ss:[ebp-0x34]
        pop edi
        pop esi
        pop ebx
        add ebp, 0x70
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d3fb17)
    }
}

#undef public_6d3fb3d
#undef public_6d3fb93
#undef public_6d3fbac
#undef public_6d3fbbe
#undef public_6d3fbd2
#undef public_6d3fbd4
