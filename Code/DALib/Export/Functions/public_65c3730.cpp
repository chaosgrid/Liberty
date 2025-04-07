#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c1000);
CLANG_FORWARD_PROC_SYMBOL(public_65c10b0);
CLANG_FORWARD_PROC_SYMBOL(public_65c3730);
CLANG_FORWARD_PROC_SYMBOL(public_65c39f0);
CLANG_FORWARD_PROC_SYMBOL(public_65c4300);
CLANG_FORWARD_PROC_SYMBOL(public_65c4310);
CLANG_FORWARD_PROC_SYMBOL(public_65c4390);
CLANG_FORWARD_PROC_SYMBOL(public_65c43f0);
CLANG_FORWARD_PROC_SYMBOL(public_65c5360);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aac);

#define public_65c3764 _public_65c3764
#define public_65c3775 _public_65c3775
#define public_65c37b0 _public_65c37b0
#define public_65c3806 _public_65c3806
#define public_65c383f _public_65c383f
#define public_65c3845 _public_65c3845
#define public_65c3862 _public_65c3862
#define public_65c38d6 _public_65c38d6
#define public_65c38dd _public_65c38dd
#define public_65c3917 _public_65c3917
#define public_65c391f _public_65c391f
#define public_65c393b _public_65c393b
#define public_65c394c _public_65c394c
#define public_65c395a _public_65c395a
#define public_65c395d _public_65c395d
#define public_65c397d _public_65c397d
#define public_65c3988 _public_65c3988
#define public_65c39c9 _public_65c39c9
#define public_65c39cf _public_65c39cf
#define public_65c39db _public_65c39db

PROC_DECLARE(0x65c3730, internal_65c3730, public_65c3730);
extern "C" NAKED register_t __cdecl internal_65c3730()
{
    __asm
    {
        mov al, byte ptr ds : [public_65ca1d0]
        sub esp, 0xC08
        test al, 1
        push ebx
        mov ebx, ecx
        jne public_65c3764
        mov dl, al
        or dl, 1
        mov ecx, offset public_65ca1d8
        mov byte ptr ds : [public_65ca1d0], dl
        call public_65c1000
/*FIXUP push offset _public_65c39f0 @0x65c3757*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c39f0
        call public_65c6aac
        add esp, 4
        public_65c3764 : nop
        mov al, byte ptr ds : [ebx+0x60]
        test al, al
        jne public_65c3775
        xor al, al
        pop ebx
        add esp, 0xC08
        ret 
        public_65c3775 : nop
        push esi
        lea esi, ds:[ebx+0x10]
        push edi
        mov ecx, esi
        call public_65c4300
        mov ecx, esi
        call public_65c43f0
        test eax, eax
        je public_65c39db
        call dword ptr ds : [public_65c70d8]
        mov dword ptr ds : [ebx+0xC], eax
        mov al, byte ptr ds : [ebx+0x60]
        xor edi, edi
        test al, al
        mov dword ptr ss : [esp+0xC], edi
        je public_65c39db
        push ebp
        nop 
        lea esp, ss:[esp]
        public_65c37b0 : nop
        mov ecx, esi
        call public_65c43f0
        mov ebp, eax
        test ebp, ebp
        je public_65c3988
        mov ecx, dword ptr ss : [ebp+0xC]
        lea eax, ds:[ecx+edi]
        cmp eax, 0x400
        ja public_65c3806
        mov esi, dword ptr ss : [ebp+8]
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+edi+0x18]
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x10]
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ebx+0x3C]
        add edx, eax
        sub ecx, eax
        mov eax, dword ptr ds : [ebx+0x40]
        dec eax
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ds : [ebx+0x3C], ecx
        mov dword ptr ds : [ebx+0x40], eax
        mov edi, edx
        jmp public_65c395d
        public_65c3806 : nop
        test edi, edi
        je public_65c3862
        push 0x800
        lea eax, ss:[esp+0x41C]
        push eax
        push edi
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, offset public_65ca1d8
        call public_65c10b0
        cmp al, 1
        jne public_65c383f
        mov eax, dword ptr ds : [public_65ca24c]
        cmp eax, edi
        ja public_65c383f
        push eax
        lea edx, ss:[esp+0x41C]
        push edx
        jmp public_65c3845
        public_65c383f : nop
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        public_65c3845 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ebx
        call public_65c5360
        mov dword ptr ss : [esp+0x10], 0
        mov edi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ebx+0x60], al
        jmp public_65c397d
        public_65c3862 : nop
        mov edx, dword ptr ds : [ebx+0x3C]
        sub edx, ecx
        mov ecx, dword ptr ds : [ebx+0x40]
        dec ecx
        mov dword ptr ds : [ebx+0x3C], edx
        mov dword ptr ds : [ebx+0x40], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, 0x7FFF
        jae public_65c394c
        imul ecx, 0x65
        mov eax, 0x51EB851F
        mul ecx
        mov esi, edx
        shr esi, 5
        add esi, 0xD
        push esi
        call dword ptr ds : [public_65c7084]
        add esp, 4
        push 0x800
        lea ecx, ss:[esp+0x41C]
        push ecx
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, offset public_65ca1d8
        mov dword ptr ss : [esp+0x24], eax
        call public_65c10b0
        cmp al, 1
        jne public_65c38d6
        mov eax, dword ptr ds : [public_65ca24c]
        test eax, eax
        ja public_65c38d6
        push eax
        lea eax, ss:[esp+0x41C]
        push eax
        jmp public_65c38dd
        public_65c38d6 : nop
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        public_65c38dd : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ebx
        call public_65c5360
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        mov byte ptr ds : [ebx+0x60], al
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0xC]
        je public_65c393b
        push esi
        push edi
        push eax
        push ecx
        mov ecx, offset public_65ca1d8
        call public_65c10b0
        cmp al, 1
        jne public_65c3917
        mov eax, dword ptr ds : [public_65ca24c]
        cmp eax, dword ptr ss : [ebp+0xC]
        ja public_65c3917
        push eax
        push edi
        jmp public_65c391f
        public_65c3917 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        push ecx
        public_65c391f : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ebx
        call public_65c5360
        push edi
        mov byte ptr ds : [ebx+0x60], al
        call dword ptr ds : [public_65c70b8]
        mov edi, dword ptr ss : [esp+0x14]
        add esp, 4
        jmp public_65c395d
        public_65c393b : nop
        push eax
        push ecx
        mov ecx, dword ptr ds : [ebx+4]
        push ebx
        call public_65c5360
        mov edi, dword ptr ss : [esp+0x10]
        jmp public_65c395a
        public_65c394c : nop
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ebx
        call public_65c5360
        public_65c395a : nop
        mov byte ptr ds : [ebx+0x60], al
        public_65c395d : nop
        lea esi, ds:[ebx+0x10]
        mov ecx, esi
        call public_65c4390
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call dword ptr ds : [public_65c70b8]
        mov eax, dword ptr ss : [ebp]
        add esp, 4
        push 1
        mov ecx, ebp
        call dword ptr ds : [eax]
        public_65c397d : nop
        mov al, byte ptr ds : [ebx+0x60]
        test al, al
        jne public_65c37b0
        public_65c3988 : nop
        mov al, byte ptr ds : [ebx+0x60]
        test al, al
        pop ebp
        je public_65c39db
        test edi, edi
        je public_65c39db
        push 0x800
        lea ecx, ss:[esp+0x418]
        push ecx
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_65ca1d8
        call public_65c10b0
        cmp al, 1
        jne public_65c39c9
        mov eax, dword ptr ds : [public_65ca24c]
        cmp eax, edi
        ja public_65c39c9
        push eax
        lea eax, ss:[esp+0x418]
        push eax
        jmp public_65c39cf
        public_65c39c9 : nop
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        public_65c39cf : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ebx
        call public_65c5360
        mov byte ptr ds : [ebx+0x60], al
        public_65c39db : nop
        mov ecx, esi
        call public_65c4310
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC08
        ret 
        UNREACHABLE_TRAP(0x65c3730)
    }
}

#undef public_65c3764
#undef public_65c3775
#undef public_65c37b0
#undef public_65c3806
#undef public_65c383f
#undef public_65c3845
#undef public_65c3862
#undef public_65c38d6
#undef public_65c38dd
#undef public_65c3917
#undef public_65c391f
#undef public_65c393b
#undef public_65c394c
#undef public_65c395a
#undef public_65c395d
#undef public_65c397d
#undef public_65c3988
#undef public_65c39c9
#undef public_65c39cf
#undef public_65c39db
