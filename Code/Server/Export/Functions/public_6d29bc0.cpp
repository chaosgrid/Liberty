#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);

#define public_6d29c03 _public_6d29c03
#define public_6d29c1f _public_6d29c1f
#define public_6d29c60 _public_6d29c60
#define public_6d29c7b _public_6d29c7b
#define public_6d29cb8 _public_6d29cb8
#define public_6d29cce _public_6d29cce
#define public_6d29cd3 _public_6d29cd3
#define public_6d29cd7 _public_6d29cd7
#define public_6d29d00 _public_6d29d00
#define public_6d29d1b _public_6d29d1b
#define public_6d29d1d _public_6d29d1d
#define public_6d29d21 _public_6d29d21
#define public_6d29d2a _public_6d29d2a
#define public_6d29d4c _public_6d29d4c
#define public_6d29d51 _public_6d29d51
#define public_6d29d6d _public_6d29d6d

PROC_DECLARE(0x6d29bc0, internal_6d29bc0, public_6d29bc0);
extern "C" NAKED register_t __cdecl internal_6d29bc0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        sub esp, 0x24
        push esi
        mov esi, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [edx+0x18], eax
        mov eax, dword ptr ds : [edx+0x10]
        cmp esi, eax
        je public_6d29d6d
        push ebx
        mov bx, word ptr ds : [eax]
        cmp bx, 0xFF
        push ebp
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        ja public_6d29cd7
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d29c03
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d29c03 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d29d4c
        public_6d29c1f : nop
        mov al, byte ptr ds : [edi+5]
        test al, al
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6d29cd3
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
        je public_6d29c7b
        nop 
        public_6d29c60 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d29c7b
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d29c60
        public_6d29c7b : nop
        cmp dword ptr ds : [edi+0x40], esi
        jne public_6d29d4c
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
        je public_6d29cce
        public_6d29cb8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call dword ptr ss : [esp+0x20]
        test al, al
        jne public_6d29cce
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d29cb8
        public_6d29cce : nop
        cmp dword ptr ds : [edi+0x4C], esi
        jne public_6d29d4c
        public_6d29cd3 : nop
        xor eax, eax
        jmp public_6d29d51
        public_6d29cd7 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        je public_6d29d2a
        mov eax, dword ptr ds : [edi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d29d2a
        mov ebp, dword ptr ds : [edi+0x34]
        mov esi, ecx
        mov ecx, ebp
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle public_6d29d21
        lea ebx, ds:[ebx]
        public_6d29d00 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp word ptr ds : [esi+eax*4+2], bx
        jae public_6d29d1b
        or edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[esi+eax*4+4]
        add ecx, edx
        jmp public_6d29d1d
        public_6d29d1b : nop
        mov ecx, eax
        public_6d29d1d : nop
        test ecx, ecx
        jg public_6d29d00
        public_6d29d21 : nop
        cmp esi, ebp
        je public_6d29d2a
        cmp bx, word ptr ds : [esi]
        jae public_6d29d4c
        public_6d29d2a : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d29c1f
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d29c1f
        public_6d29d4c : nop
        mov eax, 1
        public_6d29d51 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        pop edi
        pop ebp
        pop ebx
        je public_6d29d6d
        mov eax, dword ptr ss : [esp+0x2C]
        add dword ptr ds : [eax+0x10], 2
        mov al, 1
        pop esi
        add esp, 0x24
        ret 4
        public_6d29d6d : nop
        xor al, al
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6d29bc0)
    }
}

#undef public_6d29c03
#undef public_6d29c1f
#undef public_6d29c60
#undef public_6d29c7b
#undef public_6d29cb8
#undef public_6d29cce
#undef public_6d29cd3
#undef public_6d29cd7
#undef public_6d29d00
#undef public_6d29d1b
#undef public_6d29d1d
#undef public_6d29d21
#undef public_6d29d2a
#undef public_6d29d4c
#undef public_6d29d51
#undef public_6d29d6d
