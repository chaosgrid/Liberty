#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6285b50);
CLANG_FORWARD_PROC_SYMBOL(public_628ef80);
CLANG_FORWARD_PROC_SYMBOL(public_62904d0);
CLANG_FORWARD_PROC_SYMBOL(public_62a9010);
CLANG_FORWARD_PROC_SYMBOL(public_62ad220);
CLANG_FORWARD_PROC_SYMBOL(public_62b0670);
CLANG_FORWARD_PROC_SYMBOL(public_62b5100);
CLANG_FORWARD_PROC_SYMBOL(public_62b57e0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb5e0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb920);
CLANG_FORWARD_PROC_SYMBOL(public_633bad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63944b8);

#define public_62b0851 _public_62b0851
#define public_62b087a _public_62b087a
#define public_62b0880 _public_62b0880
#define public_62b08ac _public_62b08ac
#define public_62b08c0 _public_62b08c0
#define public_62b08c4 _public_62b08c4
#define public_62b08dd _public_62b08dd
#define public_62b0909 _public_62b0909
#define public_62b091d _public_62b091d
#define public_62b0950 _public_62b0950
#define public_62b0963 _public_62b0963
#define public_62b098c _public_62b098c

PROC_DECLARE(0x62b0670, internal_62b0670, public_62b0670);
extern "C" NAKED register_t __cdecl internal_62b0670()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63944b8 @0x62b0672*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63944b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0x503
        mov dword ptr ss : [esp+0x28], esi
        call public_62a9010
        xor ebx, ebx
        lea ecx, ds:[esi+0x1A4]
        mov dword ptr ss : [esp+0x30], ebx
        call public_6285b50
        mov dword ptr ds : [esi+0x1B4], ebx
        mov dword ptr ds : [esi+0x1B8], ebx
        mov dword ptr ds : [esi+0x1BC], ebx
        mov al, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x1D0]
        mov dword ptr ds : [esi+0x1CC], ebx
        mov byte ptr ds : [edi], al
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [esi+0x1E0], ebx
        mov dword ptr ds : [esi+0x1E4], ebx
        mov cl, byte ptr ss : [esp+0x13]
        lea ebp, ds:[esi+0x1F4]
        mov byte ptr ss : [ebp], cl
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x204], dl
        mov dword ptr ds : [esi+0x208], ebx
        mov dword ptr ds : [esi+0x20C], ebx
        mov dword ptr ds : [esi+0x210], ebx
        mov byte ptr ds : [esi+0x214], bl
        mov dword ptr ds : [esi+0x218], ebx
        mov dword ptr ds : [esi+0x220], ebx
        mov dword ptr ds : [esi+0x224], ebx
        mov ax, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [esi+0x228], ax
        mov dword ptr ds : [esi+0x22C], 0xFFFFFFFF
        lea ecx, ds:[esi+0x230]
        mov byte ptr ss : [esp+0x30], 0xB
        call public_62bb5e0
        lea ecx, ds:[esi+0x258]
        mov byte ptr ss : [esp+0x30], 0xC
        call public_62ad220
        lea ecx, ds:[esi+0x280]
        mov byte ptr ss : [esp+0x30], 0xD
        call public_62bb920
        mov dword ptr ds : [esi+0x29C], ebx
        mov dword ptr ds : [esi+0x2A0], ebx
        mov dword ptr ds : [esi+0x2A4], ebx
        mov dword ptr ds : [esi+0x2A8], ebx
        mov dword ptr ds : [esi+0x2AC], ebx
        mov dword ptr ds : [esi+0x2B0], ebx
        mov dword ptr ds : [esi+0x2B4], ebx
        mov dword ptr ds : [esi+0x2B8], ebx
        mov byte ptr ds : [esi+0x2BC], bl
        mov byte ptr ds : [esi+0x2BD], bl
        mov dword ptr ds : [esi+0x2C0], 0x3F800000
        mov byte ptr ds : [esi+0x2C4], 1
        mov byte ptr ss : [esp+0x30], 0xF
        mov dword ptr ds : [esi+0x2C8], ebx
        mov dword ptr ds : [esi+0x2CC], ebx
        mov dword ptr ds : [esi+0x2D0], ebx
        mov dword ptr ds : [esi+0x2D4], ebx
        mov dword ptr ds : [esi+0x2D8], ebx
        mov dword ptr ds : [esi], offset public_639c02c
        mov dword ptr ds : [esi+0x1A4], offset public_639c00c
        mov dword ptr ds : [esi+0x1C8], ebx
        mov dword ptr ds : [esi+0x1C4], ebx
        mov dword ptr ds : [esi+0x1C0], ebx
        push esi
        lea ecx, ds:[esi+0x230]
        mov dword ptr ds : [esi+0x1F0], ebx
        mov dword ptr ds : [esi+0x1EC], ebx
        mov dword ptr ds : [esi+0x1E8], ebx
        call public_633bad0
        push esi
        lea ecx, ds:[esi+0x258]
        call public_633bad0
        mov dword ptr ds : [esi+0x294], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        je public_62b0851
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 0x10
        jae public_62b0909
        public_62b0851 : nop
        push 0x80
        call public_6391d9c
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_62b08ac
        jmp public_62b0880
        public_62b087a : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, edi
        public_62b0880 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        call public_62904d0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x28]
        add eax, 8
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x20]
        add eax, 8
        add esp, 8
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_62b087a
        public_62b08ac : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], ecx
        je public_62b08dd
        jmp public_62b08c4
        public_62b08c0 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        public_62b08c4 : nop
        push ebx
        call public_62b57e0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, 8
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_62b08c0
        public_62b08dd : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x20]
        add eax, 0x80
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [edi+0xC], eax
        call public_626a5e0
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edi+4], ecx
        public_62b0909 : nop
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, ebx
        je public_62b091d
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 3
        cmp eax, 0x10
        jae public_62b098c
        public_62b091d : nop
        push 0x80
        call public_6391d9c
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        push eax
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        push eax
        push ecx
        mov ecx, ebp
        call public_628ef80
        mov eax, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+4]
        cmp edi, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_62b0963
        lea esp, ss:[esp]
        public_62b0950 : nop
        push ebx
        mov ecx, edi
        call public_62b57e0
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 8
        cmp edi, eax
        jne public_62b0950
        public_62b0963 : nop
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6391d5a
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+0x80]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], eax
        call public_626a5e0
        lea ecx, ds:[edi+eax*8]
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+4], edi
        public_62b098c : nop
        push 0x10
        lea ecx, ds:[esi+0x204]
        call public_62b5100
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x62b0670)
    }
}

#undef public_62b0851
#undef public_62b087a
#undef public_62b0880
#undef public_62b08ac
#undef public_62b08c0
#undef public_62b08c4
#undef public_62b08dd
#undef public_62b0909
#undef public_62b091d
#undef public_62b0950
#undef public_62b0963
#undef public_62b098c
