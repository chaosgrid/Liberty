#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f4862a _public_6f4862a
#define public_6f48632 _public_6f48632
#define public_6f4864d _public_6f4864d

PROC_DECLARE(0x6f48600, internal_6f48600, public_6f48600);
extern "C" NAKED register_t __cdecl internal_6f48600()
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
        je public_6f4862a
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f4862a
        lea eax, ss:[esp+0x10]
        jmp public_6f48632
        public_6f4862a : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_6f48632 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f4864d
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0x108]
        test eax, eax
        je public_6f4864d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        public_6f4864d : nop
        xor al, al
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f48600)
    }
}

#undef public_6f4862a
#undef public_6f48632
#undef public_6f4864d
