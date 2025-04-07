#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f72cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e770);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1b78);

#define public_6f9e9fc _public_6f9e9fc
#define public_6f9e9fe _public_6f9e9fe
#define public_6f9ea50 _public_6f9ea50
#define public_6f9eaa6 _public_6f9eaa6
#define public_6f9eab5 _public_6f9eab5
#define public_6f9eab8 _public_6f9eab8
#define public_6f9eae9 _public_6f9eae9
#define public_6f9eb68 _public_6f9eb68
#define public_6f9eb7a _public_6f9eb7a
#define public_6f9eb8f _public_6f9eb8f
#define public_6f9ebc8 _public_6f9ebc8
#define public_6f9ec46 _public_6f9ec46
#define public_6f9ec63 _public_6f9ec63
#define public_6f9ec82 _public_6f9ec82
#define public_6f9ec86 _public_6f9ec86
#define public_6f9ec88 _public_6f9ec88

PROC_DECLARE(0x6f9e9b0, internal_6f9e9b0, public_6f9e9b0);
extern "C" NAKED register_t __cdecl internal_6f9e9b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1b78 @0x6f9e9b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1b78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        push 0xC
        mov dword ptr ss : [esp+0x24], ebx
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6f9e9fc
        mov byte ptr ds : [eax+4], 0
        mov byte ptr ds : [eax+5], 0
        mov byte ptr ds : [eax+6], 0
        mov byte ptr ds : [eax+7], 0
        mov byte ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_6fbcf6c
        jmp public_6f9e9fe
        public_6f9e9fc : nop
        xor eax, eax
        public_6f9e9fe : nop
        mov edi, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ds:[edi+0x30]
        push eax
        call public_6f75f30
        mov ecx, dword ptr ds : [edi+0x1C]
        add esp, 4
        push ecx
        mov ecx, eax
        call public_6f72cb0
        mov edx, dword ptr ds : [eax+0x14]
        lea eax, ds:[ebx+8]
        mov dword ptr ss : [esp+0x18], edx
        push eax
        lea edx, ss:[esp+0x18]
        lea ecx, ds:[ebx+0x1C]
        push edx
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x14]
        lea ebp, ds:[eax+0x10]
        mov eax, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        cmp esi, eax
        je public_6f9eae9
        mov edi, edi
        public_6f9ea50 : nop
        mov edx, dword ptr ss : [esp+0x18]
        test dword ptr ss : [ebp+0x10C], edx
        mov cl, byte ptr ds : [esi]
        mov byte ptr ss : [esp+0x3C], cl
        je public_6f9ec86
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebp
        call dword ptr ds : [eax+8]
        test al, al
        je public_6f9eaa6
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        test al, al
        je public_6f9eaa6
        mov ebx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0xC]
        push ebx
        mov dword ptr ss : [esp+0x14], eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        public_6f9eaa6 : nop
        cmp byte ptr ss : [esp+0x3C], 1
        mov ebp, dword ptr ss : [ebp+0x20]
        jne public_6f9eab5
        mov eax, dword ptr ss : [ebp]
        jmp public_6f9eab8
        public_6f9eab5 : nop
        mov eax, dword ptr ss : [ebp+4]
        public_6f9eab8 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ds:[ebx+0x1C]
        mov dword ptr ss : [esp+0x24], eax
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x38]
        lea ebp, ds:[eax+0x10]
        mov eax, dword ptr ds : [ecx+0xC]
        inc esi
        cmp esi, eax
        jne public_6f9ea50
        public_6f9eae9 : nop
        mov esi, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [edx+0x10]
        and al, 1
        mov byte ptr ss : [esp+0x3C], al
        je public_6f9ec86
        mov ebp, dword ptr ds : [esi]
        test ebp, ebp
        je public_6f9ec86
        lea eax, ds:[edi+0x30]
        push eax
        call public_6f75f30
        mov dword ptr ss : [ebp+0x14], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x24], ecx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+0x28], edx
        fld dword ptr ds : [edi+0x18]
        fcom qword ptr ds : [public_6fbccd0]
        add esp, 4
        fnstsw ax
        test ah, 5
        jp public_6f9eb68
        fld st(0)
        fld st(0)
        fmulp 
        fld st(1)
        fmul st, st(1)
        fmul qword ptr ds : [public_6fbccc8]
        fxch 
        fmul qword ptr ds : [public_6fbccc0]
        fsubp 
        fxch 
        fmul qword ptr ds : [public_6fbccb8]
        faddp 
        fsub qword ptr ds : [public_6fbccb0]
        jmp public_6f9eb7a
        public_6f9eb68 : nop
        fldln2 
        fxch 
        fyl2x 
        fmul qword ptr ds : [public_6fbcca8]
        fadd qword ptr ds : [public_6fbcca0]
        public_6f9eb7a : nop
        fcom dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 5
        jp public_6f9eb8f
        fstp st(0)
        fld dword ptr ds : [public_6fb444c]
        public_6f9eb8f : nop
        fadd qword ptr ds : [public_6fb74e0]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6fb3354]
        add esp, 8
        call public_6fa9130
        mov dword ptr ss : [esp+0x3C], eax
        fild dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [public_6fb5810]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6f9ebc8
        fstp st(0)
        fld dword ptr ds : [public_6fb5810]
        public_6f9ebc8 : nop
        mov eax, dword ptr ds : [esi]
        fstp dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+0x30], ecx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax+0x34], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+0x38], ecx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+0x14]
        push edi
        mov dword ptr ds : [eax+0x20], edx
        call public_6f50650
        mov eax, dword ptr ds : [eax+0xD0]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        add eax, 0x1C
/*FIXUP push offset public_6fbd514 @0x6f9ec03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd514
        push eax
        call dword ptr ds : [public_6fb33b4]
        mov eax, dword ptr ds : [esi]
        mov ebp, dword ptr ss : [esp+0x44]
        add esp, 0xC
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ebp
        push edi
        mov ecx, ebx
        call public_6f9e1f0
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jle public_6f9ec82
        cmp eax, 3
        jg public_6f9ec82
        test esi, esi
        mov dword ptr ss : [esp+0x38], esi
        je public_6f9ec46
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        call dword ptr ds : [edx]
        public_6f9ec46 : nop
        test esi, esi
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x40], esp
        mov dword ptr ds : [eax], esi
        je public_6f9ec63
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        call dword ptr ds : [eax]
        public_6f9ec63 : nop
        push ebp
        mov ecx, ebx
        call public_6f9e770
        test esi, esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        je public_6f9ec82
        mov edx, dword ptr ds : [esi+4]
        add esi, 4
        mov ecx, esi
        call dword ptr ds : [edx+4]
        public_6f9ec82 : nop
        mov bl, 1
        jmp public_6f9ec88
        public_6f9ec86 : nop
        xor bl, bl
        public_6f9ec88 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, bl
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x6f9e9b0)
    }
}

#undef public_6f9e9fc
#undef public_6f9e9fe
#undef public_6f9ea50
#undef public_6f9eaa6
#undef public_6f9eab5
#undef public_6f9eab8
#undef public_6f9eae9
#undef public_6f9eb68
#undef public_6f9eb7a
#undef public_6f9eb8f
#undef public_6f9ebc8
#undef public_6f9ec46
#undef public_6f9ec63
#undef public_6f9ec82
#undef public_6f9ec86
#undef public_6f9ec88
