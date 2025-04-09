#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4bed40);
CLANG_FORWARD_PROC_SYMBOL(public_4bedc0);
CLANG_FORWARD_PROC_SYMBOL(public_4bef00);
CLANG_FORWARD_PROC_SYMBOL(public_4bf850);
CLANG_FORWARD_PROC_SYMBOL(public_4c1a10);
CLANG_FORWARD_PROC_SYMBOL(public_4c1ae0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4c1b04 _public_4c1b04
#define public_4c1b30 _public_4c1b30
#define public_4c1b41 _public_4c1b41
#define public_4c1cd0 _public_4c1cd0
#define public_4c1ce0 _public_4c1ce0
#define public_4c1cf8 _public_4c1cf8
#define public_4c1d0b _public_4c1d0b
#define public_4c1d1f _public_4c1d1f
#define public_4c1d2f _public_4c1d2f
#define public_4c1d69 _public_4c1d69
#define public_4c1d7e _public_4c1d7e
#define public_4c1d9e _public_4c1d9e
#define public_4c1da7 _public_4c1da7
#define public_4c1da9 _public_4c1da9
#define public_4c1daf _public_4c1daf
#define public_4c1dbc _public_4c1dbc
#define public_4c1dd7 _public_4c1dd7
#define public_4c1e07 _public_4c1e07
#define public_4c1e2e _public_4c1e2e
#define public_4c1e35 _public_4c1e35
#define public_4c1e78 _public_4c1e78
#define public_4c1e87 _public_4c1e87
#define public_4c1ed6 _public_4c1ed6
#define public_4c1f93 _public_4c1f93
#define public_4c2020 _public_4c2020
#define public_4c2032 _public_4c2032
#define public_4c207d _public_4c207d
#define public_4c213a _public_4c213a
#define public_4c21c0 _public_4c21c0
#define public_4c21d2 _public_4c21d2
#define public_4c220b _public_4c220b

PROC_DECLARE(0x4c1ae0, internal_4c1ae0, public_4c1ae0);
extern "C" NAKED register_t __cdecl internal_4c1ae0()
{
    __asm
    {
        sub esp, 0x34
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x390]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, 4
        push edi
        jne public_4c1b04
        mov dword ptr ss : [esp+0xC], eax
        mov eax, 3
        public_4c1b04 : nop
        mov dword ptr ds : [esi+0x390], eax
        dec eax
        je public_4c207d
        dec eax
        je public_4c1ed6
        dec eax
        jne public_4c220b
        mov edi, dword ptr ds : [esi+0x334]
        mov eax, dword ptr ds : [edi+0x18]
        push ebx
        mov ebx, dword ptr ds : [edi+0x14]
        cmp ebx, eax
        je public_4c1b41
        public_4c1b30 : nop
        mov ecx, dword ptr ds : [ebx]
        call public_4bed40
        mov eax, dword ptr ds : [edi+0x18]
        add ebx, 4
        cmp ebx, eax
        jne public_4c1b30
        public_4c1b41 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        xor ebp, ebp
        push ebp
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x41C]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x420]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x3A0]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x3A4]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebp
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x3A8]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push ebp
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x428]
        push ecx
        mov ecx, dword ptr ds : [esi+0x33C]
        call public_4bef00
        mov ecx, dword ptr ds : [esi+0x33C]
        call public_4bedc0
        mov ecx, dword ptr ds : [esi+0x348]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebp
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x350]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push ebp
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x354]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebp
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x358]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push ebp
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x35C]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebp
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x34C]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push ebp
        push 1
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+0x428]
        mov cl, byte ptr ds : [eax]
        mov byte ptr ss : [esp+0x24], cl
        mov dx, word ptr ds : [eax+2]
        mov word ptr ss : [esp+0x26], dx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x2C], edx
        mov cl, byte ptr ds : [eax+0xC]
        mov byte ptr ss : [esp+0x30], cl
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x34], edx
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x38], ecx
        mov dl, byte ptr ds : [eax+0x18]
        mov byte ptr ss : [esp+0x3C], dl
        mov eax, dword ptr ds : [eax+0x1C]
        push 1
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x44], eax
        call dword ptr ds : [public_5c6428]
        mov ecx, dword ptr ds : [esi+0x424]
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [esi+0x338]
        lea ecx, ss:[esp+0x24]
        sete bl
        call dword ptr ds : [public_5c637c]
        fstp qword ptr ss : [esp+0x1C]
        fld qword ptr ds : [esi+0x3F0]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_4c1cd0
        fld qword ptr ds : [esi+0x3F0]
        fsub qword ptr ds : [esi+0x3E8]
        fstp qword ptr ss : [esp+0x14]
        jmp public_4c1ce0
        public_4c1cd0 : nop
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0x408F4000
        public_4c1ce0 : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [public_674a88]
        jne public_4c1d0b
        xor eax, eax
        test bl, bl
        je public_4c1cf8
        mov eax, dword ptr ds : [esi+0x40C]
        public_4c1cf8 : nop
        mov edi, dword ptr ds : [esi+0x404]
        sub edi, dword ptr ds : [esi+0x400]
        sub edi, eax
        jmp public_4c1da9
        public_4c1d0b : nop
        cmp eax, dword ptr ds : [public_674a8c]
        jne public_4c1d2f
        xor eax, eax
        test bl, bl
        je public_4c1d1f
        mov eax, dword ptr ds : [esi+0x408]
        public_4c1d1f : nop
        mov edi, dword ptr ds : [esi+0x3FC]
        sub edi, dword ptr ds : [esi+0x3F8]
        sub edi, eax
        jmp public_4c1da9
        public_4c1d2f : nop
        mov ecx, dword ptr ds : [esi+0x438]
        mov edi, dword ptr ds : [public_5c643c]
        push eax
        call edi
        cmp eax, 0xFFFFFFFF
        jle public_4c1d7e
        test bl, bl
        je public_4c1d69
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x334]
        push 0x3F800000
        push 1
        push ecx
        lea ecx, ds:[eax+0x20]
        call dword ptr ds : [public_5c6384]
        test eax, eax
        je public_4c1d69
        mov ebp, dword ptr ds : [eax+0x14]
        public_4c1d69 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi+0x43C]
        push edx
        call edi
        mov edi, eax
        sub edi, ebp
        xor ebp, ebp
        jmp public_4c1da9
        public_4c1d7e : nop
        fld qword ptr ss : [esp+0x1C]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_4c1d9e
        fld qword ptr ss : [esp+0x14]
        fdiv qword ptr ss : [esp+0x1C]
        call public_5b7ec0
        jmp public_4c1da7
        public_4c1d9e : nop
        mov eax, dword ptr ds : [esi+0x428]
        mov eax, dword ptr ds : [eax+0x14]
        public_4c1da7 : nop
        mov edi, eax
        public_4c1da9 : nop
        cmp edi, ebp
        jge public_4c1daf
        xor edi, edi
        public_4c1daf : nop
        test bl, bl
        jne public_4c1dbc
        mov ecx, dword ptr ds : [esi+0x428]
        mov edi, dword ptr ds : [ecx+0x14]
        public_4c1dbc : nop
        mov edx, dword ptr ds : [esi+0x34C]
        mov dword ptr ds : [edx+0x658], ebp
        mov eax, dword ptr ds : [esi+0x428]
        mov eax, dword ptr ds : [eax+0x14]
        cmp eax, edi
        jl public_4c1dd7
        mov eax, edi
        public_4c1dd7 : nop
        mov ecx, dword ptr ds : [esi+0x34C]
        test bl, bl
        mov dword ptr ds : [ecx+0x65C], eax
        pop ebx
        je public_4c1e07
        mov edx, dword ptr ds : [esi+0x428]
        cmp dword ptr ds : [edx+0x14], 1
        jne public_4c1e07
        mov ecx, dword ptr ds : [esi+0x34C]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4c1e07 : nop
        cmp dword ptr ss : [esp+0xC], 4
        jne public_4c1e2e
        mov ecx, dword ptr ds : [esi+0x34C]
        cmp dword ptr ds : [ecx+0x664], edi
        jle public_4c1e35
        mov edx, dword ptr ds : [public_672458]
        push ebp
        push edx
        call public_489e80
        add esp, 8
        jmp public_4c1e35
        public_4c1e2e : nop
        mov byte ptr ds : [esi+0x360], 0
        public_4c1e35 : nop
        mov ecx, dword ptr ds : [esi+0x34C]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push edi
        push 0x38
        call dword ptr ds : [eax+0xA8]
        push edi
        mov ecx, esi
        call public_4c1a10
        mov ecx, dword ptr ds : [esi+0x424]
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [esi+0x338]
        mov ecx, dword ptr ds : [esi+0x348]
        push ebp
        jne public_4c1e78
        mov eax, dword ptr ds : [ecx]
        push 0x757
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        jmp public_4c1e87
        public_4c1e78 : nop
        mov edx, dword ptr ds : [ecx]
        push 0x758
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        public_4c1e87 : nop
        cmp edi, 1
        jge public_4c220b
        mov eax, dword ptr ds : [public_672458]
        push ebp
        push eax
        call public_489e80
        mov ecx, dword ptr ds : [esi+0x424]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [esi+0x428]
        add esp, 8
        mov byte ptr ds : [edx], 0
        push 0xFFFFFFFF
        mov dword ptr ds : [esi+0x424], ebp
        mov dword ptr ds : [esi+0x428], ebp
        call public_4bf850
        push 2
        mov ecx, esi
        call public_4c1ae0
        pop edi
        pop esi
        pop ebp
        add esp, 0x34
        ret 4
        public_4c1ed6 : nop
        mov ecx, dword ptr ds : [esi+0x3A0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x3A4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x3A8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov edi, dword ptr ds : [esi+0x33C]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        je public_4c1f93
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        public_4c1f93 : nop
        mov ecx, dword ptr ds : [esi+0x348]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x350]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x354]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x358]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x35C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x34C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov edi, dword ptr ds : [esi+0x334]
        mov ebp, dword ptr ds : [edi+0x14]
        cmp ebp, dword ptr ds : [edi+0x18]
        je public_4c2032
        lea esp, ss:[esp]
        public_4c2020 : nop
        mov ecx, dword ptr ss : [ebp]
        call public_4bedc0
        mov eax, dword ptr ds : [edi+0x18]
        add ebp, 4
        cmp ebp, eax
        jne public_4c2020
        public_4c2032 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        push 0xFFFFFFFF
        mov ecx, edi
        call public_4bf850
        mov ecx, dword ptr ds : [esi+0x41C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x420]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        pop edi
        pop esi
        pop ebp
        add esp, 0x34
        ret 4
        public_4c207d : nop
        mov ecx, dword ptr ds : [esi+0x3A0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x3A4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x3A8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov edi, dword ptr ds : [esi+0x33C]
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        je public_4c213a
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4c213a : nop
        mov ecx, dword ptr ds : [esi+0x348]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x350]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x354]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x358]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x35C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x34C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov edi, dword ptr ds : [esi+0x334]
        mov ebp, dword ptr ds : [edi+0x14]
        cmp ebp, dword ptr ds : [edi+0x18]
        je public_4c21d2
        public_4c21c0 : nop
        mov ecx, dword ptr ss : [ebp]
        call public_4bed40
        mov eax, dword ptr ds : [edi+0x18]
        add ebp, 4
        cmp ebp, eax
        jne public_4c21c0
        public_4c21d2 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x41C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x420]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        public_4c220b : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x4c1ae0)
    }
}

#undef public_4c1b04
#undef public_4c1b30
#undef public_4c1b41
#undef public_4c1cd0
#undef public_4c1ce0
#undef public_4c1cf8
#undef public_4c1d0b
#undef public_4c1d1f
#undef public_4c1d2f
#undef public_4c1d69
#undef public_4c1d7e
#undef public_4c1d9e
#undef public_4c1da7
#undef public_4c1da9
#undef public_4c1daf
#undef public_4c1dbc
#undef public_4c1dd7
#undef public_4c1e07
#undef public_4c1e2e
#undef public_4c1e35
#undef public_4c1e78
#undef public_4c1e87
#undef public_4c1ed6
#undef public_4c1f93
#undef public_4c2020
#undef public_4c2032
#undef public_4c207d
#undef public_4c213a
#undef public_4c21c0
#undef public_4c21d2
#undef public_4c220b
