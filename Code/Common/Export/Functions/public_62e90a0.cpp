#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e90a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e91d0);

#define public_62e90b5 _public_62e90b5
#define public_62e90d3 _public_62e90d3
#define public_62e90d5 _public_62e90d5
#define public_62e90ef _public_62e90ef
#define public_62e90ff _public_62e90ff
#define public_62e9101 _public_62e9101
#define public_62e9111 _public_62e9111

PROC_DECLARE(0x62e90a0, internal_62e90a0, public_62e90a0);
extern "C" NAKED register_t __cdecl internal_62e90a0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp bl, 1
        push esi
        mov esi, ecx
        jne public_62e90b5
        mov al, byte ptr ds : [esi+0x15]
        test al, al
        je public_62e9111
        public_62e90b5 : nop
        push 1
        mov ecx, esi
        call public_62e91d0
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov byte ptr ss : [esp+0x10], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e90d3
        lea ecx, ds:[eax-8]
        jmp public_62e90d5
        public_62e90d3 : nop
        xor ecx, ecx
        public_62e90d5 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xB]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x5C]
        cmp byte ptr ss : [esp+0x10], bl
        jne public_62e90ef
        cmp byte ptr ds : [esi+0x14], bl
        je public_62e9111
        public_62e90ef : nop
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e90ff
        add eax, 0xFFFFFFF8
        jmp public_62e9101
        public_62e90ff : nop
        xor eax, eax
        public_62e9101 : nop
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push ebx
        call dword ptr ds : [eax+0x50]
        mov byte ptr ds : [esi+0x14], bl
        public_62e9111 : nop
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62e90a0)
    }
}

#undef public_62e90b5
#undef public_62e90d3
#undef public_62e90d5
#undef public_62e90ef
#undef public_62e90ff
#undef public_62e9101
#undef public_62e9111
