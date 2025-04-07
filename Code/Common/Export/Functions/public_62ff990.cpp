#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_62ff990);

#define public_62ff9c4 _public_62ff9c4
#define public_62ff9cc _public_62ff9cc
#define public_62ff9e0 _public_62ff9e0

PROC_DECLARE(0x62ff990, internal_62ff990, public_62ff990);
extern "C" NAKED register_t __cdecl internal_62ff990()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x94]
        push eax
        mov ecx, esi
        xor ebx, ebx
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_62ff9c4
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_62ff9c4
        lea eax, ss:[esp+0xC]
        jmp public_62ff9cc
        public_62ff9c4 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_62ff9cc : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x98]
        je public_62ff9e0
        pop edi
        pop esi
        add eax, 0x10
        pop ebx
        pop ecx
        ret 4
        public_62ff9e0 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62ff990)
    }
}

#undef public_62ff9c4
#undef public_62ff9cc
#undef public_62ff9e0
