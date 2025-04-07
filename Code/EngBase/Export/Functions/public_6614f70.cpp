#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614f70);
CLANG_FORWARD_PROC_SYMBOL(public_6627a70);

#define public_6614fa3 _public_6614fa3
#define public_6614fab _public_6614fab
#define public_6614fbe _public_6614fbe

PROC_DECLARE(0x6614f70, internal_6614f70, public_6614f70);
extern "C" NAKED register_t __cdecl internal_6614f70()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        xor ebx, ebx
        lea esi, ds:[edi+0x3C]
        push eax
        mov ecx, esi
        call public_6627a70
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        cmp eax, esi
        je public_6614fa3
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jl public_6614fa3
        lea eax, ss:[esp+0xC]
        jmp public_6614fab
        public_6614fa3 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6614fab : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x40]
        cmp eax, ecx
        je public_6614fbe
        pop edi
        pop esi
        add eax, 0x10
        pop ebx
        pop ecx
        ret 4
        public_6614fbe : nop
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6614f70)
    }
}

#undef public_6614fa3
#undef public_6614fab
#undef public_6614fbe
