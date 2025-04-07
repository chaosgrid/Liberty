#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_439220);
CLANG_FORWARD_PROC_SYMBOL(public_439590);
CLANG_FORWARD_PROC_SYMBOL(public_439610);
CLANG_FORWARD_PROC_SYMBOL(public_439690);
CLANG_FORWARD_PROC_SYMBOL(public_4397a0);
CLANG_FORWARD_PROC_SYMBOL(public_439b50);
CLANG_FORWARD_PROC_SYMBOL(public_439d80);
CLANG_FORWARD_PROC_SYMBOL(public_43b6b0);
CLANG_FORWARD_PROC_SYMBOL(public_43b970);
CLANG_FORWARD_PROC_SYMBOL(public_43d590);
CLANG_FORWARD_PROC_SYMBOL(public_442130);
CLANG_FORWARD_PROC_SYMBOL(public_45b380);
CLANG_FORWARD_PROC_SYMBOL(public_4c4910);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a10);

#define public_43b6ea _public_43b6ea
#define public_43b718 _public_43b718
#define public_43b748 _public_43b748
#define public_43b777 _public_43b777
#define public_43b77f _public_43b77f
#define public_43b7ad _public_43b7ad
#define public_43b7c2 _public_43b7c2
#define public_43b7e2 _public_43b7e2
#define public_43b818 _public_43b818
#define public_43b831 _public_43b831
#define public_43b857 _public_43b857
#define public_43b895 _public_43b895
#define public_43b8a5 _public_43b8a5
#define public_43b8e0 _public_43b8e0
#define public_43b913 _public_43b913
#define public_43b916 _public_43b916
#define public_43b942 _public_43b942
#define public_43b95f _public_43b95f

PROC_DECLARE(0x43b6b0, internal_43b6b0, public_43b6b0);
extern "C" NAKED register_t __cdecl internal_43b6b0()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x38]
        xor ebp, ebp
        test edi, edi
        mov byte ptr ds : [esi+0x59], 1
        je public_43b6ea
        push edi
        call dword ptr ds : [public_5c615c]
        mov ecx, eax
        call dword ptr ds : [public_5c6160]
        test eax, eax
        je public_43b718
        mov eax, dword ptr ds : [eax]
        push eax
        mov ecx, esi
        call public_439590
        test eax, eax
        je public_43b6ea
        mov eax, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax]
        public_43b6ea : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        xor edi, edi
        test ebx, ebx
        je public_43b77f
        push ebx
        call dword ptr ds : [public_5c615c]
        mov ecx, eax
        call dword ptr ds : [public_5c6160]
        test eax, eax
        je public_43b748
        mov ecx, dword ptr ds : [eax]
        push ecx
        mov ecx, esi
        call public_439590
        jmp public_43b777
        public_43b718 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x18]
        call public_411c50
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_5c6d18]
        push edi
        push 0x120
/*FIXUP push offset public_5caf30 @0x43b736*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
/*FIXUP push offset public_5cafa8 @0x43b73b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafa8
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_43b6ea
        public_43b748 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x24]
        call public_411c50
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
        push ebx
        push 0x120
/*FIXUP push offset public_5caf30 @0x43b765*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
/*FIXUP push offset public_5cafa8 @0x43b76a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafa8
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_43b77f
        public_43b777 : nop
        test eax, eax
        je public_43b77f
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ecx]
        public_43b77f : nop
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], edi
        je public_43b857
        test edi, edi
        je public_43b857
        cmp ebp, edi
        je public_43b857
        mov eax, dword ptr ds : [esi+0x38]
        test eax, 0x3FFFFFFF
        je public_43b7ad
        push eax
        mov ecx, esi
        call public_43b970
        public_43b7ad : nop
        push ebp
        mov ecx, esi
        call public_439590
        dec dword ptr ds : [eax+8]
        jne public_43b7c2
        push ebp
        mov ecx, esi
        call public_439b50
        public_43b7c2 : nop
        mov al, byte ptr ds : [esi+0x5A]
        test al, al
        jne public_43b7e2
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_43b7e2
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebp
        call dword ptr ds : [edx+0x90]
        public_43b7e2 : nop
        mov dword ptr ds : [esi+0x34], 0
        call public_442130
        mov eax, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x5A]
        test cl, cl
        mov ebp, eax
        mov dword ptr ds : [esi+0x34], eax
        jne public_43b818
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_43b818
        mov edi, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+0x8C]
        public_43b818 : nop
        push ebp
        mov ecx, esi
        call public_439590
        mov edi, eax
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_43b831
        push ebp
        mov ecx, esi
        call public_4397a0
        public_43b831 : nop
        mov edx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x10]
        inc edx
        push eax
        mov dword ptr ds : [edi+8], edx
        call public_4c4910
        push ebx
        call public_4c4a10
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call public_43d590
        add esp, 0xC
        jmp public_43b8a5
        public_43b857 : nop
        mov edi, dword ptr ds : [esi+0x38]
        test edi, 0x3FFFFFFF
        je public_43b8a5
        call public_45b380
        mov edx, dword ptr ds : [esi+0x38]
        push edx
        mov ecx, esi
        call public_439690
        mov al, byte ptr ds : [esi+0x5A]
        xor ebp, ebp
        test al, al
        jne public_43b895
        mov ecx, dword ptr ds : [public_67ecd0]
        cmp ecx, ebp
        je public_43b895
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push edx
        push edi
        call dword ptr ds : [eax+0x98]
        public_43b895 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x38], ebp
        mov dword ptr ds : [esi+0x3C], ebp
        mov dword ptr ds : [esi+0x40], ebp
        call public_439220
        public_43b8a5 : nop
        xor eax, eax
        cmp ebx, eax
        mov dword ptr ds : [esi+0x38], ebx
        je public_43b913
        push ebx
        call dword ptr ds : [public_5c615c]
        mov ecx, eax
        call dword ptr ds : [public_5c6160]
        test eax, eax
        je public_43b8e0
        mov eax, dword ptr ds : [eax]
        push eax
        mov ecx, esi
        call public_439590
        mov edx, dword ptr ds : [esi+0x38]
        push edx
        mov ecx, esi
        mov dword ptr ds : [esi+0x3C], eax
        call public_439610
        jmp public_43b916
        nop 
        lea esp, ss:[esp]
        public_43b8e0 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0x120
/*FIXUP push offset public_5caf30 @0x43b8ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5cafa8 @0x43b8f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafa8
        push eax
        call dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+0x38]
        add esp, 0x14
        xor eax, eax
        push edx
        mov ecx, esi
        mov dword ptr ds : [esi+0x3C], eax
        call public_439610
        jmp public_43b916
        public_43b913 : nop
        mov dword ptr ds : [esi+0x3C], eax
        public_43b916 : nop
        mov cl, byte ptr ds : [esi+0x5A]
        mov dword ptr ds : [esi+0x40], eax
        xor eax, eax
        test cl, cl
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], eax
        jne public_43b942
        mov ecx, dword ptr ds : [public_67ecd0]
        cmp ecx, eax
        je public_43b942
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebx
        call dword ptr ds : [eax+0x94]
        public_43b942 : nop
        mov ebp, dword ptr ds : [esi+0x38]
        push ebp
        mov ecx, esi
        call public_439610
        mov edi, eax
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        pop ebx
        jne public_43b95f
        push ebp
        mov ecx, esi
        call public_439d80
        public_43b95f : nop
        inc dword ptr ds : [edi+0xC]
        pop edi
        mov byte ptr ds : [esi+0x59], 0
        pop esi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x43b6b0)
    }
}

#undef public_43b6ea
#undef public_43b718
#undef public_43b748
#undef public_43b777
#undef public_43b77f
#undef public_43b7ad
#undef public_43b7c2
#undef public_43b7e2
#undef public_43b818
#undef public_43b831
#undef public_43b857
#undef public_43b895
#undef public_43b8a5
#undef public_43b8e0
#undef public_43b913
#undef public_43b916
#undef public_43b942
#undef public_43b95f
