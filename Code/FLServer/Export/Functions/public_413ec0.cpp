#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413ec0);
CLANG_FORWARD_PROC_SYMBOL(public_414650);
CLANG_FORWARD_PROC_SYMBOL(public_415180);
CLANG_FORWARD_PROC_SYMBOL(public_4152d0);
CLANG_FORWARD_PROC_SYMBOL(public_4153b0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_JUMP_SYMBOL(public_41a93a);

#define public_413f15 _public_413f15
#define public_413f24 _public_413f24
#define public_413f7e _public_413f7e
#define public_413f8a _public_413f8a

PROC_DECLARE(0x413ec0, internal_413ec0, public_413ec0);
extern "C" NAKED register_t __cdecl internal_413ec0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a93a @0x413ec2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a93a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_41e2e0
        lea edi, ds:[esi+0x60]
        push edi
        mov ecx, offset public_4294ec
        mov dword ptr ss : [esp+0x28], 4
        call public_4152d0
        push edi
        mov ecx, offset public_4294ec
        mov ebp, eax
        call public_415180
        mov ebx, eax
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x10], ebx
        je public_413f24
        public_413f15 : nop
        lea ecx, ss:[esp+0x10]
        call public_4153b0
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_413f15
        public_413f24 : nop
        push ebp
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_4294ec
        call public_414650
        lea ecx, ds:[esi+0xF0]
        mov byte ptr ss : [esp+0x24], 3
        call public_418c24
        lea ecx, ds:[esi+0xB0]
        mov byte ptr ss : [esp+0x24], 2
        call public_418c24
        lea ecx, ds:[esi+0x70]
        mov byte ptr ss : [esp+0x24], 1
        call public_418c24
        mov eax, dword ptr ds : [edi+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_413f8a
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_413f7e
        cmp cl, 0xFF
        je public_413f7e
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_413f8a
        public_413f7e : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_413f8a : nop
        mov ecx, esi
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_418a98
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x413ec0)
    }
}

#undef public_413f15
#undef public_413f24
#undef public_413f7e
#undef public_413f8a
