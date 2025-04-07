#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d30bc9);
CLANG_FORWARD_PROC_SYMBOL(public_6d36b22);
CLANG_FORWARD_PROC_SYMBOL(public_6d36bac);

#define public_6d36c15 _public_6d36c15
#define public_6d36c1c _public_6d36c1c
#define public_6d36c30 _public_6d36c30
#define public_6d36c35 _public_6d36c35
#define public_6d36c3f _public_6d36c3f
#define public_6d36c5f _public_6d36c5f
#define public_6d36cb2 _public_6d36cb2
#define public_6d36cc2 _public_6d36cc2
#define public_6d36cd4 _public_6d36cd4
#define public_6d36d02 _public_6d36d02
#define public_6d36d14 _public_6d36d14
#define public_6d36d61 _public_6d36d61
#define public_6d36d6a _public_6d36d6a
#define public_6d36d6c _public_6d36d6c
#define public_6d36d6f _public_6d36d6f
#define public_6d36da0 _public_6d36da0
#define public_6d36dd6 _public_6d36dd6
#define public_6d36de7 _public_6d36de7
#define public_6d36df1 _public_6d36df1
#define public_6d36e3d _public_6d36e3d
#define public_6d36e67 _public_6d36e67
#define public_6d36e79 _public_6d36e79
#define public_6d36eb7 _public_6d36eb7
#define public_6d36ec2 _public_6d36ec2
#define public_6d36ed2 _public_6d36ed2
#define public_6d36ed8 _public_6d36ed8
#define public_6d36f02 _public_6d36f02
#define public_6d36f67 _public_6d36f67
#define public_6d36f6e _public_6d36f6e
#define public_6d36f8e _public_6d36f8e
#define public_6d36f97 _public_6d36f97
#define public_6d36fa2 _public_6d36fa2
#define public_6d36fa4 _public_6d36fa4

PROC_DECLARE(0x6d36bac, internal_6d36bac, public_6d36bac);
extern "C" NAKED register_t __cdecl internal_6d36bac()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x60
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], ecx
        call public_6d36b22
        mov ebx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[ebp-0x60]
        push ecx
        push ebx
        call dword ptr ds : [eax+0x20]
        mov esi, dword ptr ss : [ebp+0x14]
        xor edx, edx
        cmp esi, edx
        je public_6d36c3f
        lea edi, ss:[ebp-0x30]
        movsd 
        movsd 
        movsd 
        movsd 
        cmp dword ptr ss : [ebp-0x30], edx
        jl public_6d36c35
        mov eax, dword ptr ss : [ebp-0x28]
        cmp eax, dword ptr ss : [ebp-0x48]
        ja public_6d36c35
        cmp dword ptr ss : [ebp-0x30], eax
        jg public_6d36c35
        cmp dword ptr ss : [ebp-0x2C], edx
        jl public_6d36c35
        mov ecx, dword ptr ss : [ebp-0x24]
        cmp ecx, dword ptr ss : [ebp-0x44]
        ja public_6d36c35
        cmp dword ptr ss : [ebp-0x2C], ecx
        jg public_6d36c35
        cmp dword ptr ss : [ebp-0x30], edx
        jne public_6d36c15
        cmp eax, dword ptr ss : [ebp-0x48]
        jne public_6d36c15
        cmp dword ptr ss : [ebp-0x2C], edx
        jne public_6d36c15
        cmp ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp+0x14], edx
        je public_6d36c1c
        public_6d36c15 : nop
        mov dword ptr ss : [ebp+0x14], 1
        public_6d36c1c : nop
        test byte ptr ss : [ebp+0x1C], 1
        jne public_6d36c30
        cmp dword ptr ss : [ebp+0x14], edx
        jne public_6d36c30
        mov dword ptr ss : [ebp-8], 1
        jmp public_6d36c5f
        public_6d36c30 : nop
        mov dword ptr ss : [ebp-8], edx
        jmp public_6d36c5f
        public_6d36c35 : nop
        mov eax, 0x8876086C
        jmp public_6d36f67
        public_6d36c3f : nop
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp-0x28], eax
        mov eax, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x24], eax
        mov eax, dword ptr ss : [ebp+0x1C]
        not eax
        and eax, 1
        mov dword ptr ss : [ebp-0x30], edx
        mov dword ptr ss : [ebp-0x2C], edx
        mov dword ptr ss : [ebp+0x14], edx
        mov dword ptr ss : [ebp-8], eax
        public_6d36c5f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        and eax, 0x10000
        mov dword ptr ss : [ebp-4], eax
        jne public_6d36cd4
        cmp dword ptr ss : [ebp-0x54], edx
        jne public_6d36d6c
        test byte ptr ss : [ebp-0x57], 2
        jne public_6d36d6c
        xor esi, esi
        inc esi
        push esi
        call public_6d30bc9
        mov eax, dword ptr ds : [ebx]
        pop ecx
        lea ecx, ss:[ebp-0x14]
        push ecx
/*FIXUP push offset public_6d6103c @0x6d36c8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6103c
        push ebx
        call dword ptr ds : [eax+0x1C]
        test eax, eax
        jl public_6d36cb2
        mov eax, dword ptr ss : [ebp-0x14]
        test eax, eax
        mov dword ptr ss : [ebp-4], esi
        je public_6d36cc2
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        and dword ptr ss : [ebp-0x14], 0
        jmp public_6d36cc2
        public_6d36cb2 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp-0x58], eax
        shr eax, 0x1A
        not eax
        and eax, esi
        mov dword ptr ss : [ebp-4], eax
        public_6d36cc2 : nop
        push 0
        call public_6d30bc9
        cmp dword ptr ss : [ebp-4], 0
        pop ecx
        je public_6d36d6a
        public_6d36cd4 : nop
        mov eax, dword ptr ss : [ebp-0x60]
        cmp eax, 0x31545844
        je public_6d36d02
        cmp eax, 0x32545844
        je public_6d36d02
        cmp eax, 0x33545844
        je public_6d36d02
        cmp eax, 0x34545844
        je public_6d36d02
        cmp eax, 0x35545844
        je public_6d36d02
        mov ebx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x44]
        jmp public_6d36d14
        public_6d36d02 : nop
        mov ebx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x44]
        add ebx, 3
        add eax, 3
        and ebx, 0xFFFFFFFC
        and eax, 0xFFFFFFFC
        public_6d36d14 : nop
        mov edi, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0xC]
        push esi
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add edi, 8
        push edi
        push dword ptr ss : [ebp-0x60]
        push dword ptr ss : [ebp-0x10]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x6C]
        xor ebx, ebx
        cmp eax, ebx
        jl public_6d36f67
        cmp dword ptr ss : [ebp-8], ebx
        jne public_6d36d61
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi]
        push ebx
        push dword ptr ds : [edi]
        push ebx
        push ebx
        push dword ptr ss : [ebp+0xC]
        push esi
        call dword ptr ds : [eax+0x70]
        cmp eax, ebx
        jl public_6d36f67
        public_6d36d61 : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [ebp-0x10], eax
        xor edx, edx
        jmp public_6d36d6f
        public_6d36d6a : nop
        xor edx, edx
        public_6d36d6c : nop
        mov dword ptr ss : [ebp-0x10], ebx
        public_6d36d6f : nop
        movzx ebx, byte ptr ss : [ebp+0x1C]
        and ebx, 1
        or ebx, 0x80
        shl ebx, 4
        cmp dword ptr ss : [ebp-8], edx
        je public_6d36df1
        cmp dword ptr ss : [ebp-4], edx
        jne public_6d36df1
        test byte ptr ss : [ebp-0x57], 2
        je public_6d36df1
        test byte ptr ss : [ebp+0x1E], 2
        je public_6d36da0
        or ebx, 0x2000
        jmp public_6d36fa4
        public_6d36da0 : nop
        push 1
        call public_6d30bc9
        mov eax, dword ptr ss : [ebp+0xC]
        pop ecx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp-0xC]
        push edx
/*FIXUP push offset public_6d6102c @0x6d36db1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6102c
        push eax
        call dword ptr ds : [ecx+0x1C]
        test eax, eax
        jl public_6d36de7
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x34]
        cmp eax, 1
        jne public_6d36dd6
        or ebx, 0x2000
        and dword ptr ss : [ebp+0x14], 0
        public_6d36dd6 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        test eax, eax
        je public_6d36de7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        and dword ptr ss : [ebp-0xC], 0
        public_6d36de7 : nop
        push 0
        call public_6d30bc9
        pop ecx
        xor edx, edx
        public_6d36df1 : nop
        cmp dword ptr ss : [ebp+0x14], edx
        je public_6d36fa4
        mov eax, dword ptr ss : [ebp-0x60]
        cmp eax, 0x31545844
        je public_6d36e79
        cmp eax, 0x32545844
        je public_6d36e79
        cmp eax, 0x32595559
        je public_6d36e3d
        cmp eax, 0x33545844
        je public_6d36e79
        cmp eax, 0x34545844
        je public_6d36e79
        cmp eax, 0x35545844
        je public_6d36e79
        cmp eax, 0x59565955
        je public_6d36e3d
        lea esi, ss:[ebp-0x30]
        lea edi, ss:[ebp-0x40]
        movsd 
        movsd 
        movsd 
        movsd 
        jmp public_6d36f97
        public_6d36e3d : nop
        mov ecx, dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp-0x2C]
        mov esi, dword ptr ss : [ebp-0x24]
        and ecx, 0xFFFFFFFE
        inc eax
        and eax, 0xFFFFFFFE
        cmp eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp-0x40], ecx
        mov dword ptr ss : [ebp-0x38], eax
        mov dword ptr ss : [ebp-0x3C], edx
        mov dword ptr ss : [ebp-0x34], esi
        jbe public_6d36e67
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp-0x38], eax
        public_6d36e67 : nop
        test ecx, ecx
        jne public_6d36ed8
        cmp eax, dword ptr ss : [ebp-0x48]
        jne public_6d36ed8
        test edx, edx
        jne public_6d36ed8
        cmp esi, dword ptr ss : [ebp-0x44]
        jmp public_6d36ed2
        public_6d36e79 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ss : [ebp-0x30]
        mov esi, dword ptr ss : [ebp-0x2C]
        push 0xFFFFFFFC
        pop edi
        add eax, 3
        add ecx, 3
        and edx, edi
        and eax, edi
        and esi, edi
        and ecx, edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-0x40], edx
        mov dword ptr ss : [ebp-0x38], eax
        mov dword ptr ss : [ebp-0x3C], esi
        mov dword ptr ss : [ebp-0x34], ecx
        jne public_6d36f6e
        cmp eax, dword ptr ss : [ebp-0x48]
        jbe public_6d36eb7
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp-0x38], eax
        public_6d36eb7 : nop
        cmp ecx, dword ptr ss : [ebp-0x44]
        jbe public_6d36ec2
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x34], ecx
        public_6d36ec2 : nop
        test edx, edx
        jne public_6d36ed8
        cmp eax, dword ptr ss : [ebp-0x48]
        jne public_6d36ed8
        test esi, esi
        jne public_6d36ed8
        cmp ecx, dword ptr ss : [ebp-0x44]
        public_6d36ed2 : nop
        je public_6d36fa2
        public_6d36ed8 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[ebp-0x40]
        push edx
        lea edx, ss:[ebp-0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        test eax, eax
        jl public_6d36f67
        mov eax, dword ptr ss : [ebp-0x40]
        sub dword ptr ss : [ebp-0x30], eax
        sub dword ptr ss : [ebp-0x28], eax
        mov eax, dword ptr ss : [ebp-0x3C]
        sub dword ptr ss : [ebp-0x2C], eax
        sub dword ptr ss : [ebp-0x24], eax
        xor ecx, ecx
        public_6d36f02 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [ebp-0x60]
        lea edi, ds:[eax+0x28]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [ebp-0x20]
        lea esi, ss:[ebp-0x30]
        movsd 
        xor ecx, ecx
        inc ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [ebp-0x48]
        movsd 
        mov dword ptr ds : [eax+0x44], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+0x18], edx
        mov edx, dword ptr ss : [ebp-0x44]
        movsd 
        mov dword ptr ds : [eax+0x48], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [ebp-0x18]
        movsd 
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        public_6d36f67 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x18
        public_6d36f6e : nop
        test edx, edx
        jne public_6d36f8e
        mov edx, dword ptr ss : [ebp-0x48]
        add edx, 3
        and edx, edi
        cmp eax, edx
        jne public_6d36f8e
        test esi, esi
        jne public_6d36f8e
        mov eax, dword ptr ss : [ebp-0x44]
        add eax, 3
        and eax, edi
        cmp ecx, eax
        je public_6d36fa2
        public_6d36f8e : nop
        mov dword ptr ss : [ebp+0x14], 1
        xor edx, edx
        public_6d36f97 : nop
        cmp dword ptr ss : [ebp+0x14], edx
        jne public_6d36ed8
        jmp public_6d36fa4
        public_6d36fa2 : nop
        xor edx, edx
        public_6d36fa4 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        lea edx, ss:[ebp-0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        xor ecx, ecx
        cmp eax, ecx
        jge public_6d36f02
        jmp public_6d36f67
        UNREACHABLE_TRAP(0x6d36bac)
    }
}

#undef public_6d36c15
#undef public_6d36c1c
#undef public_6d36c30
#undef public_6d36c35
#undef public_6d36c3f
#undef public_6d36c5f
#undef public_6d36cb2
#undef public_6d36cc2
#undef public_6d36cd4
#undef public_6d36d02
#undef public_6d36d14
#undef public_6d36d61
#undef public_6d36d6a
#undef public_6d36d6c
#undef public_6d36d6f
#undef public_6d36da0
#undef public_6d36dd6
#undef public_6d36de7
#undef public_6d36df1
#undef public_6d36e3d
#undef public_6d36e67
#undef public_6d36e79
#undef public_6d36eb7
#undef public_6d36ec2
#undef public_6d36ed2
#undef public_6d36ed8
#undef public_6d36f02
#undef public_6d36f67
#undef public_6d36f6e
#undef public_6d36f8e
#undef public_6d36f97
#undef public_6d36fa2
#undef public_6d36fa4
