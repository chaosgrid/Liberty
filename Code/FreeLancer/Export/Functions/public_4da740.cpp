#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4058e0);
CLANG_FORWARD_PROC_SYMBOL(public_4da740);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5be5a2);

#define public_4da7b7 _public_4da7b7
#define public_4da7c8 _public_4da7c8
#define public_4da809 _public_4da809
#define public_4da820 _public_4da820
#define public_4da832 _public_4da832
#define public_4da8d6 _public_4da8d6
#define public_4da91a _public_4da91a

PROC_DECLARE(0x4da740, internal_4da740, public_4da740);
extern "C" NAKED register_t __cdecl internal_4da740()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be5a2 @0x4da742*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be5a2
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
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi], offset public_5d85bc
        mov dword ptr ds : [esi+0x38], offset public_5d8504
        mov dword ptr ds : [esi+0xB4], offset public_5d84f4
        mov dword ptr ds : [esi+0x364], offset public_5d84e8
        mov dword ptr ds : [esi+0x384], offset public_5d84e0
        mov dword ptr ds : [esi+0x4E0], offset public_5d84d4
        xor ebp, ebp
        mov dword ptr ds : [public_674aa0], ebp
        mov ebx, dword ptr ds : [esi+0x5E4]
        mov edi, dword ptr ds : [esi+0x5E0]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x28], 3
        je public_4da7c8
        public_4da7b7 : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c7084]
        add edi, 0x14
        cmp edi, ebx
        jne public_4da7b7
        public_4da7c8 : nop
        mov eax, dword ptr ds : [esi+0x5E0]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x5E0], ebp
        mov dword ptr ds : [esi+0x5E4], ebp
        mov dword ptr ds : [esi+0x5E8], ebp
        mov eax, dword ptr ds : [esi+0x5D0]
        add esp, 4
        cmp eax, ebp
        je public_4da809
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi+0x5D0], ebp
        mov dword ptr ds : [esi+0x5D4], ebp
        public_4da809 : nop
        mov ebx, dword ptr ds : [esi+0x594]
        mov edi, dword ptr ds : [esi+0x590]
        cmp edi, ebx
        mov byte ptr ss : [esp+0x28], 1
        je public_4da832
        mov edi, edi
        public_4da820 : nop
        push 1
        lea ecx, ds:[edi+0x10]
        call dword ptr ds : [public_5c7084]
        add edi, 0x24
        cmp edi, ebx
        jne public_4da820
        public_4da832 : nop
        mov eax, dword ptr ds : [esi+0x590]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x590], ebp
        mov dword ptr ds : [esi+0x594], ebp
        mov dword ptr ds : [esi+0x598], ebp
        mov eax, dword ptr ds : [esi+0x4E8]
        push eax
        call public_5b7e1d
        add esp, 8
        mov dword ptr ds : [esi+0x4E8], ebp
        mov dword ptr ds : [esi+0x4EC], ebp
        mov dword ptr ds : [esi+0x4F0], ebp
        mov ebx, 4
        mov dword ptr ss : [esp+0x28], ebx
        lea edi, ds:[esi+0x3B8]
        mov dword ptr ss : [esp+0x1C], edi
        lea ecx, ds:[edi+0xC0]
        push ebp
        mov byte ptr ss : [esp+0x2C], 0xA
        call dword ptr ds : [public_5c645c]
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 9
        mov dword ptr ds : [edi], offset public_5c8944
        call public_401e90
        lea ecx, ds:[esi+0x3A0]
        mov byte ptr ss : [esp+0x28], 8
        call public_4058e0
        mov eax, dword ptr ds : [esi+0x398]
        cmp eax, ebp
        mov edi, dword ptr ds : [public_5c62a8]
        lea ecx, ds:[esi+0x398]
        mov byte ptr ss : [esp+0x28], 7
        je public_4da8d6
        push ebp
        call edi
        public_4da8d6 : nop
        lea ecx, ds:[esi+0x384]
        mov byte ptr ss : [esp+0x28], 6
        call public_576010
        lea ecx, ds:[esi+0x368]
        mov byte ptr ss : [esp+0x28], 5
        call public_4de730
        lea ecx, ds:[esi+0x38]
        mov byte ptr ss : [esp+0x28], bl
        call public_59fa50
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [esi], offset public_5d6eac
        cmp dword ptr ds : [ecx], ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_4da91a
        push ebp
        call edi
        public_4da91a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x4da740)
    }
}

#undef public_4da7b7
#undef public_4da7c8
#undef public_4da809
#undef public_4da820
#undef public_4da832
#undef public_4da8d6
#undef public_4da91a
