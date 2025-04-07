#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629d920);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_629d94c _public_629d94c
#define public_629d94e _public_629d94e
#define public_629d958 _public_629d958

PROC_DECLARE(0x629d920, internal_629d920, public_629d920);
extern "C" NAKED register_t __cdecl internal_629d920()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        lea ecx, ds:[esi+8]
        je public_629d94c
        add eax, 0xFFFFFF64
        test eax, eax
        je public_629d94c
        add eax, 0x9C
        jmp public_629d94e
        public_629d94c : nop
        xor eax, eax
        public_629d94e : nop
        cmp eax, dword ptr ds : [ecx]
        je public_629d958
        push eax
        call public_6341610
        public_629d958 : nop
        lea edx, ds:[edi+0x10]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x20]
        pop edi
        mov dword ptr ds : [esi+0x20], ecx
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629d920)
    }
}

#undef public_629d94c
#undef public_629d94e
#undef public_629d958
