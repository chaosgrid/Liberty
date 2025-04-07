#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1f850);
CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d28200);
CLANG_FORWARD_PROC_SYMBOL(public_6d28350);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62838);

#define public_6d21b06 _public_6d21b06
#define public_6d21b17 _public_6d21b17
#define public_6d21b78 _public_6d21b78
#define public_6d21b9a _public_6d21b9a
#define public_6d21ba7 _public_6d21ba7
#define public_6d21bb5 _public_6d21bb5
#define public_6d21c10 _public_6d21c10
#define public_6d21c48 _public_6d21c48
#define public_6d21c50 _public_6d21c50
#define public_6d21c7a _public_6d21c7a
#define public_6d21c92 _public_6d21c92
#define public_6d21cad _public_6d21cad
#define public_6d21cbf _public_6d21cbf
#define public_6d21ccf _public_6d21ccf
#define public_6d21cd1 _public_6d21cd1
#define public_6d21d10 _public_6d21d10
#define public_6d21d35 _public_6d21d35
#define public_6d21d60 _public_6d21d60
#define public_6d21d71 _public_6d21d71
#define public_6d21d7e _public_6d21d7e
#define public_6d21d94 _public_6d21d94
#define public_6d21daf _public_6d21daf
#define public_6d21de0 _public_6d21de0
#define public_6d21dfd _public_6d21dfd
#define public_6d21e0e _public_6d21e0e
#define public_6d21e10 _public_6d21e10

PROC_DECLARE(0x6d21ac0, internal_6d21ac0, public_6d21ac0);
extern "C" NAKED register_t __cdecl internal_6d21ac0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62838 @0x6d21ac2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62838
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [esi+0x14]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi+0x28]
        mov ebp, dword ptr ds : [edi+0x2C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+4]
        shl ebx, 5
        add ebx, eax
        shl ebp, 5
        add ebp, ebx
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x20], edi
        je public_6d21b17
        public_6d21b06 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        call public_6d28350
        add ebx, 0x20
        cmp ebx, ebp
        jne public_6d21b06
        public_6d21b17 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea ebx, ds:[esi+0x10]
        push ebx
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6d28200
        mov ecx, dword ptr ds : [ebx]
        mov ebp, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edi+0x1C]
        mov eax, ecx
        sub eax, ebp
        sar eax, 1
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], eax
        jbe public_6d21ba7
        mov al, byte ptr ds : [edi+0x24]
        test al, al
        je public_6d21b9a
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [edi+0x28]
        mov ebx, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+0x14]
        shl ebp, 5
        add ebp, ebx
        mov ebx, dword ptr ds : [edi+0x2C]
        shl ebx, 5
        push 4
        mov dword ptr ss : [esp+0x64], ecx
        add ebx, ebp
        call public_6d1f7f0
        cmp ebp, ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        je public_6d21e0e
        public_6d21b78 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        push 0x20
        sub ebx, 0x20
        call public_6d1f7f0
        cmp ebx, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_6d21b78
        jmp public_6d21e0e
        public_6d21b9a : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+0x18], edx
        mov al, 1
        jmp public_6d21e10
        public_6d21ba7 : nop
        cmp eax, dword ptr ds : [edi+0x20]
        lea edx, ds:[edi+0x20]
        lea eax, ss:[esp+0x14]
        jb public_6d21bb5
        mov eax, edx
        public_6d21bb5 : nop
        mov eax, dword ptr ds : [eax]
        neg eax
        lea edx, ds:[ecx+eax*2]
        mov eax, 1
        sub eax, ebx
        mov ebx, dword ptr ds : [esi]
        lea eax, ds:[ecx+eax*2]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x30], ebx
        mov ebx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x40], eax
        xor eax, eax
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x48], eax
        mov byte ptr ss : [esp+0x4C], al
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x24], offset public_6d68e2c
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x14], edx
        lea esp, ss:[esp]
        public_6d21c10 : nop
        cmp edx, dword ptr ss : [esp+0x1C]
        je public_6d21daf
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x10], ecx
        mov eax, dword ptr ds : [ebx+0x1008]
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [edx+8]
        test al, al
        je public_6d21ccf
        public_6d21c48 : nop
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        je public_6d21c7a
        public_6d21c50 : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebx
        call public_6d28200
        mov ecx, dword ptr ss : [esp+0x48]
        lea eax, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        test al, al
        je public_6d21c92
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        jne public_6d21c50
        public_6d21c7a : nop
        mov al, byte ptr ss : [esp+0x4C]
        test al, al
        je public_6d21cbf
        mov ecx, dword ptr ss : [esp+0x38]
        cmp ecx, dword ptr ss : [esp+0x40]
        jne public_6d21cbf
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6d21cad
        public_6d21c92 : nop
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [ebx+0x1008]
        je public_6d21ccf
        push 4
        mov ecx, ebx
        call public_6d1f7f0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        public_6d21cad : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_6d21c92
        jmp public_6d21c48
        public_6d21cbf : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        mov ecx, ebx
        call public_6d1f850
        mov al, 1
        jmp public_6d21cd1
        public_6d21ccf : nop
        xor al, al
        public_6d21cd1 : nop
        cmp byte ptr ds : [edi+0x24], al
        je public_6d21d94
        test al, al
        je public_6d21d7e
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [esi+0x14]
        shl ebx, 5
        add ebx, eax
        shl ebp, 5
        push 4
        mov dword ptr ss : [esp+0x1C], ecx
        add ebp, ebx
        call public_6d1f7f0
        cmp ebx, ebp
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x10], ecx
        je public_6d21d35
        mov edi, edi
        public_6d21d10 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push 0x20
        sub ebp, 0x20
        call public_6d1f7f0
        cmp ebp, ebx
        mov ecx, 8
        mov esi, eax
        mov edi, ebp
        rep movsd
        jne public_6d21d10
        mov esi, dword ptr ss : [esp+0x60]
        mov edi, dword ptr ss : [esp+0x20]
        public_6d21d35 : nop
        mov al, byte ptr ds : [edi+0x24]
        test al, al
        je public_6d21dfd
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi+0x28]
        mov ebp, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi+0x14]
        shl ebx, 5
        add ebx, ebp
        mov ebp, dword ptr ds : [edi+0x2C]
        shl ebp, 5
        add ebp, ebx
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x18], edx
        je public_6d21d71
        public_6d21d60 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        call public_6d28350
        add ebx, 0x20
        cmp ebx, ebp
        jne public_6d21d60
        public_6d21d71 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ds:[esi+0x10]
        push eax
        call public_6d28200
        public_6d21d7e : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x44]
        add eax, 2
        mov dword ptr ss : [esp+0x14], eax
        mov edx, eax
        jmp public_6d21c10
        public_6d21d94 : nop
        mov edi, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x24]
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_6d209f0
        mov al, 1
        jmp public_6d21e10
        public_6d21daf : nop
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [esi+0x14]
        shl ebp, 5
        add ebp, eax
        shl ebx, 5
        push 4
        mov dword ptr ss : [esp+0x64], ecx
        add ebx, ebp
        call public_6d1f7f0
        cmp ebp, ebx
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x10], eax
        je public_6d21dfd
        nop 
        lea esp, ss:[esp]
        public_6d21de0 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        push 0x20
        sub ebx, 0x20
        call public_6d1f7f0
        cmp ebx, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_6d21de0
        public_6d21dfd : nop
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_6d209f0
        public_6d21e0e : nop
        xor al, al
        public_6d21e10 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 4
        UNREACHABLE_TRAP(0x6d21ac0)
    }
}

#undef public_6d21b06
#undef public_6d21b17
#undef public_6d21b78
#undef public_6d21b9a
#undef public_6d21ba7
#undef public_6d21bb5
#undef public_6d21c10
#undef public_6d21c48
#undef public_6d21c50
#undef public_6d21c7a
#undef public_6d21c92
#undef public_6d21cad
#undef public_6d21cbf
#undef public_6d21ccf
#undef public_6d21cd1
#undef public_6d21d10
#undef public_6d21d35
#undef public_6d21d60
#undef public_6d21d71
#undef public_6d21d7e
#undef public_6d21d94
#undef public_6d21daf
#undef public_6d21de0
#undef public_6d21dfd
#undef public_6d21e0e
#undef public_6d21e10
