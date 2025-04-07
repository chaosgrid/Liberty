#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);

#define public_6d2a6da _public_6d2a6da
#define public_6d2a6f6 _public_6d2a6f6
#define public_6d2a736 _public_6d2a736
#define public_6d2a751 _public_6d2a751
#define public_6d2a790 _public_6d2a790
#define public_6d2a7a6 _public_6d2a7a6
#define public_6d2a7ab _public_6d2a7ab
#define public_6d2a7af _public_6d2a7af
#define public_6d2a7d2 _public_6d2a7d2
#define public_6d2a7ed _public_6d2a7ed
#define public_6d2a7ef _public_6d2a7ef
#define public_6d2a7f3 _public_6d2a7f3
#define public_6d2a7fc _public_6d2a7fc
#define public_6d2a81e _public_6d2a81e
#define public_6d2a823 _public_6d2a823
#define public_6d2a83e _public_6d2a83e

PROC_DECLARE(0x6d2a6a0, internal_6d2a6a0, public_6d2a6a0);
extern "C" NAKED register_t __cdecl internal_6d2a6a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        sub esp, 0x24
        push ebx
        mov bx, word ptr ds : [edx]
        test bx, bx
        je public_6d2a83e
        cmp bx, 0xFF
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        ja public_6d2a7af
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2a6da
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2a6da : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2a81e
        public_6d2a6f6 : nop
        mov al, byte ptr ds : [edi+5]
        test al, al
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6d2a7ab
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d41b00
        mov ebx, dword ptr ds : [edi+0x40]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov eax, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x20], eax
        je public_6d2a751
        public_6d2a736 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2a751
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2a736
        public_6d2a751 : nop
        cmp dword ptr ds : [edi+0x40], esi
        jne public_6d2a81e
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x20], offset _public_6d3e580
        call public_6d41b00
        mov ebx, dword ptr ds : [edi+0x4C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        je public_6d2a7a6
        mov edi, edi
        public_6d2a790 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call dword ptr ss : [esp+0x20]
        test al, al
        jne public_6d2a7a6
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2a790
        public_6d2a7a6 : nop
        cmp dword ptr ds : [edi+0x4C], esi
        jne public_6d2a81e
        public_6d2a7ab : nop
        xor eax, eax
        jmp public_6d2a823
        public_6d2a7af : nop
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        je public_6d2a7fc
        mov eax, dword ptr ds : [edi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2a7fc
        mov ebp, dword ptr ds : [edi+0x34]
        mov esi, ecx
        mov ecx, ebp
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle public_6d2a7f3
        public_6d2a7d2 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp word ptr ds : [esi+eax*4+2], bx
        jae public_6d2a7ed
        or edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[esi+eax*4+4]
        add ecx, edx
        jmp public_6d2a7ef
        public_6d2a7ed : nop
        mov ecx, eax
        public_6d2a7ef : nop
        test ecx, ecx
        jg public_6d2a7d2
        public_6d2a7f3 : nop
        cmp esi, ebp
        je public_6d2a7fc
        cmp bx, word ptr ds : [esi]
        jae public_6d2a81e
        public_6d2a7fc : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2a6f6
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2a6f6
        public_6d2a81e : nop
        mov eax, 1
        public_6d2a823 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        pop edi
        pop esi
        pop ebp
        je public_6d2a83e
        mov eax, dword ptr ss : [esp+0x30]
        add dword ptr ds : [eax], 2
        mov al, 1
        pop ebx
        add esp, 0x24
        ret 8
        public_6d2a83e : nop
        xor al, al
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x6d2a6a0)
    }
}

#undef public_6d2a6da
#undef public_6d2a6f6
#undef public_6d2a736
#undef public_6d2a751
#undef public_6d2a790
#undef public_6d2a7a6
#undef public_6d2a7ab
#undef public_6d2a7af
#undef public_6d2a7d2
#undef public_6d2a7ed
#undef public_6d2a7ef
#undef public_6d2a7f3
#undef public_6d2a7fc
#undef public_6d2a81e
#undef public_6d2a823
#undef public_6d2a83e
