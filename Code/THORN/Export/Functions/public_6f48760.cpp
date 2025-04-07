#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f4878a _public_6f4878a
#define public_6f48792 _public_6f48792
#define public_6f487b6 _public_6f487b6

PROC_DECLARE(0x6f48760, internal_6f48760, public_6f48760);
extern "C" NAKED register_t __cdecl internal_6f48760()
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
        je public_6f4878a
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f4878a
        lea eax, ss:[esp+0x10]
        jmp public_6f48792
        public_6f4878a : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_6f48792 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f487b6
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f487b6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        neg eax
        sbb eax, eax
        inc eax
        pop ecx
        ret 8
        public_6f487b6 : nop
        xor al, al
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f48760)
    }
}

#undef public_6f4878a
#undef public_6f48792
#undef public_6f487b6
