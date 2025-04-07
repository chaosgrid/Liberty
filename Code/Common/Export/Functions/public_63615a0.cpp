#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522a0);
CLANG_FORWARD_PROC_SYMBOL(public_63615a0);
CLANG_FORWARD_PROC_SYMBOL(public_63617b0);
CLANG_FORWARD_PROC_SYMBOL(public_6361e00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63983f7);

#define public_6361619 _public_6361619
#define public_636161b _public_636161b
#define public_636164c _public_636164c
#define public_636164e _public_636164e
#define public_6361676 _public_6361676
#define public_6361678 _public_6361678

PROC_DECLARE(0x63615a0, internal_63615a0, public_63615a0);
extern "C" NAKED register_t __cdecl internal_63615a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63983f7 @0x63615a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63983f7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov word ptr ds : [esi+0x10], bp
        mov word ptr ds : [esi+0x12], bp
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov word ptr ds : [esi+0x18], bp
        mov word ptr ds : [esi+0x1A], bp
        mov dword ptr ds : [esi+0x1C], ebp
        mov eax, dword ptr ss : [esp+0x24]
        mov bl, 1
        push 0x10
        mov byte ptr ss : [esp+0x20], bl
        mov dword ptr ds : [esi], offset public_63a57ac
        mov dword ptr ds : [esi+4], eax
        call public_6391d9c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebp
        mov byte ptr ss : [esp+0x1C], 2
        je public_6361619
        push 0x10
        mov ecx, edi
        call public_63522a0
        mov dword ptr ds : [edi], offset public_63a57a4
        jmp public_636161b
        public_6361619 : nop
        xor edi, edi
        public_636161b : nop
        push 0x10
        mov byte ptr ss : [esp+0x20], bl
        mov dword ptr ds : [esi+8], edi
        call public_6391d9c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebp
        mov byte ptr ss : [esp+0x1C], 3
        je public_636164c
        push 0x10
        mov ecx, edi
        call public_63522a0
        mov dword ptr ds : [edi], offset public_63a57a4
        jmp public_636164e
        public_636164c : nop
        xor edi, edi
        public_636164e : nop
        push 0xC
        mov byte ptr ss : [esp+0x20], bl
        mov dword ptr ds : [esi+0xC], edi
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        cmp eax, ebp
        mov byte ptr ss : [esp+0x1C], 4
        je public_6361676
        push ebp
        mov ecx, eax
        call public_6361e00
        jmp public_6361678
        public_6361676 : nop
        xor eax, eax
        public_6361678 : nop
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], bl
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x20], ebp
        call public_63617b0
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x63615a0)
    }
}

#undef public_6361619
#undef public_636161b
#undef public_636164c
#undef public_636164e
#undef public_6361676
#undef public_6361678
