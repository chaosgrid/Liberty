#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410fe0);
CLANG_FORWARD_PROC_SYMBOL(public_4110c0);
CLANG_FORWARD_PROC_SYMBOL(public_411300);
CLANG_FORWARD_PROC_SYMBOL(public_4115b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_503330);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);
CLANG_FORWARD_PROC_SYMBOL(public_5377a0);
CLANG_FORWARD_PROC_SYMBOL(public_537960);
CLANG_FORWARD_PROC_SYMBOL(public_537ac0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_538e80);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf988);

#define public_503fc2 _public_503fc2
#define public_503fd8 _public_503fd8
#define public_503ff7 _public_503ff7
#define public_504013 _public_504013
#define public_504029 _public_504029
#define public_50404f _public_50404f
#define public_504057 _public_504057
#define public_504072 _public_504072
#define public_504085 _public_504085
#define public_504095 _public_504095
#define public_5040b5 _public_5040b5
#define public_5040e4 _public_5040e4
#define public_5040f6 _public_5040f6
#define public_504163 _public_504163
#define public_504188 _public_504188
#define public_5041a6 _public_5041a6
#define public_5041a8 _public_5041a8
#define public_5041bd _public_5041bd
#define public_5041de _public_5041de
#define public_5041eb _public_5041eb
#define public_5041f9 _public_5041f9

PROC_DECLARE(0x503f40, internal_503f40, public_503f40);
extern "C" NAKED register_t __cdecl internal_503f40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf988 @0x503f42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf988
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        push 0x25
        mov dword ptr ss : [esp+0x14], ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5041a6
        mov ebp, dword ptr ss : [esp+0x34]
        xor ebx, ebx
        cmp ebp, ebx
        je public_5041a6
        xor edi, edi
        xor esi, esi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], ebx
        push 0x26
        mov dword ptr ss : [esp+0x30], ebx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_503fc2
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_503fc2
        mov eax, dword ptr ds : [eax]
        cmp byte ptr ds : [eax], 0
        je public_503fc2
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x1C], eax
        mov esi, eax
        public_503fc2 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_503fd8
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], eax
        mov edi, eax
        public_503fd8 : nop
        fld dword ptr ss : [ebp+0x48]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_503ff7
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov ebx, eax
        mov dword ptr ss : [esp+0x20], ebx
        public_503ff7 : nop
        test esi, esi
        mov eax, dword ptr ss : [esp+0x38]
        je public_504013
        lea edi, ds:[esi+0x10]
        mov ecx, 0xC
        mov esi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        public_504013 : nop
        test edi, edi
        je public_504029
        mov edx, dword ptr ds : [edi]
        add eax, 0x24
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ss : [esp+0x38]
        public_504029 : nop
        test ebx, ebx
        je public_504057
        cmp dword ptr ds : [ebx+0xEC], 0xFFFFFFFF
        je public_50404f
        lea edi, ds:[ebx+0xF0]
        mov ecx, 0xC
        mov esi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        jmp public_504057
        public_50404f : nop
        push eax
        mov ecx, ebx
        call public_410fe0
        public_504057 : nop
        test esi, esi
        je public_504072
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x4C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        public_504072 : nop
        test edi, edi
        je public_504085
        mov eax, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x90]
        public_504085 : nop
        test ebx, ebx
        je public_504095
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, ebx
        call public_5377a0
        public_504095 : nop
        test esi, esi
        je public_5040b5
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx]
        test al, al
        jne public_5040b5
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_4f7a90
        mov dword ptr ss : [esp+0x1C], 0
        public_5040b5 : nop
        test edi, edi
        je public_5040f6
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x50]
        and ecx, 0xFFFFFF01
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x88]
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_5040e4
        mov edx, dword ptr ds : [edi]
        push 0
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x58]
        test al, al
        jne public_5040f6
        public_5040e4 : nop
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], 0
        mov edi, dword ptr ss : [esp+0x18]
        public_5040f6 : nop
        test ebx, ebx
        je public_504188
        push 1
        push 1
        mov ecx, ebx
        call public_4110c0
        lea ecx, ss:[ebp+0x4C]
        push ecx
        mov ecx, ebx
        call public_4115b0
        mov edx, dword ptr ss : [ebp+0x48]
        push edx
        mov ecx, ebx
        call public_411300
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        test al, al
        jne public_504163
        lea ecx, ss:[ebp+4]
        mov esi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0xCE
/*FIXUP push offset public_5daa7c @0x504144*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daa7c
/*FIXUP push offset public_5daa50 @0x504149*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daa50
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov ecx, ebx
        call public_537ad0
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        jmp public_504188
        public_504163 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_504188
        lea edx, ss:[ebp+0x20]
        push edx
        call public_538e80
        mov ecx, dword ptr ss : [ebp+0x44]
        mov edx, dword ptr ss : [ebp+0x40]
        add esp, 4
        push 0
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_537960
        public_504188 : nop
        lea ecx, ss:[esp+0x14]
        call public_503330
        test al, al
        jne public_5041bd
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_502d90
        public_5041a6 : nop
        xor al, al
        public_5041a8 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 0x10
        public_5041bd : nop
        mov esi, dword ptr ss : [esp+0x40]
        test esi, esi
        je public_5041f9
        mov ecx, esi
        call public_502d90
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+8], ecx
        je public_5041de
        call public_4f7a80
        public_5041de : nop
        test edi, edi
        mov dword ptr ds : [esi+4], edi
        je public_5041eb
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+4]
        public_5041eb : nop
        test ebx, ebx
        mov dword ptr ds : [esi+0xC], ebx
        je public_5041f9
        mov ecx, ebx
        call public_537ac0
        public_5041f9 : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_502d90
        mov al, 1
        jmp public_5041a8
        UNREACHABLE_TRAP(0x503f40)
    }
}

#undef public_503fc2
#undef public_503fd8
#undef public_503ff7
#undef public_504013
#undef public_504029
#undef public_50404f
#undef public_504057
#undef public_504072
#undef public_504085
#undef public_504095
#undef public_5040b5
#undef public_5040e4
#undef public_5040f6
#undef public_504163
#undef public_504188
#undef public_5041a6
#undef public_5041a8
#undef public_5041bd
#undef public_5041de
#undef public_5041eb
#undef public_5041f9
