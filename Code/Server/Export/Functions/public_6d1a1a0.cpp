#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6d19f20);
CLANG_FORWARD_PROC_SYMBOL(public_6d1a1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d52b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61fd8);

#define public_6d1a1e2 _public_6d1a1e2
#define public_6d1a1f4 _public_6d1a1f4
#define public_6d1a205 _public_6d1a205
#define public_6d1a250 _public_6d1a250
#define public_6d1a288 _public_6d1a288
#define public_6d1a294 _public_6d1a294
#define public_6d1a2bd _public_6d1a2bd
#define public_6d1a2bf _public_6d1a2bf

PROC_DECLARE(0x6d1a1a0, internal_6d1a1a0, public_6d1a1a0);
extern "C" NAKED register_t __cdecl internal_6d1a1a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d61fd8 @0x6d1a1a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61fd8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        mov cl, byte ptr ds : [eax+2]
        sub esp, 0x10
        push ebx
        xor ebx, ebx
        cmp cl, bl
        jne public_6d1a2bf
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_6d1a1e2
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 4
        cmp eax, 3
        jae public_6d1a1f4
        public_6d1a1e2 : nop
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6d1a1f4 : nop
        mov ecx, dword ptr ds : [ecx+0x24]
        cmp ecx, ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_6d64b54]
        je public_6d1a205
        mov edi, ecx
        public_6d1a205 : nop
        mov cl, byte ptr ss : [esp+0x2C]
        push edi
        mov byte ptr ss : [esp+0x10], cl
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        call dword ptr ds : [public_6d64c80]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x14]
        call public_6ce4520
        test al, al
        je public_6d1a250
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push edx
        call public_6ce1960
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], esi
        add esp, 0xC
        mov word ptr ds : [eax+esi*2], bx
        public_6d1a250 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_6d90260
        mov dword ptr ss : [esp+0x28], ebx
        call public_6d52b60
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_6d1a294
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d1a288
        cmp cl, 0xFF
        je public_6d1a288
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d1a294
        public_6d1a288 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1a294 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6d1a2bd
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebx
        je public_6d1a2bd
        mov edx, dword ptr ss : [esp+0x2C]
        push edi
        push eax
        movzx eax, word ptr ds : [edx]
        push eax
        call public_6d19f20
        add esp, 0xC
        public_6d1a2bd : nop
        pop edi
        pop esi
        public_6d1a2bf : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d1a1a0)
    }
}

#undef public_6d1a1e2
#undef public_6d1a1f4
#undef public_6d1a205
#undef public_6d1a250
#undef public_6d1a288
#undef public_6d1a294
#undef public_6d1a2bd
#undef public_6d1a2bf
