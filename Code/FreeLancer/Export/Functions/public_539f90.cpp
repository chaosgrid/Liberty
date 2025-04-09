#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_4f8060);
CLANG_FORWARD_PROC_SYMBOL(public_4f8110);
CLANG_FORWARD_PROC_SYMBOL(public_539f90);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_539fb5 _public_539fb5
#define public_539ff2 _public_539ff2
#define public_539ffe _public_539ffe
#define public_53a015 _public_53a015
#define public_53a032 _public_53a032
#define public_53a055 _public_53a055
#define public_53a05f _public_53a05f
#define public_53a061 _public_53a061
#define public_53a094 _public_53a094
#define public_53a0b8 _public_53a0b8
#define public_53a0e5 _public_53a0e5
#define public_53a202 _public_53a202
#define public_53a225 _public_53a225

PROC_DECLARE(0x539f90, internal_539f90, public_539f90);
extern "C" NAKED register_t __cdecl internal_539f90()
{
    __asm
    {
        sub esp, 0x8C
        push ebx
        push edi
        mov ebx, ecx
        call public_54baf0
        cmp ebx, eax
        jne public_539fb5
        push 0x38
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_53a225
        public_539fb5 : nop
        mov edi, dword ptr ss : [esp+0x9C]
        test edi, edi
        je public_53a225
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        push esi
        je public_53a202
        push 0x84
        call public_4f79a0
        add esp, 4
        test eax, eax
        je public_539ff2
        push 0
        mov ecx, eax
        call public_4f8060
        mov esi, eax
        mov dword ptr ss : [esp+0xC], esi
        jmp public_539ffe
        public_539ff2 : nop
        mov dword ptr ss : [esp+0xC], 0
        mov esi, dword ptr ss : [esp+0xC]
        public_539ffe : nop
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax]
        test al, al
        jne public_53a015
        mov ecx, esi
        call public_4f7a90
        jmp public_53a202
        public_53a015 : nop
        push ebp
        mov ebp, dword ptr ds : [public_613e60]
        xor esi, esi
        xor edi, edi
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], 0x42C80000
        jle public_53a061
        lea edx, ds:[ebx+0x90]
        public_53a032 : nop
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_53a05f
        test byte ptr ds : [ecx+8], 2
        jne public_53a05f
        fld dword ptr ds : [ecx+0x78]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_53a055
        mov ecx, dword ptr ds : [ecx+0x78]
        mov dword ptr ss : [esp+0x14], ecx
        mov esi, edi
        public_53a055 : nop
        inc edi
        add edx, 4
        cmp edi, ebp
        jl public_53a032
        jmp public_53a061
        public_53a05f : nop
        mov esi, edi
        public_53a061 : nop
        mov ecx, dword ptr ds : [ebx+esi*4+0x90]
        test ecx, ecx
        je public_53a094
        call public_4f8110
        mov ecx, dword ptr ds : [ebx+esi*4+0x90]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ebx+esi*4+0x90]
        call public_4f7a90
        mov dword ptr ds : [ebx+esi*4+0x90], 0
        public_53a094 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+esi*4+0x90], ebp
        mov esi, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [public_6789d0]
        add esi, 8
        test eax, eax
        jne public_53a0b8
        call public_5b73e0
        mov dword ptr ds : [public_6789d0], eax
        public_53a0b8 : nop
        mov edx, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov esi, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [public_6789d0]
        add esi, 8
        test eax, eax
        jne public_53a0e5
        call public_5b73e0
        mov dword ptr ds : [public_6789d0], eax
        public_53a0e5 : nop
        mov edx, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x34]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x50], edx
        add esi, 8
        mov ecx, 9
        lea edi, ss:[esp+0x6C]
        rep movsd
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        mov dword ptr ss : [esp+0xA4], 0
        mov dword ptr ss : [esp+0xA0], 0
        mov dword ptr ss : [esp+0x9C], 0
        call dword ptr ds : [public_5c65a0]
        mov edx, dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x38]
        lea esi, ss:[esp+0x30]
        fld dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x28]
        lea edi, ss:[esp+0x78]
        fld dword ptr ss : [esp+0x50]
        add esp, 0xC
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x68]
        fxch 
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x38]
        fchs 
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x68]
        fxch 
        mov dword ptr ss : [esp+0x40], ecx
        fstp dword ptr ss : [esp+0x28]
        mov ecx, 9
        fstp dword ptr ss : [esp+0x34]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x90], edx
        lea edx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x94], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x98], ecx
        push edx
        mov ecx, ebx
        call dword ptr ds : [eax+0x1C]
        push eax
        push ebx
        mov ecx, ebp
        call public_4f7d20
        mov edi, dword ptr ss : [esp+0xA4]
        pop ebp
        public_53a202 : nop
        mov eax, dword ptr ds : [edi+0x18]
        test eax, eax
        pop esi
        je public_53a225
        mov ecx, dword ptr ss : [esp+0xA0]
        mov edx, dword ptr ds : [ebx]
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0xA0]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x1B4]
        public_53a225 : nop
        pop edi
        pop ebx
        add esp, 0x8C
        ret 0x14
        UNREACHABLE_TRAP(0x539f90)
    }
}

#undef public_539fb5
#undef public_539ff2
#undef public_539ffe
#undef public_53a015
#undef public_53a032
#undef public_53a055
#undef public_53a05f
#undef public_53a061
#undef public_53a094
#undef public_53a0b8
#undef public_53a0e5
#undef public_53a202
#undef public_53a225
