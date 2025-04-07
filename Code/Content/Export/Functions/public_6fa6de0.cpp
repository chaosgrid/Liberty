#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa6de0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6fa6e0d _public_6fa6e0d
#define public_6fa6e15 _public_6fa6e15
#define public_6fa6e28 _public_6fa6e28

PROC_DECLARE(0x6fa6de0, internal_6fa6de0, public_6fa6de0);
extern "C" NAKED register_t __cdecl internal_6fa6de0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+8]
        push ebx
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6fa6e0d
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6fa6e0d
        lea eax, ss:[esp+0x14]
        jmp public_6fa6e15
        public_6fa6e0d : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6fa6e15 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        pop ebx
        je public_6fa6e28
        mov eax, dword ptr ds : [eax+0x10]
        pop ecx
        ret 4
        public_6fa6e28 : nop
        xor eax, eax
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6fa6de0)
    }
}

#undef public_6fa6e0d
#undef public_6fa6e15
#undef public_6fa6e28
