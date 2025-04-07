#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633e210);

#define public_633e270 _public_633e270
#define public_633e280 _public_633e280
#define public_633e297 _public_633e297
#define public_633e2d6 _public_633e2d6
#define public_633e2e3 _public_633e2e3
#define public_633e2f8 _public_633e2f8
#define public_633e314 _public_633e314
#define public_633e328 _public_633e328
#define public_633e347 _public_633e347
#define public_633e36c _public_633e36c

PROC_DECLARE(0x633e210, internal_633e210, public_633e210);
extern "C" NAKED register_t __cdecl internal_633e210()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [ebx+0x10], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+0x14], ecx
        mov dl, byte ptr ds : [esi+0x18]
        xor eax, eax
        push edi
        lea edi, ds:[esi+0x18]
        lea ebp, ds:[ebx+0x18]
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        mov byte ptr ss : [ebp], dl
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jae public_633e270
        mov dword ptr ss : [esp+0x10], ecx
        mov eax, ecx
        public_633e270 : nop
        cmp ebp, edi
        jne public_633e2e3
        test eax, eax
        mov edi, ecx
        jbe public_633e280
        call dword ptr ds : [public_63991c4]
        public_633e280 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        sub eax, ecx
        cmp eax, edi
        jae public_633e297
        mov edi, eax
        public_633e297 : nop
        test edi, edi
        jbe public_633e2d6
        mov edx, dword ptr ss : [ebp+4]
        sub eax, edi
        add ecx, edx
        push eax
        lea eax, ds:[ecx+edi]
        push eax
        push ecx
        call dword ptr ds : [public_6399330]
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0xC
        sub eax, edi
        push 0
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_633e2d6
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_633e2d6 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        jmp public_633e36c
        public_633e2e3 : nop
        test eax, eax
        jbe public_633e328
        cmp eax, edx
        jne public_633e328
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_633e2f8
        mov ecx, dword ptr ds : [public_63991d0]
        public_633e2f8 : nop
        cmp byte ptr ds : [ecx-1], 0xFE
        jae public_633e328
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_633e314
        mov eax, dword ptr ds : [public_63991d0]
        public_633e314 : nop
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], edx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_633e36c
        public_633e328 : nop
        push 1
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_633e36c
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        jne public_633e347
        mov eax, dword ptr ds : [public_63991d0]
        public_633e347 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [ebp+4]
        mov esi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_633e36c : nop
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [ebx+0x28], edx
        mov al, byte ptr ds : [esi+0x2C]
        mov byte ptr ds : [ebx+0x2C], al
        mov ecx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [ebx+0x30], ecx
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [ebx+0x34], edx
        mov eax, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [ebx+0x38], eax
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [ebx+0x3C], ecx
        mov edx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [ebx+0x40], edx
        mov eax, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [ebx+0x44], eax
        mov ecx, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [ebx+0x48], ecx
        mov edx, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [ebx+0x4C], edx
        mov eax, dword ptr ds : [esi+0x50]
        mov dword ptr ds : [ebx+0x50], eax
        mov ecx, dword ptr ds : [esi+0x54]
        mov dword ptr ds : [ebx+0x54], ecx
        mov edx, dword ptr ds : [esi+0x58]
        mov dword ptr ds : [ebx+0x58], edx
        mov eax, dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [ebx+0x5C], eax
        mov ecx, dword ptr ds : [esi+0x60]
        mov dword ptr ds : [ebx+0x60], ecx
        mov edx, dword ptr ds : [esi+0x64]
        mov dword ptr ds : [ebx+0x64], edx
        mov eax, dword ptr ds : [esi+0x68]
        mov dword ptr ds : [ebx+0x68], eax
        mov cl, byte ptr ds : [esi+0x6C]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0x6C], cl
        mov dword ptr ds : [ebx], offset public_63a4d5c
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x633e210)
    }
}

#undef public_633e270
#undef public_633e280
#undef public_633e297
#undef public_633e2d6
#undef public_633e2e3
#undef public_633e2f8
#undef public_633e314
#undef public_633e328
#undef public_633e347
#undef public_633e36c
