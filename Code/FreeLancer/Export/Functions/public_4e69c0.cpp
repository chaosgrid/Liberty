#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e69c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4e69f1 _public_4e69f1
#define public_4e6a14 _public_4e6a14
#define public_4e6a24 _public_4e6a24
#define public_4e6a26 _public_4e6a26
#define public_4e6a37 _public_4e6a37
#define public_4e6a83 _public_4e6a83
#define public_4e6abf _public_4e6abf
#define public_4e6aff _public_4e6aff
#define public_4e6b06 _public_4e6b06
#define public_4e6b08 _public_4e6b08
#define public_4e6b1d _public_4e6b1d
#define public_4e6b32 _public_4e6b32
#define public_4e6b45 _public_4e6b45
#define public_4e6b85 _public_4e6b85
#define public_4e6b87 _public_4e6b87
#define public_4e6b9c _public_4e6b9c
#define public_4e6bb1 _public_4e6bb1
#define public_4e6bbf _public_4e6bbf
#define public_4e6be4 _public_4e6be4

PROC_DECLARE(0x4e69c0, internal_4e69c0, public_4e69c0);
extern "C" NAKED register_t __cdecl internal_4e69c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        sub esp, 0x48
        push ebp
        push esi
        push 0xFFFFFFFF
        push 1
        push edx
        mov ebp, ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_4e6be4
        push ebx
        mov ebx, dword ptr ss : [esp+0x5C]
        push edi
        public_4e69f1 : nop
        mov al, byte ptr ss : [esp+0x64]
        test al, al
        jne public_4e6a37
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov edx, dword ptr ds : [eax+0x68]
        mov edi, dword ptr ds : [eax+0x6C]
        cmp edx, edi
        je public_4e6a24
        public_4e6a14 : nop
        cmp dword ptr ds : [edx+4], esi
        je public_4e6aff
        add edx, 0xC
        cmp edx, edi
        jne public_4e6a14
        public_4e6a24 : nop
        xor edx, edx
        public_4e6a26 : nop
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6594]
        test al, al
        jne public_4e6bbf
        public_4e6a37 : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x60], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x64]
        push edx
        push 0
        push esi
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov edi, eax
        mov eax, dword ptr ds : [public_674b1c]
        test eax, eax
        jne public_4e6a83
        call public_5b73e0
        mov dword ptr ds : [public_674b1c], eax
        public_4e6a83 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_674b1c]
        test eax, eax
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x18], ecx
        jne public_4e6abf
        call public_5b73e0
        mov dword ptr ds : [public_674b1c], eax
        public_4e6abf : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x48]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x24]
        fcom dword ptr ss : [ebp+0xC]
        fnstsw ax
        test ah, 5
        jp public_4e6b06
        fstp dword ptr ss : [ebp+0xC]
        jmp public_4e6b08
        public_4e6aff : nop
        mov edx, dword ptr ds : [edx]
        jmp public_4e6a26
        public_4e6b06 : nop
        fstp st(0)
        public_4e6b08 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ss : [ebp+0x10]
        fnstsw ax
        test ah, 5
        jp public_4e6b1d
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+0x10], edx
        public_4e6b1d : nop
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [ebp+0x14]
        fnstsw ax
        test ah, 5
        jp public_4e6b32
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp+0x14], eax
        public_4e6b32 : nop
        mov eax, dword ptr ds : [public_674b1c]
        test eax, eax
        jne public_4e6b45
        call public_5b73e0
        mov dword ptr ds : [public_674b1c], eax
        public_4e6b45 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push ebx
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x30]
        fcom dword ptr ss : [ebp]
        fnstsw ax
        test ah, 0x41
        jne public_4e6b85
        fstp dword ptr ss : [ebp]
        jmp public_4e6b87
        public_4e6b85 : nop
        fstp st(0)
        public_4e6b87 : nop
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 0x41
        jne public_4e6b9c
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp+4], eax
        public_4e6b9c : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ss : [ebp+8]
        fnstsw ax
        test ah, 0x41
        jne public_4e6bb1
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [ebp+8], ecx
        public_4e6bb1 : nop
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        push ebx
        push esi
        mov ecx, ebp
        call public_4e69c0
        public_4e6bbf : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_4e69f1
        pop edi
        pop ebx
        public_4e6be4 : nop
        pop esi
        pop ebp
        add esp, 0x48
        ret 0xC
        UNREACHABLE_TRAP(0x4e69c0)
    }
}

#undef public_4e69f1
#undef public_4e6a14
#undef public_4e6a24
#undef public_4e6a26
#undef public_4e6a37
#undef public_4e6a83
#undef public_4e6abf
#undef public_4e6aff
#undef public_4e6b06
#undef public_4e6b08
#undef public_4e6b1d
#undef public_4e6b32
#undef public_4e6b45
#undef public_4e6b85
#undef public_4e6b87
#undef public_4e6b9c
#undef public_4e6bb1
#undef public_4e6bbf
#undef public_4e6be4
