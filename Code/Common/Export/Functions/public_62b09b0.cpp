#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dc80);
CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_629b0c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a00c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a9190);
CLANG_FORWARD_PROC_SYMBOL(public_62aad30);
CLANG_FORWARD_PROC_SYMBOL(public_62b09b0);
CLANG_FORWARD_PROC_SYMBOL(public_62b51d0);
CLANG_FORWARD_PROC_SYMBOL(public_62b57e0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63945b3);

#define public_62b0a3c _public_62b0a3c
#define public_62b0a74 _public_62b0a74
#define public_62b0aa1 _public_62b0aa1
#define public_62b0ace _public_62b0ace
#define public_62b0b11 _public_62b0b11
#define public_62b0b2c _public_62b0b2c
#define public_62b0b41 _public_62b0b41
#define public_62b0b50 _public_62b0b50
#define public_62b0bb7 _public_62b0bb7
#define public_62b0c03 _public_62b0c03

PROC_DECLARE(0x62b09b0, internal_62b09b0, public_62b09b0);
extern "C" NAKED register_t __cdecl internal_62b09b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63945b3 @0x62b09b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63945b3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_639c02c
        mov dword ptr ds : [esi+0x1A4], offset public_639c00c
        lea edi, ds:[esi+0x2B0]
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xC
        call public_62a00c0
        mov eax, dword ptr ds : [esi+0x22C]
        push eax
        call public_627dc80
        mov ecx, dword ptr ds : [esi+0x22C]
        or ebp, 0xFFFFFFFF
        add esp, 4
        cmp ecx, ebp
        je public_62b0a3c
        mov edx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+0x22C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+0x22C], ebp
        public_62b0a3c : nop
        mov ecx, esi
        call public_62aad30
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 0xB
        call public_62a00c0
        lea edi, ds:[esi+0x280]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [edi], offset public_639be28
        mov al, byte ptr ds : [edi+0x10]
        xor ebx, ebx
        cmp al, bl
        mov byte ptr ss : [esp+0x24], 0xD
        je public_62b0a74
        mov ecx, edi
        call public_629b0c0
        public_62b0a74 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 0xA
        call public_6285b90
        lea edi, ds:[esi+0x258]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [edi], offset public_639be28
        cmp byte ptr ds : [edi+0x10], bl
        mov byte ptr ss : [esp+0x24], 0xE
        je public_62b0aa1
        mov ecx, edi
        call public_629b0c0
        public_62b0aa1 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 9
        call public_6285b90
        lea edi, ds:[esi+0x230]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [edi], offset public_639be28
        cmp byte ptr ds : [edi+0x10], bl
        mov byte ptr ss : [esp+0x24], 0xF
        je public_62b0ace
        mov ecx, edi
        call public_629b0c0
        public_62b0ace : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 8
        call public_6285b90
        mov ecx, dword ptr ds : [esi+0x22C]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x24], 7
        je public_62b0b11
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+0x22C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+0x22C], ebp
        public_62b0b11 : nop
        mov eax, dword ptr ds : [esi+0x220]
        cmp eax, ebx
        lea ecx, ds:[esi+0x220]
        mov byte ptr ss : [esp+0x24], 6
        je public_62b0b2c
        push ebx
        call public_6341610
        public_62b0b2c : nop
        mov ebp, dword ptr ds : [esi+0x20C]
        mov edi, dword ptr ds : [esi+0x208]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x24], 5
        je public_62b0b50
        public_62b0b41 : nop
        push ebx
        mov ecx, edi
        call public_62b57e0
        add edi, 8
        cmp edi, ebp
        jne public_62b0b41
        public_62b0b50 : nop
        mov eax, dword ptr ds : [esi+0x208]
        push eax
        call public_6391d5a
        lea edi, ds:[esi+0x1F4]
        mov dword ptr ds : [esi+0x208], ebx
        mov dword ptr ds : [esi+0x20C], ebx
        mov dword ptr ds : [esi+0x210], ebx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 4
        call public_62b51d0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        lea ecx, ds:[esi+0x1E0]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov eax, dword ptr ds : [ecx]
        add esp, 4
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 3
        je public_62b0bb7
        push ebx
        call public_6341610
        public_62b0bb7 : nop
        mov edx, dword ptr ds : [esi+0x1D8]
        mov eax, dword ptr ds : [esi+0x1D4]
        lea edi, ds:[esi+0x1D0]
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 2
        call public_62b51d0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        lea ecx, ds:[esi+0x1B8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov eax, dword ptr ds : [ecx]
        add esp, 4
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 1
        je public_62b0c03
        push ebx
        call public_6341610
        public_62b0c03 : nop
        lea ecx, ds:[esi+0x1A4]
        mov byte ptr ss : [esp+0x24], bl
        call public_6285b90
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_62a9190
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62b09b0)
    }
}

#undef public_62b0a3c
#undef public_62b0a74
#undef public_62b0aa1
#undef public_62b0ace
#undef public_62b0b11
#undef public_62b0b2c
#undef public_62b0b41
#undef public_62b0b50
#undef public_62b0bb7
#undef public_62b0c03
