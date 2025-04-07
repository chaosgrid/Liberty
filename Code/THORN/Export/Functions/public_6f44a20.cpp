#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f44a33 _public_6f44a33
#define public_6f44a3c _public_6f44a3c
#define public_6f44a65 _public_6f44a65
#define public_6f44a6d _public_6f44a6d
#define public_6f44a9b _public_6f44a9b

PROC_DECLARE(0x6f44a20, internal_6f44a20, public_6f44a20);
extern "C" NAKED register_t __cdecl internal_6f44a20()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        test byte ptr ds : [ebx+0x30], 1
        je public_6f44a33
        mov dword ptr ds : [ebx+0x1C], 0xFFFFFFFF
        jmp public_6f44a3c
        public_6f44a33 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        add eax, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ebx+0x1C], eax
        public_6f44a3c : nop
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0x14]
        push esi
        mov ecx, edi
        call public_6f4af00
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f44a65
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f44a65
        lea eax, ss:[esp+0x14]
        jmp public_6f44a6d
        public_6f44a65 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6f44a6d : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f44a9b
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xE8]
        test eax, eax
        je public_6f44a9b
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        add ebx, 0x28
        push ebx
        push eax
        call dword ptr ds : [ecx+0xC]
        neg eax
        sbb eax, eax
        inc eax
        pop ebx
        pop ecx
        ret 8
        public_6f44a9b : nop
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f44a20)
    }
}

#undef public_6f44a33
#undef public_6f44a3c
#undef public_6f44a65
#undef public_6f44a6d
#undef public_6f44a9b
