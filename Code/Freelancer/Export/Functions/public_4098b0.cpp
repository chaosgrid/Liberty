#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);
CLANG_FORWARD_PROC_SYMBOL(public_40daa0);
CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8598);

#define public_409904 _public_409904
#define public_40990b _public_40990b
#define public_409936 _public_409936
#define public_409961 _public_409961
#define public_409a24 _public_409a24
#define public_409a6d _public_409a6d
#define public_409a72 _public_409a72
#define public_409a83 _public_409a83
#define public_409b09 _public_409b09
#define public_409b50 _public_409b50
#define public_409b5f _public_409b5f
#define public_409b76 _public_409b76
#define public_409b85 _public_409b85
#define public_409b90 _public_409b90
#define public_409b9d _public_409b9d
#define public_409ba1 _public_409ba1
#define public_409bb2 _public_409bb2
#define public_409bb4 _public_409bb4
#define public_409bc9 _public_409bc9

PROC_DECLARE(0x4098b0, internal_4098b0, public_4098b0);
extern "C" NAKED register_t __cdecl internal_4098b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b8598 @0x4098b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8598
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        push esi
        push edi
        push ebp
        mov esi, ecx
        mov bl, 1
        call public_406dc0
        test al, al
        jne public_409904
/*FIXUP push offset public_5c7d78 @0x4098de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7d78
        mov ecx, ebp
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, ebp
        je public_40990b
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [esi+0x54], eax
        public_409904 : nop
        mov al, bl
        jmp public_409bb4
/*FIXUP public_40990b : nop
        push offset public_5c7d60 @0x40990b*/
  FIXUP public_40990b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7d60
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, ebp
        je public_409936
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        mov dword ptr ds : [esi+0x58], eax
        add esp, 4
        mov al, bl
        jmp public_409bb4
/*FIXUP public_409936 : nop
        push offset public_5c7d48 @0x409936*/
  FIXUP public_409936 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7d48
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, ebp
        je public_409961
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        mov dword ptr ds : [esi+0x5C], eax
        add esp, 4
        mov al, bl
        jmp public_409bb4
/*FIXUP public_409961 : nop
        push offset public_5c7d34 @0x409961*/
  FIXUP public_409961 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7d34
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_409bc9
        xor edi, edi
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x14]
        mov al, byte ptr ss : [esp+0x50]
        mov cl, byte ptr ss : [esp+0x50]
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov byte ptr ss : [esp+0x30], cl
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov eax, dword ptr ds : [esi+0x68]
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[esi+0x60]
        push 1
        push eax
        mov dword ptr ss : [esp+0x54], edi
        call public_40daa0
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_53aaa0
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        call public_4de730
        mov esi, dword ptr ds : [esi+0x68]
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, 1
        sub esi, 0x24
        push ebx
        mov ecx, ebp
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_409bb2
        add esi, 4
        public_409a24 : nop
        mov eax, ebx
        inc ebx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebx
        call dword ptr ds : [public_5c6024]
        push eax
        call dword ptr ds : [public_5c6020]
        mov edi, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edi
        sar ecx, 2
        add esp, 4
        cmp ecx, 1
        mov dword ptr ss : [esp+0x10], eax
        jae public_409b09
        mov ecx, esi
        call public_5ad970
        cmp eax, 1
        jbe public_409a6d
        mov ecx, esi
        call public_5ad970
        mov ebp, eax
        jmp public_409a72
        public_409a6d : nop
        mov ebp, 1
        public_409a72 : nop
        mov ecx, esi
        call public_5ad970
        mov ebx, eax
        add ebx, ebp
        mov eax, ebx
        jns public_409a83
        xor eax, eax
        public_409a83 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push edi
        push eax
        mov ecx, esi
        call public_597c70
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_427730
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_597c70
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        lea ecx, ss:[ebp+ebx*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_5ad970
        mov ebx, dword ptr ss : [esp+0x18]
        lea edx, ss:[ebp+eax*4+4]
        mov dword ptr ds : [esi+4], ebp
        mov ebp, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [esi+8], edx
        jmp public_409ba1
        public_409b09 : nop
        mov eax, edi
        sub eax, edi
        sar eax, 2
        cmp eax, 1
        jae public_409b5f
        lea ecx, ds:[edi+4]
        push ecx
        push edi
        push edi
        mov ecx, esi
        call public_597c70
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        lea edx, ss:[esp+0x10]
        push edx
        sub ecx, edi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_427730
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_409b9d
        lea ebx, ds:[ebx]
        public_409b50 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_409b50
        jmp public_409b9d
        public_409b5f : nop
        push edi
        push edi
        lea eax, ds:[edi-4]
        push eax
        mov ecx, esi
        call public_597c70
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_409b85
        public_409b76 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_409b76
        public_409b85 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_409b9d
        lea esp, ss:[esp]
        public_409b90 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_409b90
        public_409b9d : nop
        add dword ptr ds : [esi+8], 4
        public_409ba1 : nop
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c6cf8]
        test al, al
        je public_409a24
        public_409bb2 : nop
        mov al, 1
        public_409bb4 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 4
        public_409bc9 : nop
        xor al, al
        jmp public_409bb4
        UNREACHABLE_TRAP(0x4098b0)
    }
}

#undef public_409904
#undef public_40990b
#undef public_409936
#undef public_409961
#undef public_409a24
#undef public_409a6d
#undef public_409a72
#undef public_409a83
#undef public_409b09
#undef public_409b50
#undef public_409b5f
#undef public_409b76
#undef public_409b85
#undef public_409b90
#undef public_409b9d
#undef public_409ba1
#undef public_409bb2
#undef public_409bb4
#undef public_409bc9
