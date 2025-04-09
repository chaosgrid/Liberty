#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42dd20);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_42dd4f _public_42dd4f
#define public_42dd57 _public_42dd57
#define public_42dd64 _public_42dd64

PROC_DECLARE(0x42dd20, internal_42dd20, public_42dd20);
extern "C" NAKED register_t __cdecl internal_42dd20()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov ecx, offset public_667df0
        xor edi, edi
        call public_52c7a0
        mov ecx, dword ptr ds : [public_667df4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_42dd4f
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_42dd4f
        lea eax, ss:[esp+0x10]
        jmp public_42dd57
        public_42dd4f : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_42dd57 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_42dd64
        pop edi
        add eax, 0x10
        pop esi
        pop ecx
        ret 
        public_42dd64 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x42dd20)
    }
}

#undef public_42dd4f
#undef public_42dd57
#undef public_42dd64
