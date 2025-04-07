#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac31f);

#define public_6ef4bf0 _public_6ef4bf0
#define public_6ef4c05 _public_6ef4c05
#define public_6ef4c33 _public_6ef4c33
#define public_6ef4c80 _public_6ef4c80
#define public_6ef4c99 _public_6ef4c99

PROC_DECLARE(0x6ef4bb0, internal_6ef4bb0, public_6ef4bb0);
extern "C" NAKED register_t __cdecl internal_6ef4bb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac31f @0x6ef4bb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac31f
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
        mov ebp, dword ptr ds : [esi+0x11C]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        lea ebx, ds:[esi+0x118]
        mov dword ptr ss : [esp+0x24], 2
        je public_6ef4c05
        lea ecx, ds:[ecx]
        public_6ef4bf0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_6ecfe80
        cmp edi, ebp
        jne public_6ef4bf0
        public_6ef4c05 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        xor ebp, ebp
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov ecx, dword ptr ds : [esi+0xFC]
        add esp, 4
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x24], 1
        je public_6ef4c33
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0xFC], ebp
        public_6ef4c33 : nop
        mov eax, dword ptr ds : [esi+0x84]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [esi+0x84], ebp
        mov dword ptr ds : [esi+0x88], ebp
        mov dword ptr ds : [esi+0x8C], ebp
        mov dword ptr ss : [esp+0x24], 3
        lea edi, ds:[esi+0x60]
        mov dword ptr ss : [esp+0x18], edi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 5
        call public_6f1df30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6ef4c99
        nop 
        public_6ef4c80 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ef4c80
        public_6ef4c99 : nop
        mov ecx, edi
        call public_6ecfec0
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        call public_6f15350
        mov eax, dword ptr ds : [esi+0x54]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x54], ebp
        mov dword ptr ds : [esi+0x58], ebp
        mov dword ptr ds : [esi+0x5C], ebp
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_6f28e10
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6ef4bb0)
    }
}

#undef public_6ef4bf0
#undef public_6ef4c05
#undef public_6ef4c33
#undef public_6ef4c80
#undef public_6ef4c99
