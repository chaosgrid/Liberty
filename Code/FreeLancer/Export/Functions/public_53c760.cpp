#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_515e20);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_53c793 _public_53c793
#define public_53c795 _public_53c795
#define public_53c7e4 _public_53c7e4
#define public_53c81b _public_53c81b
#define public_53c824 _public_53c824

PROC_DECLARE(0x53c760, internal_53c760, public_53c760);
extern "C" NAKED register_t __cdecl internal_53c760()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push esi
        call public_54baf0
        mov esi, dword ptr ss : [esp+0x30]
        xor ebx, ebx
        cmp eax, ebx
        je public_53c7e4
        add eax, 0xC
        cmp eax, ebx
        je public_53c793
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_53c793
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_53c795
        public_53c793 : nop
        xor eax, eax
        public_53c795 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c62e8]
        cmp eax, ebx
        je public_53c7e4
        mov edx, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0xC], ecx
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov byte ptr ss : [esp+0x16], bl
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0xC], 4
        call dword ptr ds : [edx]
        public_53c7e4 : nop
        push 1
        push esi
        call public_5416c0
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        je public_53c824
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_53c81b
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_53c81b
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_53c81b
        push ebx
        call dword ptr ds : [public_5c6a4c]
        public_53c81b : nop
        push esi
        call public_515e20
        add esp, 4
        public_53c824 : nop
        pop esi
        pop ebx
        add esp, 0x20
        ret 0x10
        UNREACHABLE_TRAP(0x53c760)
    }
}

#undef public_53c793
#undef public_53c795
#undef public_53c7e4
#undef public_53c81b
#undef public_53c824
