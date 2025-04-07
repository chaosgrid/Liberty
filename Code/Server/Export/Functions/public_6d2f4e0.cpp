#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40850);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);
CLANG_FORWARD_PROC_SYMBOL(public_6d430d0);

#define public_6d2f51a _public_6d2f51a
#define public_6d2f536 _public_6d2f536
#define public_6d2f576 _public_6d2f576
#define public_6d2f591 _public_6d2f591
#define public_6d2f5dd _public_6d2f5dd
#define public_6d2f5e4 _public_6d2f5e4
#define public_6d2f63c _public_6d2f63c
#define public_6d2f67f _public_6d2f67f
#define public_6d2f6a1 _public_6d2f6a1
#define public_6d2f6a6 _public_6d2f6a6
#define public_6d2f6c1 _public_6d2f6c1

PROC_DECLARE(0x6d2f4e0, internal_6d2f4e0, public_6d2f4e0);
extern "C" NAKED register_t __cdecl internal_6d2f4e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        sub esp, 0x30
        push ebx
        mov bx, word ptr ds : [edx]
        test bx, bx
        je public_6d2f6c1
        cmp bx, 0xFF
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        ja public_6d2f5e4
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2f51a
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2f51a : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2f6a1
        public_6d2f536 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x18], ebx
        jne public_6d2f5dd
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x24], eax
        call public_6d41b00
        mov ebx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x3C], eax
        je public_6d2f591
        public_6d2f576 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2f591
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6d2f576
        public_6d2f591 : nop
        cmp dword ptr ds : [esi+0x40], edi
        jne public_6d2f6a1
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x28], offset _public_6d3e6f0
        call public_6d41b00
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        push edi
        push eax
        lea eax, ss:[esp+0x34]
        push eax
        call public_6d40850
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2f6a1
        public_6d2f5dd : nop
        xor eax, eax
        jmp public_6d2f6a6
        public_6d2f5e4 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2f67f
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2f67f
        push ebx
        call dword ptr ds : [public_6d64ba0]
        mov ebp, dword ptr ds : [esi+0x34]
        push 0
/*FIXUP push offset _public_6d299e0 @0x6d2f60b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x30]
        push ebp
        push eax
        mov word ptr ss : [esp+0x28], di
        mov word ptr ss : [esp+0x2A], di
        call public_6d430d0
        add esp, 0x18
        cmp eax, ebp
        je public_6d2f63c
        mov dx, word ptr ss : [esp+0x12]
        cmp dx, word ptr ds : [eax]
        jae public_6d2f6a1
        public_6d2f63c : nop
        push ebx
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        cmp di, ax
        je public_6d2f67f
        mov edi, dword ptr ds : [esi+0x34]
        push 0
/*FIXUP push offset _public_6d299e0 @0x6d2f650*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov word ptr ss : [esp+0x20], ax
        mov word ptr ss : [esp+0x22], ax
        mov eax, dword ptr ds : [esi+0x30]
        push edi
        push eax
        call public_6d430d0
        add esp, 0x14
        cmp eax, edi
        je public_6d2f67f
        mov dx, word ptr ss : [esp+0x16]
        cmp dx, word ptr ds : [eax]
        jae public_6d2f6a1
        public_6d2f67f : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2f536
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2f536
        public_6d2f6a1 : nop
        mov eax, 1
        public_6d2f6a6 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop edi
        pop esi
        pop ebp
        je public_6d2f6c1
        mov eax, dword ptr ss : [esp+0x3C]
        add dword ptr ds : [eax], 2
        mov al, 1
        pop ebx
        add esp, 0x30
        ret 8
        public_6d2f6c1 : nop
        xor al, al
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6d2f4e0)
    }
}

#undef public_6d2f51a
#undef public_6d2f536
#undef public_6d2f576
#undef public_6d2f591
#undef public_6d2f5dd
#undef public_6d2f5e4
#undef public_6d2f63c
#undef public_6d2f67f
#undef public_6d2f6a1
#undef public_6d2f6a6
#undef public_6d2f6c1
