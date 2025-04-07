#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6356a40);
CLANG_FORWARD_PROC_SYMBOL(public_6356a70);
CLANG_FORWARD_PROC_SYMBOL(public_6356ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6356b40);
CLANG_FORWARD_PROC_SYMBOL(public_636b770);
CLANG_FORWARD_PROC_SYMBOL(public_636b7c0);
CLANG_FORWARD_PROC_SYMBOL(public_636b830);
CLANG_FORWARD_PROC_SYMBOL(public_636d940);
CLANG_FORWARD_PROC_SYMBOL(public_636d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_636da20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_63987e9);

#define public_636b86d _public_636b86d
#define public_636b86f _public_636b86f
#define public_636b8a0 _public_636b8a0
#define public_636b8a2 _public_636b8a2
#define public_636b8ab _public_636b8ab
#define public_636b8f0 _public_636b8f0
#define public_636b8f7 _public_636b8f7
#define public_636b930 _public_636b930
#define public_636b936 _public_636b936
#define public_636b995 _public_636b995
#define public_636b997 _public_636b997
#define public_636b9b4 _public_636b9b4
#define public_636b9df _public_636b9df
#define public_636b9e3 _public_636b9e3
#define public_636ba11 _public_636ba11
#define public_636ba1c _public_636ba1c
#define public_636ba41 _public_636ba41
#define public_636ba4b _public_636ba4b
#define public_636ba9c _public_636ba9c
#define public_636bab5 _public_636bab5
#define public_636bac9 _public_636bac9
#define public_636bae5 _public_636bae5
#define public_636baf9 _public_636baf9
#define public_636bb14 _public_636bb14
#define public_636bb3e _public_636bb3e
#define public_636bb4d _public_636bb4d
#define public_636bb5f _public_636bb5f
#define public_636bbe7 _public_636bbe7
#define public_636bc20 _public_636bc20
#define public_636bc31 _public_636bc31
#define public_636bc7b _public_636bc7b
#define public_636bc88 _public_636bc88
#define public_636bca0 _public_636bca0
#define public_636bcc3 _public_636bcc3

PROC_DECLARE(0x636b830, internal_636b830, public_636b830);
extern "C" NAKED register_t __cdecl internal_636b830()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63987e9 @0x636b832*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63987e9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push esi
        push edi
        push 0x18
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x34], edi
        je public_636b86d
        mov ecx, eax
        call public_636d940
        mov esi, eax
        jmp public_636b86f
        public_636b86d : nop
        xor esi, esi
        public_636b86f : nop
        mov eax, dword ptr ss : [esp+0x3C]
        push ebx
        xor ebx, ebx
        mov bx, word ptr ds : [eax+2]
        push ebp
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov dword ptr ds : [esi], edi
        mov ecx, ebx
        shl ecx, 4
        push ecx
        call public_6391d9c
        add esp, 4
        cmp eax, edi
        je public_636b8a0
        lea edx, ds:[ebx-1]
        mov dword ptr ss : [esp+0x28], edx
        jmp public_636b8a2
        public_636b8a0 : nop
        xor eax, eax
        public_636b8a2 : nop
        xor ebp, ebp
        cmp ebx, edi
        mov dword ptr ds : [esi+4], eax
        jle public_636b8f7
        public_636b8ab : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [ecx+ebp*4]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push edx
        push eax
        call public_636b770
        add esp, 0xC
        test eax, eax
        jne public_636b8f0
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [edi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi+8]
        shl eax, 4
        add eax, ecx
        mov ecx, dword ptr ds : [edi+4]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi]
        inc eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ds : [esi], eax
        public_636b8f0 : nop
        inc ebp
        cmp ebp, ebx
        jl public_636b8ab
        xor edi, edi
        public_636b8f7 : nop
        push 0x10
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x3C], 1
        je public_636b930
        mov edx, dword ptr ss : [esp+0x44]
        xor ecx, ecx
        mov cx, word ptr ds : [edx+2]
        push edi
        push 4
        shl ecx, 1
        push ecx
        mov ecx, eax
        call public_6356a40
        mov ebp, eax
        mov dword ptr ss : [esp+0x14], ebp
        jmp public_636b936
        public_636b930 : nop
        mov dword ptr ss : [esp+0x14], edi
        mov ebp, edi
        public_636b936 : nop
        mov word ptr ss : [esp+0x2C], di
        mov word ptr ss : [esp+0x2E], di
        mov dword ptr ss : [esp+0x30], edi
        mov eax, dword ptr ss : [esp+0x48]
        xor edi, edi
        mov di, word ptr ds : [eax+2]
        mov dword ptr ss : [esp+0x3C], 2
        mov ecx, edi
        shl ecx, 5
        add ecx, 4
        push ecx
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ds : [esi+0x10], edi
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x44], eax
        test eax, eax
        mov byte ptr ss : [esp+0x3C], 3
        je public_636b995
/*FIXUP push offset _public_636da20 @0x636b97b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_636da20
/*FIXUP push offset _public_636d9c0 @0x636b980*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_636d9c0
        push edi
        lea ebx, ds:[eax+4]
        push 0x20
        push ebx
        mov dword ptr ds : [eax], edi
        call public_6391ef0
        jmp public_636b997
        public_636b995 : nop
        xor ebx, ebx
        public_636b997 : nop
        xor ecx, ecx
        cmp edi, ecx
        mov byte ptr ss : [esp+0x3C], 2
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ss : [esp+0x10], ecx
        jle public_636bae5
        mov dword ptr ss : [esp+0x1C], ecx
        public_636b9b4 : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [eax+ecx*4]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi+0x14]
        xor ebp, ebp
        mov bp, word ptr ds : [eax+0x12]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ds : [ebx+edx+0x14], ebp
        xor ebx, ebx
        test ebp, ebp
        jle public_636bac9
        jmp public_636b9e3
        public_636b9df : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_636b9e3 : nop
        mov eax, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+ebx*4]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push eax
        push ecx
        push edx
        call public_636b770
        mov edi, eax
        lea eax, ds:[ebx+1]
        add esp, 0xC
        cmp eax, ebp
        mov dword ptr ss : [esp+0x28], eax
        jne public_636ba11
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x14]
        mov ebx, dword ptr ds : [ecx]
        jmp public_636ba1c
        public_636ba11 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+0x14]
        mov ebx, dword ptr ds : [eax+ebx*4+4]
        public_636ba1c : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push ebx
        push ecx
        push edx
        call public_636b770
        add esp, 0xC
        cmp ax, di
        mov dword ptr ss : [esp+0x24], eax
        jae public_636ba41
        mov word ptr ss : [esp+0x44], di
        mov word ptr ss : [esp+0x46], ax
        jmp public_636ba4b
        public_636ba41 : nop
        mov word ptr ss : [esp+0x44], ax
        mov word ptr ss : [esp+0x46], di
        public_636ba4b : nop
        mov ebx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, ebx
        call public_6356ac0
        test eax, eax
        jne public_636bab5
        push 1
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, ebx
        call public_6356b40
        push 4
        push 1
        call public_6343f80
        mov dx, word ptr ss : [esp+0x2C]
        mov ebx, eax
        mov word ptr ds : [ebx], di
        mov word ptr ds : [ebx+2], dx
        mov ax, word ptr ss : [esp+0x36]
        add esp, 8
        cmp ax, word ptr ss : [esp+0x2C]
        jb public_636ba9c
        lea ecx, ss:[esp+0x2C]
        call public_63441a0
        public_636ba9c : nop
        mov ecx, dword ptr ss : [esp+0x2E]
        mov edx, dword ptr ss : [esp+0x30]
        and ecx, 0xFFFF
        mov dword ptr ds : [edx+ecx*4], ebx
        inc word ptr ss : [esp+0x2E]
        inc dword ptr ds : [esi+8]
        public_636bab5 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        cmp ebx, ebp
        jl public_636b9df
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_636bac9 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        inc ecx
        add edx, 0x20
        cmp ecx, edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x1C], edx
        jl public_636b9b4
        mov ebp, dword ptr ss : [esp+0x14]
        public_636bae5 : nop
        test ebp, ebp
        je public_636baf9
        mov ecx, ebp
        call public_6356a70
        push ebp
        call public_6391d5a
        add esp, 4
        public_636baf9 : nop
        mov eax, dword ptr ds : [esi+8]
        shl eax, 2
        push eax
        call public_6391d9c
        xor ebx, ebx
        add esp, 4
        mov dword ptr ds : [esi+0xC], eax
        cmp word ptr ss : [esp+0x2E], bx
        jbe public_636bb4d
        public_636bb14 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [ecx+ebx*4]
        test eax, eax
        mov edx, dword ptr ds : [esi+0xC]
        mov cx, word ptr ds : [eax]
        mov word ptr ds : [edx+ebx*4], cx
        mov edx, dword ptr ds : [esi+0xC]
        mov cx, word ptr ds : [eax+2]
        mov word ptr ds : [edx+ebx*4+2], cx
        je public_636bb3e
        push eax
        call public_6343fb0
        add esp, 4
        public_636bb3e : nop
        mov edx, dword ptr ss : [esp+0x2E]
        inc ebx
        and edx, 0xFFFF
        cmp ebx, edx
        jl public_636bb14
        public_636bb4d : nop
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0
        jle public_636bca0
        xor edi, edi
        public_636bb5f : nop
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [ecx+edx*4]
        mov dword ptr ds : [edi+eax+0x10], esi
        fld dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, edi
        add eax, ecx
        mov ecx, dword ptr ss : [ebp+4]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [edi+eax+0x14]
        push 2
        push ecx
        mov dword ptr ss : [esp+0x2C], edx
        call public_6343f80
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+edx+0x18], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [edi+eax+0x14]
        push ecx
        call public_6391d9c
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+edx+0x1C], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov ebx, dword ptr ds : [edi+eax+0x14]
        lea ecx, ds:[ebx+1]
        push 2
        push ecx
        call public_6343f80
        add esp, 0x14
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x14], 0
        jle public_636bc20
        mov dword ptr ss : [esp+0x18], eax
        public_636bbe7 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push eax
        push ecx
        push edx
        call public_636b770
        mov ecx, dword ptr ss : [esp+0x24]
        mov word ptr ds : [ecx], ax
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        inc eax
        add ecx, 2
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        jl public_636bbe7
        mov eax, dword ptr ss : [esp+0x1C]
        public_636bc20 : nop
        mov cx, word ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        test ebx, ebx
        mov word ptr ds : [eax+edx*2], cx
        jle public_636bc7b
        public_636bc31 : nop
        xor edx, edx
        mov dx, word ptr ds : [eax+ebp*2+2]
        lea ecx, ss:[esp+0x44]
        push ecx
        xor ecx, ecx
        mov cx, word ptr ds : [eax+ebp*2]
        mov eax, dword ptr ds : [esi+0xC]
        push edx
        mov edx, dword ptr ds : [esi+8]
        push ecx
        push edx
        push eax
        call public_636b7c0
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [edi+ecx+0x18]
        mov word ptr ds : [edx+ebp*2], ax
        mov dl, byte ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [esi+0x14]
        mov al, 1
        sub al, dl
        mov edx, dword ptr ds : [edi+ecx+0x1C]
        add esp, 0x14
        mov byte ptr ds : [edx+ebp], al
        mov eax, dword ptr ss : [esp+0x1C]
        inc ebp
        cmp ebp, ebx
        jl public_636bc31
        public_636bc7b : nop
        test eax, eax
        je public_636bc88
        push eax
        call public_6343fb0
        add esp, 4
        public_636bc88 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        inc eax
        add edi, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_636bb5f
        public_636bca0 : nop
        mov eax, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x34]
        cmp eax, ecx
        pop ebp
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        pop ebx
        je public_636bcc3
        test eax, eax
        je public_636bcc3
        push eax
        call public_6343fb0
        add esp, 4
        public_636bcc3 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x636b830)
    }
}

#undef public_636b86d
#undef public_636b86f
#undef public_636b8a0
#undef public_636b8a2
#undef public_636b8ab
#undef public_636b8f0
#undef public_636b8f7
#undef public_636b930
#undef public_636b936
#undef public_636b995
#undef public_636b997
#undef public_636b9b4
#undef public_636b9df
#undef public_636b9e3
#undef public_636ba11
#undef public_636ba1c
#undef public_636ba41
#undef public_636ba4b
#undef public_636ba9c
#undef public_636bab5
#undef public_636bac9
#undef public_636bae5
#undef public_636baf9
#undef public_636bb14
#undef public_636bb3e
#undef public_636bb4d
#undef public_636bb5f
#undef public_636bbe7
#undef public_636bc20
#undef public_636bc31
#undef public_636bc7b
#undef public_636bc88
#undef public_636bca0
#undef public_636bcc3
