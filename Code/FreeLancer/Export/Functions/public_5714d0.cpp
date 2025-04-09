#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_5637b0);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_56f180);
CLANG_FORWARD_PROC_SYMBOL(public_56f610);
CLANG_FORWARD_PROC_SYMBOL(public_56fdf0);
CLANG_FORWARD_PROC_SYMBOL(public_570040);
CLANG_FORWARD_PROC_SYMBOL(public_571b50);
CLANG_FORWARD_PROC_SYMBOL(public_571bd0);
CLANG_FORWARD_PROC_SYMBOL(public_571f50);
CLANG_FORWARD_PROC_SYMBOL(public_571fc0);
CLANG_FORWARD_PROC_SYMBOL(public_572100);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d540);
CLANG_FORWARD_PROC_SYMBOL(public_5abc80);
CLANG_FORWARD_PROC_SYMBOL(public_5abdb0);
CLANG_FORWARD_PROC_SYMBOL(public_5ac240);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);

#define public_571592 _public_571592
#define public_571609 _public_571609
#define public_5716f4 _public_5716f4
#define public_571718 _public_571718
#define public_571742 _public_571742
#define public_571773 _public_571773
#define public_57177a _public_57177a
#define public_571783 _public_571783
#define public_5717b7 _public_5717b7
#define public_5717d9 _public_5717d9
#define public_5718d4 _public_5718d4
#define public_57194a _public_57194a
#define public_571950 _public_571950
#define public_571958 _public_571958
#define public_57197b _public_57197b
#define public_57198b _public_57198b
#define public_571a40 _public_571a40
#define public_571a5f _public_571a5f
#define public_571a7e _public_571a7e
#define public_571a93 _public_571a93
#define public_571acb _public_571acb
#define public_571ae7 _public_571ae7
#define public_571b0d _public_571b0d
#define public_571b1d _public_571b1d
#define public_571b26 _public_571b26
#define public_571b3f _public_571b3f

PROC_DECLARE(0x5714d0, internal_5714d0, public_5714d0);
extern "C" NAKED register_t __cdecl internal_5714d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x3004
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        jne public_5718d4
        xor ebx, ebx
        push ebx
        call public_5645c0
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        cmp eax, 0x3EB
        jg public_571773
        je public_5716f4
        sub eax, 0x3E9
        je public_571609
        dec eax
        jne public_57177a
        mov ecx, dword ptr ds : [esi+0xC4]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xB8]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xBC]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xC0]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xD0]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xE8]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xD4]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xCC]
        push ebx
        call public_579890
        lea eax, ds:[esi+0x2A4]
        push eax
        push esi
        call public_5637b0
        add esp, 8
        test al, al
        jne public_571592
        push ebx
        call dword ptr ds : [public_5c713c]
        public_571592 : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xB8]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xBC]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xC0]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xD0]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xE8]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xD4]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xCC]
        push 1
        call public_579890
        mov ecx, esi
        call public_56fdf0
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0xC
        public_571609 : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        mov byte ptr ds : [esi+0x110], 1
        mov dword ptr ds : [esi+0x108], ebx
        mov dword ptr ds : [esi+0x10C], ebx
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0xC8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xE8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xDC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xCC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xEC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xB8]
        mov byte ptr ds : [ecx+0x498], bl
        mov edx, dword ptr ds : [esi+0xBC]
        mov byte ptr ds : [edx+0x498], bl
        mov eax, dword ptr ds : [esi+0xC0]
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ds : [esi+0xD4]
        mov byte ptr ds : [ecx+0x498], bl
        mov ecx, dword ptr ds : [esi+0xB8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xBC]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xC0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xD4]
        push 1
        call public_579a90
        push 0x1B
        call public_564570
        add esp, 4
        push ebx
        mov ecx, esi
        call public_571f50
        pop edi
        mov dword ptr ds : [esi+0x114], 0xFFFFFFFF
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0xC
        public_5716f4 : nop
        cmp dword ptr ds : [public_67e9f4], ebx
        jne public_57177a
        mov eax, dword ptr ds : [esi+0xC4]
        lea ecx, ds:[eax+0x4A0]
        call public_5ad970
        mov ebp, eax
        mov edi, 1
        cmp ebp, edi
        jle public_571742
        public_571718 : nop
        push edi
        mov ecx, esi
        call public_571b50
        mov ecx, dword ptr ds : [esi+0xC4]
        push edi
        call public_58d0b0
        mov byte ptr ds : [eax+1], bl
        mov ecx, dword ptr ds : [esi+0xC4]
        push edi
        call public_58d0b0
        inc edi
        cmp edi, ebp
        mov byte ptr ds : [eax], bl
        jl public_571718
        public_571742 : nop
        mov ecx, esi
        call public_56f610
        mov ecx, dword ptr ds : [esi+0xD0]
        push ebx
        push ebx
        call public_5798b0
        mov ecx, offset public_67e7b8
        call public_5abc80
        mov ecx, offset public_67e7b8
        call public_5ac240
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0xC
        public_571773 : nop
        cmp eax, 0x3003
        je public_571783
        public_57177a : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0xC
        public_571783 : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        lea edx, ss:[esp+0x18]
        push edx
        call public_58d540
        test al, al
        je public_5717b7
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0xC4]
        push eax
        call public_58d0b0
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_571b3f
        add eax, 8
        jmp public_5717d9
        public_5717b7 : nop
        mov eax, dword ptr ds : [esi+0x2C8]
        cmp eax, 0xFFFFFFFF
        je public_571b3f
        push eax
        mov ecx, offset public_67e7b8
        call public_5abdb0
        cmp eax, ebx
        je public_571b3f
        public_5717d9 : nop
        mov ecx, esi
        push eax
        call public_572100
        cmp al, bl
        je public_571b3f
        mov ecx, dword ptr ds : [esi+0xC4]
        mov byte ptr ds : [esi+0x110], 1
        mov dword ptr ds : [esi+0x108], ebx
        mov dword ptr ds : [esi+0x10C], ebx
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0xC8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xE8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xDC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xCC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xEC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xB8]
        mov byte ptr ds : [ecx+0x498], bl
        mov edx, dword ptr ds : [esi+0xBC]
        mov byte ptr ds : [edx+0x498], bl
        mov eax, dword ptr ds : [esi+0xC0]
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ds : [esi+0xD4]
        mov byte ptr ds : [ecx+0x498], bl
        mov ecx, dword ptr ds : [esi+0xB8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xBC]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xC0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xD4]
        push 1
        call public_579a90
        push 0x1B
        call public_564570
        add esp, 4
        push ebx
        mov ecx, esi
        call public_571f50
        pop edi
        mov dword ptr ds : [esi+0x114], 1
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 0xC
        public_5718d4 : nop
        cmp eax, 0xF002
        jg public_571b0d
        je public_571a93
        cmp eax, 0x300D
        je public_57198b
        cmp eax, 0xF001
        jne public_571b1d
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [esi+0xC4]
        jne public_571b1d
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        and ecx, 0xFFFF
        test eax, 0xFFFF0000
        jne public_571b1d
        cmp ecx, 8
        jae public_571b1d
        mov eax, dword ptr ds : [esi+0x298]
        xor ebx, ebx
        cmp ecx, eax
        jne public_57194a
        cmp byte ptr ds : [eax+esi+0x29C], bl
        sete cl
        mov byte ptr ds : [eax+esi+0x29C], cl
        jmp public_571950
        public_57194a : nop
        mov dword ptr ds : [esi+0x298], ecx
        public_571950 : nop
        xor edi, edi
        lea ebp, ds:[esi+0x11C]
        public_571958 : nop
        push ebx
        push ebx
        push ebp
        push edi
        push ebx
        mov ecx, esi
        call public_56f180
        inc edi
        add ebp, 0xC
        cmp edi, 8
        jb public_571958
        mov ecx, dword ptr ds : [esi+0xC4]
        push ebx
        call public_58d0b0
        mov byte ptr ds : [eax], bl
        public_57197b : nop
        mov ecx, esi
        call public_56fdf0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 0xC
        public_57198b : nop
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [esi+0xC4]
        jne public_571b1d
        mov ecx, esi
        call public_56f610
        mov eax, dword ptr ds : [esi+0x2C8]
        mov ecx, dword ptr ds : [esi+0xC4]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ds : [esi+0x2C8], 0xFFFFFFFF
        call public_58d540
        test al, al
        je public_571b3f
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0xC4]
        push eax
        call public_58d0b0
        mov edi, dword ptr ds : [eax+8]
        xor ebx, ebx
        cmp edi, ebx
        je public_571b3f
        mov edx, dword ptr ds : [edi+0x98]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp edx, ecx
        setne dl
        lea ebp, ds:[edi+8]
        mov ecx, esi
        push edx
        push ebp
        call public_571bd0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+0x98]
        push ebp
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x2C8], eax
        call public_570040
        mov eax, dword ptr ds : [esi+0xC4]
        lea ecx, ds:[eax+0x4A0]
        mov edi, 1
        call public_5ad970
        cmp eax, edi
        jbe public_571b3f
        lea ecx, ds:[ecx]
        public_571a40 : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        push edi
        call public_58d0b0
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_571a5f
        mov edx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [eax+0x98], edx
        je public_571a7e
        public_571a5f : nop
        mov eax, dword ptr ds : [esi+0xC4]
        lea ecx, ds:[eax+0x4A0]
        inc edi
        call public_5ad970
        cmp edi, eax
        jb public_571a40
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 0xC
        public_571a7e : nop
        add eax, 8
        push eax
        push edi
        mov ecx, esi
        call public_570040
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 0xC
        public_571a93 : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        cmp dword ptr ss : [esp+0x18], ecx
        jne public_571b1d
        lea eax, ss:[esp+0x18]
        push eax
        call public_58d540
        test al, al
        je public_571acb
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0xC4]
        push edx
        call public_58d0b0
        mov eax, dword ptr ds : [eax+8]
        xor ebx, ebx
        cmp eax, ebx
        je public_571b3f
        add eax, 8
        jmp public_571ae7
        public_571acb : nop
        mov eax, dword ptr ds : [esi+0x2C8]
        cmp eax, 0xFFFFFFFF
        je public_571b3f
        push eax
        mov ecx, offset public_67e7b8
        call public_5abdb0
        xor ebx, ebx
        cmp eax, ebx
        je public_571b3f
        public_571ae7 : nop
        mov ecx, esi
        push eax
        call public_572100
        cmp al, bl
        je public_571b3f
        mov ecx, esi
        call public_571fc0
        pop edi
        mov dword ptr ds : [esi+0x114], 1
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 0xC
        public_571b0d : nop
        sub eax, 0xF003
        je public_571b26
        sub eax, 2
        je public_57197b
        public_571b1d : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0xC
        public_571b26 : nop
        push 1
/*FIXUP push offset public_5c95fc @0x571b28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        mov dword ptr ds : [esi+0xB4], 1
        call public_41dde0
        add esp, 8
        public_571b3f : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x5714d0)
    }
}

#undef public_571592
#undef public_571609
#undef public_5716f4
#undef public_571718
#undef public_571742
#undef public_571773
#undef public_57177a
#undef public_571783
#undef public_5717b7
#undef public_5717d9
#undef public_5718d4
#undef public_57194a
#undef public_571950
#undef public_571958
#undef public_57197b
#undef public_57198b
#undef public_571a40
#undef public_571a5f
#undef public_571a7e
#undef public_571a93
#undef public_571acb
#undef public_571ae7
#undef public_571b0d
#undef public_571b1d
#undef public_571b26
#undef public_571b3f
