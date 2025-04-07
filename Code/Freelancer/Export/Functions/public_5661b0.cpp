#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5661b0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59ce40);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5c202a);

#define public_56620e _public_56620e
#define public_566218 _public_566218
#define public_56624d _public_56624d
#define public_56624f _public_56624f
#define public_566278 _public_566278
#define public_566286 _public_566286

PROC_DECLARE(0x5661b0, internal_5661b0, public_5661b0);
extern "C" NAKED register_t __cdecl internal_5661b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c202a @0x5661b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c202a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+0x54C]
        test eax, eax
        mov dword ptr ss : [esp+0x18], 2
        je public_566218
        push eax
        call dword ptr ds : [public_5c6f08]
        test eax, eax
        jne public_56620e
        call dword ptr ds : [public_5c6f04]
        push eax
/*FIXUP push offset public_5e27a0 @0x5661f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e27a0
        push 2
        push 0x17ED
/*FIXUP push offset public_5e2724 @0x566200*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2724
        call dword ptr ds : [public_5c6bd0]
        add esp, 0x14
        public_56620e : nop
        mov dword ptr ds : [esi+0x54C], 0
/*FIXUP public_566218 : nop
        push offset _public_59ce40 @0x566218*/
  FIXUP public_566218 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59ce40
        push 5
        push 0xF0
        lea eax, ds:[esi+0x84]
        push eax
        mov dword ptr ds : [esi+0x550], 0
        mov byte ptr ss : [esp+0x28], 1
        call public_5b7ec6
        test esi, esi
        mov byte ptr ss : [esp+0x18], 0
        je public_56624d
        lea ecx, ds:[esi+0x7C]
        jmp public_56624f
        public_56624d : nop
        xor ecx, ecx
        public_56624f : nop
        call public_576010
        mov dword ptr ds : [esi], offset public_5d5544
        dec dword ptr ds : [public_67dcd4]
        mov cl, byte ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [esi+0xC]
        and cl, 0xFC
        test edi, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x6C], cl
        je public_566286
        public_566278 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_566278
        public_566286 : nop
        push esi
        call public_59dc00
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x5661b0)
    }
}

#undef public_56620e
#undef public_566218
#undef public_56624d
#undef public_56624f
#undef public_566278
#undef public_566286
