#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7230);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f472e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faef52);

#define public_6f47320 _public_6f47320
#define public_6f47335 _public_6f47335
#define public_6f47366 _public_6f47366
#define public_6f47390 _public_6f47390
#define public_6f473b2 _public_6f473b2

PROC_DECLARE(0x6f472e0, internal_6f472e0, public_6f472e0);
extern "C" NAKED register_t __cdecl internal_6f472e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faef52 @0x6f472e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faef52
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov ebp, dword ptr ds : [esi+0x184]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        lea ebx, ds:[esi+0x180]
        mov dword ptr ss : [esp+0x28], 0
        je public_6f47335
        lea ecx, ds:[ecx]
        public_6f47320 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_6ecfe80
        cmp edi, ebp
        jne public_6f47320
        public_6f47335 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        xor ebp, ebp
        add esp, 4
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov ecx, dword ptr ds : [esi+0x16C]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x28], 4
        je public_6f47366
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x16C], ebp
        public_6f47366 : nop
        lea edi, ds:[esi+0x158]
        mov dword ptr ss : [esp+0x18], edi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 5
        call public_6f1df30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6f473b2
        lea esp, ss:[esp]
        public_6f47390 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        push ebp
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jne public_6f47390
        public_6f473b2 : nop
        mov ecx, edi
        call public_6ecfec0
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 3
        call public_6f15350
        mov eax, dword ptr ds : [esi+0x140]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x140], ebp
        mov dword ptr ds : [esi+0x144], ebp
        mov dword ptr ds : [esi+0x148], ebp
        mov eax, dword ptr ds : [esi+0x12C]
        push eax
        call public_6fa8fe0
        add esp, 8
        mov ecx, esi
        mov dword ptr ds : [esi+0x12C], ebp
        mov dword ptr ds : [esi+0x130], ebp
        mov dword ptr ds : [esi+0x134], ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_6eb7230
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f472e0)
    }
}

#undef public_6f47320
#undef public_6f47335
#undef public_6f47366
#undef public_6f47390
#undef public_6f473b2
