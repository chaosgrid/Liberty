#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6d1a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1a570);
CLANG_FORWARD_PROC_SYMBOL(public_6d52b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61fd8);

#define public_6d1a5b2 _public_6d1a5b2
#define public_6d1a5c4 _public_6d1a5c4
#define public_6d1a5d5 _public_6d1a5d5
#define public_6d1a620 _public_6d1a620
#define public_6d1a658 _public_6d1a658
#define public_6d1a664 _public_6d1a664
#define public_6d1a68d _public_6d1a68d
#define public_6d1a68f _public_6d1a68f

PROC_DECLARE(0x6d1a570, internal_6d1a570, public_6d1a570);
extern "C" NAKED register_t __cdecl internal_6d1a570()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d61fd8 @0x6d1a578*/
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
        jne public_6d1a68f
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_6d1a5b2
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 4
        cmp eax, 3
        jae public_6d1a5c4
        public_6d1a5b2 : nop
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6d1a5c4 : nop
        mov ecx, dword ptr ds : [ecx+0x24]
        cmp ecx, ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_6d64b54]
        je public_6d1a5d5
        mov edi, ecx
        public_6d1a5d5 : nop
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
        je public_6d1a620
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push edx
        call public_6ce1960
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], esi
        add esp, 0xC
        mov word ptr ds : [eax+esi*2], bx
        public_6d1a620 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_6d90260
        mov dword ptr ss : [esp+0x28], ebx
        call public_6d52b60
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_6d1a664
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d1a658
        cmp cl, 0xFF
        je public_6d1a658
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d1a664
        public_6d1a658 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1a664 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6d1a68d
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebx
        je public_6d1a68d
        mov edx, dword ptr ss : [esp+0x2C]
        push edi
        push eax
        movzx eax, word ptr ds : [edx]
        push eax
        call public_6d1a2e0
        add esp, 0xC
        public_6d1a68d : nop
        pop edi
        pop esi
        public_6d1a68f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d1a570)
    }
}

#undef public_6d1a5b2
#undef public_6d1a5c4
#undef public_6d1a5d5
#undef public_6d1a620
#undef public_6d1a658
#undef public_6d1a664
#undef public_6d1a68d
#undef public_6d1a68f
