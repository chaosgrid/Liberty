#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c33174 _public_6c33174
#define public_6c331af _public_6c331af
#define public_6c331b7 _public_6c331b7
#define public_6c331ca _public_6c331ca
#define public_6c331e7 _public_6c331e7

PROC_DECLARE(0x6c33150, internal_6c33150, public_6c33150);
extern "C" NAKED register_t __cdecl internal_6c33150()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push ebx
        push eax
        call dword ptr ds : [ecx+0x64]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], eax
        jne public_6c33174
        pop esi
        or eax, eax
        pop ebx
        pop ecx
        ret 0x10
        public_6c33174 : nop
        mov ecx, dword ptr ds : [public_6c37d4c]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        push ecx
        call dword ptr ds : [edx+0x3C]
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+8]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6c331af
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c331af
        lea eax, ss:[esp+0x14]
        jmp public_6c331b7
        public_6c331af : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6c331b7 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        jne public_6c331ca
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 0x10
        public_6c331ca : nop
        mov ecx, dword ptr ds : [eax+0x18]
        cmp ecx, dword ptr ds : [eax+0x14]
        jne public_6c331e7
        mov edx, dword ptr ss : [esp+0x1C]
        pop esi
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFF8
        pop ebx
        pop ecx
        ret 0x10
        public_6c331e7 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+ecx*8]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        push ebx
        push ecx
        call dword ptr ds : [edx+0x28]
        pop esi
        pop ebx
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6c33150)
    }
}

#undef public_6c33174
#undef public_6c331af
#undef public_6c331b7
#undef public_6c331ca
#undef public_6c331e7
