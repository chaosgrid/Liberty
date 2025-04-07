#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21170);
CLANG_FORWARD_PROC_SYMBOL(public_6c2d330);
CLANG_FORWARD_PROC_SYMBOL(public_6c2d460);
CLANG_FORWARD_PROC_SYMBOL(public_6c2dd20);
CLANG_FORWARD_PROC_SYMBOL(public_6c2dfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2dff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f250);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f330);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ec0);

#define public_6c2ee86 _public_6c2ee86
#define public_6c2ef25 _public_6c2ef25
#define public_6c2ef37 _public_6c2ef37
#define public_6c2efb0 _public_6c2efb0
#define public_6c2efdb _public_6c2efdb
#define public_6c2efdd _public_6c2efdd
#define public_6c2f00a _public_6c2f00a
#define public_6c2f041 _public_6c2f041
#define public_6c2f045 _public_6c2f045
#define public_6c2f070 _public_6c2f070
#define public_6c2f09d _public_6c2f09d
#define public_6c2f09f _public_6c2f09f
#define public_6c2f0e9 _public_6c2f0e9
#define public_6c2f0f7 _public_6c2f0f7
#define public_6c2f109 _public_6c2f109
#define public_6c2f110 _public_6c2f110
#define public_6c2f12c _public_6c2f12c
#define public_6c2f150 _public_6c2f150
#define public_6c2f174 _public_6c2f174
#define public_6c2f192 _public_6c2f192
#define public_6c2f1ab _public_6c2f1ab

PROC_DECLARE(0x6c2ee30, internal_6c2ee30, public_6c2ee30);
extern "C" NAKED register_t __cdecl internal_6c2ee30()
{
    __asm
    {
        mov eax, 0x418C
        call public_6c34ec0
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x41A0]
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_6c3649c @0x6c2ee47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3649c
        xor ebp, ebp
        push edi
        xor ebx, ebx
        xor esi, esi
        mov dword ptr ss : [esp+0x18], ebp
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6c2f1ab
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x5C]
        push edx
/*FIXUP push offset public_6c376b8 @0x6c2ee69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c376b8
        push edi
        call dword ptr ds : [ecx+0x48]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], eax
        je public_6c2f12c
        mov ebp, dword ptr ss : [esp+0x41A4]
        public_6c2ee86 : nop
        test byte ptr ss : [esp+0x5C], 0x10
        je public_6c2f110
        cmp byte ptr ss : [esp+0x88], 0x2E
        je public_6c2f110
        xor eax, eax
        cmp ebp, ebx
        mov ecx, 0xB
        lea edi, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x2C], offset public_6c37310
        rep stosd
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x88]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x38], 0x80000000
        mov dword ptr ss : [esp+0x3C], 1
        mov dword ptr ss : [esp+0x44], 3
        mov dword ptr ss : [esp+0x48], 0x8000080
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x28], 0x34
        mov dword ptr ss : [esp+0x58], ecx
        jl public_6c2ef37
        lea edx, ss:[esp+0x88]
/*FIXUP push offset public_6c376b0 @0x6c2eefe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c376b0
        push edx
        call dword ptr ds : [public_6c36064]
        add esp, 8
        cmp eax, ebx
        je public_6c2ef25
        movsx eax, byte ptr ds : [eax+4]
        sub eax, 0x30
        cmp eax, ebp
        setge al
        cmp al, bl
        je public_6c2f0f7
        public_6c2ef25 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_6c2ef37
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ebx
        public_6c2ef37 : nop
        mov eax, dword ptr ss : [esp+0x41A0]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jl public_6c2f0f7
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x88]
        push edx
        push eax
        call public_6c2dd20
        mov edi, eax
        add esp, 8
        cmp edi, ebx
        jne public_6c2efb0
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x1A0]
/*FIXUP push offset public_6c376a0 @0x6c2ef80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c376a0
        push edx
        call public_6c21170
        push eax
        mov eax, dword ptr ds : [public_6c36010]
        push 0x8B
/*FIXUP push offset public_6c37650 @0x6c2ef96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37650
        mov ecx, 0x100002
/*FIXUP push offset public_6c3719c @0x6c2efa0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        jmp public_6c2f0f7
        public_6c2efb0 : nop
        cmp esi, ebx
        jne public_6c2efdd
        push 0xC
        call public_6c34eac
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_6c2efdb
        mov cl, byte ptr ss : [esp+0x1F]
        push ebx
        mov byte ptr ds : [esi], cl
        push ebx
        mov ecx, esi
        call public_6c2f2b0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        jmp public_6c2efdd
        public_6c2efdb : nop
        xor esi, esi
        public_6c2efdd : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], edi
        call public_6c2dfe0
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, esi
        call public_6c2f250
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, ebx
        je public_6c2f00a
        call public_6c2dff0
        public_6c2f00a : nop
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_6c2f045
        push 0x28
        call public_6c34eac
        add esp, 4
        cmp eax, ebx
        je public_6c2f041
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax+0x1C], ebx
        mov dword ptr ds : [eax+0x20], ebx
        mov dword ptr ds : [eax+0x24], ebx
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6c2f045
        public_6c2f041 : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_6c2f045 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        call public_6c2d330
        test al, al
        jne public_6c2f0e9
        mov ebp, dword ptr ss : [esp+0x10]
        cmp dword ptr ss : [ebp+0x24], ebx
        jne public_6c2f070
        mov ecx, ebp
        call public_6c2d460
        push ebp
        call public_6c34ea0
        add esp, 4
        public_6c2f070 : nop
        push 0x28
        call public_6c34eac
        add esp, 4
        cmp eax, ebx
        je public_6c2f09d
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax+0x1C], ebx
        mov dword ptr ds : [eax+0x20], ebx
        mov dword ptr ds : [eax+0x24], ebx
        jmp public_6c2f09f
        public_6c2f09d : nop
        xor eax, eax
        public_6c2f09f : nop
        push edi
        mov ecx, eax
        mov dword ptr ss : [esp+0x14], eax
        call public_6c2d330
        test al, al
        jne public_6c2f0e9
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x21A0]
/*FIXUP push offset public_6c37628 @0x6c2f0be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37628
        push edx
        call public_6c21170
        push eax
        mov eax, dword ptr ds : [public_6c36010]
        push 0xA5
/*FIXUP push offset public_6c37650 @0x6c2f0d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37650
        mov ecx, 0x100002
/*FIXUP push offset public_6c3719c @0x6c2f0de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        public_6c2f0e9 : nop
        mov ecx, edi
        call public_6c2dff0
        mov ebp, dword ptr ss : [esp+0x41A4]
        public_6c2f0f7 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_6c2f109
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ebx
        public_6c2f109 : nop
        mov edi, dword ptr ss : [esp+0x41A0]
        public_6c2f110 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x5C]
        push eax
        push ecx
        push edi
        call dword ptr ds : [edx+0x4C]
        test eax, eax
        jne public_6c2ee86
        mov ebp, dword ptr ss : [esp+0x10]
        public_6c2f12c : nop
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_6c37250 @0x6c2f12e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37250
        push edi
        call dword ptr ds : [edx+0x60]
        cmp esi, ebx
        je public_6c2f192
        cmp dword ptr ds : [esi+8], ebx
        jne public_6c2f192
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], eax
        je public_6c2f174
        lea ecx, ds:[ecx]
        public_6c2f150 : nop
        push ebx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6c2f330
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_6c2f2e0
        cmp dword ptr ss : [esp+0x18], edi
        jne public_6c2f150
        public_6c2f174 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6c34ea0
        push esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        call public_6c34ea0
        mov ebp, dword ptr ss : [esp+0x18]
        add esp, 8
        xor esi, esi
        public_6c2f192 : nop
        cmp ebp, ebx
        je public_6c2f1ab
        cmp dword ptr ss : [ebp+0x24], ebx
        jne public_6c2f1ab
        mov ecx, ebp
        call public_6c2d460
        push ebp
        call public_6c34ea0
        add esp, 4
        public_6c2f1ab : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x418C
        ret 8
        UNREACHABLE_TRAP(0x6c2ee30)
    }
}

#undef public_6c2ee86
#undef public_6c2ef25
#undef public_6c2ef37
#undef public_6c2efb0
#undef public_6c2efdb
#undef public_6c2efdd
#undef public_6c2f00a
#undef public_6c2f041
#undef public_6c2f045
#undef public_6c2f070
#undef public_6c2f09d
#undef public_6c2f09f
#undef public_6c2f0e9
#undef public_6c2f0f7
#undef public_6c2f109
#undef public_6c2f110
#undef public_6c2f12c
#undef public_6c2f150
#undef public_6c2f174
#undef public_6c2f192
#undef public_6c2f1ab
