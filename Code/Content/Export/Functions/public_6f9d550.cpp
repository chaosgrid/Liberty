#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6f566a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f58f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f95040);
CLANG_FORWARD_PROC_SYMBOL(public_6f95890);
CLANG_FORWARD_PROC_SYMBOL(public_6f98540);
CLANG_FORWARD_PROC_SYMBOL(public_6f9d550);
CLANG_FORWARD_PROC_SYMBOL(public_6f9ecb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0860);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1a39);

#define public_6f9d65b _public_6f9d65b
#define public_6f9d690 _public_6f9d690
#define public_6f9d6b1 _public_6f9d6b1
#define public_6f9d6fb _public_6f9d6fb
#define public_6f9d709 _public_6f9d709
#define public_6f9d721 _public_6f9d721
#define public_6f9d727 _public_6f9d727
#define public_6f9d750 _public_6f9d750
#define public_6f9d779 _public_6f9d779
#define public_6f9d7a2 _public_6f9d7a2
#define public_6f9d7cb _public_6f9d7cb
#define public_6f9d7f3 _public_6f9d7f3
#define public_6f9d857 _public_6f9d857
#define public_6f9d860 _public_6f9d860

PROC_DECLARE(0x6f9d550, internal_6f9d550, public_6f9d550);
extern "C" NAKED register_t __cdecl internal_6f9d550()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb1a39 @0x6f9d558*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1a39
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1584
        mov dword ptr fs : [0], esp
        call public_6fa9000
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, edi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ds : [public_6fcf25c], eax
        mov cl, byte ptr ss : [esp+0xF]
        xor ebx, ebx
        mov byte ptr ds : [edi+4], bl
        mov byte ptr ds : [edi+5], bl
        mov dword ptr ds : [edi+8], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1598], ebx
        mov byte ptr ds : [edi+0xC], cl
        mov dword ptr ds : [edi+0x10], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dl, byte ptr ss : [esp+0xF]
        mov al, byte ptr ss : [esp+0xF]
        lea esi, ds:[edi+0x1C]
        push 0x128
        mov byte ptr ss : [esp+0x159C], 1
        mov byte ptr ds : [esi], dl
        mov byte ptr ds : [esi+1], al
        mov byte ptr ds : [esi+0xC], bl
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x124], 1
        mov byte ptr ds : [eax+0x125], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x125], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        mov dword ptr ds : [ecx+8], ebx
        mov edx, dword ptr ds : [esi+8]
        push ebx
        push edx
        mov ecx, esi
        call public_6fa3cb0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x1598], 2
        mov dword ptr ds : [edi], offset public_6fbd4fc
        call dword ptr ds : [public_6fb300c]
        lea eax, ss:[esp+0x28]
        push eax
/*FIXUP push offset public_6fbd4d8 @0x6f9d629*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd4d8
        mov byte ptr ss : [esp+0x15A0], 3
        call public_6f24280
        mov esi, dword ptr ds : [public_6fb3008]
        add esp, 8
        test al, al
        je public_6f9d65b
        lea ecx, ss:[esp+0x28]
        push ecx
        call public_6f98540
        add esp, 4
        lea ecx, ss:[esp+0x28]
        call esi
        public_6f9d65b : nop
        lea edx, ss:[esp+0x28]
        push edx
/*FIXUP push offset public_6fbd4b8 @0x6f9d660*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd4b8
        call public_6f24280
        add esp, 8
        test al, al
        je public_6f9d727
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f9d721
        mov esi, dword ptr ds : [public_6fb3020]
        lea ecx, ds:[ecx]
/*FIXUP public_6f9d690 : nop
        push offset public_6fbcd14 @0x6f9d690*/
  FIXUP public_6f9d690 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd14
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f9d709
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f9d709
/*FIXUP public_6f9d6b1 : nop
        push offset public_6fbcd14 @0x6f9d6b1*/
  FIXUP public_6f9d6b1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd14
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f9d6fb
        push ebx
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 1
        lea ecx, ss:[esp+0x2C]
        call esi
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        push edx
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, offset public_6fd3cec
        call public_6fa0860
        public_6f9d6fb : nop
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f9d6b1
        public_6f9d709 : nop
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f9d690
        mov esi, dword ptr ds : [public_6fb3008]
        public_6f9d721 : nop
        lea ecx, ss:[esp+0x28]
        call esi
        public_6f9d727 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
/*FIXUP push offset public_6fbd498 @0x6f9d72c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd498
        call public_6f24280
        add esp, 8
        test al, al
        je public_6f9d750
        lea edx, ss:[esp+0x28]
        push edx
        call public_6f566a0
        add esp, 4
        lea ecx, ss:[esp+0x28]
        call esi
        public_6f9d750 : nop
        lea eax, ss:[esp+0x28]
        push eax
/*FIXUP push offset public_6fbd474 @0x6f9d755*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd474
        call public_6f24280
        add esp, 8
        test al, al
        je public_6f9d779
        lea ecx, ss:[esp+0x28]
        push ecx
        call public_6f58f30
        add esp, 4
        lea ecx, ss:[esp+0x28]
        call esi
        public_6f9d779 : nop
        lea edx, ss:[esp+0x28]
        push edx
/*FIXUP push offset public_6fbd450 @0x6f9d77e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd450
        call public_6f24280
        add esp, 8
        test al, al
        je public_6f9d7a2
        lea eax, ss:[esp+0x28]
        push eax
        call public_6f95040
        add esp, 4
        lea ecx, ss:[esp+0x28]
        call esi
        public_6f9d7a2 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
/*FIXUP push offset public_6fbd428 @0x6f9d7a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd428
        call public_6f24280
        add esp, 8
        test al, al
        je public_6f9d7cb
        lea edx, ss:[esp+0x28]
        push edx
        call public_6f95890
        add esp, 4
        lea ecx, ss:[esp+0x28]
        call esi
        public_6f9d7cb : nop
        lea eax, ss:[esp+0x28]
        push eax
/*FIXUP push offset public_6fbd404 @0x6f9d7d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd404
        call public_6f24280
        add esp, 8
        test al, al
        je public_6f9d7f3
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f9ecb0
        lea ecx, ss:[esp+0x28]
        call esi
        public_6f9d7f3 : nop
        lea edx, ss:[esp+0x1450]
        mov dword ptr ss : [esp+0x10], edx
        lea ecx, ss:[esp+0x1450]
        mov byte ptr ss : [esp+0x1598], 5
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x1454]
        mov byte ptr ss : [esp+0x159C], 4
        call dword ptr ds : [public_6fb32f8]
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x1598], 6
        call dword ptr ds : [public_6fb304c]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_6f9d860
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f9d857
        cmp cl, 0xFF
        je public_6f9d857
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f9d860
        public_6f9d857 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f9d860 : nop
        mov ecx, dword ptr ss : [esp+0x1590]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1590
        ret 
        UNREACHABLE_TRAP(0x6f9d550)
    }
}

#undef public_6f9d65b
#undef public_6f9d690
#undef public_6f9d6b1
#undef public_6f9d6fb
#undef public_6f9d709
#undef public_6f9d721
#undef public_6f9d727
#undef public_6f9d750
#undef public_6f9d779
#undef public_6f9d7a2
#undef public_6f9d7cb
#undef public_6f9d7f3
#undef public_6f9d857
#undef public_6f9d860
