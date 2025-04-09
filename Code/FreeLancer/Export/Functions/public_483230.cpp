#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47f040);
CLANG_FORWARD_PROC_SYMBOL(public_482e00);
CLANG_FORWARD_PROC_SYMBOL(public_483230);
CLANG_FORWARD_PROC_SYMBOL(public_4cecd0);
CLANG_FORWARD_PROC_SYMBOL(public_501c60);
CLANG_FORWARD_PROC_SYMBOL(public_501f80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc028);

#define public_48329a _public_48329a
#define public_4832c1 _public_4832c1
#define public_4832d4 _public_4832d4
#define public_4832e0 _public_4832e0
#define public_483384 _public_483384
#define public_483399 _public_483399
#define public_48339e _public_48339e
#define public_4833e5 _public_4833e5
#define public_4833eb _public_4833eb
#define public_4833f0 _public_4833f0
#define public_483403 _public_483403
#define public_48341d _public_48341d
#define public_48344f _public_48344f
#define public_483494 _public_483494
#define public_4834ae _public_4834ae
#define public_4834c0 _public_4834c0
#define public_4834ef _public_4834ef
#define public_483503 _public_483503
#define public_48351f _public_48351f
#define public_48353a _public_48353a
#define public_48355b _public_48355b

PROC_DECLARE(0x483230, internal_483230, public_483230);
extern "C" NAKED register_t __cdecl internal_483230()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc028 @0x483232*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc028
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        mov al, byte ptr ss : [esp+0x48]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x50]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        xor ebx, ebx
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ss : [esp+0x38], al
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x50], ebx
        jbe public_48329a
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_4cecd0
        mov edx, esi
        sub edx, eax
        push edx
        push ebx
        lea ecx, ss:[esp+0x44]
        call public_501c60
        jmp public_4832c1
        public_48329a : nop
        lea ecx, ss:[esp+0x38]
        call public_4cecd0
        cmp esi, eax
        jae public_4832c1
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, esi
        shl ecx, 4
        add ecx, edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_501f80
        public_4832c1 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_4833e5
        mov dword ptr ss : [esp+0x18], ebx
        jmp public_4832e0
        public_4832d4 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        lea ebx, ds:[ebx]
        public_4832e0 : nop
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x17], 0
        call public_47f040
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x2C], 0
        fild qword ptr ss : [esp+0x28]
        push eax
        mov ecx, edi
        fstp dword ptr ss : [esp+0x28]
        call public_482e00
        mov byte ptr ds : [esi+0x24], al
        mov eax, dword ptr ds : [esi]
        push eax
        call dword ptr ds : [public_5c6360]
        push eax
        call dword ptr ds : [public_5c603c]
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_48339e
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov ebx, eax
        cmp ebx, 0x11
        jne public_483384
        mov al, byte ptr ds : [edi+0xBA]
        test al, al
        jne public_483399
        lea ecx, ds:[edi+0x98]
        mov dword ptr ss : [esp+0x20], ecx
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_48339e
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [public_5c639c]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_48339e
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        cmp eax, 0x1F
        jne public_48339e
        mov eax, dword ptr ds : [edi+0x90]
        test eax, eax
        je public_48339e
        jmp public_483399
        public_483384 : nop
        cmp ebx, 0x1F
        jne public_48339e
        mov edi, dword ptr ds : [edi+0xA8]
        cmp edi, 0xA
        je public_483399
        cmp edi, 0x23
        jne public_48339e
        public_483399 : nop
        mov byte ptr ss : [esp+0x13], 1
        public_48339e : nop
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ecx+eax], esi
        mov edx, dword ptr ss : [esp+0x3C]
        movzx ecx, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [edx+eax+4], ebx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x58]
        add eax, 0x10
        fstp dword ptr ds : [ecx+eax-4]
        mov ebp, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x18], eax
        cmp ebp, dword ptr ds : [edx+4]
        jne public_4832d4
        mov esi, dword ptr ss : [esp+0x14]
        public_4833e5 : nop
        mov ebp, dword ptr ss : [esp+0x3C]
        jmp public_4833f0
        public_4833eb : nop
        mov esi, dword ptr ss : [esp+0x14]
        nop 
        public_4833f0 : nop
        lea eax, ds:[esi-1]
        test eax, eax
        mov bl, 1
        jle public_4834ae
        xor esi, esi
        mov dword ptr ss : [esp+0x18], eax
        public_483403 : nop
        mov eax, dword ptr ds : [esi+ebp]
        mov al, byte ptr ds : [eax+0x24]
        test al, al
        lea ecx, ds:[esi+ebp]
        jne public_48341d
        mov edi, dword ptr ds : [esi+ebp+0x10]
        cmp byte ptr ds : [edi+0x24], al
        lea edx, ds:[esi+ebp+0x10]
        jne public_48344f
        public_48341d : nop
        mov edi, dword ptr ds : [esi+ebp+0x10]
        cmp al, byte ptr ds : [edi+0x24]
        lea edx, ds:[esi+ebp+0x10]
        jne public_483494
        mov eax, dword ptr ds : [ecx+0x14]
        mov edi, dword ptr ds : [ecx+4]
        cmp edi, eax
        jg public_48344f
        jne public_483494
        mov eax, dword ptr ds : [ecx+0x18]
        mov edi, dword ptr ds : [ecx+8]
        cmp edi, eax
        jg public_48344f
        jne public_483494
        fld dword ptr ds : [ecx+0xC]
        fcomp dword ptr ds : [ecx+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_483494
        public_48344f : nop
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x34], ebp
        mov ebp, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        mov ecx, dword ptr ss : [esp+0x3C]
        lea edx, ds:[ecx+esi+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ebx
        mov dword ptr ds : [edx+0xC], eax
        mov ebp, dword ptr ss : [esp+0x3C]
        xor bl, bl
        public_483494 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 0x10
        dec eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_483403
        test bl, bl
        je public_4833eb
        public_4834ae : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov edi, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4834ef
        nop 
        lea esp, ss:[esp]
        public_4834c0 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [eax+8], ecx
        jne public_4834c0
        mov ebp, dword ptr ss : [esp+0x3C]
        public_4834ef : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jle public_48355b
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], eax
        public_483503 : nop
        mov ebx, dword ptr ss : [esp+0x58]
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_48351f
        mov edi, eax
        public_48351f : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_48353a
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+ebp]
        mov dword ptr ds : [eax], edx
        public_48353a : nop
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x3C]
        inc edx
        add ecx, 0x10
        dec eax
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_483503
        public_48355b : nop
        push ebp
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x483230)
    }
}

#undef public_48329a
#undef public_4832c1
#undef public_4832d4
#undef public_4832e0
#undef public_483384
#undef public_483399
#undef public_48339e
#undef public_4833e5
#undef public_4833eb
#undef public_4833f0
#undef public_483403
#undef public_48341d
#undef public_48344f
#undef public_483494
#undef public_4834ae
#undef public_4834c0
#undef public_4834ef
#undef public_483503
#undef public_48351f
#undef public_48353a
#undef public_48355b
