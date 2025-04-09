#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4058e0);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_4e0cd0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5760);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5be7cc);

#define public_4e0d47 _public_4e0d47
#define public_4e0d58 _public_4e0d58
#define public_4e0dd3 _public_4e0dd3
#define public_4e0df7 _public_4e0df7
#define public_4e0ec8 _public_4e0ec8

PROC_DECLARE(0x4e0cd0, internal_4e0cd0, public_4e0cd0);
extern "C" NAKED register_t __cdecl internal_4e0cd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be7cc @0x4e0cd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be7cc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [esi], offset public_5d896c
        mov dword ptr ds : [esi+0x38], offset public_5d88b4
        mov dword ptr ds : [esi+0xB4], offset public_5d88a4
        mov dword ptr ds : [esi+0x364], offset public_5d8898
        mov dword ptr ds : [esi+0x384], offset public_5d8890
        mov dword ptr ds : [esi+0x4E0], offset public_5d89b4
        xor ebp, ebp
        mov dword ptr ds : [public_674b04], ebp
        mov ebx, dword ptr ds : [esi+0x584]
        mov edi, dword ptr ds : [esi+0x580]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x34], 3
        je public_4e0d58
        public_4e0d47 : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c7084]
        add edi, 0x10
        cmp edi, ebx
        jne public_4e0d47
        public_4e0d58 : nop
        mov eax, dword ptr ds : [esi+0x580]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+0x580], ebp
        mov dword ptr ds : [esi+0x584], ebp
        mov dword ptr ds : [esi+0x588], ebp
        mov eax, dword ptr ds : [esi+0x564]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x560]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x40], 2
        call public_4e5760
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+0x10], ebp
        call public_5b7e1d
        mov dword ptr ds : [edi+8], ebp
        mov ebx, dword ptr ds : [esi+0x52C]
        mov eax, dword ptr ds : [ebx]
        lea edi, ds:[esi+0x528]
        add esp, 8
        cmp eax, ebx
        mov byte ptr ss : [esp+0x34], 1
        mov dword ptr ss : [esp+0x18], eax
        je public_4e0df7
        public_4e0dd3 : nop
        push ebp
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_53ab20
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_46d680
        cmp dword ptr ss : [esp+0x18], ebx
        jne public_4e0dd3
        public_4e0df7 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov eax, dword ptr ds : [esi+0x4E8]
        push eax
        call public_5b7e1d
        add esp, 8
        mov dword ptr ds : [esi+0x4E8], ebp
        mov dword ptr ds : [esi+0x4EC], ebp
        mov dword ptr ds : [esi+0x4F0], ebp
        mov ebx, 4
        mov dword ptr ss : [esp+0x34], ebx
        lea edi, ds:[esi+0x3B8]
        mov dword ptr ss : [esp+0x28], edi
        lea ecx, ds:[edi+0xC0]
        push ebp
        mov byte ptr ss : [esp+0x38], 0xA
        call dword ptr ds : [public_5c645c]
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], 9
        mov dword ptr ds : [edi], offset public_5c8944
        call public_401e90
        lea ecx, ds:[esi+0x3A0]
        mov byte ptr ss : [esp+0x34], 8
        call public_4058e0
        lea ecx, ds:[esi+0x398]
        push ebp
        mov byte ptr ss : [esp+0x38], 7
        call dword ptr ds : [public_5c645c]
        lea ecx, ds:[esi+0x384]
        mov byte ptr ss : [esp+0x34], 6
        call public_576010
        lea ecx, ds:[esi+0x368]
        mov byte ptr ss : [esp+0x34], 5
        call public_4de730
        lea ecx, ds:[esi+0x38]
        mov byte ptr ss : [esp+0x34], bl
        call public_59fa50
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [esi], offset public_5d6eac
        cmp dword ptr ds : [ecx], ebp
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        je public_4e0ec8
        push ebp
        call dword ptr ds : [public_5c62a8]
        public_4e0ec8 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x4e0cd0)
    }
}

#undef public_4e0d47
#undef public_4e0d58
#undef public_4e0dd3
#undef public_4e0df7
#undef public_4e0ec8
