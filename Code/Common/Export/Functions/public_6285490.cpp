#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62814f0);
CLANG_FORWARD_PROC_SYMBOL(public_6285490);
CLANG_FORWARD_PROC_SYMBOL(public_6345450);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62854c0 _public_62854c0
#define public_62854e7 _public_62854e7
#define public_6285504 _public_6285504
#define public_628551c _public_628551c
#define public_628552a _public_628552a
#define public_6285533 _public_6285533
#define public_6285534 _public_6285534
#define public_6285564 _public_6285564

PROC_DECLARE(0x6285490, internal_6285490, public_6285490);
extern "C" NAKED register_t __cdecl internal_6285490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push 0xFFFFFFFF
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6285564
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        lea ebx, ds:[ebx]
        public_62854c0 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov esi, eax
        cmp esi, dword ptr ss : [esp+0x14]
        je public_6285533
        mov ecx, dword ptr ds : [esi+0x60]
        cmp ecx, ebp
        je public_62854e7
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x18]
        public_62854e7 : nop
        mov ebx, dword ptr ds : [esi+0x84]
        cmp ebx, ebp
        mov dword ptr ds : [esi+0x60], ebp
        je public_6285504
        mov ecx, ebx
        call public_62814f0
        push ebx
        call public_6391d5a
        add esp, 4
        public_6285504 : nop
        mov ecx, dword ptr ds : [esi+0x54]
        cmp ecx, ebp
        mov dword ptr ds : [esi+0x84], ebp
        je public_628551c
        mov dword ptr ds : [esi+0x54], ebp
        mov dword ptr ds : [esi+0x50], ebp
        call public_6345450
        public_628551c : nop
        mov ecx, dword ptr ds : [esi+0x5C]
        cmp ecx, ebp
        je public_628552a
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x24]
        public_628552a : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x5C], ebp
        push ecx
        jmp public_6285534
        public_6285533 : nop
        push edi
        public_6285534 : nop
        push esi
        call public_6285490
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push edi
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_62854c0
        pop esi
        pop ebp
        pop ebx
        public_6285564 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6285490)
    }
}

#undef public_62854c0
#undef public_62854e7
#undef public_6285504
#undef public_628551c
#undef public_628552a
#undef public_6285533
#undef public_6285534
#undef public_6285564
