#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ccb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e990);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ea60);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f320);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2cd82 _public_6f2cd82
#define public_6f2cd9f _public_6f2cd9f
#define public_6f2cdc8 _public_6f2cdc8
#define public_6f2cdd6 _public_6f2cdd6
#define public_6f2cdf0 _public_6f2cdf0
#define public_6f2cdff _public_6f2cdff
#define public_6f2ce0b _public_6f2ce0b

PROC_DECLARE(0x6f2ccb0, internal_6f2ccb0, public_6f2ccb0);
extern "C" NAKED register_t __cdecl internal_6f2ccb0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+0xC]
        push 0x138
        mov byte ptr ds : [esi+0xC], dl
        call public_6fa912a
        mov byte ptr ds : [eax+0x135], 0
        xor ebp, ebp
        mov dword ptr ds : [eax+4], ebp
        mov cl, 1
        mov byte ptr ds : [eax+0x134], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x135], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        push 0x138
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x134], 0
        mov byte ptr ds : [eax+0x135], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov edx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov cl, byte ptr ss : [ebp+0x135]
        add esp, 8
        test cl, cl
        jne public_6f2cd9f
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x134]
        mov ecx, esi
        push edx
        push eax
        call public_6f2ea60
        mov ebx, eax
        lea eax, ss:[ebp+0xC]
        push eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        call public_6f2f320
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, eax
        jne public_6f2cd82
        mov dword ptr ss : [esp+0x14], ebx
        public_6f2cd82 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push edx
        mov ecx, esi
        call public_6f2e990
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6f2e990
        mov dword ptr ds : [ebx+8], eax
        public_6f2cd9f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6f2ce0b
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x135]
        test bl, bl
        jne public_6f2cdd6
        public_6f2cdc8 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x135]
        test bl, bl
        je public_6f2cdc8
        public_6f2cdd6 : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x135]
        test bl, bl
        jne public_6f2cdff
        nop 
        lea esp, ss:[esp]
        public_6f2cdf0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x135]
        test bl, bl
        je public_6f2cdf0
        public_6f2cdff : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        ret 4
        public_6f2ce0b : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f2ccb0)
    }
}

#undef public_6f2cd82
#undef public_6f2cd9f
#undef public_6f2cdc8
#undef public_6f2cdd6
#undef public_6f2cdf0
#undef public_6f2cdff
#undef public_6f2ce0b
