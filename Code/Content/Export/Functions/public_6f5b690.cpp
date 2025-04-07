#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef95d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f594c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5b690);
CLANG_FORWARD_PROC_SYMBOL(public_6f5bb10);
CLANG_FORWARD_PROC_SYMBOL(public_6f5be70);
CLANG_FORWARD_PROC_SYMBOL(public_6f5c6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f616e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f63a80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf8ce);

#define public_6f5b6c6 _public_6f5b6c6
#define public_6f5b6da _public_6f5b6da
#define public_6f5b6e4 _public_6f5b6e4
#define public_6f5b6f3 _public_6f5b6f3
#define public_6f5b72f _public_6f5b72f
#define public_6f5b739 _public_6f5b739
#define public_6f5b7a0 _public_6f5b7a0
#define public_6f5b85f _public_6f5b85f
#define public_6f5b890 _public_6f5b890
#define public_6f5b98b _public_6f5b98b
#define public_6f5b9b7 _public_6f5b9b7
#define public_6f5baec _public_6f5baec

PROC_DECLARE(0x6f5b690, internal_6f5b690, public_6f5b690);
extern "C" NAKED register_t __cdecl internal_6f5b690()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf8ce @0x6f5b692*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf8ce
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x100
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x130]
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        xor ebx, ebx
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], ebx
        je public_6f5b6e4
        public_6f5b6c6 : nop
        mov ecx, dword ptr ds : [esi]
        add ecx, 0x18
        call public_6ef9dc0
        cmp eax, dword ptr ss : [esp+0x10]
        jbe public_6f5b6da
        mov dword ptr ss : [esp+0x10], eax
        public_6f5b6da : nop
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        cmp esi, eax
        jne public_6f5b6c6
        public_6f5b6e4 : nop
        mov esi, dword ptr ss : [esp+0x134]
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [esi+8]
        je public_6f5b739
        public_6f5b6f3 : nop
        mov ecx, dword ptr ss : [ebp]
        add ecx, 0x18
        call public_6ef9dc0
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], ebx
        fild qword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ebx
        fmul dword ptr ds : [public_6fbbb38]
        fild qword ptr ss : [esp+0x18]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6f5b72f
        mov dword ptr ss : [esp+0x10], ecx
        public_6f5b72f : nop
        mov eax, dword ptr ds : [esi+8]
        add ebp, 4
        cmp ebp, eax
        jne public_6f5b6f3
        public_6f5b739 : nop
        call public_6efec10
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x128]
        lea ecx, ss:[esp+0x17]
        push ecx
        lea edx, ss:[esp+0x1A]
        push edx
        add eax, 0x24
/*FIXUP push offset public_6fd0e54 @0x6f5b756*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0e54
        push eax
        xor ebp, ebp
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x26], 1
        call public_6f616e0
        add esp, 0x10
        test al, al
        je public_6f5baec
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        je public_6f5b85f
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, ecx
        sar eax, 2
        cmp eax, ebx
        je public_6f5b85f
        mov edi, ecx
        cmp edi, edx
        je public_6f5b85f
        mov edi, edi
        public_6f5b7a0 : nop
        cmp ebp, ebx
        jne public_6f5b85f
        mov ecx, dword ptr ss : [esp+0x12C]
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edi]
/*FIXUP push offset public_6fd0e54 @0x6f5b7b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0e54
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], eax
        sub esp, 0x30
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [esp+0x168]
        mov ecx, esp
        mov dword ptr ss : [esp+0x64], esp
        push edx
        add esi, 0x18
        call public_6f594c0
        mov eax, dword ptr ss : [esp+0x164]
        mov ecx, dword ptr ds : [public_6fd0e64]
        push eax
        push ecx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x90]
        call public_6f63a80
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x2C], edx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x128], ebx
        mov dword ptr ss : [esp+0x28], 0x3F800000
        call public_6ef95d0
        lea ecx, ss:[esp+0x8C]
        mov ebp, eax
        add edi, 4
        mov dword ptr ss : [esp+0x118], 0xFFFFFFFF
        call public_6eec8d0
        mov ecx, dword ptr ss : [esp+0x130]
        cmp edi, dword ptr ds : [ecx+8]
        jne public_6f5b7a0
        public_6f5b85f : nop
        mov eax, dword ptr ss : [esp+0x134]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_6f5b98b
        mov edx, dword ptr ds : [eax+8]
        mov eax, edx
        sub eax, ecx
        sar eax, 2
        cmp eax, ebx
        je public_6f5b98b
        mov esi, ecx
        cmp esi, edx
        je public_6f5b98b
        lea ecx, ds:[ecx]
        public_6f5b890 : nop
        cmp ebp, ebx
        jne public_6f5b98b
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x12C]
        mov ecx, dword ptr ds : [edx]
/*FIXUP push offset public_6fd0e54 @0x6f5b8a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0e54
        lea edi, ds:[eax+0x18]
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+4], ecx
        sub esp, 0x30
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [esp+0x168]
        mov ecx, esp
        mov dword ptr ss : [esp+0x58], esp
        push eax
        call public_6f594c0
        mov ecx, dword ptr ss : [esp+0x164]
        mov edx, dword ptr ds : [public_6fd0e64]
        push ecx
        push edx
        push 1
        push ebx
        lea ecx, ss:[esp+0x90]
        call public_6f63a80
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x128], 1
        mov dword ptr ss : [esp+0x34], 0x3F800000
        call public_6ef95d0
        mov edx, dword ptr ss : [esp+0x94]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x90]
        push edx
        push eax
        lea ecx, ss:[esp+0x94]
        add esi, 4
        mov dword ptr ss : [esp+0x120], 0xFFFFFFFF
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x90]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x138]
        mov eax, dword ptr ds : [edx+8]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x90], ebx
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x98], ebx
        jne public_6f5b890
        public_6f5b98b : nop
        mov edi, dword ptr ss : [esp+0x138]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6f5baec
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, esi
        sar eax, 2
        cmp eax, ebx
        je public_6f5baec
        cmp esi, ecx
        je public_6f5baec
        public_6f5b9b7 : nop
        cmp ebp, ebx
        jne public_6f5baec
        mov eax, dword ptr ds : [esi]
        lea ebp, ds:[eax+0x18]
/*FIXUP push offset public_6fd0e54 @0x6f5b9c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0e54
        sub esp, 0xC
        mov dword ptr ss : [esp+0x44], 0
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x48], 0
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x4C], 0
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        call public_6f5bb10
        fmul dword ptr ds : [public_6fbbb64]
        push ecx
        lea ecx, ss:[esp+0xBC]
        fstp dword ptr ss : [esp]
        push ebx
        push ebx
        call public_6eb7810
        mov ecx, dword ptr ss : [esp+0x138]
        push eax
        lea edx, ss:[esp+0xB0]
        push edx
        call public_6f5c6d0
        sub esp, 0x30
        mov ecx, esp
        mov dword ptr ss : [esp+0x58], esp
        push eax
        call public_6f5be70
        mov eax, dword ptr ss : [esp+0x164]
        mov ecx, dword ptr ds : [public_6fd0e64]
        push eax
        push ecx
        push 2
        push ebx
        lea ecx, ss:[esp+0x104]
        call public_6f63a80
        mov ecx, ebp
        mov dword ptr ss : [esp+0x118], 2
        call public_6ef9dc0
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        fild qword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_6fbbb3c]
        call public_6fa9130
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0xC0]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        call public_6ef95d0
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x104]
        push eax
        add esi, 4
        mov dword ptr ss : [esp+0x11C], 0xFFFFFFFF
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x104], ebx
        mov dword ptr ss : [esp+0x108], ebx
        mov dword ptr ss : [esp+0x10C], ebx
        jne public_6f5b9b7
        public_6f5baec : nop
        mov ecx, dword ptr ss : [esp+0x110]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x10C
        ret 0x1C
        UNREACHABLE_TRAP(0x6f5b690)
    }
}

#undef public_6f5b6c6
#undef public_6f5b6da
#undef public_6f5b6e4
#undef public_6f5b6f3
#undef public_6f5b72f
#undef public_6f5b739
#undef public_6f5b7a0
#undef public_6f5b85f
#undef public_6f5b890
#undef public_6f5b98b
#undef public_6f5b9b7
#undef public_6f5baec
