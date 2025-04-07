#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f25320);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b370);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bf30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bf90);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cce0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58468);

#define public_6f25141 _public_6f25141
#define public_6f2518b _public_6f2518b
#define public_6f251a1 _public_6f251a1
#define public_6f251da _public_6f251da
#define public_6f2520b _public_6f2520b
#define public_6f252c2 _public_6f252c2
#define public_6f25304 _public_6f25304
#define public_6f25306 _public_6f25306

PROC_DECLARE(0x6f250e0, internal_6f250e0, public_6f250e0);
extern "C" NAKED register_t __cdecl internal_6f250e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58468 @0x6f250e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58468
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x58
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x74]
        xor ebx, ebx
        cmp esi, ebx
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f25304
        mov dword ptr ss : [esp+0x78], ebx
        mov eax, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi]
        push ebx
        push ebx
        push esi
        mov dword ptr ss : [esp+0x7C], ebx
        call dword ptr ds : [ecx+0x28]
        mov edi, eax
        cmp edi, 1
        lea eax, ds:[edi+1]
        jae public_6f25141
/*FIXUP push offset public_6f5e944 @0x6f25132*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e944
        push 0x481
        jmp public_6f251da
        public_6f25141 : nop
        push eax
        call public_6f57e9c
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push ebx
        lea edx, ss:[esp+0x7C]
        push edx
        push edi
        mov ebp, eax
        push ebp
        push ebx
        push esi
        call dword ptr ds : [ecx+0x14]
        cmp edi, dword ptr ss : [esp+0x78]
        je public_6f251a1
/*FIXUP push offset public_6f5e944 @0x6f25161*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e944
        push 0x489
/*FIXUP push offset public_6f5e730 @0x6f2516b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e730
        mov eax, 0x100001
/*FIXUP push offset public_6f5e710 @0x6f25175*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e710
        push eax
        mov eax, dword ptr ds : [public_6f5a004]
        call dword ptr ds : [eax]
        push ebp
        call public_6f57e26
        add esp, 0x18
        public_6f2518b : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call dword ptr ds : [ecx+8]
        or eax, 0xFFFFFFFF
        jmp public_6f25306
        public_6f251a1 : nop
        mov edx, dword ptr ds : [esi]
        push 0x50
        lea eax, ss:[esp+0x1C]
        push eax
        push esi
        call dword ptr ds : [edx+0x84]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        push ebp
        mov byte ptr ss : [esp+0x73], bl
        call public_6f4cce0
        push ebp
        mov edi, eax
        call public_6f57e26
        add esp, 0x10
        cmp edi, ebx
        je public_6f2520b
/*FIXUP push offset public_6f5e928 @0x6f251d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e928
        push 0x497
        public_6f251da : nop
        mov edx, dword ptr ds : [public_6f5a004]
/*FIXUP push offset public_6f5e730 @0x6f251e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e730
        mov eax, 0x100001
/*FIXUP push offset public_6f5e710 @0x6f251ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e710
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi]
        add esp, 0x14
        push esi
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call dword ptr ds : [eax+8]
        or eax, 0xFFFFFFFF
        jmp public_6f25306
        public_6f2520b : nop
        mov dword ptr ds : [public_6f61e04], ebx
        call public_6f4bf30
/*FIXUP push offset public_6f5e91c @0x6f25216*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e91c
        call public_6f4b370
        mov edi, eax
        push edi
        call public_6f4b410
        add esp, 8
        test eax, eax
        jne public_6f2518b
        push edi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2518b
        push edi
        call public_6f4b900
        push ebx
/*FIXUP push offset _public_6f25320 @0x6f2524b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f25320
        call public_6f4b7c0
/*FIXUP push offset public_6f5e914 @0x6f25255*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e914
        call public_6f4b370
        push eax
        call public_6f4b0b0
        mov ecx, dword ptr ds : [public_6f61e04]
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp+4], ecx
/*FIXUP push offset public_6f5e90c @0x6f25272*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e90c
        mov dword ptr ds : [public_6f61e04], ebx
        call public_6f4b370
        mov edi, eax
        push edi
        call public_6f4b410
        add esp, 0x1C
        test eax, eax
        jne public_6f252c2
        push edi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f252c2
        push edi
        call public_6f4b900
        push ebx
/*FIXUP push offset _public_6f25320 @0x6f252a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f25320
        call public_6f4b7c0
/*FIXUP push offset public_6f5e914 @0x6f252af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e914
        call public_6f4b370
        push eax
        call public_6f4b0b0
        add esp, 0x14
        public_6f252c2 : nop
        mov edx, dword ptr ds : [public_6f61e04]
/*FIXUP push offset public_6f5e900 @0x6f252c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e900
        mov dword ptr ss : [ebp+8], edx
        call public_6f4b370
        push eax
        call public_6f4b540
        fmul qword ptr ds : [public_6f5a220]
        add esp, 8
        call public_6f57f16
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ds : [public_6f61df8], eax
        call public_6f4bf90
        mov eax, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call dword ptr ds : [eax+8]
        public_6f25304 : nop
        xor eax, eax
        public_6f25306 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 4
        UNREACHABLE_TRAP(0x6f250e0)
    }
}

#undef public_6f25141
#undef public_6f2518b
#undef public_6f251a1
#undef public_6f251da
#undef public_6f2520b
#undef public_6f252c2
#undef public_6f25304
#undef public_6f25306
