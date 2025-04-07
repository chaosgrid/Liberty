#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2b838 _public_6d2b838
#define public_6d2b848 _public_6d2b848
#define public_6d2b860 _public_6d2b860
#define public_6d2b87a _public_6d2b87a
#define public_6d2b87f _public_6d2b87f
#define public_6d2b890 _public_6d2b890
#define public_6d2b895 _public_6d2b895
#define public_6d2b8c4 _public_6d2b8c4
#define public_6d2b8dc _public_6d2b8dc
#define public_6d2b8ec _public_6d2b8ec
#define public_6d2b933 _public_6d2b933
#define public_6d2b94d _public_6d2b94d
#define public_6d2b952 _public_6d2b952
#define public_6d2b95e _public_6d2b95e
#define public_6d2b960 _public_6d2b960
#define public_6d2b98f _public_6d2b98f
#define public_6d2b991 _public_6d2b991
#define public_6d2b99f _public_6d2b99f
#define public_6d2b9b3 _public_6d2b9b3

PROC_DECLARE(0x6d2b800, internal_6d2b800, public_6d2b800);
extern "C" NAKED register_t __cdecl internal_6d2b800()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [ecx+0xC], eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        je public_6d2b890
        mov edi, dword ptr ss : [ebp+0xC]
        xor esi, esi
        mov si, word ptr ds : [eax]
        cmp si, 0xFF
        ja public_6d2b848
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d2b87a
        public_6d2b838 : nop
        push esi
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d2b87a
        xor eax, eax
        jmp public_6d2b87f
        public_6d2b848 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d2b860
        push esi
        mov ecx, edi
        call public_6d3eb90
        test al, al
        jne public_6d2b87a
        public_6d2b860 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2b838
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2b838
        public_6d2b87a : nop
        mov eax, 1
        public_6d2b87f : nop
        movzx edx, byte ptr ds : [edi+4]
        cmp edx, eax
        mov eax, dword ptr ss : [esp+0x24]
        mov byte ptr ss : [esp+0xF], 1
        jne public_6d2b895
        public_6d2b890 : nop
        mov byte ptr ss : [esp+0xF], 0
        public_6d2b895 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [ecx+4], eax
        push ebx
        je public_6d2b95e
        mov bx, word ptr ds : [eax-2]
        cmp bx, 0xFF
        mov esi, dword ptr ss : [ebp+0xC]
        ja public_6d2b8ec
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2b8c4
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2b8c4 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2b94d
        public_6d2b8dc : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2b94d
        xor eax, eax
        jmp public_6d2b952
        public_6d2b8ec : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2b933
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2b933
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2b904*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], ebx
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x28]
        add esp, 0x10
        test al, al
        jne public_6d2b94d
        public_6d2b933 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2b8dc
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2b8dc
        public_6d2b94d : nop
        mov eax, 1
        public_6d2b952 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d2b95e
        mov al, 1
        jmp public_6d2b960
        public_6d2b95e : nop
        xor al, al
        public_6d2b960 : nop
        mov bl, byte ptr ss : [esp+0x13]
        xor edx, edx
        cmp al, bl
        movzx eax, byte ptr ss : [ebp+0x10]
        setne dl
        pop ebx
        cmp eax, edx
        jne public_6d2b9b3
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d2b99f
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2b98f : nop
        je public_6d2b9b3
        public_6d2b991 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x10
        ret 8
        public_6d2b99f : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d2b991
        mov ecx, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [eax+8], ecx
        jmp public_6d2b98f
        public_6d2b9b3 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d2b800)
    }
}

#undef public_6d2b838
#undef public_6d2b848
#undef public_6d2b860
#undef public_6d2b87a
#undef public_6d2b87f
#undef public_6d2b890
#undef public_6d2b895
#undef public_6d2b8c4
#undef public_6d2b8dc
#undef public_6d2b8ec
#undef public_6d2b933
#undef public_6d2b94d
#undef public_6d2b952
#undef public_6d2b95e
#undef public_6d2b960
#undef public_6d2b98f
#undef public_6d2b991
#undef public_6d2b99f
#undef public_6d2b9b3
