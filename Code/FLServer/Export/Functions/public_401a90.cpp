#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401a90);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_JUMP_SYMBOL(public_419aef);

#define public_401ad3 _public_401ad3
#define public_401adf _public_401adf
#define public_401bde _public_401bde
#define public_401bf7 _public_401bf7
#define public_401c09 _public_401c09
#define public_401c0b _public_401c0b
#define public_401c1c _public_401c1c

PROC_DECLARE(0x401a90, internal_401a90, public_401a90);
extern "C" NAKED register_t __cdecl internal_401a90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419aef @0x401a92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419aef
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        xor ebx, ebx
        mov ebp, ecx
        mov dword ptr ss : [esp+8], ebx
        cmp byte ptr ss : [ebp+0x9AC], bl
        push esi
        je public_401adf
        mov eax, dword ptr ss : [ebp+0x76C]
        cmp eax, ebx
        je public_401ad3
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+4]
        lea ecx, ds:[edx+eax]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_401ad3 : nop
        mov dword ptr ss : [ebp+0x76C], ebx
        mov byte ptr ss : [ebp+0x9AC], bl
        public_401adf : nop
        push 0x8C
        mov byte ptr ss : [ebp+0x9AC], bl
        call public_418a9e
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], ebx
        je public_401c09
        mov ecx, dword ptr ds : [public_41b890]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+0x7C], ebx
        mov edx, dword ptr ds : [public_41b830]
        mov dword ptr ds : [esi+0x58], edx
        mov eax, dword ptr ds : [public_41b88c]
        push edi
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ss : [esp+0x10], 1
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_41b888]
        mov dword ptr ds : [esi+edx], eax
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+4]
        push ebx
        lea edi, ds:[esi+4]
        push edi
        add ecx, esi
        mov byte ptr ss : [esp+0x2C], 1
        call dword ptr ds : [public_41b884]
        lea ecx, ds:[edi+0x34]
        mov dword ptr ss : [esp+0x24], 3
        mov dword ptr ss : [esp+0x18], edi
        call dword ptr ds : [public_41b82c]
        mov edx, dword ptr ds : [public_41b834]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        mov dword ptr ds : [edi], edx
        call dword ptr ds : [public_41b838]
        lea ecx, ds:[edi+0x4C]
        call dword ptr ds : [public_41b82c]
        mov eax, dword ptr ds : [public_41b83c]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 6
        mov dword ptr ds : [edi], eax
        call dword ptr ds : [public_41b840]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_41b848]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+edx], eax
        cmp dword ptr ds : [edi+0x50], ebx
        mov byte ptr ss : [esp+0x24], 7
        jne public_401bde
        mov ecx, dword ptr ss : [esp+0x2C]
        push 2
        push ecx
        call dword ptr ds : [public_41b84c]
        add esp, 8
        cmp eax, ebx
        je public_401bde
        push 1
        push eax
        mov ecx, edi
        call dword ptr ds : [public_41b840]
        mov ecx, edi
        call dword ptr ds : [public_41b850]
        mov dword ptr ds : [esi+0x58], offset public_41c070
        pop edi
        jmp public_401c0b
        public_401bde : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+esi+4]
        mov edx, dword ptr ds : [ecx+esi+0x28]
        add ecx, esi
        or eax, 2
        cmp edx, ebx
        jne public_401bf7
        or eax, 4
        public_401bf7 : nop
        push ebx
        push eax
        call dword ptr ds : [public_41b854]
        mov dword ptr ds : [esi+0x58], offset public_41c070
        pop edi
        jmp public_401c0b
        public_401c09 : nop
        xor esi, esi
        public_401c0b : nop
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x76C], esi
        je public_401c1c
        mov byte ptr ss : [ebp+0x9AC], 1
        public_401c1c : nop
        mov al, byte ptr ss : [ebp+0x9AC]
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x401a90)
    }
}

#undef public_401ad3
#undef public_401adf
#undef public_401bde
#undef public_401bf7
#undef public_401c09
#undef public_401c0b
#undef public_401c1c
