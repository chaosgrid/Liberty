#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_42ec80);
CLANG_FORWARD_PROC_SYMBOL(public_457d60);
CLANG_FORWARD_PROC_SYMBOL(public_457dc0);
CLANG_FORWARD_PROC_SYMBOL(public_457e30);
CLANG_FORWARD_PROC_SYMBOL(public_457f10);
CLANG_FORWARD_PROC_SYMBOL(public_4581b0);
CLANG_FORWARD_PROC_SYMBOL(public_492250);
CLANG_FORWARD_PROC_SYMBOL(public_4deb70);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5850f0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4396);

#define public_585139 _public_585139
#define public_58513f _public_58513f
#define public_585190 _public_585190
#define public_585192 _public_585192
#define public_5851d0 _public_5851d0
#define public_5851f8 _public_5851f8
#define public_58521c _public_58521c
#define public_585224 _public_585224
#define public_585238 _public_585238
#define public_585261 _public_585261
#define public_58526c _public_58526c
#define public_585287 _public_585287
#define public_58528f _public_58528f
#define public_58529b _public_58529b
#define public_5852ee _public_5852ee
#define public_5852f2 _public_5852f2
#define public_58532e _public_58532e
#define public_585330 _public_585330
#define public_58535d _public_58535d

PROC_DECLARE(0x5850f0, internal_5850f0, public_5850f0);
extern "C" NAKED register_t __cdecl internal_5850f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c4396 @0x5850f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4396
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x4D4]
        xor ebp, ebp
        cmp ecx, ebp
        push esi
        push edi
        je public_58513f
        call public_457e30
        mov esi, dword ptr ds : [ebx+0x4D4]
        cmp esi, ebp
        je public_585139
        mov ecx, esi
        call public_457dc0
        push esi
        call public_5b7e1d
        add esp, 4
        public_585139 : nop
        mov dword ptr ds : [ebx+0x4D4], ebp
        public_58513f : nop
        mov esi, dword ptr ss : [esp+0x28]
        cmp esi, ebp
        je public_58535d
        mov eax, dword ptr ds : [ebx+0x4CC]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[ebx+0x4C8]
        push eax
        push ecx
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c618c]
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6208]
        push 0x2C
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_585190
        mov ecx, eax
        call public_457d60
        jmp public_585192
        public_585190 : nop
        xor eax, eax
        public_585192 : nop
        mov ecx, dword ptr ds : [ebx+0x4B8]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ds : [ebx+0x4D4], eax
        call public_457f10
        mov edx, dword ptr ds : [ebx+0x4D4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ebx+0x4CC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_585224
        lea ebx, ds:[ebx]
        public_5851d0 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ds:[esi+8]
        call dword ptr ds : [public_5c60b4]
        test al, al
        jne public_5851f8
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        call dword ptr ds : [public_5c61c4]
        cmp eax, 0xFFFFFFFF
        jne public_58521c
        public_5851f8 : nop
        mov eax, esi
        mov ebp, dword ptr ds : [eax]
        lea ecx, ds:[esi+4]
        mov esi, dword ptr ds : [ecx]
        mov edx, esi
        mov dword ptr ds : [edx], ebp
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        public_58521c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x14]
        jne public_5851d0
        public_585224 : nop
        mov ecx, dword ptr ds : [ebx+0x4D4]
        push edi
        call public_4581b0
        xor ebp, ebp
        lea esi, ds:[ebx+0x538]
        public_585238 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_58526c
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp ebp, eax
        jae public_58526c
        mov edx, dword ptr ds : [ebx+0x53C]
        mov edi, dword ptr ds : [edx+ebp*4]
        cmp dword ptr ds : [edi+4], 0xFFFFFFFF
        je public_585261
        mov ecx, edi
        call public_59eee0
        public_585261 : nop
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        inc ebp
        jmp public_585238
        public_58526c : nop
        mov ecx, esi
        call public_42ec80
        mov ecx, dword ptr ds : [ebx+0x4D4]
        mov ebx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_585287
        xor eax, eax
        jmp public_58528f
        public_585287 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_58528f : nop
        cmp eax, ebx
        jae public_5852ee
        test ebx, ebx
        mov eax, ebx
        jge public_58529b
        xor eax, eax
        public_58529b : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        push edi
        push eax
        push ecx
        mov ecx, esi
        call public_597c70
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        lea ecx, ds:[edi+ebx*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_5ad970
        lea edx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        public_5852ee : nop
        test ebx, ebx
        jle public_58535d
        public_5852f2 : nop
        push 0x28
        call public_5b7e84
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x28], edi
        test edi, edi
        mov dword ptr ss : [esp+0x20], 1
        je public_58532e
        mov ecx, edi
        call public_420d40
        lea ecx, ds:[edi+0x14]
        call public_492250
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        mov ecx, edi
        jmp public_585330
        public_58532e : nop
        xor ecx, ecx
        public_585330 : nop
        push 1
        push 0
/*FIXUP push offset public_5e4d30 @0x585334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4d30
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], ecx
        call public_59ec80
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, esi
        call public_4deb70
        dec ebx
        jne public_5852f2
        public_58535d : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x5850f0)
    }
}

#undef public_585139
#undef public_58513f
#undef public_585190
#undef public_585192
#undef public_5851d0
#undef public_5851f8
#undef public_58521c
#undef public_585224
#undef public_585238
#undef public_585261
#undef public_58526c
#undef public_585287
#undef public_58528f
#undef public_58529b
#undef public_5852ee
#undef public_5852f2
#undef public_58532e
#undef public_585330
#undef public_58535d
