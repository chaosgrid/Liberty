#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_58a110);
CLANG_FORWARD_PROC_SYMBOL(public_58a5f0);

#define public_58a147 _public_58a147
#define public_58a169 _public_58a169
#define public_58a16c _public_58a16c
#define public_58a1a0 _public_58a1a0
#define public_58a1f4 _public_58a1f4

PROC_DECLARE(0x58a110, internal_58a110, public_58a110);
extern "C" NAKED register_t __cdecl internal_58a110()
{
    __asm
    {
        mov al, byte ptr ss : [esp+0x28]
        push ebx
        push ebp
        mov ebp, ecx
        mov byte ptr ss : [ebp+0x378], al
        mov eax, dword ptr ss : [esp+0xC]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        je public_58a16c
        push eax
        call public_4177b0
        add esp, 4
        cmp eax, ebx
        je public_58a16c
        mov esi, dword ptr ss : [ebp+0x334]
        cmp dword ptr ds : [esi+0x1C], eax
        je public_58a16c
        mov dword ptr ds : [esi+0x1C], eax
        xor edi, edi
        public_58a147 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        je public_58a169
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jae public_58a169
        mov ecx, dword ptr ds : [ecx+edi*8]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        inc edi
        jmp public_58a147
        public_58a169 : nop
        mov dword ptr ds : [esi+0x28], ebx
        public_58a16c : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ss : [esp+0x1C]
        cmp edi, ebx
        lea ecx, ss:[ebp+0xA8]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        je public_58a1f4
        mov ecx, ebp
        sub ecx, edi
        mov eax, edi
        lea edx, ds:[ecx+0x1D0]
        lea ebx, ds:[ebx]
        public_58a1a0 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        cmp cl, bl
        jne public_58a1a0
        lea esi, ss:[ebp+0x2F8]
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, ebx
        je public_58a1f4
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        cmp eax, ebx
        je public_58a1f4
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        public_58a1f4 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+0x330], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x32C], eax
        call public_58a5f0
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x358], eax
        mov dword ptr ss : [ebp+0x344], ecx
        pop ebp
        pop ebx
        ret 0x28
        UNREACHABLE_TRAP(0x58a110)
    }
}

#undef public_58a147
#undef public_58a169
#undef public_58a16c
#undef public_58a1a0
#undef public_58a1f4
