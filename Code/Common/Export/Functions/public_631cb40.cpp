#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_631cb74 _public_631cb74
#define public_631cb7c _public_631cb7c
#define public_631cb8b _public_631cb8b

PROC_DECLARE(0x631cb40, internal_631cb40, public_631cb40);
extern "C" NAKED register_t __cdecl internal_631cb40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        lea eax, ds:[eax+eax*4]
        lea esi, ds:[ecx+eax*4]
        push edi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        xor edi, edi
        call public_62fcfb0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_631cb74
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_631cb74
        lea eax, ss:[esp+0xC]
        jmp public_631cb7c
        public_631cb74 : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_631cb7c : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        je public_631cb8b
        pop edi
        add eax, 0x10
        pop esi
        ret 8
        public_631cb8b : nop
        mov eax, edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x631cb40)
    }
}

#undef public_631cb74
#undef public_631cb7c
#undef public_631cb8b
