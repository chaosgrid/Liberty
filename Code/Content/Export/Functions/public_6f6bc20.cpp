#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f6bc20);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafe48);

#define public_6f6bc70 _public_6f6bc70
#define public_6f6bc82 _public_6f6bc82
#define public_6f6bc92 _public_6f6bc92
#define public_6f6bc99 _public_6f6bc99
#define public_6f6bccd _public_6f6bccd
#define public_6f6bcd6 _public_6f6bcd6
#define public_6f6bce2 _public_6f6bce2
#define public_6f6bcf0 _public_6f6bcf0
#define public_6f6bd0e _public_6f6bd0e
#define public_6f6bd40 _public_6f6bd40
#define public_6f6bd70 _public_6f6bd70
#define public_6f6bd8c _public_6f6bd8c

PROC_DECLARE(0x6f6bc20, internal_6f6bc20, public_6f6bc20);
extern "C" NAKED register_t __cdecl internal_6f6bc20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafe48 @0x6f6bc22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafe48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        mov byte ptr ss : [esp+0x1C], al
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov esi, dword ptr ds : [public_6fd1c8c]
        mov eax, dword ptr ds : [public_6fd1c90]
        cmp esi, eax
        mov dword ptr ss : [esp+0x34], ebx
        je public_6f6bce2
        mov ebp, dword ptr ds : [public_6fb3588]
        nop 
        lea esp, ss:[esp]
        public_6f6bc70 : nop
        mov edi, dword ptr ds : [public_6fd1c9c]
        mov ecx, dword ptr ds : [public_6fd1ca0]
        cmp edi, ecx
        je public_6f6bc99
        mov eax, dword ptr ds : [esi]
        public_6f6bc82 : nop
        cmp dword ptr ds : [edi], eax
        jne public_6f6bc92
        mov edx, dword ptr ds : [edi+4]
        cmp edx, dword ptr ds : [esi+4]
        je public_6f6bd8c
        public_6f6bc92 : nop
        add edi, 0xC
        cmp edi, ecx
        jne public_6f6bc82
        public_6f6bc99 : nop
        mov ecx, dword ptr ds : [esi+4]
        xor edx, edx
        mov dl, byte ptr ds : [esi+8]
        push ecx
        push edx
        push esi
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_6f6bcd6
        mov eax, dword ptr ds : [public_6fd1ca0]
        push esi
        push 1
        push eax
        mov ecx, offset public_6fd1c98
        call public_6f6f3e0
        cmp byte ptr ds : [esi+8], bl
        je public_6f6bcd6
        mov ecx, dword ptr ss : [esp+0x24]
        push esi
        push 1
        push ecx
        public_6f6bccd : nop
        lea ecx, ss:[esp+0x28]
        call public_6f937c0
        public_6f6bcd6 : nop
        mov eax, dword ptr ds : [public_6fd1c90]
        add esi, 0xC
        cmp esi, eax
        jne public_6f6bc70
        public_6f6bce2 : nop
        mov esi, dword ptr ds : [public_6fd1c8c]
        mov ecx, eax
        cmp eax, ecx
        je public_6f6bd0e
        mov edi, edi
        public_6f6bcf0 : nop
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov edi, esi
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebp
        mov edx, dword ptr ds : [edx+8]
        add eax, 0xC
        add esi, 0xC
        cmp eax, ecx
        mov dword ptr ds : [edi+8], edx
        jne public_6f6bcf0
        public_6f6bd0e : nop
        mov eax, dword ptr ds : [public_6fd1c90]
        push eax
        push esi
        mov ecx, offset public_6fd1c88
        call public_6ea1490
        mov dword ptr ds : [public_6fd1c90], esi
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, ebx
        je public_6f6bd70
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, ecx
        sub eax, esi
        sar eax, 2
        cmp eax, ebx
        je public_6f6bd70
        cmp esi, ecx
        je public_6f6bd70
        public_6f6bd40 : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x1C]
        push 0x1007
        push eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], ebx
        call public_6f24070
        mov eax, dword ptr ss : [esp+0x30]
        add esi, 4
        add esp, 0xC
        cmp esi, eax
        jne public_6f6bd40
        mov esi, dword ptr ss : [esp+0x20]
        public_6f6bd70 : nop
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        public_6f6bd8c : nop
        mov cl, byte ptr ds : [edi+8]
        xor eax, eax
        mov al, byte ptr ds : [esi+8]
        cmp cl, al
        je public_6f6bcd6
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push eax
        push esi
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_6f6bcd6
        mov dl, byte ptr ds : [esi+8]
        mov byte ptr ds : [edi+8], dl
        cmp byte ptr ds : [esi+8], bl
        je public_6f6bcd6
        mov eax, dword ptr ss : [esp+0x24]
        push esi
        push 1
        push eax
        jmp public_6f6bccd
        UNREACHABLE_TRAP(0x6f6bc20)
    }
}

#undef public_6f6bc70
#undef public_6f6bc82
#undef public_6f6bc92
#undef public_6f6bc99
#undef public_6f6bccd
#undef public_6f6bcd6
#undef public_6f6bce2
#undef public_6f6bcf0
#undef public_6f6bd0e
#undef public_6f6bd40
#undef public_6f6bd70
#undef public_6f6bd8c
