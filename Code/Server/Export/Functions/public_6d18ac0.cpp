#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6d18ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1be80);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61e73);

#define public_6d18b64 _public_6d18b64
#define public_6d18b8e _public_6d18b8e
#define public_6d18b90 _public_6d18b90
#define public_6d18bb4 _public_6d18bb4
#define public_6d18bc0 _public_6d18bc0

PROC_DECLARE(0x6d18ac0, internal_6d18ac0, public_6d18ac0);
extern "C" NAKED register_t __cdecl internal_6d18ac0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61e73 @0x6d18ac2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61e73
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        xor ebx, ebx
        push ebp
        mov dword ptr ss : [esp+8], ebx
        mov eax, dword ptr ss : [esp+0x30]
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        test esi, esi
        mov ebp, ecx
        mov dword ptr ss : [ebp], ebx
        mov dword ptr ss : [ebp+4], eax
        je public_6d18bc0
        push edi
        push 0x68
        call public_6d60012
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x38], edi
        xor ecx, ecx
        cmp edi, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        je public_6d18b8e
        mov dl, byte ptr ss : [esp+0x34]
        push esi
        mov byte ptr ss : [esp+0x18], dl
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], ecx
        call dword ptr ds : [public_6d64c80]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d18b64
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push eax
        push ecx
        call public_6ce1960
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], esi
        add esp, 0xC
        mov word ptr ds : [edx+esi*2], bx
        public_6d18b64 : nop
        mov ebx, 1
        mov dword ptr ss : [esp+0x10], ebx
        push 0
        push 0x8000
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x38], bl
        call public_6d1be80
        mov dword ptr ds : [edi], offset public_6d68680
        xor ecx, ecx
        jmp public_6d18b90
        public_6d18b8e : nop
        xor edi, edi
        public_6d18b90 : nop
        test bl, 1
        mov dword ptr ss : [ebp], edi
        pop edi
        je public_6d18bc0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        je public_6d18bc0
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d18bb4
        cmp cl, 0xFF
        je public_6d18bb4
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d18bc0
        public_6d18bb4 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d18bc0 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6d18ac0)
    }
}

#undef public_6d18b64
#undef public_6d18b8e
#undef public_6d18b90
#undef public_6d18bb4
#undef public_6d18bc0
