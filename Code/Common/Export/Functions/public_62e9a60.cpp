#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9a60);

#define public_62e9a75 _public_62e9a75
#define public_62e9a7c _public_62e9a7c
#define public_62e9a93 _public_62e9a93
#define public_62e9a95 _public_62e9a95
#define public_62e9abe _public_62e9abe
#define public_62e9ac0 _public_62e9ac0
#define public_62e9ad5 _public_62e9ad5

PROC_DECLARE(0x62e9a60, internal_62e9a60, public_62e9a60);
extern "C" NAKED register_t __cdecl internal_62e9a60()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_62e9a75
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62e9a7c
        public_62e9a75 : nop
        xor al, al
        pop esi
        pop ecx
        ret 4
        public_62e9a7c : nop
        mov ax, word ptr ds : [public_63a4aa4]
        mov word ptr ss : [esp+6], ax
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_62e9a93
        add ecx, 0xFFFFFFF8
        jmp public_62e9a95
        public_62e9a93 : nop
        xor ecx, ecx
        public_62e9a95 : nop
        mov edx, dword ptr ds : [ecx]
        push 0x100
        push 1
        lea eax, ss:[esp+0xE]
        push eax
        call dword ptr ds : [edx+0x114]
        test eax, eax
        jne public_62e9ad5
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9abe
        add eax, 0xFFFFFFF8
        jmp public_62e9ac0
        public_62e9abe : nop
        xor eax, eax
        public_62e9ac0 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0xC]
        push 0xFFFFFFFF
        push eax
        lea eax, ss:[esp+0xE]
        push eax
        call dword ptr ds : [edx+0x4C]
        public_62e9ad5 : nop
        mov al, 1
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62e9a60)
    }
}

#undef public_62e9a75
#undef public_62e9a7c
#undef public_62e9a93
#undef public_62e9a95
#undef public_62e9abe
#undef public_62e9ac0
#undef public_62e9ad5
