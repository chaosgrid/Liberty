#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef0c90);
CLANG_FORWARD_PROC_SYMBOL(public_6f29c10);
CLANG_FORWARD_PROC_SYMBOL(public_6f2a240);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac068);

#define public_6ef0ccf _public_6ef0ccf
#define public_6ef0d26 _public_6ef0d26
#define public_6ef0d50 _public_6ef0d50
#define public_6ef0d5d _public_6ef0d5d
#define public_6ef0d61 _public_6ef0d61
#define public_6ef0d7c _public_6ef0d7c
#define public_6ef0d80 _public_6ef0d80
#define public_6ef0da2 _public_6ef0da2
#define public_6ef0da9 _public_6ef0da9

PROC_DECLARE(0x6ef0c90, internal_6ef0c90, public_6ef0c90);
extern "C" NAKED register_t __cdecl internal_6ef0c90()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fac068 @0x6ef0c98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac068
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        cmp eax, esi
        mov ebp, ecx
        jne public_6ef0ccf
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0xC
        public_6ef0ccf : nop
        xor ebx, ebx
        cmp eax, ebx
        je public_6ef0da9
        cmp esi, ebx
        je public_6ef0da9
        cmp dword ptr ss : [esp+0x34], ebx
        je public_6ef0da9
        mov dword ptr ss : [esp+0x30], eax
        mov al, byte ptr ss : [esp+0x34]
        push edi
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        mov dword ptr ss : [esp+0x30], ebx
        call public_6f6d2b0
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 8
        cmp ecx, esi
        je public_6ef0d7c
        public_6ef0d26 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+0x50]
        push eax
        push esi
        push ecx
        call public_6f29c10
        mov edi, dword ptr ss : [esp+0x20]
        add esp, 0xC
        cmp eax, ebx
        je public_6ef0da2
        mov edx, dword ptr ss : [esp+0x18]
        cmp edi, edx
        mov ecx, edi
        je public_6ef0d61
        lea esp, ss:[esp]
        public_6ef0d50 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6ef0d5d
        add ecx, 4
        cmp ecx, edx
        jne public_6ef0d50
        jmp public_6ef0d61
        public_6ef0d5d : nop
        cmp ecx, edx
        jne public_6ef0da2
        public_6ef0d61 : nop
        mov edx, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        push edx
        call public_6f2a240
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 0xC
        cmp ecx, esi
        jne public_6ef0d26
        public_6ef0d7c : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_6ef0d80 : nop
        push edi
        call public_6fa8fe0
        mov al, byte ptr ss : [esp+0x34]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0xC
        public_6ef0da2 : nop
        mov byte ptr ss : [esp+0x30], 1
        jmp public_6ef0d80
        public_6ef0da9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0xC
        UNREACHABLE_TRAP(0x6ef0c90)
    }
}

#undef public_6ef0ccf
#undef public_6ef0d26
#undef public_6ef0d50
#undef public_6ef0d5d
#undef public_6ef0d61
#undef public_6ef0d7c
#undef public_6ef0d80
#undef public_6ef0da2
#undef public_6ef0da9
