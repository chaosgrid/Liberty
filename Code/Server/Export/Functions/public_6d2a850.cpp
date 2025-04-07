#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);

#define public_6d2a891 _public_6d2a891
#define public_6d2a8ad _public_6d2a8ad
#define public_6d2a8f0 _public_6d2a8f0
#define public_6d2a90b _public_6d2a90b
#define public_6d2a948 _public_6d2a948
#define public_6d2a95e _public_6d2a95e
#define public_6d2a963 _public_6d2a963
#define public_6d2a967 _public_6d2a967
#define public_6d2a990 _public_6d2a990
#define public_6d2a9ab _public_6d2a9ab
#define public_6d2a9ad _public_6d2a9ad
#define public_6d2a9b1 _public_6d2a9b1
#define public_6d2a9ba _public_6d2a9ba
#define public_6d2a9dc _public_6d2a9dc
#define public_6d2a9e1 _public_6d2a9e1
#define public_6d2a9fd _public_6d2a9fd

PROC_DECLARE(0x6d2a850, internal_6d2a850, public_6d2a850);
extern "C" NAKED register_t __cdecl internal_6d2a850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        sub esp, 0x24
        mov dword ptr ds : [eax+0x18], edx
        mov eax, dword ptr ds : [eax+0x10]
        push ebx
        mov bx, word ptr ds : [eax]
        test bx, bx
        je public_6d2a9fd
        cmp bx, 0xFF
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        ja public_6d2a967
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2a891
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2a891 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2a9dc
        public_6d2a8ad : nop
        mov al, byte ptr ds : [edi+5]
        test al, al
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6d2a963
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
        je public_6d2a90b
        lea ecx, ds:[ecx]
        public_6d2a8f0 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2a90b
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2a8f0
        public_6d2a90b : nop
        cmp dword ptr ds : [edi+0x40], esi
        jne public_6d2a9dc
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
        je public_6d2a95e
        public_6d2a948 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call dword ptr ss : [esp+0x20]
        test al, al
        jne public_6d2a95e
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2a948
        public_6d2a95e : nop
        cmp dword ptr ds : [edi+0x4C], esi
        jne public_6d2a9dc
        public_6d2a963 : nop
        xor eax, eax
        jmp public_6d2a9e1
        public_6d2a967 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        je public_6d2a9ba
        mov eax, dword ptr ds : [edi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2a9ba
        mov ebp, dword ptr ds : [edi+0x34]
        mov esi, ecx
        mov ecx, ebp
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle public_6d2a9b1
        lea ebx, ds:[ebx]
        public_6d2a990 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp word ptr ds : [esi+eax*4+2], bx
        jae public_6d2a9ab
        or edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[esi+eax*4+4]
        add ecx, edx
        jmp public_6d2a9ad
        public_6d2a9ab : nop
        mov ecx, eax
        public_6d2a9ad : nop
        test ecx, ecx
        jg public_6d2a990
        public_6d2a9b1 : nop
        cmp esi, ebp
        je public_6d2a9ba
        cmp bx, word ptr ds : [esi]
        jae public_6d2a9dc
        public_6d2a9ba : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2a8ad
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2a8ad
        public_6d2a9dc : nop
        mov eax, 1
        public_6d2a9e1 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        pop edi
        pop esi
        pop ebp
        je public_6d2a9fd
        mov eax, dword ptr ss : [esp+0x2C]
        add dword ptr ds : [eax+0x10], 2
        mov al, 1
        pop ebx
        add esp, 0x24
        ret 4
        public_6d2a9fd : nop
        xor al, al
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6d2a850)
    }
}

#undef public_6d2a891
#undef public_6d2a8ad
#undef public_6d2a8f0
#undef public_6d2a90b
#undef public_6d2a948
#undef public_6d2a95e
#undef public_6d2a963
#undef public_6d2a967
#undef public_6d2a990
#undef public_6d2a9ab
#undef public_6d2a9ad
#undef public_6d2a9b1
#undef public_6d2a9ba
#undef public_6d2a9dc
#undef public_6d2a9e1
#undef public_6d2a9fd
