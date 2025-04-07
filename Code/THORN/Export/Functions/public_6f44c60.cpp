#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f44c73 _public_6f44c73
#define public_6f44c7c _public_6f44c7c
#define public_6f44ca5 _public_6f44ca5
#define public_6f44cad _public_6f44cad
#define public_6f44cd3 _public_6f44cd3

PROC_DECLARE(0x6f44c60, internal_6f44c60, public_6f44c60);
extern "C" NAKED register_t __cdecl internal_6f44c60()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        test byte ptr ds : [ebx+0x30], 1
        je public_6f44c73
        mov dword ptr ds : [ebx+0x1C], 0xFFFFFFFF
        jmp public_6f44c7c
        public_6f44c73 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        add eax, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ebx+0x1C], eax
        public_6f44c7c : nop
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
        je public_6f44ca5
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f44ca5
        lea eax, ss:[esp+0x14]
        jmp public_6f44cad
        public_6f44ca5 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6f44cad : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f44cd3
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6f44cd3
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
        public_6f44cd3 : nop
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f44c60)
    }
}

#undef public_6f44c73
#undef public_6f44c7c
#undef public_6f44ca5
#undef public_6f44cad
#undef public_6f44cd3
