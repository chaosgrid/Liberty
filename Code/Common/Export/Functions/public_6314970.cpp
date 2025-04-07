#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6317c90);

#define public_63149a0 _public_63149a0
#define public_63149a8 _public_63149a8
#define public_63149c6 _public_63149c6

PROC_DECLARE(0x6314970, internal_6314970, public_6314970);
extern "C" NAKED register_t __cdecl internal_6314970()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x40]
        push eax
        mov ecx, esi
        call public_62fcfb0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_63149a0
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_63149a0
        lea eax, ss:[esp+8]
        jmp public_63149a8
        public_63149a0 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_63149a8 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x44]
        je public_63149c6
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6317c90
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        public_63149c6 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6314970)
    }
}

#undef public_63149a0
#undef public_63149a8
#undef public_63149c6
