#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9af0);
CLANG_FORWARD_PROC_SYMBOL(public_6eba030);
CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f488b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a820);
CLANG_FORWARD_JUMP_SYMBOL(public_6faafe9);

#define public_6eba10c _public_6eba10c
#define public_6eba13a _public_6eba13a
#define public_6eba160 _public_6eba160
#define public_6eba16e _public_6eba16e
#define public_6eba1bb _public_6eba1bb
#define public_6eba1d0 _public_6eba1d0

PROC_DECLARE(0x6eba030, internal_6eba030, public_6eba030);
extern "C" NAKED register_t __cdecl internal_6eba030()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faafe9 @0x6eba038*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faafe9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        mov al, byte ptr ss : [ebp+8]
        push esi
        xor ebx, ebx
        cmp al, bl
        push edi
        mov esi, ecx
        je public_6eba1bb
        lea edi, ds:[esi+0xC]
        push edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eba1bb
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        push 1
        push 0xA
        lea eax, ss:[esp+0x18]
        push eax
        push edi
        mov dword ptr ss : [esp+0x40], ebx
        call dword ptr ds : [public_6fb369c]
        add esp, 0x10
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        push ebp
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], 0x2C
        call public_6eb9af0
        mov ecx, dword ptr ds : [esi+0x2A4]
        cmp ecx, ebx
        je public_6eba10c
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [esi+0x2B8]
        push eax
        push 1
        call dword ptr ds : [edx]
        public_6eba10c : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_6f487c0
        mov edi, eax
        test edi, 0x3FFFFFFF
        je public_6eba13a
        cmp edi, dword ptr ds : [esi+4]
        je public_6eba13a
        push edi
        call dword ptr ds : [public_6fb3610]
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        push 1
        push 4
        push edi
        call public_6f48a20
        public_6eba13a : nop
        lea ebp, ds:[esi+0x2D4]
        mov byte ptr ds : [esi+0x2CC], bl
        mov byte ptr ds : [esi+0x2CD], bl
        mov dword ptr ds : [esi+0x2D0], ebx
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+4]
        mov eax, ecx
        cmp eax, ecx
        je public_6eba16e
        mov edi, edi
        public_6eba160 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        add eax, 4
        add edi, 4
        cmp eax, ecx
        jne public_6eba160
        public_6eba16e : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        push edi
        mov ecx, ebp
        call public_6ea1490
        mov dword ptr ss : [ebp+8], edi
        push ebx
        mov byte ptr ds : [public_6fd1c78], 1
        call public_6f5a820
        add esp, 4
        lea ecx, ss:[esp+0x38]
        mov byte ptr ds : [public_6fd1c79], 1
        call dword ptr ds : [public_6fb3030]
        mov ecx, dword ptr ds : [esi+0x2C4]
        mov eax, dword ptr ds : [esi+4]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        push 1
        lea edx, ss:[esp+0x40]
        push edx
        push ebx
        push eax
        call public_6f488b0
        jmp public_6eba1d0
        public_6eba1bb : nop
        push ebp
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], 0x2C
        call public_6eb9af0
        public_6eba1d0 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6eba030)
    }
}

#undef public_6eba10c
#undef public_6eba13a
#undef public_6eba160
#undef public_6eba16e
#undef public_6eba1bb
#undef public_6eba1d0
