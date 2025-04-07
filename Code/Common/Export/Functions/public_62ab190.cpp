#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ab190);
CLANG_FORWARD_PROC_SYMBOL(public_62ac350);
CLANG_FORWARD_PROC_SYMBOL(public_62ac380);
CLANG_FORWARD_PROC_SYMBOL(public_62ac3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62ab1c0 _public_62ab1c0
#define public_62ab1e3 _public_62ab1e3
#define public_62ab1e8 _public_62ab1e8
#define public_62ab1f0 _public_62ab1f0
#define public_62ab1f2 _public_62ab1f2
#define public_62ab1fe _public_62ab1fe
#define public_62ab214 _public_62ab214
#define public_62ab224 _public_62ab224
#define public_62ab240 _public_62ab240
#define public_62ab252 _public_62ab252
#define public_62ab277 _public_62ab277
#define public_62ab27c _public_62ab27c
#define public_62ab290 _public_62ab290
#define public_62ab2c0 _public_62ab2c0
#define public_62ab2cc _public_62ab2cc
#define public_62ab2e0 _public_62ab2e0
#define public_62ab2eb _public_62ab2eb
#define public_62ab2f2 _public_62ab2f2
#define public_62ab2fc _public_62ab2fc
#define public_62ab2ff _public_62ab2ff
#define public_62ab30a _public_62ab30a
#define public_62ab325 _public_62ab325

PROC_DECLARE(0x62ab190, internal_62ab190, public_62ab190);
extern "C" NAKED register_t __cdecl internal_62ab190()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x188]
        push ebp
        mov ebp, dword ptr ds : [ebx+0x184]
        xor al, al
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0xB], al
        mov dword ptr ss : [esp+0xC], ebp
        je public_62ab325
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        nop 
        public_62ab1c0 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        cmp ecx, 1
        mov esi, eax
        jae public_62ab290
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_62ab1e3
        mov ecx, eax
        sub ecx, edx
        cmp ecx, 1
        ja public_62ab1e8
        public_62ab1e3 : nop
        mov ecx, 1
        public_62ab1e8 : nop
        test edx, edx
        jne public_62ab1f0
        xor eax, eax
        jmp public_62ab1f2
        public_62ab1f0 : nop
        sub eax, edx
        public_62ab1f2 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_62ab1fe
        xor eax, eax
        public_62ab1fe : nop
        push eax
        call public_6391d9c
        mov ebx, dword ptr ds : [edi+4]
        add esp, 4
        cmp ebx, esi
        mov dword ptr ss : [esp+0x24], eax
        mov ebp, eax
        je public_62ab224
        public_62ab214 : nop
        push ebx
        push ebp
        call public_62ac3b0
        add esp, 8
        inc ebp
        inc ebx
        cmp ebx, esi
        jne public_62ab214
        public_62ab224 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push ebp
        call public_62ac3b0
        mov ebx, dword ptr ds : [edi+8]
        add esp, 8
        cmp esi, ebx
        je public_62ab252
        sub ebp, esi
        inc ebp
        lea esp, ss:[esp]
        public_62ab240 : nop
        lea eax, ds:[esi+ebp]
        push esi
        push eax
        call public_62ac3b0
        add esp, 8
        inc esi
        cmp esi, ebx
        jne public_62ab240
        public_62ab252 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ds:[ecx+edx]
        mov edx, dword ptr ds : [edi+4]
        add esp, 4
        test edx, edx
        mov dword ptr ds : [edi+0xC], eax
        jne public_62ab277
        xor eax, eax
        jmp public_62ab27c
        public_62ab277 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, edx
        public_62ab27c : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+ecx+1]
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edi+4], ecx
        jmp public_62ab2ff
        public_62ab290 : nop
        mov ecx, eax
        sub ecx, esi
        cmp ecx, 1
        mov ecx, edi
        jae public_62ab2cc
        lea edx, ds:[esi+1]
        push edx
        push eax
        push esi
        call public_62ac350
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        sub ecx, eax
        push ebp
        inc ecx
        push ecx
        push eax
        mov ecx, edi
        call public_62ac380
        mov eax, dword ptr ds : [edi+8]
        cmp esi, eax
        je public_62ab2fc
        nop 
        public_62ab2c0 : nop
        mov dl, byte ptr ss : [ebp]
        mov byte ptr ds : [esi], dl
        inc esi
        cmp esi, eax
        jne public_62ab2c0
        jmp public_62ab2fc
        public_62ab2cc : nop
        push eax
        push eax
        dec eax
        push eax
        call public_62ac350
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ds:[ecx-1]
        cmp esi, eax
        je public_62ab2eb
        nop 
        public_62ab2e0 : nop
        mov dl, byte ptr ds : [eax-1]
        dec eax
        dec ecx
        cmp eax, esi
        mov byte ptr ds : [ecx], dl
        jne public_62ab2e0
        public_62ab2eb : nop
        lea eax, ds:[esi+1]
        cmp esi, eax
        je public_62ab2fc
        public_62ab2f2 : nop
        mov cl, byte ptr ss : [ebp]
        mov byte ptr ds : [esi], cl
        inc esi
        cmp esi, eax
        jne public_62ab2f2
        public_62ab2fc : nop
        inc dword ptr ds : [edi+8]
        public_62ab2ff : nop
        cmp byte ptr ss : [ebp], 0
        je public_62ab30a
        mov byte ptr ss : [esp+0x13], 1
        public_62ab30a : nop
        mov eax, dword ptr ds : [ebx+0x188]
        add ebp, 0x10
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], ebp
        jne public_62ab1c0
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        public_62ab325 : nop
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62ab190)
    }
}

#undef public_62ab1c0
#undef public_62ab1e3
#undef public_62ab1e8
#undef public_62ab1f0
#undef public_62ab1f2
#undef public_62ab1fe
#undef public_62ab214
#undef public_62ab224
#undef public_62ab240
#undef public_62ab252
#undef public_62ab277
#undef public_62ab27c
#undef public_62ab290
#undef public_62ab2c0
#undef public_62ab2cc
#undef public_62ab2e0
#undef public_62ab2eb
#undef public_62ab2f2
#undef public_62ab2fc
#undef public_62ab2ff
#undef public_62ab30a
#undef public_62ab325
