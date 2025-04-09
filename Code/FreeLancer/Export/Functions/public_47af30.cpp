#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_4795f0);
CLANG_FORWARD_PROC_SYMBOL(public_47af30);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_4c62b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c63e0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6430);
CLANG_FORWARD_PROC_SYMBOL(public_4c6530);
CLANG_FORWARD_PROC_SYMBOL(public_4c6a50);
CLANG_FORWARD_PROC_SYMBOL(public_585ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_47afd0 _public_47afd0
#define public_47afe0 _public_47afe0
#define public_47b063 _public_47b063
#define public_47b066 _public_47b066
#define public_47b07e _public_47b07e
#define public_47b080 _public_47b080
#define public_47b090 _public_47b090
#define public_47b0b8 _public_47b0b8
#define public_47b0c2 _public_47b0c2
#define public_47b0d4 _public_47b0d4
#define public_47b130 _public_47b130
#define public_47b14a _public_47b14a
#define public_47b15c _public_47b15c
#define public_47b16e _public_47b16e
#define public_47b178 _public_47b178
#define public_47b1a8 _public_47b1a8
#define public_47b209 _public_47b209
#define public_47b23a _public_47b23a
#define public_47b23c _public_47b23c
#define public_47b240 _public_47b240
#define public_47b255 _public_47b255
#define public_47b2b6 _public_47b2b6
#define public_47b2fc _public_47b2fc

PROC_DECLARE(0x47af30, internal_47af30, public_47af30);
extern "C" NAKED register_t __cdecl internal_47af30()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x360]
        test eax, eax
        push ebp
        push esi
        mov dword ptr ss : [esp+0xC], ebx
        je public_47b2fc
        mov eax, dword ptr ds : [ebx+0x348]
        push eax
        call dword ptr ds : [public_5c61fc]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_47b2fc
        push edi
        push 0
        call public_4c4060
        mov ecx, dword ptr ds : [ebx+0x360]
        push eax
        add ecx, 0x330
        call public_4c62b0
        mov esi, dword ptr ds : [ebx+0x360]
        mov edi, dword ptr ds : [esi+0x354]
        add esi, 0x34C
        lea ecx, ds:[edi*8]
        push ecx
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x1C], edi
        call public_5b7e84
        mov ebp, eax
        mov eax, dword ptr ds : [public_66873c]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x14], 0
        jbe public_47afd0
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov dword ptr ss : [esp+0x14], eax
        public_47afd0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_47b07e
        lea ecx, ds:[ecx]
        public_47afe0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_5d15b8]
        test eax, eax
        mov dx, word ptr ds : [esi+0xA]
        mov word ptr ss : [ebp], dx
        je public_47b063
        mov eax, dword ptr ds : [esi+0xC]
        fstp st(0)
        push eax
        call dword ptr ds : [public_5c632c]
        mov edi, eax
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call dword ptr ds : [public_5c603c]
        mov edx, dword ptr ds : [eax]
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        test edi, edi
        je public_47b14a
        cmp eax, 0xC
        je public_47b14a
        cmp eax, 0x14
        je public_47b14a
        cmp eax, 0x16
        je public_47b14a
        cmp eax, 0xB
        je public_47b14a
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        call public_438060
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_47b063
        fstp st(0)
        fld dword ptr ds : [public_5d15b8]
        public_47b063 : nop
        fstp dword ptr ss : [ebp+4]
        public_47b066 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        add ebp, 8
        cmp esi, ecx
        jne public_47afe0
        mov edi, dword ptr ss : [esp+0x18]
        public_47b07e : nop
        dec edi
        nop 
        public_47b080 : nop
        test edi, edi
        mov dl, 1
        jle public_47b0c2
        mov ecx, dword ptr ss : [esp+0x1C]
        add ecx, 4
        mov esi, edi
        nop 
        public_47b090 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 5
        jp public_47b0b8
        mov dx, word ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        mov ax, word ptr ds : [ecx-4]
        mov word ptr ds : [ecx-4], dx
        mov edx, dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx], edx
        mov word ptr ds : [ecx+4], ax
        xor dl, dl
        public_47b0b8 : nop
        add ecx, 8
        dec esi
        jne public_47b090
        test dl, dl
        je public_47b080
        public_47b0c2 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x28], eax
        jle public_47b255
        public_47b0d4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        movzx eax, word ptr ds : [ecx+eax*8]
        test ax, ax
        je public_47b240
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [public_5c6370]
        mov esi, eax
        test esi, esi
        je public_47b240
        mov ecx, dword ptr ds : [ebx+0x330]
        push 0
        add ebx, 0x330
        push esi
        call public_585ef0
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        mov dword ptr ss : [esp+0x1C], eax
        mov cl, byte ptr ds : [eax]
        add esp, 8
        test cl, cl
        jne public_47b130
        mov edx, dword ptr ds : [public_5c6210]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        public_47b130 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [public_674a8c]
        mov edi, dword ptr ds : [esi+0x14]
        jne public_47b15c
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ecx+0x140]
        jmp public_47b16e
        public_47b14a : nop
        mov word ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+4], 0
        jmp public_47b066
        public_47b15c : nop
        cmp eax, dword ptr ds : [public_674a88]
        jne public_47b178
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edx+0x144]
        public_47b16e : nop
        cmp edi, eax
        jle public_47b178
        test eax, eax
        jl public_47b178
        mov edi, eax
        public_47b178 : nop
        push 0
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        push esi
        mov ecx, ebx
        call public_4c6530
        test al, al
        je public_47b1a8
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+0x360]
        push edi
        push esi
        add ecx, 0x330
        call public_4c6430
        jmp public_47b23c
        public_47b1a8 : nop
        cmp dword ptr ds : [esi+0x14], 1
        jle public_47b23c
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, ebx
        call public_4c63e0
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        fstp dword ptr ss : [esp+0x34]
        je public_47b23c
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_47b23c
        fld dword ptr ds : [eax+0x5C]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_47b23a
        fld dword ptr ss : [esp+0x34]
        fdiv st, st(1)
        call public_5b7ec0
        fstp st(0)
        mov ebp, eax
        cmp ebp, edi
        jle public_47b209
        mov ebp, edi
        public_47b209 : nop
        test ebp, ebp
        jle public_47b23c
        push 0
        push ebp
        lea ecx, ss:[esp+0x1C]
        push ecx
        push esi
        mov ecx, ebx
        call public_4c6530
        test al, al
        je public_47b23c
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0x360]
        push ebp
        push esi
        add ecx, 0x330
        call public_4c6430
        jmp public_47b23c
        public_47b23a : nop
        fstp st(0)
        public_47b23c : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_47b240 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x18]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        jl public_47b0d4
        public_47b255 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+0x360]
        add esp, 4
        xor ebp, ebp
        push 5
        mov dword ptr ds : [ecx+0x4F4], 0
        push ebp
        or edi, 0xFFFFFFFF
        push ebp
        lea ecx, ds:[ebx+0x330]
        mov dword ptr ds : [ebx+0x3A4], edi
        mov dword ptr ds : [ebx+0x4F4], ebp
        call public_4c6a50
        push ebp
        mov ecx, ebx
        call public_4795f0
        mov eax, dword ptr ds : [ebx+0x360]
        cmp eax, ebp
        je public_47b2b6
        mov dword ptr ds : [eax+0x4E8], ebp
        mov edx, dword ptr ds : [ebx+0x360]
        mov dword ptr ds : [edx+0x4EC], ebp
        public_47b2b6 : nop
        mov esi, dword ptr ds : [ebx+0x360]
        push 5
        push ebp
        push ebp
        lea ecx, ds:[esi+0x330]
        mov dword ptr ds : [esi+0x3A4], edi
        mov dword ptr ds : [esi+0x4F4], ebp
        call public_4c6a50
        push ebp
        mov ecx, esi
        call public_4795f0
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebp
        pop edi
        je public_47b2fc
        mov dword ptr ds : [eax+0x4E8], ebp
        mov eax, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [eax+0x4EC], ebp
        public_47b2fc : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x47af30)
    }
}

#undef public_47afd0
#undef public_47afe0
#undef public_47b063
#undef public_47b066
#undef public_47b07e
#undef public_47b080
#undef public_47b090
#undef public_47b0b8
#undef public_47b0c2
#undef public_47b0d4
#undef public_47b130
#undef public_47b14a
#undef public_47b15c
#undef public_47b16e
#undef public_47b178
#undef public_47b1a8
#undef public_47b209
#undef public_47b23a
#undef public_47b23c
#undef public_47b240
#undef public_47b255
#undef public_47b2b6
#undef public_47b2fc
