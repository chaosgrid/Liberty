#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2110);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

#define public_62d212f _public_62d212f
#define public_62d2131 _public_62d2131
#define public_62d2150 _public_62d2150
#define public_62d2184 _public_62d2184
#define public_62d2195 _public_62d2195
#define public_62d219c _public_62d219c

PROC_DECLARE(0x62d2110, internal_62d2110, public_62d2110);
extern "C" NAKED register_t __cdecl internal_62d2110()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 8
        mov byte ptr ss : [esp+7], 0
        mov byte ptr ss : [esp+6], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62d212f
        lea ecx, ds:[eax-8]
        jmp public_62d2131
        public_62d212f : nop
        xor ecx, ecx
        public_62d2131 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+6]
        push edx
        lea edx, ss:[esp+0xB]
        push edx
        call dword ptr ds : [eax+0x5C]
        mov al, byte ptr ss : [esp+7]
        test al, al
        je public_62d2150
        mov al, byte ptr ss : [esp+6]
        test al, al
        je public_62d219c
        public_62d2150 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov al, byte ptr ss : [esp+0xC]
        add ecx, 0x18
        test al, al
        je public_62d2195
        push 1
        call public_62e9120
        mov ecx, dword ptr ds : [esi+0x24]
        mov al, byte ptr ss : [esp+6]
        add ecx, 0x18
        test al, al
        je public_62d2184
        push 2
        push 0x3F800000
        call public_62e89a0
        pop esi
        pop ecx
        ret 4
        public_62d2184 : nop
        push 0
        push 0x3F800000
        call public_62e89a0
        pop esi
        pop ecx
        ret 4
        public_62d2195 : nop
        push 0
        call public_62e9120
        public_62d219c : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62d2110)
    }
}

#undef public_62d212f
#undef public_62d2131
#undef public_62d2150
#undef public_62d2184
#undef public_62d2195
#undef public_62d219c
