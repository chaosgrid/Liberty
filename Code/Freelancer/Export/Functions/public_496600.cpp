#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_496600);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4967a2 _public_4967a2
#define public_4967bc _public_4967bc
#define public_4967c8 _public_4967c8
#define public_496803 _public_496803
#define public_496828 _public_496828
#define public_49684d _public_49684d
#define public_496872 _public_496872
#define public_496894 _public_496894
#define public_496963 _public_496963
#define public_496970 _public_496970
#define public_496a0d _public_496a0d
#define public_496a26 _public_496a26
#define public_496a3d _public_496a3d
#define public_496a3f _public_496a3f
#define public_496a58 _public_496a58
#define public_496a6f _public_496a6f
#define public_496a71 _public_496a71
#define public_496b1f _public_496b1f
#define public_496b5a _public_496b5a
#define public_496b8b _public_496b8b
#define public_496b9f _public_496b9f
#define public_496bc0 _public_496bc0
#define public_496bc2 _public_496bc2
#define public_496be0 _public_496be0
#define public_496c79 _public_496c79
#define public_496d12 _public_496d12
#define public_496d2b _public_496d2b

PROC_DECLARE(0x496600, internal_496600, public_496600);
extern "C" NAKED register_t __cdecl internal_496600()
{
    __asm
    {
        sub esp, 0x484
        push ebx
        mov ebx, ecx
        lea eax, ds:[ebx+0x418]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c75e0]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x1C], ecx
        fld dword ptr ss : [esp+0x1C]
        mov edx, eax
        fmul dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [edx+4]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edx+8]
        fxch 
        mov dword ptr ss : [esp+0xC], ecx
        fchs 
        mov dword ptr ss : [esp+0x10], edx
        fstp dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x28]
        fchs 
        mov dword ptr ss : [esp+0x14], ecx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x2C]
        fchs 
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x1C], ecx
        fld dword ptr ss : [esp+0xC]
        lea edx, ds:[ebx+0x46C]
        fmul dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx+0x3F8]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], ecx
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], edx
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fsub st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [ebx+0x3F8]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fld dword ptr ss : [esp+0xC]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        fmul st, st(2)
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+8], ecx
        fstp dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0xC], edx
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        fadd st, st(1)
        mov eax, dword ptr ds : [ebx+0x400]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        fstp dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x20], ecx
        fstp st(0)
        fld dword ptr ds : [ebx+0x3F8]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        je public_496d2b
        push ebp
        push esi
        push edi
        public_4967a2 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x40], ecx
        je public_4967bc
        cmp eax, 1
        jne public_4967c8
        public_4967bc : nop
        test dword ptr ds : [ebx+0x4B0], ecx
        je public_496d12
        public_4967c8 : nop
        cmp eax, 2
        jne public_496a0d
        mov cl, byte ptr ds : [ebx+0xC68]
        mov byte ptr ds : [ebx+0xC68], 0
        fld dword ptr ss : [ebp+0x30]
        fcomp dword ptr ds : [public_5d3e68]
        fnstsw ax
        test ah, 0x41
        jne public_496803
        mov dword ptr ss : [ebp+0x30], 0x47DAC000
        mov byte ptr ds : [ebx+0xC68], 1
        mov dword ptr ss : [ebp+0x44], 0
        public_496803 : nop
        fld dword ptr ss : [ebp+0x30]
        fcomp dword ptr ds : [public_5d3e64]
        fnstsw ax
        test ah, 5
        jp public_496828
        mov dword ptr ss : [ebp+0x30], 0xC7DAC000
        mov byte ptr ds : [ebx+0xC68], 1
        mov dword ptr ss : [ebp+0x44], 0x43340000
        public_496828 : nop
        fld dword ptr ss : [ebp+0x38]
        fcomp dword ptr ds : [public_5d3e68]
        fnstsw ax
        test ah, 0x41
        jne public_49684d
        mov dword ptr ss : [ebp+0x38], 0x47DAC000
        mov byte ptr ds : [ebx+0xC68], 1
        mov dword ptr ss : [ebp+0x44], 0x43870000
        public_49684d : nop
        fld dword ptr ss : [ebp+0x38]
        fcomp dword ptr ds : [public_5d3e64]
        fnstsw ax
        test ah, 5
        jp public_496872
        mov dword ptr ss : [ebp+0x38], 0xC7DAC000
        mov byte ptr ds : [ebx+0xC68], 1
        mov dword ptr ss : [ebp+0x44], 0x42B40000
        public_496872 : nop
        mov al, byte ptr ds : [ebx+0xC68]
        cmp cl, al
        je public_496a71
        test al, al
        je public_496963
        lea esi, ss:[ebp+8]
        mov ecx, esi
        call public_59eee0
        xor eax, eax
        public_496894 : nop
        mov cl, byte ptr ds : [eax+public_5d3d8c]
        mov byte ptr ss : [esp+eax+0x84], cl
        inc eax
        test cl, cl
        jne public_496894
        mov edx, dword ptr ds : [public_5d3e50]
        xor eax, eax
        lea edi, ss:[esp+0x84]
        mov ecx, 0xFFFFFFFF
        repne scasb
        mov eax, dword ptr ds : [public_5d3e54]
        mov ecx, dword ptr ds : [public_5d3e58]
        dec edi
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ds : [public_5d3e5c]
        mov dword ptr ds : [edi+4], eax
        mov ax, word ptr ds : [public_5d3e60]
        mov dword ptr ds : [edi+8], ecx
        mov cl, byte ptr ds : [public_5d3e62]
        mov dword ptr ds : [edi+0xC], edx
        mov edx, dword ptr ds : [public_5d3d84]
        mov word ptr ds : [edi+0x10], ax
        mov byte ptr ds : [edi+0x12], cl
        xor eax, eax
        lea edi, ss:[esp+0x84]
        mov ecx, 0xFFFFFFFF
        repne scasb
        mov al, byte ptr ds : [public_5d3d88]
        mov ecx, dword ptr ds : [public_5c6dd8]
        dec edi
        mov dword ptr ds : [edi], edx
        mov byte ptr ds : [edi+4], al
        mov edx, dword ptr ds : [ecx]
        push edx
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0x294]
        push ecx
        call dword ptr ds : [public_5c6068]
        lea edx, ss:[esp+0x298]
        push 0
        push edx
        call dword ptr ds : [public_5c70d0]
        add esp, 0x14
        cmp eax, 0xFFFFFFFF
        je public_496a71
        push 1
/*FIXUP push offset public_5d3d40 @0x49694a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3d40
        lea eax, ss:[esp+0x8C]
        push eax
        mov ecx, esi
        call public_59ec80
        jmp public_496a71
        public_496963 : nop
        lea ecx, ss:[ebp+8]
        call public_59eee0
        xor eax, eax
        lea ecx, ds:[ecx]
        public_496970 : nop
        mov cl, byte ptr ds : [eax+public_5d3d8c]
        mov byte ptr ss : [esp+eax+0x188], cl
        inc eax
        test cl, cl
        jne public_496970
        xor eax, eax
        lea edi, ss:[esp+0x188]
        mov ecx, 0xFFFFFFFF
        repne scasb
        dec edi
        mov dl, byte ptr ds : [public_5d3d88]
        mov ecx, 5
        mov esi, offset public_5d3d00
        rep movsd
        movsb 
        or ecx, 0xFFFFFFFF
        lea edi, ss:[esp+0x188]
        repne scasb
        mov ecx, dword ptr ds : [public_5d3d84]
        mov eax, dword ptr ds : [public_5c6dd8]
        dec edi
        mov dword ptr ds : [edi], ecx
        mov byte ptr ds : [edi+4], dl
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x18C]
        push edx
        lea eax, ss:[esp+0x398]
        push eax
        call dword ptr ds : [public_5c6068]
        lea ecx, ss:[esp+0x39C]
        push 0
        push ecx
        call dword ptr ds : [public_5c70d0]
        add esp, 0x14
        cmp eax, 0xFFFFFFFF
        je public_496a71
        push 1
/*FIXUP push offset public_5d3d40 @0x4969f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3d40
        lea edx, ss:[esp+0x190]
        push edx
        lea ecx, ss:[ebp+8]
        call public_59ec80
        jmp public_496a71
        public_496a0d : nop
        fld dword ptr ss : [ebp+0x30]
        fcomp dword ptr ds : [ebx+0x4A8]
        fnstsw ax
        test ah, 0x41
        jne public_496a26
        mov eax, dword ptr ds : [ebx+0x4A8]
        mov dword ptr ss : [ebp+0x30], eax
        public_496a26 : nop
        fld dword ptr ds : [ebx+0x4A8]
        fchs 
        fcom dword ptr ss : [ebp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_496a3d
        fstp dword ptr ss : [ebp+0x30]
        jmp public_496a3f
        public_496a3d : nop
        fstp st(0)
        public_496a3f : nop
        fld dword ptr ss : [ebp+0x38]
        fcomp dword ptr ds : [ebx+0x4AC]
        fnstsw ax
        test ah, 0x41
        jne public_496a58
        mov ecx, dword ptr ds : [ebx+0x4AC]
        mov dword ptr ss : [ebp+0x38], ecx
        public_496a58 : nop
        fld dword ptr ds : [ebx+0x4AC]
        fchs 
        fcom dword ptr ss : [ebp+0x38]
        fnstsw ax
        test ah, 0x41
        jne public_496a6f
        fstp dword ptr ss : [ebp+0x38]
        jmp public_496a71
        public_496a6f : nop
        fstp st(0)
        public_496a71 : nop
        fld dword ptr ss : [ebp+0x30]
        mov eax, dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [ebx+0x4A8]
        mov ecx, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ebx+0x4A8]
        mov edx, dword ptr ss : [esp+0x14]
        fadd st(0), st
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ecx
        fdivp 
        mov dword ptr ss : [esp+0x20], edx
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x4AC]
        fadd st(0), st
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [ebx+0x4AC]
        fadd dword ptr ss : [ebp+0x38]
        fdiv dword ptr ss : [esp+0x30]
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x34]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x44]
        fadd st, st(1)
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x48]
        fstp st(0)
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [ebp]
        fstp st(0)
        cmp eax, 2
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [ebp+0x3C]
        mov dword ptr ss : [esp+0x28], ecx
        je public_496b1f
        cmp eax, 3
        je public_496b1f
        cmp eax, 4
        je public_496b1f
        fmul dword ptr ds : [ebx+0xF48]
        jmp public_496bc2
        public_496b1f : nop
        mov al, byte ptr ds : [ebx+0x478]
        test al, al
        je public_496b9f
        mov al, byte ptr ds : [ebx+0x8D4]
        test al, al
        jne public_496b9f
        fld dword ptr ds : [ebx+0x4A8]
        fdiv dword ptr ds : [ebx+0x4A0]
        fmul dword ptr ds : [public_5c75e0]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_496b5a
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_496b5a : nop
        fld st(1)
        fdivrp 
        fld dword ptr ds : [ebx+0x490]
        fadd dword ptr ds : [ebx+0x4A0]
        fdivr dword ptr ds : [ebx+0x4A8]
        fmul dword ptr ds : [public_5c75e0]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_496b8b
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_496b8b : nop
        fxch st(2)
        fdiv st, st(2)
        fsub st, st(1)
        fmul dword ptr ds : [ebx+0x47C]
        fadd st, st(1)
        fstp st(2)
        fstp st(0)
        jmp public_496bc2
        public_496b9f : nop
        fld dword ptr ds : [ebx+0x3F8]
        fmul dword ptr ds : [public_5c75e0]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_496bc0
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_496bc0 : nop
        fdivp 
        public_496bc2 : nop
        fdiv dword ptr ss : [esp+0x30]
        mov al, byte ptr ss : [esp+0x40]
        test al, 4
        mov dword ptr ss : [esp+0x28], 0xBF0CCCCC
        fmul dword ptr ss : [esp+0x14]
        je public_496be0
        fmul dword ptr ds : [public_5c9800]
        public_496be0 : nop
        mov edx, dword ptr ss : [ebp+0x44]
        fmul dword ptr ds : [public_5d3e4c]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x40]
        push ecx
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xA0]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ds : [public_5c77f4]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fst dword ptr ss : [esp+0x30]
        mov ecx, 0xC
        fcos 
        lea edi, ss:[esp+0x54]
        rep movsd
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0x3F800000
        fld dword ptr ss : [esp+0x30]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x54]
        fld st(0)
        fchs 
        fstp dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x64]
        jne public_496c79
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_496c79 : nop
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x58]
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x54]
        push edx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ss : [ebp+0x70]
        test eax, eax
        je public_496d12
        push 0
        push 0
        lea ecx, ss:[esp+0x1B]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x23], 0
        call public_4c4da0
        mov al, byte ptr ss : [ebp+0x74]
        mov dl, byte ptr ss : [esp+0x23]
        or al, dl
        mov byte ptr ss : [ebp+0x74], al
        and al, 1
        mov byte ptr ss : [ebp+0x48], al
        mov al, byte ptr ds : [ebx+0x87E]
        add esp, 0x10
        test al, al
        je public_496d12
        mov byte ptr ss : [ebp+0x48], 1
        public_496d12 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ebx+0x400]
        mov dword ptr ss : [esp+0x2C], eax
        jne public_4967a2
        pop edi
        pop esi
        pop ebp
        public_496d2b : nop
        pop ebx
        add esp, 0x484
        ret 
        UNREACHABLE_TRAP(0x496600)
    }
}

#undef public_4967a2
#undef public_4967bc
#undef public_4967c8
#undef public_496803
#undef public_496828
#undef public_49684d
#undef public_496872
#undef public_496894
#undef public_496963
#undef public_496970
#undef public_496a0d
#undef public_496a26
#undef public_496a3d
#undef public_496a3f
#undef public_496a58
#undef public_496a6f
#undef public_496a71
#undef public_496b1f
#undef public_496b5a
#undef public_496b8b
#undef public_496b9f
#undef public_496bc0
#undef public_496bc2
#undef public_496be0
#undef public_496c79
#undef public_496d12
#undef public_496d2b
