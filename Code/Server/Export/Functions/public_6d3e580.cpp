#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);

#define public_6d3e5ab _public_6d3e5ab
#define public_6d3e5c7 _public_6d3e5c7
#define public_6d3e607 _public_6d3e607
#define public_6d3e622 _public_6d3e622
#define public_6d3e640 _public_6d3e640
#define public_6d3e657 _public_6d3e657
#define public_6d3e65c _public_6d3e65c
#define public_6d3e660 _public_6d3e660
#define public_6d3e683 _public_6d3e683
#define public_6d3e69e _public_6d3e69e
#define public_6d3e6a0 _public_6d3e6a0
#define public_6d3e6a4 _public_6d3e6a4
#define public_6d3e6ad _public_6d3e6ad
#define public_6d3e6cf _public_6d3e6cf
#define public_6d3e6d4 _public_6d3e6d4

PROC_DECLARE(0x6d3e580, internal_6d3e580, public_6d3e580);
extern "C" NAKED register_t __cdecl internal_6d3e580()
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
        mov ebp, ecx
        ja public_6d3e660
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d3e5ab
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d3e5ab : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ss : [ebp+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d3e6cf
        public_6d3e5c7 : nop
        mov al, byte ptr ss : [ebp+5]
        test al, al
        mov dword ptr ss : [esp+0x28], ebx
        jne public_6d3e65c
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        call public_6d41b00
        mov edi, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], eax
        je public_6d3e622
        public_6d3e607 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push ecx
        call ebx
        add esp, 8
        test eax, eax
        je public_6d3e622
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6d3e607
        public_6d3e622 : nop
        cmp dword ptr ss : [ebp+0x40], esi
        jne public_6d3e6cf
        mov edi, dword ptr ss : [ebp+0x4C]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dx, word ptr ss : [esp+0x28]
        mov word ptr ss : [esp+0x20], dx
        je public_6d3e657
        mov edi, edi
        public_6d3e640 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call public_6d3e580
        test al, al
        jne public_6d3e657
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6d3e640
        public_6d3e657 : nop
        cmp dword ptr ss : [ebp+0x4C], esi
        jne public_6d3e6cf
        public_6d3e65c : nop
        xor eax, eax
        jmp public_6d3e6d4
        public_6d3e660 : nop
        mov ecx, dword ptr ss : [ebp+0x30]
        test ecx, ecx
        je public_6d3e6ad
        mov eax, dword ptr ss : [ebp+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d3e6ad
        mov edi, dword ptr ss : [ebp+0x34]
        mov esi, ecx
        mov ecx, edi
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle public_6d3e6a4
        public_6d3e683 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp word ptr ds : [esi+eax*4+2], bx
        jae public_6d3e69e
        or edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[esi+eax*4+4]
        add ecx, edx
        jmp public_6d3e6a0
        public_6d3e69e : nop
        mov ecx, eax
        public_6d3e6a0 : nop
        test ecx, ecx
        jg public_6d3e683
        public_6d3e6a4 : nop
        cmp esi, edi
        je public_6d3e6ad
        cmp bx, word ptr ds : [esi]
        jae public_6d3e6cf
        public_6d3e6ad : nop
        xor eax, eax
        mov ax, word ptr ss : [ebp+0x28]
        test ax, ax
        je public_6d3e5c7
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3e5c7
        public_6d3e6cf : nop
        mov eax, 1
        public_6d3e6d4 : nop
        movzx ecx, byte ptr ss : [ebp+4]
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
        UNREACHABLE_TRAP(0x6d3e580)
    }
}

#undef public_6d3e5ab
#undef public_6d3e5c7
#undef public_6d3e607
#undef public_6d3e622
#undef public_6d3e640
#undef public_6d3e657
#undef public_6d3e65c
#undef public_6d3e660
#undef public_6d3e683
#undef public_6d3e69e
#undef public_6d3e6a0
#undef public_6d3e6a4
#undef public_6d3e6ad
#undef public_6d3e6cf
#undef public_6d3e6d4
