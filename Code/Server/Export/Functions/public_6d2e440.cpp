#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);

#define public_6d2e483 _public_6d2e483
#define public_6d2e49f _public_6d2e49f
#define public_6d2e4e0 _public_6d2e4e0
#define public_6d2e4fb _public_6d2e4fb
#define public_6d2e538 _public_6d2e538
#define public_6d2e54e _public_6d2e54e
#define public_6d2e553 _public_6d2e553
#define public_6d2e557 _public_6d2e557
#define public_6d2e580 _public_6d2e580
#define public_6d2e59b _public_6d2e59b
#define public_6d2e59d _public_6d2e59d
#define public_6d2e5a1 _public_6d2e5a1
#define public_6d2e5aa _public_6d2e5aa
#define public_6d2e5cc _public_6d2e5cc
#define public_6d2e5d1 _public_6d2e5d1
#define public_6d2e5ed _public_6d2e5ed

PROC_DECLARE(0x6d2e440, internal_6d2e440, public_6d2e440);
extern "C" NAKED register_t __cdecl internal_6d2e440()
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
        je public_6d2e5ed
        push ebx
        mov bx, word ptr ds : [eax]
        cmp bx, 0xFF
        push ebp
        push edi
        mov edi, dword ptr ds : [ecx+8]
        ja public_6d2e557
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2e483
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2e483 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2e5cc
        public_6d2e49f : nop
        mov al, byte ptr ds : [edi+5]
        test al, al
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6d2e553
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
        je public_6d2e4fb
        nop 
        public_6d2e4e0 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2e4fb
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2e4e0
        public_6d2e4fb : nop
        cmp dword ptr ds : [edi+0x40], esi
        jne public_6d2e5cc
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
        je public_6d2e54e
        public_6d2e538 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call dword ptr ss : [esp+0x20]
        test al, al
        jne public_6d2e54e
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2e538
        public_6d2e54e : nop
        cmp dword ptr ds : [edi+0x4C], esi
        jne public_6d2e5cc
        public_6d2e553 : nop
        xor eax, eax
        jmp public_6d2e5d1
        public_6d2e557 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        je public_6d2e5aa
        mov eax, dword ptr ds : [edi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2e5aa
        mov ebp, dword ptr ds : [edi+0x34]
        mov esi, ecx
        mov ecx, ebp
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle public_6d2e5a1
        lea ebx, ds:[ebx]
        public_6d2e580 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp word ptr ds : [esi+eax*4+2], bx
        jae public_6d2e59b
        or edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[esi+eax*4+4]
        add ecx, edx
        jmp public_6d2e59d
        public_6d2e59b : nop
        mov ecx, eax
        public_6d2e59d : nop
        test ecx, ecx
        jg public_6d2e580
        public_6d2e5a1 : nop
        cmp esi, ebp
        je public_6d2e5aa
        cmp bx, word ptr ds : [esi]
        jae public_6d2e5cc
        public_6d2e5aa : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2e49f
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2e49f
        public_6d2e5cc : nop
        mov eax, 1
        public_6d2e5d1 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        pop edi
        pop ebp
        pop ebx
        je public_6d2e5ed
        mov eax, dword ptr ss : [esp+0x2C]
        add dword ptr ds : [eax+0x10], 2
        mov al, 1
        pop esi
        add esp, 0x24
        ret 4
        public_6d2e5ed : nop
        xor al, al
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6d2e440)
    }
}

#undef public_6d2e483
#undef public_6d2e49f
#undef public_6d2e4e0
#undef public_6d2e4fb
#undef public_6d2e538
#undef public_6d2e54e
#undef public_6d2e553
#undef public_6d2e557
#undef public_6d2e580
#undef public_6d2e59b
#undef public_6d2e59d
#undef public_6d2e5a1
#undef public_6d2e5aa
#undef public_6d2e5cc
#undef public_6d2e5d1
#undef public_6d2e5ed
