#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455f50);
CLANG_FORWARD_PROC_SYMBOL(public_455fc0);

#define public_455ff7 _public_455ff7
#define public_456051 _public_456051
#define public_45606d _public_45606d
#define public_45608d _public_45608d
#define public_4560a5 _public_4560a5
#define public_4560c7 _public_4560c7
#define public_4560dc _public_4560dc
#define public_4560f2 _public_4560f2
#define public_456118 _public_456118
#define public_456127 _public_456127
#define public_45612f _public_45612f
#define public_456138 _public_456138

PROC_DECLARE(0x455fc0, internal_455fc0, public_455fc0);
extern "C" NAKED register_t __cdecl internal_455fc0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        mov ecx, dword ptr ds : [esi+0xB4]
        shl eax, 6
        mov eax, dword ptr ds : [ecx+eax+0x3C]
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp eax, ebx
        jne public_455ff7
        mov eax, dword ptr ds : [esi+0xC0]
        mov edi, 1
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_455ff7 : nop
        cmp eax, 1
        jne public_4560a5
        cmp byte ptr ds : [esi+0x105], bl
        je public_456138
        cmp byte ptr ds : [esi+0x106], bl
        je public_45608d
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_45606d
        cmp dword ptr ds : [esi+0xC8], 3
        jne public_45606d
        cmp dword ptr ds : [public_673348], ebx
        je public_456138
        mov edx, dword ptr ds : [public_67334c]
        cmp edx, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0xC], ebx
        je public_456051
        push 2
        lea eax, ss:[esp+0x10]
        push eax
        jmp public_456127
        public_456051 : nop
        push 3
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], 2
        mov dword ptr ss : [esp+0x18], 4
        push ecx
        jmp public_45612f
        public_45606d : nop
        push 3
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], 2
        mov dword ptr ss : [esp+0x18], 4
        push edx
        jmp public_45612f
        public_45608d : nop
        push 2
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], 3
        push eax
        jmp public_45612f
        public_4560a5 : nop
        mov ecx, 2
        cmp eax, ecx
        jne public_4560c7
        mov dword ptr ss : [esp+0x10], ecx
        push 3
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x18], 4
        push ecx
        jmp public_45612f
        public_4560c7 : nop
        cmp eax, 3
        jne public_4560dc
        push ecx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], eax
        push edx
        jmp public_45612f
        public_4560dc : nop
        cmp eax, 5
        jne public_4560f2
        mov eax, dword ptr ds : [esi+0xC0]
        xor edi, edi
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_4560f2 : nop
        cmp eax, 4
        jne public_456118
        cmp byte ptr ds : [esi+0x10D], bl
        je public_456138
        push 3
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], 4
        push eax
        jmp public_45612f
        public_456118 : nop
        cmp eax, 6
        jne public_456138
        push ecx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ebx
        push ecx
        public_456127 : nop
        mov dword ptr ss : [esp+0x18], 6
        public_45612f : nop
        mov ecx, esi
        call public_455f50
        mov edi, eax
        public_456138 : nop
        mov eax, dword ptr ds : [esi+0xC0]
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x455fc0)
    }
}

#undef public_455ff7
#undef public_456051
#undef public_45606d
#undef public_45608d
#undef public_4560a5
#undef public_4560c7
#undef public_4560dc
#undef public_4560f2
#undef public_456118
#undef public_456127
#undef public_45612f
#undef public_456138
