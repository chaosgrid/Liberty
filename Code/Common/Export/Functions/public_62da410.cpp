#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62da410);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);

#define public_62da459 _public_62da459
#define public_62da467 _public_62da467
#define public_62da48c _public_62da48c
#define public_62da4b9 _public_62da4b9

PROC_DECLARE(0x62da410, internal_62da410, public_62da410);
extern "C" NAKED register_t __cdecl internal_62da410()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi+0x150], al
        test al, al
        mov eax, dword ptr ds : [esi+0x48]
        je public_62da467
        cmp eax, 2
        je public_62da459
        cmp eax, 1
        jne public_62da459
        mov ecx, dword ptr ds : [esi+0x1C]
        lea eax, ss:[esp+4]
        push eax
        add ecx, 0x18
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_62e8ce0
        public_62da459 : nop
        mov dword ptr ds : [esi+0x48], 2
        pop esi
        add esp, 0xC
        ret 4
        public_62da467 : nop
        test eax, eax
        je public_62da4b9
        cmp eax, 2
        jne public_62da48c
        mov ecx, dword ptr ds : [esi+0x1C]
        push eax
        push 0
        add ecx, 0x18
        call public_62e89a0
        mov dword ptr ds : [esi+0x48], 0
        pop esi
        add esp, 0xC
        ret 4
        public_62da48c : nop
        cmp eax, 1
        jne public_62da4b9
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        add ecx, 0x18
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_62e8ce0
        public_62da4b9 : nop
        mov dword ptr ds : [esi+0x48], 0
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62da410)
    }
}

#undef public_62da459
#undef public_62da467
#undef public_62da48c
#undef public_62da4b9
