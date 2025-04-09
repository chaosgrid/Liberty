#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_5af250);
CLANG_FORWARD_JUMP_SYMBOL(public_5c582a);

#define public_5af2f0 _public_5af2f0
#define public_5af30f _public_5af30f
#define public_5af324 _public_5af324
#define public_5af340 _public_5af340
#define public_5af354 _public_5af354
#define public_5af371 _public_5af371
#define public_5af38f _public_5af38f
#define public_5af393 _public_5af393
#define public_5af39c _public_5af39c

PROC_DECLARE(0x5af250, internal_5af250, public_5af250);
extern "C" NAKED register_t __cdecl internal_5af250()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c582a @0x5af252*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c582a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+8], edi
        xor eax, eax
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_5af39c
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [edi], ecx
        mov dl, byte ptr ss : [ebp+4]
        add edi, 4
        add ebp, 4
        mov byte ptr ds : [edi], dl
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push esi
        push edx
        push eax
        push ebp
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_5c7060]
        mov al, byte ptr ss : [ebp+0x10]
        lea ebx, ss:[ebp+0x10]
        lea esi, ds:[edi+0x10]
        mov byte ptr ds : [esi], al
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ecx]
        mov eax, edx
        cmp ecx, eax
        mov byte ptr ss : [esp+0x24], 1
        mov dword ptr ss : [esp+0x30], eax
        jae public_5af2f0
        mov eax, ecx
        mov dword ptr ss : [esp+0x30], eax
        public_5af2f0 : nop
        cmp esi, ebx
        jne public_5af30f
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6f8c]
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6f8c]
        jmp public_5af393
        public_5af30f : nop
        test eax, eax
        jbe public_5af354
        cmp eax, edx
        jne public_5af354
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_5af324
        mov ecx, dword ptr ds : [public_5c700c]
        public_5af324 : nop
        cmp byte ptr ds : [ecx-1], 0xFE
        jae public_5af354
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_5af340
        mov eax, dword ptr ds : [public_5c700c]
        public_5af340 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_5af393
        public_5af354 : nop
        push 1
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5af38f
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov eax, dword ptr ds : [public_5c700c]
        je public_5af371
        mov eax, ebx
        public_5af371 : nop
        mov ebx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [esi+4]
        push ebx
        push eax
        push edx
        call public_41d8a0
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], ebx
        add esp, 0xC
        mov word ptr ds : [eax+ebx*2], 0
        public_5af38f : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_5af393 : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        pop esi
        pop ebp
        mov dword ptr ds : [edi+0x20], ecx
        pop ebx
        public_5af39c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x5af250)
    }
}

#undef public_5af2f0
#undef public_5af30f
#undef public_5af324
#undef public_5af340
#undef public_5af354
#undef public_5af371
#undef public_5af38f
#undef public_5af393
#undef public_5af39c
