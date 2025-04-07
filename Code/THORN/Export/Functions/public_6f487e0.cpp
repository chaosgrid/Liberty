#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f4880a _public_6f4880a
#define public_6f48812 _public_6f48812
#define public_6f4882d _public_6f4882d

PROC_DECLARE(0x6f487e0, internal_6f487e0, public_6f487e0);
extern "C" NAKED register_t __cdecl internal_6f487e0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[ecx+0x14]
        push esi
        mov ecx, edi
        call public_6f4af00
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f4880a
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f4880a
        lea eax, ss:[esp+0x10]
        jmp public_6f48812
        public_6f4880a : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_6f48812 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f4882d
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f4882d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        public_6f4882d : nop
        xor al, al
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f487e0)
    }
}

#undef public_6f4880a
#undef public_6f48812
#undef public_6f4882d
