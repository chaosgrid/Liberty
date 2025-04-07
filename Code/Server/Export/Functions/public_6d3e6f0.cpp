#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);
CLANG_FORWARD_PROC_SYMBOL(public_6d430d0);

#define public_6d3e71b _public_6d3e71b
#define public_6d3e737 _public_6d3e737
#define public_6d3e777 _public_6d3e777
#define public_6d3e792 _public_6d3e792
#define public_6d3e7b0 _public_6d3e7b0
#define public_6d3e7c7 _public_6d3e7c7
#define public_6d3e7d0 _public_6d3e7d0
#define public_6d3e7d7 _public_6d3e7d7
#define public_6d3e82f _public_6d3e82f
#define public_6d3e872 _public_6d3e872
#define public_6d3e894 _public_6d3e894
#define public_6d3e899 _public_6d3e899

PROC_DECLARE(0x6d3e6f0, internal_6d3e6f0, public_6d3e6f0);
extern "C" NAKED register_t __cdecl internal_6d3e6f0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        cmp bx, 0xFF
        push ebp
        push esi
        push edi
        mov esi, ecx
        ja public_6d3e7d7
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d3e71b
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d3e71b : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d3e894
        public_6d3e737 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x28], ebx
        jne public_6d3e7d0
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        call public_6d41b00
        mov ebx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], eax
        je public_6d3e792
        public_6d3e777 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d3e792
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6d3e777
        public_6d3e792 : nop
        cmp dword ptr ds : [esi+0x40], edi
        jne public_6d3e894
        mov ebx, dword ptr ds : [esi+0x4C]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov dx, word ptr ss : [esp+0x28]
        mov word ptr ss : [esp+0x20], dx
        je public_6d3e7c7
        mov edi, edi
        public_6d3e7b0 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi+8]
        push eax
        call public_6d3e6f0
        test al, al
        jne public_6d3e7c7
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6d3e7b0
        public_6d3e7c7 : nop
        cmp dword ptr ds : [esi+0x4C], edi
        jne public_6d3e894
        public_6d3e7d0 : nop
        xor eax, eax
        jmp public_6d3e899
        public_6d3e7d7 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d3e872
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d3e872
        push ebx
        call dword ptr ds : [public_6d64ba0]
        mov ebp, dword ptr ds : [esi+0x34]
        push 0
/*FIXUP push offset _public_6d299e0 @0x6d3e7fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x34]
        push ecx
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x30]
        push ebp
        push eax
        mov word ptr ss : [esp+0x40], di
        mov word ptr ss : [esp+0x42], di
        call public_6d430d0
        add esp, 0x18
        cmp eax, ebp
        je public_6d3e82f
        mov dx, word ptr ss : [esp+0x2A]
        cmp dx, word ptr ds : [eax]
        jae public_6d3e894
        public_6d3e82f : nop
        push ebx
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        cmp di, ax
        je public_6d3e872
        mov edi, dword ptr ds : [esi+0x34]
        push 0
/*FIXUP push offset _public_6d299e0 @0x6d3e843*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x18]
        push ecx
        mov word ptr ss : [esp+0x1C], ax
        mov word ptr ss : [esp+0x1E], ax
        mov eax, dword ptr ds : [esi+0x30]
        push edi
        push eax
        call public_6d430d0
        add esp, 0x14
        cmp eax, edi
        je public_6d3e872
        mov dx, word ptr ss : [esp+0x12]
        cmp dx, word ptr ds : [eax]
        jae public_6d3e894
        public_6d3e872 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d3e737
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3e737
        public_6d3e894 : nop
        mov eax, 1
        public_6d3e899 : nop
        movzx ecx, byte ptr ds : [esi+4]
        pop edi
        xor edx, edx
        cmp ecx, eax
        pop esi
        setne dl
        pop ebp
        mov al, dl
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6d3e6f0)
    }
}

#undef public_6d3e71b
#undef public_6d3e737
#undef public_6d3e777
#undef public_6d3e792
#undef public_6d3e7b0
#undef public_6d3e7c7
#undef public_6d3e7d0
#undef public_6d3e7d7
#undef public_6d3e82f
#undef public_6d3e872
#undef public_6d3e894
#undef public_6d3e899
