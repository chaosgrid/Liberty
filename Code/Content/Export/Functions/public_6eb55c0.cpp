#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb55c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f047e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f04a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6eb55fa _public_6eb55fa
#define public_6eb5602 _public_6eb5602
#define public_6eb5626 _public_6eb5626

PROC_DECLARE(0x6eb55c0, internal_6eb55c0, public_6eb55c0);
extern "C" NAKED register_t __cdecl internal_6eb55c0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fcef10
        mov dword ptr ss : [esp+0x14], eax
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fcef14]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6eb55fa
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6eb55fa
        lea eax, ss:[esp+8]
        jmp public_6eb5602
        public_6eb55fa : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6eb5602 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6eb5626
        lea esi, ds:[eax+0x10]
        push esi
        call public_6f04a40
        add esp, 4
        push edi
        push esi
        mov ecx, edi
        call public_6f47980
        push eax
        call public_6f047e0
        add esp, 0xC
        public_6eb5626 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6eb55c0)
    }
}

#undef public_6eb55fa
#undef public_6eb5602
#undef public_6eb5626
