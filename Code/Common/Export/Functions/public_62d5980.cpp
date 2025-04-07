#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d5980);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);

#define public_62d59b0 _public_62d59b0
#define public_62d59d1 _public_62d59d1
#define public_62d59fe _public_62d59fe

PROC_DECLARE(0x62d5980, internal_62d5980, public_62d5980);
extern "C" NAKED register_t __cdecl internal_62d5980()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        cmp eax, edi
        je public_62d59fe
        cmp eax, 2
        jne public_62d59b0
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push 0
        add ecx, 0x18
        call public_62e89a0
        mov dword ptr ds : [esi+0x34], edi
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        public_62d59b0 : nop
        test eax, eax
        jne public_62d59d1
        cmp edi, 2
        je public_62d59d1
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push eax
        add ecx, 0x18
        call public_62e89a0
        mov dword ptr ds : [esi+0x34], edi
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        public_62d59d1 : nop
        cmp eax, 1
        jne public_62d59fe
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+8]
        push eax
        add ecx, 0x18
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        call public_62e8ce0
        public_62d59fe : nop
        mov dword ptr ds : [esi+0x34], edi
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62d5980)
    }
}

#undef public_62d59b0
#undef public_62d59d1
#undef public_62d59fe
