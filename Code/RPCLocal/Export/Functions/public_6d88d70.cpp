#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8cad0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8cb20);
CLANG_FORWARD_PROC_SYMBOL(public_6d901f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d92710);
CLANG_FORWARD_PROC_SYMBOL(public_6d92760);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db2518);

#define public_6d88dd3 _public_6d88dd3
#define public_6d88de4 _public_6d88de4
#define public_6d88e12 _public_6d88e12
#define public_6d88e22 _public_6d88e22
#define public_6d88e81 _public_6d88e81
#define public_6d88ed0 _public_6d88ed0
#define public_6d88f05 _public_6d88f05
#define public_6d88f19 _public_6d88f19
#define public_6d88f1f _public_6d88f1f
#define public_6d88f30 _public_6d88f30
#define public_6d88f4b _public_6d88f4b
#define public_6d88f58 _public_6d88f58

PROC_DECLARE(0x6d88d70, internal_6d88d70, public_6d88d70);
extern "C" NAKED register_t __cdecl internal_6d88d70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db2518 @0x6d88d72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db2518
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        lea eax, ss:[esp]
        push eax
        push 0x29
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [ecx+8]
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d88f58
        mov ecx, dword ptr ss : [esp]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x58], eax
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+0x5C], eax
        mov ebp, dword ptr ds : [esi+0x18]
        test ebp, ebp
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[eax+0x20]
        mov ebx, 6
        je public_6d88de4
        public_6d88dd3 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6db30e0]
        mov ebp, dword ptr ss : [ebp]
        add ebx, eax
        test ebp, ebp
        jne public_6d88dd3
        public_6d88de4 : nop
        push ebx
        mov dword ptr ds : [edi], ebx
        call public_6db1f8a
        mov ecx, dword ptr ds : [edi]
        add esp, 4
        push ecx
        push eax
        lea ecx, ds:[esi+0x18]
        mov dword ptr ds : [edi+4], eax
        call dword ptr ds : [public_6db30dc]
        mov edi, dword ptr ds : [esi+0x30]
        test edi, edi
        mov edx, dword ptr ss : [esp+0x10]
        lea ebp, ds:[edx+0x28]
        mov ebx, 6
        je public_6d88e22
        public_6d88e12 : nop
        mov ecx, edi
        call dword ptr ds : [public_6db30e0]
        mov edi, dword ptr ds : [edi]
        add ebx, eax
        test edi, edi
        jne public_6d88e12
        public_6d88e22 : nop
        push ebx
        mov dword ptr ss : [ebp], ebx
        call public_6db1f8a
        mov ecx, dword ptr ss : [ebp]
        add esp, 4
        push ecx
        push eax
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6db30dc]
        lea edi, ds:[esi+0x48]
        push edi
        call dword ptr ds : [public_6db31ec]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        push eax
        push edi
        call public_6d92710
        mov dl, byte ptr ss : [esp+0x3C]
        xor ebx, ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], dl
        call public_6d8cb20
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov al, byte ptr ds : [esi+0x14]
        xor edi, edi
        test al, al
        mov dword ptr ss : [esp+0x30], ebx
        jbe public_6d88ed0
        public_6d88e81 : nop
        push 8
        call public_6db1f8a
        mov edx, dword ptr ds : [esi+0x10]
        xor ecx, ecx
        mov cx, di
        mov dword ptr ss : [esp+0x40], eax
        add esp, 4
        shl ecx, 3
        mov edx, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax+ecx+4]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x3C]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6d8cad0
        movzx ax, byte ptr ds : [esi+0x14]
        inc edi
        cmp di, ax
        jb public_6d88e81
        public_6d88ed0 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_6d92760
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x30], edx
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        call dword ptr ds : [edx+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d88f1f
        public_6d88f05 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_6d88f19
        push ecx
        call public_6db1dc2
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        public_6d88f19 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6d88f05
        public_6d88f1f : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov edi, eax
        je public_6d88f4b
        nop 
        public_6d88f30 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6d901f0
        cmp esi, edi
        jne public_6d88f30
        mov eax, dword ptr ss : [esp+0x20]
        public_6d88f4b : nop
        push eax
        call public_6db1dc2
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6d88f58 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x6d88d70)
    }
}

#undef public_6d88dd3
#undef public_6d88de4
#undef public_6d88e12
#undef public_6d88e22
#undef public_6d88e81
#undef public_6d88ed0
#undef public_6d88f05
#undef public_6d88f19
#undef public_6d88f1f
#undef public_6d88f30
#undef public_6d88f4b
#undef public_6d88f58
