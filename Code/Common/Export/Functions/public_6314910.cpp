#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_63177f0);

#define public_6314940 _public_6314940
#define public_6314948 _public_6314948
#define public_6314966 _public_6314966

PROC_DECLARE(0x6314910, internal_6314910, public_6314910);
extern "C" NAKED register_t __cdecl internal_6314910()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x2C]
        push eax
        mov ecx, esi
        call public_62fcfb0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6314940
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6314940
        lea eax, ss:[esp+8]
        jmp public_6314948
        public_6314940 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6314948 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x30]
        je public_6314966
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_63177f0
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        public_6314966 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6314910)
    }
}

#undef public_6314940
#undef public_6314948
#undef public_6314966
