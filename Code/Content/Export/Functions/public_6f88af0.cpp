#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f88b1e _public_6f88b1e
#define public_6f88b4c _public_6f88b4c
#define public_6f88b74 _public_6f88b74
#define public_6f88b7c _public_6f88b7c
#define public_6f88b92 _public_6f88b92
#define public_6f88be1 _public_6f88be1
#define public_6f88c00 _public_6f88c00
#define public_6f88c82 _public_6f88c82
#define public_6f88c9c _public_6f88c9c
#define public_6f88cc4 _public_6f88cc4
#define public_6f88ccc _public_6f88ccc
#define public_6f88ce2 _public_6f88ce2
#define public_6f88d31 _public_6f88d31
#define public_6f88d50 _public_6f88d50
#define public_6f88db8 _public_6f88db8
#define public_6f88dc2 _public_6f88dc2
#define public_6f88dce _public_6f88dce

PROC_DECLARE(0x6f88af0, internal_6f88af0, public_6f88af0);
extern "C" NAKED register_t __cdecl internal_6f88af0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        sub esp, 0x3C
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        je public_6f88b1e
        mov edx, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        push 1
        call dword ptr ds : [eax+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 0x10
        public_6f88b1e : nop
        mov esi, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [esi+0x44]
        sub eax, 8
        je public_6f88c9c
        dec eax
        je public_6f88b4c
        mov edx, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [ecx]
        push edx
        push esi
        push 0
        call dword ptr ds : [eax+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 0x10
        public_6f88b4c : nop
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        je public_6f88dce
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax+0x88]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x74]
        mov ebp, eax
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6f88b74
        xor edi, edi
        jmp public_6f88b7c
        public_6f88b74 : nop
        mov edi, dword ptr ss : [ebp+8]
        sub edi, eax
        sar edi, 2
        public_6f88b7c : nop
        add esi, 0x30
        mov ecx, esi
        call public_6eb6b30
        cmp eax, edi
        jae public_6f88be1
        test edi, edi
        mov eax, edi
        jge public_6f88b92
        xor eax, eax
        public_6f88b92 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6ea1490
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        lea eax, ds:[ebx+edi*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6fa3db0
        lea ecx, ds:[ebx+eax*4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], ebx
        public_6f88be1 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [eax+0x10]
        lea edx, ss:[esp+0x28]
        push edx
        call public_6eb70f0
        mov edi, dword ptr ss : [ebp+4]
        cmp edi, dword ptr ss : [ebp+8]
        je public_6f88dc2
        mov edi, edi
        public_6f88c00 : nop
        mov ecx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_6f88c82
        lea edx, ss:[esp+0x34]
        push edx
        call public_6eb70f0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x30]
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fcomp dword ptr ds : [public_6fbc2ac]
        fnstsw ax
        test ah, 0x41
        jne public_6f88c82
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x50]
        push edx
        push 1
        mov dword ptr ss : [esp+0x58], ecx
        push eax
        mov ecx, esi
        call public_6f937c0
        public_6f88c82 : nop
        mov eax, dword ptr ss : [ebp+8]
        add edi, 4
        cmp edi, eax
        jne public_6f88c00
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x3C
        ret 0x10
        public_6f88c9c : nop
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        je public_6f88dce
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax+0x88]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x74]
        mov ebp, eax
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6f88cc4
        xor edi, edi
        jmp public_6f88ccc
        public_6f88cc4 : nop
        mov edi, dword ptr ss : [ebp+8]
        sub edi, eax
        sar edi, 2
        public_6f88ccc : nop
        add esi, 0x30
        mov ecx, esi
        call public_6eb6b30
        cmp eax, edi
        jae public_6f88d31
        test edi, edi
        mov eax, edi
        jge public_6f88ce2
        xor eax, eax
        public_6f88ce2 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6ea1490
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        lea eax, ds:[ebx+edi*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6fa3db0
        lea ecx, ds:[ebx+eax*4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], ebx
        public_6f88d31 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [eax+0x10]
        lea edx, ss:[esp+0x28]
        push edx
        call public_6eb70f0
        mov edi, dword ptr ss : [ebp+4]
        cmp edi, dword ptr ss : [ebp+8]
        je public_6f88dc2
        lea ebx, ds:[ebx]
        public_6f88d50 : nop
        mov ecx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_6f88db8
        lea edx, ss:[esp+0x40]
        push edx
        call public_6eb70f0
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        add esp, 0xC
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fcomp dword ptr ds : [public_6fbc2ac]
        fnstsw ax
        test ah, 0x41
        jp public_6f88db8
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x58]
        push edx
        mov dword ptr ss : [esp+0x5C], ecx
        push eax
        mov ecx, esi
        call public_6eb5770
        public_6f88db8 : nop
        mov eax, dword ptr ss : [ebp+8]
        add edi, 4
        cmp edi, eax
        jne public_6f88d50
        public_6f88dc2 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x3C
        ret 0x10
        public_6f88dce : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        push 0
        push esi
        push 0
        call dword ptr ds : [edx+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 0x10
        UNREACHABLE_TRAP(0x6f88af0)
    }
}

#undef public_6f88b1e
#undef public_6f88b4c
#undef public_6f88b74
#undef public_6f88b7c
#undef public_6f88b92
#undef public_6f88be1
#undef public_6f88c00
#undef public_6f88c82
#undef public_6f88c9c
#undef public_6f88cc4
#undef public_6f88ccc
#undef public_6f88ce2
#undef public_6f88d31
#undef public_6f88d50
#undef public_6f88db8
#undef public_6f88dc2
#undef public_6f88dce
