#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6316e60);

#define public_6314880 _public_6314880
#define public_6314888 _public_6314888
#define public_63148a6 _public_63148a6

PROC_DECLARE(0x6314850, internal_6314850, public_6314850);
extern "C" NAKED register_t __cdecl internal_6314850()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        call public_62fcfb0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6314880
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6314880
        lea eax, ss:[esp+8]
        jmp public_6314888
        public_6314880 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6314888 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        je public_63148a6
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6316e60
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        public_63148a6 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6314850)
    }
}

#undef public_6314880
#undef public_6314888
#undef public_63148a6
