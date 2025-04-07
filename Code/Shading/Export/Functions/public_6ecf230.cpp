#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecde00);
CLANG_FORWARD_PROC_SYMBOL(public_6ece190);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf230);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf3c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecf292 _public_6ecf292
#define public_6ecf2a0 _public_6ecf2a0
#define public_6ecf2b6 _public_6ecf2b6
#define public_6ecf2be _public_6ecf2be
#define public_6ecf2c9 _public_6ecf2c9
#define public_6ecf2d1 _public_6ecf2d1
#define public_6ecf2e0 _public_6ecf2e0
#define public_6ecf2ee _public_6ecf2ee
#define public_6ecf305 _public_6ecf305
#define public_6ecf31b _public_6ecf31b
#define public_6ecf323 _public_6ecf323
#define public_6ecf32b _public_6ecf32b
#define public_6ecf376 _public_6ecf376
#define public_6ecf38f _public_6ecf38f
#define public_6ecf3b8 _public_6ecf3b8

PROC_DECLARE(0x6ecf230, internal_6ecf230, public_6ecf230);
extern "C" NAKED register_t __cdecl internal_6ecf230()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        xor eax, eax
        cmp ebp, eax
        push esi
        push edi
        je public_6ecf3b8
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi]
        mov dl, byte ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp], ecx
        lea esi, ss:[ebp+8]
        mov byte ptr ds : [esi], dl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [edi+4]
        push eax
        call public_6ed0c50
        add esp, 4
        test ebx, ebx
        mov dword ptr ss : [ebp+4], 0
        je public_6ecf2a0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        push ecx
        call public_6ed0c5c
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, ebx
        mov edx, eax
        public_6ecf292 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6ecf292
        mov edi, dword ptr ss : [esp+0x18]
        public_6ecf2a0 : nop
        add edi, 8
        cmp esi, edi
        je public_6ecf3b8
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6ecf2b6
        xor ebx, ebx
        jmp public_6ecf2be
        public_6ecf2b6 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_6ecf2be : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6ecf2c9
        xor edx, edx
        jmp public_6ecf2d1
        public_6ecf2c9 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6ecf2d1 : nop
        cmp ebx, edx
        ja public_6ecf31b
        mov edx, dword ptr ds : [edi+8]
        cmp eax, edx
        je public_6ecf2ee
        lea esp, ss:[esp]
        public_6ecf2e0 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6ecf2e0
        public_6ecf2ee : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6ecf305
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6ecf305 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [esi+4]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6ecf31b : nop
        test eax, eax
        jne public_6ecf323
        xor ebx, ebx
        jmp public_6ecf32b
        public_6ecf323 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_6ecf32b : nop
        mov ecx, esi
        call public_6ecf3c0
        cmp ebx, eax
        ja public_6ecf376
        mov ebx, dword ptr ds : [edi+4]
        mov ecx, esi
        call public_6ecde00
        mov edx, dword ptr ds : [esi+4]
        push edx
        lea ebp, ds:[ebx+eax*4]
        push ebp
        push ebx
        call public_6ecf3e0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_6ece190
        mov ecx, edi
        call public_6ecde00
        mov edx, dword ptr ds : [esi+4]
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6ecf376 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6ed0c50
        add esp, 4
        mov ecx, edi
        call public_6ecde00
        test eax, eax
        jge public_6ecf38f
        xor eax, eax
        public_6ecf38f : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6ed0c5c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6ece190
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+8], eax
        public_6ecf3b8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ecf230)
    }
}

#undef public_6ecf292
#undef public_6ecf2a0
#undef public_6ecf2b6
#undef public_6ecf2be
#undef public_6ecf2c9
#undef public_6ecf2d1
#undef public_6ecf2e0
#undef public_6ecf2ee
#undef public_6ecf305
#undef public_6ecf31b
#undef public_6ecf323
#undef public_6ecf32b
#undef public_6ecf376
#undef public_6ecf38f
#undef public_6ecf3b8
