#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f43ce3 _public_6f43ce3
#define public_6f43cec _public_6f43cec
#define public_6f43d15 _public_6f43d15
#define public_6f43d1d _public_6f43d1d
#define public_6f43d46 _public_6f43d46

PROC_DECLARE(0x6f43cd0, internal_6f43cd0, public_6f43cd0);
extern "C" NAKED register_t __cdecl internal_6f43cd0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        test byte ptr ds : [ebx+0x30], 1
        je public_6f43ce3
        mov dword ptr ds : [ebx+0x1C], 0xFFFFFFFF
        jmp public_6f43cec
        public_6f43ce3 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        add eax, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ebx+0x1C], eax
        public_6f43cec : nop
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
        je public_6f43d15
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f43d15
        lea eax, ss:[esp+0x14]
        jmp public_6f43d1d
        public_6f43d15 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6f43d1d : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f43d46
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f43d46
        mov ecx, dword ptr ds : [eax]
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
        public_6f43d46 : nop
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f43cd0)
    }
}

#undef public_6f43ce3
#undef public_6f43cec
#undef public_6f43d15
#undef public_6f43d1d
#undef public_6f43d46
