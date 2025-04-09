#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_42ea0f _public_42ea0f
#define public_42ea17 _public_42ea17
#define public_42ea24 _public_42ea24

PROC_DECLARE(0x42e9e0, internal_42e9e0, public_42e9e0);
extern "C" NAKED register_t __cdecl internal_42e9e0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov ecx, offset public_667d78
        xor edi, edi
        call public_52c7a0
        mov ecx, dword ptr ds : [public_667d7c]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_42ea0f
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_42ea0f
        lea eax, ss:[esp+0x10]
        jmp public_42ea17
        public_42ea0f : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_42ea17 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_42ea24
        pop edi
        add eax, 0x10
        pop esi
        pop ecx
        ret 
        public_42ea24 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x42e9e0)
    }
}

#undef public_42ea0f
#undef public_42ea17
#undef public_42ea24
