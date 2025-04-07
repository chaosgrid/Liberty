#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6d85500);
CLANG_FORWARD_PROC_SYMBOL(public_6d913e0);

#define public_6d84f21 _public_6d84f21
#define public_6d84f34 _public_6d84f34
#define public_6d84fad _public_6d84fad
#define public_6d84fb1 _public_6d84fb1
#define public_6d8503d _public_6d8503d
#define public_6d85045 _public_6d85045
#define public_6d8505c _public_6d8505c
#define public_6d85085 _public_6d85085
#define public_6d85090 _public_6d85090
#define public_6d850ac _public_6d850ac
#define public_6d850b4 _public_6d850b4
#define public_6d850b8 _public_6d850b8
#define public_6d850d8 _public_6d850d8
#define public_6d850e2 _public_6d850e2
#define public_6d85124 _public_6d85124
#define public_6d85150 _public_6d85150
#define public_6d85175 _public_6d85175
#define public_6d85180 _public_6d85180
#define public_6d85196 _public_6d85196
#define public_6d851a9 _public_6d851a9

PROC_DECLARE(0x6d84ed0, internal_6d84ed0, public_6d84ed0);
extern "C" NAKED register_t __cdecl internal_6d84ed0()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        mov ebx, dword ptr ss : [esp+0x34]
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [ebx+0xC], edx
        mov eax, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [ebx+0x18], eax
        mov ecx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [ebx+0x14], ecx
        mov edx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [ebx+0x20], edx
        mov eax, dword ptr ss : [ebp+0x38]
        push esi
        mov dword ptr ds : [ebx+0x1C], eax
        mov eax, dword ptr ss : [ebp+0x40]
        xor esi, esi
        cmp eax, esi
        push edi
        mov dword ptr ds : [ebx+0x44], eax
        jle public_6d84f34
        mov ecx, dword ptr ss : [ebp+0x40]
        xor eax, eax
        cmp ecx, esi
        jbe public_6d84f34
        lea ecx, ds:[ebx+0x24]
        public_6d84f21 : nop
        mov edx, dword ptr ss : [ebp+0x44]
        mov edx, dword ptr ds : [edx+eax*4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [ebp+0x40]
        inc eax
        add ecx, 4
        cmp eax, edx
        jb public_6d84f21
        public_6d84f34 : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x10], eax
        mov ecx, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [ebx+0x48], ecx
        mov edx, dword ptr ss : [ebp+0x68]
        mov dword ptr ds : [ebx+0x68], edx
        mov eax, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [ebx+0x6C], eax
        fld dword ptr ss : [ebp+0x54]
        fld dword ptr ss : [ebp+0x50]
        fld dword ptr ss : [ebp+0x4C]
        fstp dword ptr ds : [ebx+0x4C]
        fstp dword ptr ds : [ebx+0x50]
        fstp dword ptr ds : [ebx+0x54]
        mov dword ptr ds : [ebx+0x58], 0x3F800000
        mov dword ptr ds : [ebx+0x64], esi
        mov dword ptr ds : [ebx+0x60], esi
        mov dword ptr ds : [ebx+0x5C], esi
        mov ecx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [ebx+0x58], ecx
        mov edx, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [ebx+0x5C], edx
        mov eax, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [ebx+0x60], eax
        mov ecx, dword ptr ss : [ebp+0x64]
        mov dword ptr ds : [ebx+0x64], ecx
        lea ecx, ss:[ebp+0x70]
        call public_6d913e0
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6d8505c
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x3C], eax
        je public_6d8505c
        jmp public_6d84fb1
        public_6d84fad : nop
        mov eax, dword ptr ss : [esp+0x3C]
        public_6d84fb1 : nop
        mov edi, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6db3004]
        mov edx, dword ptr ds : [ebx+0x78]
        push eax
        lea ecx, ds:[ebx+0x70]
        push 1
        push edx
        call dword ptr ds : [public_6db30c0]
        mov esi, dword ptr ds : [ebx+0x78]
        mov eax, dword ptr ds : [edi]
        sub esi, 0x20
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6db308c]
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6db3084]
        xor edx, edx
        mov dx, word ptr ds : [edi+0xC]
        mov ecx, esi
        push edx
        call dword ptr ds : [public_6db3088]
        xor eax, eax
        mov al, byte ptr ds : [edi+0xE]
        mov ecx, esi
        push eax
        call dword ptr ds : [public_6db307c]
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6db3080]
        cmp word ptr ds : [edi+0x10], 0
        jbe public_6d8503d
        mov edi, dword ptr ds : [edi+0x14]
        push 0
        push edi
        call dword ptr ds : [public_6db3078]
        add esp, 8
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], eax
        call dword ptr ds : [public_6db3074]
        jmp public_6d85045
        public_6d8503d : nop
        mov ecx, esi
        call dword ptr ds : [public_6db3070]
        public_6d85045 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x3C], eax
        jne public_6d84fad
        public_6d8505c : nop
        lea ecx, ss:[ebp+0x74]
        lea edi, ds:[ebx+0x80]
        cmp edi, ecx
        je public_6d85124
        mov esi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x3C], ecx
        je public_6d850ac
        jmp public_6d85090
        public_6d85085 : nop
        mov edx, dword ptr ss : [esp+0x40]
        lea esp, ss:[esp]
        public_6d85090 : nop
        cmp ecx, edx
        je public_6d850ac
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x3C], ecx
        jne public_6d85085
        public_6d850ac : nop
        cmp eax, esi
        mov edx, eax
        je public_6d850d8
        jmp public_6d850b8
        public_6d850b4 : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_6d850b8 : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [public_6db309c]
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6d850b4
        mov ecx, dword ptr ss : [esp+0x3C]
        public_6d850d8 : nop
        cmp ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x3C], ecx
        je public_6d85124
        public_6d850e2 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6db30d0]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        add ecx, 8
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6d85500
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 8
        inc edx
        mov dword ptr ds : [edi+8], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x3C], eax
        jne public_6d850e2
        public_6d85124 : nop
        add ebp, 0x80
        add ebx, 0x8C
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x40], ebp
        je public_6d851a9
        mov esi, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x3C], ebp
        mov ebp, dword ptr ss : [ebp]
        je public_6d85175
        nop 
        lea esp, ss:[esp]
        public_6d85150 : nop
        cmp ebp, dword ptr ss : [esp+0x3C]
        je public_6d85175
        lea ecx, ss:[ebp+8]
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ebp, dword ptr ss : [ebp]
        jne public_6d85150
        public_6d85175 : nop
        cmp eax, esi
        mov edi, eax
        je public_6d85196
        nop 
        lea esp, ss:[esp]
        public_6d85180 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call dword ptr ds : [public_6db30a0]
        cmp edi, esi
        jne public_6d85180
        public_6d85196 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        push ebp
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_6db30cc]
        mov ebp, dword ptr ss : [esp+0x40]
        public_6d851a9 : nop
        mov cl, byte ptr ss : [ebp+0xC]
        mov byte ptr ds : [ebx+0xC], cl
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x10], edx
        mov eax, dword ptr ss : [ebp+0x14]
        pop edi
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, dword ptr ss : [ebp+0x18]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x18], ecx
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6d84ed0)
    }
}

#undef public_6d84f21
#undef public_6d84f34
#undef public_6d84fad
#undef public_6d84fb1
#undef public_6d8503d
#undef public_6d85045
#undef public_6d8505c
#undef public_6d85085
#undef public_6d85090
#undef public_6d850ac
#undef public_6d850b4
#undef public_6d850b8
#undef public_6d850d8
#undef public_6d850e2
#undef public_6d85124
#undef public_6d85150
#undef public_6d85175
#undef public_6d85180
#undef public_6d85196
#undef public_6d851a9
