#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_417f10);
CLANG_FORWARD_PROC_SYMBOL(public_41f150);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_559c10);
CLANG_FORWARD_PROC_SYMBOL(public_559c20);
CLANG_FORWARD_PROC_SYMBOL(public_563af0);
CLANG_FORWARD_PROC_SYMBOL(public_59e300);
CLANG_FORWARD_PROC_SYMBOL(public_5a29b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a2a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_59e3d5 _public_59e3d5
#define public_59e3e0 _public_59e3e0
#define public_59e414 _public_59e414
#define public_59e430 _public_59e430
#define public_59e448 _public_59e448
#define public_59e450 _public_59e450
#define public_59e454 _public_59e454
#define public_59e473 _public_59e473
#define public_59e479 _public_59e479
#define public_59e485 _public_59e485
#define public_59e48e _public_59e48e
#define public_59e49f _public_59e49f
#define public_59e4a1 _public_59e4a1
#define public_59e4a7 _public_59e4a7
#define public_59e4b9 _public_59e4b9
#define public_59e4be _public_59e4be
#define public_59e4f0 _public_59e4f0

PROC_DECLARE(0x59e300, internal_59e300, public_59e300);
extern "C" NAKED register_t __cdecl internal_59e300()
{
    __asm
    {
        mov eax, 0x1008
        call public_5b7e90
        mov eax, dword ptr ds : [public_67dcf0]
        test eax, eax
        jg public_59e4f0
        push esi
        push edi
        push 0xB50
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xB60
        call public_421ed0
        push 0x487
/*FIXUP push offset public_5e5df0 @0x59e350*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5df0
/*FIXUP push offset public_67dbf8 @0x59e355*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422610
/*FIXUP push offset public_67dbf8 @0x59e35f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422950
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x24
        push 0xFFFFFFFF
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        call public_4101e0
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x1A
        push eax
        call dword ptr ds : [ecx+0xF0]
        call public_5a29b0
        call public_559c10
        mov edi, dword ptr ds : [public_67dbe8]
        xor edx, edx
        test edi, edi
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+8], edi
        je public_59e49f
        push ebx
        push ebp
        jmp public_59e3e0
        public_59e3d5 : nop
        mov edi, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_59e3e0 : nop
        mov ebx, dword ptr ds : [edi+8]
        test ebx, ebx
        je public_59e48e
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_59e48e
        test byte ptr ds : [ebx+0x6C], 2
        je public_59e48e
        mov ebp, dword ptr ds : [ebx+0x70]
        test ebp, ebp
        jne public_59e414
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x34]
        mov edx, dword ptr ss : [esp+0x14]
        jmp public_59e48e
        public_59e414 : nop
        test edx, edx
        je public_59e479
        mov eax, dword ptr ss : [esp+edx*4+0x14]
        cmp ebp, dword ptr ds : [eax+0x70]
        ja public_59e479
        xor esi, esi
        test edx, edx
        jle public_59e454
        lea edi, ss:[esp+0x18]
        nop 
        lea esp, ss:[esp]
        public_59e430 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0x70]
        cmp ebp, eax
        jb public_59e450
        jne public_59e448
        fld dword ptr ds : [ebx+0x68]
        fcomp dword ptr ds : [ecx+0x68]
        fnstsw ax
        test ah, 5
        jnp public_59e450
        public_59e448 : nop
        inc esi
        add edi, 4
        cmp esi, edx
        jl public_59e430
        public_59e450 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_59e454 : nop
        sub edx, esi
        je public_59e473
        lea ecx, ds:[edx*4]
        push ecx
        lea edx, ss:[esp+esi*4+0x1C]
        push edx
        lea eax, ss:[esp+esi*4+0x24]
        push eax
        call dword ptr ds : [public_5c709c]
        add esp, 0xC
        public_59e473 : nop
        mov dword ptr ss : [esp+esi*4+0x18], ebx
        jmp public_59e485
        public_59e479 : nop
        cmp edx, 0x400
        jae public_59e48e
        mov dword ptr ss : [esp+edx*4+0x18], ebx
        public_59e485 : nop
        mov edx, dword ptr ss : [esp+0x14]
        inc edx
        mov dword ptr ss : [esp+0x14], edx
        public_59e48e : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_59e3d5
        pop ebp
        pop ebx
        public_59e49f : nop
        xor edi, edi
        public_59e4a1 : nop
        xor esi, esi
        test edx, edx
        jle public_59e4be
        public_59e4a7 : nop
        mov ecx, dword ptr ss : [esp+esi*4+0x10]
        cmp dword ptr ds : [ecx+0x78], edi
        jne public_59e4b9
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x34]
        mov edx, dword ptr ss : [esp+0xC]
        public_59e4b9 : nop
        inc esi
        cmp esi, edx
        jl public_59e4a7
        public_59e4be : nop
        inc edi
        cmp edi, 8
        jl public_59e4a1
        call public_559c20
        call public_5a2a20
        call public_417f10
        call public_563af0
        call public_41f150
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        pop edi
        pop esi
        public_59e4f0 : nop
        add esp, 0x1008
        ret 
        UNREACHABLE_TRAP(0x59e300)
    }
}

#undef public_59e3d5
#undef public_59e3e0
#undef public_59e414
#undef public_59e430
#undef public_59e448
#undef public_59e450
#undef public_59e454
#undef public_59e473
#undef public_59e479
#undef public_59e485
#undef public_59e48e
#undef public_59e49f
#undef public_59e4a1
#undef public_59e4a7
#undef public_59e4b9
#undef public_59e4be
#undef public_59e4f0
