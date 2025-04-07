#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f7900);
CLANG_FORWARD_PROC_SYMBOL(public_66f7960);
CLANG_FORWARD_PROC_SYMBOL(public_66f9500);
CLANG_FORWARD_PROC_SYMBOL(public_66f9550);
CLANG_FORWARD_PROC_SYMBOL(public_66f95b0);
CLANG_FORWARD_PROC_SYMBOL(public_66f95c0);
CLANG_FORWARD_PROC_SYMBOL(public_66fc970);
CLANG_FORWARD_PROC_SYMBOL(public_66fcec0);
CLANG_FORWARD_PROC_SYMBOL(public_67006d0);
CLANG_FORWARD_PROC_SYMBOL(public_670071b);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700924);
CLANG_FORWARD_PROC_SYMBOL(public_670092a);
CLANG_FORWARD_JUMP_SYMBOL(public_6700c86);

#define public_66f8c9d _public_66f8c9d
#define public_66f8cb7 _public_66f8cb7
#define public_66f8cc3 _public_66f8cc3
#define public_66f8ce6 _public_66f8ce6
#define public_66f8cff _public_66f8cff
#define public_66f8d13 _public_66f8d13
#define public_66f8d58 _public_66f8d58
#define public_66f8d6b _public_66f8d6b
#define public_66f8da0 _public_66f8da0
#define public_66f8db2 _public_66f8db2
#define public_66f8dc3 _public_66f8dc3
#define public_66f8de6 _public_66f8de6
#define public_66f8e10 _public_66f8e10
#define public_66f8e62 _public_66f8e62
#define public_66f8e6b _public_66f8e6b
#define public_66f8ef2 _public_66f8ef2
#define public_66f8f09 _public_66f8f09
#define public_66f8f18 _public_66f8f18
#define public_66f8f2a _public_66f8f2a
#define public_66f8f33 _public_66f8f33
#define public_66f8f3a _public_66f8f3a
#define public_66f8f8c _public_66f8f8c
#define public_66f8f9a _public_66f8f9a
#define public_66f8fa7 _public_66f8fa7
#define public_66f8fb7 _public_66f8fb7
#define public_66f8fc0 _public_66f8fc0
#define public_66f8fc7 _public_66f8fc7
#define public_66f9046 _public_66f9046
#define public_66f90e8 _public_66f90e8
#define public_66f91b1 _public_66f91b1
#define public_66f91ec _public_66f91ec
#define public_66f91ee _public_66f91ee
#define public_66f9222 _public_66f9222
#define public_66f9231 _public_66f9231
#define public_66f923d _public_66f923d
#define public_66f9244 _public_66f9244
#define public_66f92a7 _public_66f92a7
#define public_66f9349 _public_66f9349
#define public_66f9384 _public_66f9384
#define public_66f9386 _public_66f9386
#define public_66f93ac _public_66f93ac
#define public_66f94df _public_66f94df

PROC_DECLARE(0x66f8c50, internal_66f8c50, public_66f8c50);
extern "C" NAKED register_t __cdecl internal_66f8c50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6700c86 @0x66f8c52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700c86
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD0
        push ebx
        mov ebx, dword ptr ss : [esp+0xE8]
        push ebp
        xor ebp, ebp
        cmp ebx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        je public_66f8cc3
        mov edi, dword ptr ds : [ebx]
        call public_66fc970
        mov esi, eax
        cmp esi, ebp
        je public_66f8c9d
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0xDC]
        mov edi, eax
        public_66f8c9d : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        call public_66fcec0
        add esp, 8
        test al, al
        je public_66f8cb7
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], edx
        public_66f8cb7 : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0xC4]
        public_66f8cc3 : nop
        fld dword ptr ss : [esp+0x1C]
        fsubr qword ptr ds : [public_67016d8]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6702138]
        fnstsw ax
        test ah, 5
        jp public_66f8ce6
        fld dword ptr ds : [public_6702138]
        jmp public_66f8d13
        public_66f8ce6 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6701394]
        fnstsw ax
        test ah, 1
        jne public_66f8cff
        fld dword ptr ds : [public_6701394]
        jmp public_66f8d13
        public_66f8cff : nop
        fld dword ptr ss : [esp+0x10]
        fadd st(0), st
        fsubr dword ptr ds : [public_6702134]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        public_66f8d13 : nop
        mov esi, dword ptr ss : [esp+0xF0]
        fsubr qword ptr ds : [public_67016d8]
        mov al, byte ptr ds : [esi+0x71]
        test al, al
        jne public_66f8d6b
        fmul qword ptr ds : [public_67022c8]
        mov eax, dword ptr ds : [esi+0x84]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        fmul dword ptr ds : [public_67022c4]
        jle public_66f8d58
        call public_670092a
        shl eax, 0x18
        or eax, 0xAFFE6
        mov dword ptr ss : [esp+0x30], eax
        jmp public_66f8da0
        public_66f8d58 : nop
        call public_670092a
        shl eax, 0x18
        or eax, 0xAEAF5
        mov dword ptr ss : [esp+0x30], eax
        jmp public_66f8da0
        public_66f8d6b : nop
        fmul dword ptr ds : [public_67022c4]
        call public_670092a
        fld dword ptr ds : [esi+0x6C]
        fld dword ptr ds : [public_6704060]
        shl eax, 0x18
        or eax, 0xFFFFFF
        mov dword ptr ss : [esp+0x30], eax
        call public_6700924
        fdiv dword ptr ds : [public_6704060]
        fsubr dword ptr ds : [public_6701394]
        fstp dword ptr ss : [esp+0x1C]
        public_66f8da0 : nop
        mov eax, dword ptr ds : [esi+0x84]
        cmp eax, 1
        jle public_66f8db2
        mov ecx, 0x242
        jmp public_66f8dc3
        public_66f8db2 : nop
        xor ecx, ecx
        cmp eax, ebp
        setle cl
        dec ecx
        and ecx, 0x100
        add ecx, 0x42
        public_66f8dc3 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0x50]
        push esi
        mov esi, dword ptr ss : [esp+0x104]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        jge public_66f8de6
        or eax, 0xFFFFFFFF
        jmp public_66f94df
        public_66f8de6 : nop
        mov esi, dword ptr ss : [esp+0x54]
        push esi
        call public_66f7960
        push esi
        call public_66f7900
        push esi
        call public_66f9550
        mov eax, dword ptr ss : [esp+0x60]
        add esp, 0xC
        xor edi, edi
        test al, 0x10
        mov esi, eax
        je public_66f8e10
        mov edi, 0xC
        public_66f8e10 : nop
        push esi
        call public_66f7900
        push esi
        mov ebx, eax
        call public_66f9550
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x5C]
        push eax
        add esi, edi
        call public_66f7960
        mov ecx, dword ptr ss : [esp+0x68]
        add esi, ebx
        add eax, esi
        add esp, 0xC
        mov dword ptr ss : [esp+0x68], eax
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x98], eax
        mov edi, dword ptr ss : [esp+0x54]
        mov eax, edi
        xor ebx, ebx
        and eax, 0x10
        mov dword ptr ss : [esp+0xE8], ebp
        je public_66f8e62
        mov ebx, 0xC
        public_66f8e62 : nop
        cmp eax, ebp
        je public_66f8e6b
        mov ebp, 0xC
        public_66f8e6b : nop
        push edi
        call public_66f9550
        mov esi, eax
        push edi
        add esi, ebp
        call public_66f7960
        push edi
        mov ebp, eax
        call public_66f7900
        add eax, ebx
        push edi
        mov dword ptr ss : [esp+0x28], eax
        call public_66f9550
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x6C]
        add ecx, ebp
        add eax, ecx
        add esi, edx
        add esp, 0x10
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0xA8], esi
        mov dword ptr ss : [esp+0xAC], eax
/*FIXUP push offset _public_66f95c0 @0x66f8eb6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f95c0
/*FIXUP push offset _public_66f95b0 @0x66f8ebb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f95b0
        push 2
        push 8
        lea eax, ss:[esp+0x50]
        push eax
        mov byte ptr ss : [esp+0xFC], 1
        call public_6700820
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, eax
        xor edi, edi
        and ecx, 0x10
        mov byte ptr ss : [esp+0xE8], 2
        mov ebx, eax
        je public_66f8ef2
        mov edi, 0xC
        public_66f8ef2 : nop
        mov edx, eax
        and edx, 0x40
        mov dword ptr ss : [esp+0x10], 0
        je public_66f8f09
        mov dword ptr ss : [esp+0x10], 4
        public_66f8f09 : nop
        mov esi, eax
        and esi, 0x80
        je public_66f8f18
        add dword ptr ss : [esp+0x10], 4
        public_66f8f18 : nop
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x14], ebp
        je public_66f8f2a
        mov dword ptr ss : [esp+0x14], 0xC
        public_66f8f2a : nop
        test edx, edx
        je public_66f8f33
        mov ebp, 4
        public_66f8f33 : nop
        test esi, esi
        je public_66f8f3a
        add ebp, 4
        public_66f8f3a : nop
        push eax
        call public_66f9550
        mov esi, eax
        add esi, ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push ebx
        add esi, ebp
        call public_66f7900
        push ebx
        mov ebp, eax
        call public_66f9550
        mov ecx, dword ptr ss : [esp+0x68]
        add edi, ebp
        add eax, edi
        add eax, dword ptr ss : [esp+0x1C]
        add esi, ecx
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ss : [esp+0x60]
        xor ebp, ebp
        mov ecx, eax
        add esp, 0xC
        and ecx, 0x10
        mov dword ptr ss : [esp+0x40], esi
        mov ebx, eax
        mov dword ptr ss : [esp+0x10], ebp
        je public_66f8f8c
        mov dword ptr ss : [esp+0x10], 0xC
        public_66f8f8c : nop
        mov edx, eax
        xor edi, edi
        and edx, 0x40
        je public_66f8f9a
        mov edi, 4
        public_66f8f9a : nop
        mov esi, eax
        and esi, 0x80
        je public_66f8fa7
        add edi, 4
        public_66f8fa7 : nop
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x14], ebp
        je public_66f8fb7
        mov dword ptr ss : [esp+0x14], 0xC
        public_66f8fb7 : nop
        test edx, edx
        je public_66f8fc0
        mov ebp, 4
        public_66f8fc0 : nop
        test esi, esi
        je public_66f8fc7
        add ebp, 4
        public_66f8fc7 : nop
        push eax
        call public_66f9550
        mov esi, eax
        add esi, ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push ebx
        add esi, ebp
        call public_66f7900
        push ebx
        mov ebp, eax
        call public_66f9550
        mov edx, dword ptr ss : [esp+0x68]
        add edi, ebp
        mov ebp, dword ptr ss : [esp+0x100]
        mov ecx, dword ptr ss : [ebp+8]
        add eax, edi
        add eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ss : [ebp+4]
        add esp, 0xC
        push eax
        lea eax, ss:[esp+0xB4]
        lea esi, ds:[esi+edx+8]
        push eax
        mov dword ptr ss : [esp+0x50], esi
        call public_66f9500
        mov eax, dword ptr ds : [public_67045a0]
        test eax, eax
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0xBF800000
        jne public_66f9046
        call public_67006d0
        mov dword ptr ds : [public_67045a0], eax
        public_66f9046 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0xB4]
        push edx
        lea edx, ss:[esp+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ss : [ebp+0xC]
        test byte ptr ds : [eax], 4
        je public_66f9222
        mov esi, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0xFC]
        mov edx, dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [eax+0x24]
        mov ebp, dword ptr ss : [esp+0x100]
        mov dword ptr ss : [esp+0x9C], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xA0], esi
        mov esi, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x90], esi
        mov esi, dword ptr ds : [eax+0x18]
        shl ecx, 2
        mov dword ptr ss : [esp+0xA4], esi
        mov esi, dword ptr ds : [eax+0x4C]
        add edx, ecx
        add edi, ecx
        add esi, ecx
        mov ecx, dword ptr ds : [eax+0x48]
        mov eax, dword ptr ds : [eax+0x40]
        xor ebx, ebx
        test ebp, ebp
        mov dword ptr ss : [esp+0x60], ecx
        mov dword ptr ss : [esp+0x20], eax
        jbe public_66f93ac
        mov ebp, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x14], ebp
        mov ebp, dword ptr ss : [esp+0x94]
        sub edi, esi
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x34], edi
        public_66f90e8 : nop
        mov esi, dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x8C]
        imul esi, dword ptr ss : [esp+0x9C]
        add esi, dword ptr ss : [esp+0xA0]
        mov ebp, dword ptr ds : [esi]
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebp
        mov esi, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0xA4]
        mov dword ptr ds : [edi+8], esi
        mov esi, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [esi+ecx]
        imul esi, dword ptr ss : [esp+0x90]
        add esi, ebp
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x24], edi
        mov edi, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x2C], esi
        mov esi, dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x28], edi
        fld dword ptr ss : [esp+0x88]
        mov edi, dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi], esi
        mov esi, dword ptr ss : [esp+0xF0]
        mov edi, dword ptr ds : [esi+0x84]
        faddp 
        add edx, 4
        cmp edi, 1
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fadd dword ptr ds : [public_6701394]
        fmul qword ptr ds : [public_67022c8]
        jle public_66f91b1
        mov esi, dword ptr ds : [ecx]
        imul esi, dword ptr ss : [esp+0x60]
        mov edi, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [esi+eax]
        imul edi, ebx
        mov ebp, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edi+ebp], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [esi+eax+4]
        mov ebp, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edi+ebp+4], esi
        public_66f91b1 : nop
        mov esi, dword ptr ss : [esp+0xF0]
        mov esi, dword ptr ds : [esi+0x84]
        test esi, esi
        jle public_66f91ec
        mov edi, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x3C], edi
        mov edi, dword ptr ss : [esp+esi*8+0x3C]
        lea esi, ss:[esp+esi*8+0x38]
        imul edi, ebx
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edi+esi], ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edi+esi+4], ebp
        jmp public_66f91ee
        public_66f91ec : nop
        fstp st(0)
        public_66f91ee : nop
        mov esi, dword ptr ss : [esp+0x68]
        mov edi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x14]
        add edi, esi
        mov esi, dword ptr ss : [esp+0x18]
        add ebp, esi
        mov dword ptr ss : [esp+0x14], ebp
        mov ebp, dword ptr ss : [esp+0x100]
        inc ebx
        add ecx, 4
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jb public_66f90e8
        jmp public_66f93ac
        public_66f9222 : nop
        mov ebx, dword ptr ds : [eax+0x68]
        xor edi, edi
        test bl, 0x10
        je public_66f9231
        mov edi, 0xC
        public_66f9231 : nop
        xor esi, esi
        test bl, 0x40
        je public_66f923d
        mov esi, 4
        public_66f923d : nop
        test bl, bl
        jns public_66f9244
        add esi, 4
        public_66f9244 : nop
        push ebx
        call public_66f7900
        push ebx
        mov dword ptr ss : [esp+0x28], eax
        call public_66f9550
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [ebp+0xC]
        mov ebp, dword ptr ss : [esp+0x108]
        add esi, ecx
        add eax, esi
        mov esi, dword ptr ds : [edx+4]
        add eax, edi
        mov edi, dword ptr ds : [edx+0x18]
        mov edx, dword ptr ds : [edx+0x40]
        mov ecx, eax
        imul ecx, dword ptr ss : [esp+0x104]
        add esi, ecx
        add edi, ecx
        add ecx, edx
        add esp, 8
        xor edx, edx
        test ebp, ebp
        mov dword ptr ss : [esp+0x38], esi
        jbe public_66f93ac
        mov esi, dword ptr ss : [esp+0x34]
        sub edi, ecx
        mov dword ptr ss : [esp+0x14], esi
        mov esi, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x20], edi
        public_66f92a7 : nop
        mov edi, dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x8C]
        mov ebp, dword ptr ds : [edi]
        mov ebx, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], edi
        mov edi, dword ptr ss : [esp+0x20]
        add edi, ecx
        mov ebx, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x24], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x2C], edi
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x88]
        mov edi, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x28], ebx
        fmul dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx], edi
        mov edi, dword ptr ss : [esp+0xF0]
        faddp 
        fld dword ptr ss : [esp+0x84]
        mov ebx, dword ptr ds : [edi+0x84]
        fmul dword ptr ss : [esp+0x24]
        add ebp, eax
        cmp ebx, 1
        mov dword ptr ss : [esp+0x38], ebp
        faddp 
        fadd dword ptr ds : [public_6701394]
        fmul qword ptr ds : [public_67022c8]
        jle public_66f9349
        mov edi, dword ptr ss : [esp+0x44]
        mov ebx, dword ptr ds : [ecx]
        imul edi, edx
        mov ebp, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edi+ebp], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edi+ebp+4], ebx
        public_66f9349 : nop
        mov edi, dword ptr ss : [esp+0xF0]
        mov edi, dword ptr ds : [edi+0x84]
        test edi, edi
        jle public_66f9384
        mov ebx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x60]
        mov ebp, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x64], ebx
        mov ebx, dword ptr ss : [esp+edi*8+0x3C]
        lea edi, ss:[esp+edi*8+0x38]
        imul ebx, edx
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ebx+edi], ebp
        mov ebp, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [ebx+edi+4], ebp
        jmp public_66f9386
        public_66f9384 : nop
        fstp st(0)
        public_66f9386 : nop
        mov edi, dword ptr ss : [esp+0x68]
        mov ebp, dword ptr ss : [esp+0x14]
        add esi, edi
        mov edi, dword ptr ss : [esp+0x18]
        add ebp, edi
        mov dword ptr ss : [esp+0x14], ebp
        mov ebp, dword ptr ss : [esp+0x100]
        inc edx
        add ecx, eax
        cmp edx, ebp
        jb public_66f92a7
        public_66f93ac : nop
        mov esi, dword ptr ss : [esp+0xF0]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x50]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x74]
        push edx
        push 0xE
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x80]
        push edx
        push 0x16
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x84], 0x16
        mov ecx, dword ptr ds : [eax]
        mov bl, 3
        push eax
        mov byte ptr ss : [esp+0xF4], bl
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x108]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ss : [esp+0x104]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0xFC]
        mov edx, dword ptr ds : [edx+0x10]
        lea edx, ds:[edx+esi*2]
        push edx
        mov edx, dword ptr ss : [esp+0x64]
        push ebp
        push edx
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        mov edx, dword ptr ss : [esp+0x110]
        push edx
        push eax
        mov byte ptr ss : [esp+0x108], 4
        call dword ptr ds : [ecx+0x120]
        mov edx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x80]
        push edx
        push eax
        mov byte ptr ss : [esp+0xF4], bl
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x74]
        push edx
        push eax
        mov byte ptr ss : [esp+0xF4], 2
        call dword ptr ds : [ecx+0xF0]
/*FIXUP push offset _public_66f95c0 @0x66f94c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66f95c0
        push 2
        push 8
        lea eax, ss:[esp+0x4C]
        push eax
        mov byte ptr ss : [esp+0xF8], 1
        call public_670071b
        xor eax, eax
        public_66f94df : nop
        mov ecx, dword ptr ss : [esp+0xE0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xDC
        ret 0x20
        UNREACHABLE_TRAP(0x66f8c50)
    }
}

#undef public_66f8c9d
#undef public_66f8cb7
#undef public_66f8cc3
#undef public_66f8ce6
#undef public_66f8cff
#undef public_66f8d13
#undef public_66f8d58
#undef public_66f8d6b
#undef public_66f8da0
#undef public_66f8db2
#undef public_66f8dc3
#undef public_66f8de6
#undef public_66f8e10
#undef public_66f8e62
#undef public_66f8e6b
#undef public_66f8ef2
#undef public_66f8f09
#undef public_66f8f18
#undef public_66f8f2a
#undef public_66f8f33
#undef public_66f8f3a
#undef public_66f8f8c
#undef public_66f8f9a
#undef public_66f8fa7
#undef public_66f8fb7
#undef public_66f8fc0
#undef public_66f8fc7
#undef public_66f9046
#undef public_66f90e8
#undef public_66f91b1
#undef public_66f91ec
#undef public_66f91ee
#undef public_66f9222
#undef public_66f9231
#undef public_66f923d
#undef public_66f9244
#undef public_66f92a7
#undef public_66f9349
#undef public_66f9384
#undef public_66f9386
#undef public_66f93ac
#undef public_66f94df
