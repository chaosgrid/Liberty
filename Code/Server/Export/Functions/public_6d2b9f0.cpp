#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d40850);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);
CLANG_FORWARD_PROC_SYMBOL(public_6d430d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);

#define public_6d2ba32 _public_6d2ba32
#define public_6d2ba4a _public_6d2ba4a
#define public_6d2ba5a _public_6d2ba5a
#define public_6d2baa1 _public_6d2baa1
#define public_6d2babb _public_6d2babb
#define public_6d2bac0 _public_6d2bac0
#define public_6d2bacd _public_6d2bacd
#define public_6d2bad2 _public_6d2bad2
#define public_6d2bb08 _public_6d2bb08
#define public_6d2bb24 _public_6d2bb24
#define public_6d2bb64 _public_6d2bb64
#define public_6d2bb7f _public_6d2bb7f
#define public_6d2bbd4 _public_6d2bbd4
#define public_6d2bbd8 _public_6d2bbd8
#define public_6d2bc1e _public_6d2bc1e
#define public_6d2bc40 _public_6d2bc40
#define public_6d2bc45 _public_6d2bc45
#define public_6d2bc51 _public_6d2bc51
#define public_6d2bc53 _public_6d2bc53

PROC_DECLARE(0x6d2b9f0, internal_6d2b9f0, public_6d2b9f0);
extern "C" NAKED register_t __cdecl internal_6d2b9f0()
{
    __asm
    {
        sub esp, 0x38
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x3C]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        cmp dword ptr ds : [edx+0xC], edi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x50], edi
        je public_6d2bacd
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [ecx+0xC]
        ja public_6d2ba5a
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2ba32
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2ba32 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2babb
        public_6d2ba4a : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2babb
        xor eax, eax
        jmp public_6d2bac0
        public_6d2ba5a : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2baa1
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2baa1
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2ba72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        mov edi, dword ptr ss : [esp+0x60]
        add esp, 0x10
        test al, al
        jne public_6d2babb
        public_6d2baa1 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2ba4a
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2ba4a
        public_6d2babb : nop
        mov eax, 1
        public_6d2bac0 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x50], 1
        jne public_6d2bad2
        public_6d2bacd : nop
        mov byte ptr ss : [esp+0x50], 0
        public_6d2bad2 : nop
        mov edx, dword ptr ss : [esp+0x4C]
        cmp dword ptr ds : [edx+4], edi
        je public_6d2bc51
        mov bx, word ptr ds : [edi-2]
        cmp bx, 0xFF
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax+0xC]
        ja public_6d2bbd8
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2bb08
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2bb08 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2bc40
        public_6d2bb24 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        mov dword ptr ss : [esp+0x14], ebx
        jne public_6d2bbd4
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x24], eax
        call public_6d41b00
        mov ebx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x44], eax
        je public_6d2bb7f
        public_6d2bb64 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        xor eax, eax
        mov ax, word ptr ds : [edi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2bb7f
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_6d2bb64
        public_6d2bb7f : nop
        cmp dword ptr ds : [esi+0x40], edi
        jne public_6d2bc40
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x28], offset _public_6d3e580
        call public_6d41b00
        mov edi, dword ptr ds : [esi+0x4C]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ds:[esi+0x48]
        call public_6d5c540
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edi
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        call public_6d40850
        mov ecx, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, ecx
        jne public_6d2bc40
        public_6d2bbd4 : nop
        xor eax, eax
        jmp public_6d2bc45
        public_6d2bbd8 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d2bc1e
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2bc1e
        mov edi, dword ptr ds : [esi+0x34]
        push 0
        mov eax, ecx
/*FIXUP push offset _public_6d299e0 @0x6d2bbf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x54]
        push ecx
        push edi
        push eax
        mov word ptr ss : [esp+0x60], bx
        mov word ptr ss : [esp+0x62], bx
        call public_6d430d0
        add esp, 0x14
        cmp eax, edi
        je public_6d2bc1e
        mov dx, word ptr ss : [esp+0x4E]
        cmp dx, word ptr ds : [eax]
        jae public_6d2bc40
        public_6d2bc1e : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2bb24
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2bb24
        public_6d2bc40 : nop
        mov eax, 1
        public_6d2bc45 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d2bc51
        mov al, 1
        jmp public_6d2bc53
        public_6d2bc51 : nop
        xor al, al
        public_6d2bc53 : nop
        mov bl, byte ptr ss : [esp+0x50]
        xor edx, edx
        cmp al, bl
        mov eax, dword ptr ss : [esp+0x18]
        movzx eax, byte ptr ds : [eax+0x10]
        setne dl
        pop edi
        pop esi
        pop ebp
        pop ebx
        sub eax, edx
        neg eax
        sbb eax, eax
        inc eax
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x6d2b9f0)
    }
}

#undef public_6d2ba32
#undef public_6d2ba4a
#undef public_6d2ba5a
#undef public_6d2baa1
#undef public_6d2babb
#undef public_6d2bac0
#undef public_6d2bacd
#undef public_6d2bad2
#undef public_6d2bb08
#undef public_6d2bb24
#undef public_6d2bb64
#undef public_6d2bb7f
#undef public_6d2bbd4
#undef public_6d2bbd8
#undef public_6d2bc1e
#undef public_6d2bc40
#undef public_6d2bc45
#undef public_6d2bc51
#undef public_6d2bc53
