#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7230);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f34680);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faebde);

#define public_6f346e3 _public_6f346e3
#define public_6f346f8 _public_6f346f8
#define public_6f34725 _public_6f34725
#define public_6f34742 _public_6f34742
#define public_6f34768 _public_6f34768
#define public_6f3478a _public_6f3478a

PROC_DECLARE(0x6f34680, internal_6f34680, public_6f34680);
extern "C" NAKED register_t __cdecl internal_6f34680()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faebde @0x6f34682*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faebde
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
        mov dword ptr ds : [esi], offset public_6fb95a0
        mov dword ptr ds : [esi+0x118], offset public_6fb959c
        mov dword ptr ds : [esi+0x174], offset public_6fb9574
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], 2
        call dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [esi+0x180]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        lea ebp, ds:[esi+0x17C]
        mov byte ptr ss : [esp+0x28], 1
        je public_6f346f8
        public_6f346e3 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebp
        call public_6ecfe80
        cmp edi, ebx
        jne public_6f346e3
        public_6f346f8 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        xor ebx, ebx
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov ecx, dword ptr ds : [esi+0x178]
        add esp, 4
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x28], bl
        je public_6f34725
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x178], ebx
        public_6f34725 : nop
        mov ecx, dword ptr ds : [esi+0x16C]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x28], 6
        je public_6f34742
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x16C], ebx
        public_6f34742 : nop
        lea edi, ds:[esi+0x158]
        mov dword ptr ss : [esp+0x18], edi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 7
        call public_6f1df30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6f3478a
        public_6f34768 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jne public_6f34768
        public_6f3478a : nop
        mov ecx, edi
        call public_6ecfec0
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 5
        call public_6f15350
        mov eax, dword ptr ds : [esi+0x140]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x140], ebx
        mov dword ptr ds : [esi+0x144], ebx
        mov dword ptr ds : [esi+0x148], ebx
        mov eax, dword ptr ds : [esi+0x12C]
        push eax
        call public_6fa8fe0
        add esp, 8
        mov ecx, esi
        mov dword ptr ds : [esi+0x12C], ebx
        mov dword ptr ds : [esi+0x130], ebx
        mov dword ptr ds : [esi+0x134], ebx
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
        UNREACHABLE_TRAP(0x6f34680)
    }
}

#undef public_6f346e3
#undef public_6f346f8
#undef public_6f34725
#undef public_6f34742
#undef public_6f34768
#undef public_6f3478a
