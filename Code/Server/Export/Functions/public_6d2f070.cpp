#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);

#define public_6d2f0b1 _public_6d2f0b1
#define public_6d2f0cd _public_6d2f0cd
#define public_6d2f110 _public_6d2f110
#define public_6d2f12b _public_6d2f12b
#define public_6d2f168 _public_6d2f168
#define public_6d2f17e _public_6d2f17e
#define public_6d2f183 _public_6d2f183
#define public_6d2f187 _public_6d2f187
#define public_6d2f1b0 _public_6d2f1b0
#define public_6d2f1cb _public_6d2f1cb
#define public_6d2f1cd _public_6d2f1cd
#define public_6d2f1d1 _public_6d2f1d1
#define public_6d2f1da _public_6d2f1da
#define public_6d2f1fc _public_6d2f1fc
#define public_6d2f201 _public_6d2f201
#define public_6d2f21d _public_6d2f21d

PROC_DECLARE(0x6d2f070, internal_6d2f070, public_6d2f070);
extern "C" NAKED register_t __cdecl internal_6d2f070()
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
        je public_6d2f21d
        cmp bx, 0xFF
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        ja public_6d2f187
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2f0b1
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2f0b1 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2f1fc
        public_6d2f0cd : nop
        mov al, byte ptr ds : [edi+5]
        test al, al
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6d2f183
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
        je public_6d2f12b
        lea ecx, ds:[ecx]
        public_6d2f110 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2f12b
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2f110
        public_6d2f12b : nop
        cmp dword ptr ds : [edi+0x40], esi
        jne public_6d2f1fc
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
        je public_6d2f17e
        public_6d2f168 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call dword ptr ss : [esp+0x20]
        test al, al
        jne public_6d2f17e
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2f168
        public_6d2f17e : nop
        cmp dword ptr ds : [edi+0x4C], esi
        jne public_6d2f1fc
        public_6d2f183 : nop
        xor eax, eax
        jmp public_6d2f201
        public_6d2f187 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        je public_6d2f1da
        mov eax, dword ptr ds : [edi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2f1da
        mov ebp, dword ptr ds : [edi+0x34]
        mov esi, ecx
        mov ecx, ebp
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle public_6d2f1d1
        lea ebx, ds:[ebx]
        public_6d2f1b0 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp word ptr ds : [esi+eax*4+2], bx
        jae public_6d2f1cb
        or edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[esi+eax*4+4]
        add ecx, edx
        jmp public_6d2f1cd
        public_6d2f1cb : nop
        mov ecx, eax
        public_6d2f1cd : nop
        test ecx, ecx
        jg public_6d2f1b0
        public_6d2f1d1 : nop
        cmp esi, ebp
        je public_6d2f1da
        cmp bx, word ptr ds : [esi]
        jae public_6d2f1fc
        public_6d2f1da : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2f0cd
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2f0cd
        public_6d2f1fc : nop
        mov eax, 1
        public_6d2f201 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        pop edi
        pop esi
        pop ebp
        je public_6d2f21d
        mov eax, dword ptr ss : [esp+0x2C]
        add dword ptr ds : [eax+0x10], 2
        mov al, 1
        pop ebx
        add esp, 0x24
        ret 4
        public_6d2f21d : nop
        xor al, al
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6d2f070)
    }
}

#undef public_6d2f0b1
#undef public_6d2f0cd
#undef public_6d2f110
#undef public_6d2f12b
#undef public_6d2f168
#undef public_6d2f17e
#undef public_6d2f183
#undef public_6d2f187
#undef public_6d2f1b0
#undef public_6d2f1cb
#undef public_6d2f1cd
#undef public_6d2f1d1
#undef public_6d2f1da
#undef public_6d2f1fc
#undef public_6d2f201
#undef public_6d2f21d
