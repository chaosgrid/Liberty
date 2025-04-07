#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6313e3e _public_6313e3e
#define public_6313e46 _public_6313e46
#define public_6313e57 _public_6313e57

PROC_DECLARE(0x6313e10, internal_6313e10, public_6313e10);
extern "C" NAKED register_t __cdecl internal_6313e10()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x10]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6313e3e
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6313e3e
        lea eax, ss:[esp+8]
        jmp public_6313e46
        public_6313e3e : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6313e46 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        jne public_6313e57
        xor eax, eax
        pop ecx
        ret 4
        public_6313e57 : nop
        add eax, 0x10
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6313e10)
    }
}

#undef public_6313e3e
#undef public_6313e46
#undef public_6313e57
