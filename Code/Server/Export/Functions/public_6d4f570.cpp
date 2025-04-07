#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d191b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19f00);
CLANG_FORWARD_PROC_SYMBOL(public_6d1ad30);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b210);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6d55bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63639);

#define public_6d4f5fb _public_6d4f5fb
#define public_6d4f627 _public_6d4f627
#define public_6d4f647 _public_6d4f647
#define public_6d4f670 _public_6d4f670
#define public_6d4f690 _public_6d4f690
#define public_6d4f6a0 _public_6d4f6a0
#define public_6d4f6aa _public_6d4f6aa
#define public_6d4f809 _public_6d4f809
#define public_6d4f8eb _public_6d4f8eb
#define public_6d4f91c _public_6d4f91c
#define public_6d4f929 _public_6d4f929
#define public_6d4f9b6 _public_6d4f9b6
#define public_6d4f9c0 _public_6d4f9c0
#define public_6d4f9e3 _public_6d4f9e3
#define public_6d4fa31 _public_6d4fa31
#define public_6d4fa3a _public_6d4fa3a
#define public_6d4fa7a _public_6d4fa7a
#define public_6d4fa83 _public_6d4fa83

PROC_DECLARE(0x6d4f570, internal_6d4f570, public_6d4f570);
extern "C" NAKED register_t __cdecl internal_6d4f570()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63639 @0x6d4f572*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63639
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2A8
        mov al, byte ptr ss : [esp+7]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push 0
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x5C], al
        call dword ptr ds : [public_6d64b74]
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x2C0], 0
        call public_6d55bc0
        lea ecx, ss:[esp+0x68]
        call public_6d55bc0
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ebp, ds:[edi+0x318]
        mov esi, offset public_6d8d40c
        push ebp
        mov byte ptr ss : [esp+0x2D0], 2
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [public_6d64904]
        add esp, 0x10
        cmp eax, 0xFFFFFFFE
        jne public_6d4f5fb
        mov dword ptr ss : [esp+0x10], esi
        public_6d4f5fb : nop
        mov ebx, dword ptr ds : [public_6d64694]
        mov esi, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x2C0], 1
        call ebx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x2C0], 0
        call ebx
        cmp word ptr ds : [esi], 0
        je public_6d4f647
        public_6d4f627 : nop
        mov cl, byte ptr ds : [esi]
        mov byte ptr ss : [esp+0x18], cl
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push 1
        lea ecx, ss:[esp+0x60]
        add esi, 2
        call dword ptr ds : [public_6d64b38]
        cmp word ptr ds : [esi], 0
        jne public_6d4f627
        public_6d4f647 : nop
        mov al, byte ptr ss : [esp+0x17]
        push 0
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x44], al
        call dword ptr ds : [public_6d64b74]
        cmp word ptr ds : [edi], 0
        mov byte ptr ss : [esp+0x2C0], 3
        mov esi, edi
        je public_6d4f690
        nop 
        lea esp, ss:[esp]
        public_6d4f670 : nop
        mov cl, byte ptr ds : [esi]
        mov byte ptr ss : [esp+0x18], cl
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push 1
        lea ecx, ss:[esp+0x48]
        add esi, 2
        call dword ptr ds : [public_6d64b38]
        cmp word ptr ds : [esi], 0
        jne public_6d4f670
        public_6d4f690 : nop
        mov edx, dword ptr ss : [esp+0x44]
        test edx, edx
        mov ecx, dword ptr ds : [public_6d64b7c]
        jne public_6d4f6a0
        mov edx, ecx
        public_6d4f6a0 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        je public_6d4f6aa
        mov ecx, eax
        public_6d4f6aa : nop
        push edx
        push ecx
        mov ecx, dword ptr ss : [esp+0x2D0]
        mov edx, dword ptr ds : [ecx*4+public_6d8d430]
        push edx
        mov eax, 0x100001
/*FIXUP push offset public_6d6b848 @0x6d4f6c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b848
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6d1ad30
        mov bl, 4
        push 0xD681
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x2C4], bl
        call dword ptr ds : [public_6d64804]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x2C0], 5
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x2CC], 6
        call public_6d1b1b0
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x2C0], 5
        call public_6d19f00
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x2C0], bl
        call dword ptr ds : [public_6d64800]
        mov esi, dword ptr ds : [public_6d647fc]
        push 0xFFFFFFFF
/*FIXUP push offset public_6d8d160 @0x6d4f753*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d160
        lea ecx, ss:[esp+0x30]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x2C0], 7
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x2CC], 8
        call public_6d1b1b0
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x2C0], 7
        call public_6d19f00
        mov edi, dword ptr ds : [public_6d647f8]
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x2C0], bl
        call edi
        lea ecx, ss:[esp+0x80]
        call public_6d55bc0
        lea ecx, ss:[esp+0x98]
        call public_6d55bc0
        lea eax, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x2C0], 0xA
        mov dword ptr ss : [esp+0x10], offset public_6d8d40c
        push eax
        lea ecx, ss:[esp+0x9C]
        push ecx
        lea edx, ss:[esp+0x88]
        push edx
        push ebp
        call dword ptr ds : [public_6d64904]
        add esp, 0x10
        cmp eax, 0xFFFFFFFE
        jne public_6d4f809
        mov dword ptr ss : [esp+0x10], offset public_6d8d40c
        public_6d4f809 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x2C0], 9
        call dword ptr ds : [public_6d64694]
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0x2C0], bl
        call dword ptr ds : [public_6d64694]
        push 0xFFFFFFFF
        push ebp
        lea ecx, ss:[esp+0x70]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x2C0], 0xB
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x2CC], 0xC
        call public_6d1b1b0
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x2C0], 0xB
        call public_6d19f00
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x2C0], bl
        call edi
        mov eax, dword ptr ds : [public_6d647ec]
        lea ecx, ss:[esp+0x54]
        push ecx
        push 0x200
/*FIXUP push offset public_6d8fb38 @0x6d4f89f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8fb38
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x60], eax
        call dword ptr ds : [public_6d647f4]
        xor ebx, ebx
        test al, al
        je public_6d4f8eb
        mov eax, dword ptr ds : [public_6d902c8]
        mov ecx, dword ptr ss : [esp+0x54]
        push 0xFFFFFFFF
        push eax
/*FIXUP push offset public_6d8fb38 @0x6d4f8c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8fb38
        push ecx
        mov word ptr ss : [esp+0x20], bx
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov ecx, offset public_6d8fad0
        call public_6d191b0
        public_6d4f8eb : nop
        lea eax, ss:[esp+0xB0]
        push eax
        call dword ptr ds : [public_6d64874]
        add esp, 4
        call dword ptr ds : [public_6d647e8]
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        push ebx
        je public_6d4f91c
/*FIXUP push offset public_6d8d308 @0x6d4f90d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+0xB8]
        push ecx
        jmp public_6d4f929
/*FIXUP public_6d4f91c : nop
        push offset public_6d8d200 @0x6d4f91c*/
  FIXUP public_6d4f91c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea edx, ss:[esp+0xB8]
        push edx
        public_6d4f929 : nop
        push ebx
/*FIXUP push offset public_6d90158 @0x6d4f92a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        push ebx
/*FIXUP push offset public_6d6b838 @0x6d4f935*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b838
/*FIXUP push offset public_6d90158 @0x6d4f93a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea eax, ss:[esp+0x1C0]
        push ebx
        push eax
        call esi
        lea ecx, ss:[esp+0x1C8]
/*FIXUP push offset public_6d6b834 @0x6d4f951*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b834
        push ecx
        call dword ptr ds : [public_6d64bd8]
        mov esi, eax
        add esp, 0x1C
        cmp esi, ebx
        je public_6d4f9e3
        lea edx, ss:[esp+0x28]
        push edx
        call dword ptr ds : [public_6d64a64]
        movzx eax, word ptr ss : [esp+0x34]
        movzx ecx, word ptr ss : [esp+0x32]
        movzx edx, word ptr ss : [esp+0x30]
        mov edi, dword ptr ds : [public_6d64c08]
        push eax
        movzx eax, word ptr ss : [esp+0x2C]
        push ecx
        movzx ecx, word ptr ss : [esp+0x36]
        push edx
        movzx edx, word ptr ss : [esp+0x36]
        push eax
        push ecx
        push edx
/*FIXUP push offset public_6d6b7fc @0x6d4f99b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b7fc
        push esi
        call edi
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ds : [public_6d64b7c]
        add esp, 0x20
        cmp ecx, ebx
        jne public_6d4f9b6
        mov ecx, edx
        public_6d4f9b6 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        cmp eax, ebx
        jne public_6d4f9c0
        mov eax, edx
        public_6d4f9c0 : nop
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x2D0]
        mov ecx, dword ptr ds : [eax*4+public_6d8d430]
        push ecx
/*FIXUP push offset public_6d6b7ec @0x6d4f9d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b7ec
        push esi
        call edi
        push esi
        call dword ptr ds : [public_6d64bd0]
        add esp, 0x18
        public_6d4f9e3 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x2CC], 3
        call public_6d1b210
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x48]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_6d4fa3a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d4fa31
        cmp cl, 0xFF
        je public_6d4fa31
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d4fa3a
        public_6d4fa31 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d4fa3a : nop
        mov eax, dword ptr ss : [esp+0x5C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        cmp eax, ebx
        pop ebx
        je public_6d4fa83
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d4fa7a
        cmp cl, 0xFF
        je public_6d4fa7a
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x2A8]
        mov dword ptr fs : [0], ecx
        add esp, 0x2B4
        ret 4
        public_6d4fa7a : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d4fa83 : nop
        mov ecx, dword ptr ss : [esp+0x2A8]
        mov dword ptr fs : [0], ecx
        add esp, 0x2B4
        ret 4
        UNREACHABLE_TRAP(0x6d4f570)
    }
}

#undef public_6d4f5fb
#undef public_6d4f627
#undef public_6d4f647
#undef public_6d4f670
#undef public_6d4f690
#undef public_6d4f6a0
#undef public_6d4f6aa
#undef public_6d4f809
#undef public_6d4f8eb
#undef public_6d4f91c
#undef public_6d4f929
#undef public_6d4f9b6
#undef public_6d4f9c0
#undef public_6d4f9e3
#undef public_6d4fa31
#undef public_6d4fa3a
#undef public_6d4fa7a
#undef public_6d4fa83
