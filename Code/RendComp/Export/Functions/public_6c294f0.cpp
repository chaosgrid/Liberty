#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c265f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c294f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34e60);

#define public_6c29580 _public_6c29580
#define public_6c295b8 _public_6c295b8
#define public_6c295c2 _public_6c295c2
#define public_6c295d0 _public_6c295d0
#define public_6c295d1 _public_6c295d1
#define public_6c29608 _public_6c29608
#define public_6c29626 _public_6c29626
#define public_6c29641 _public_6c29641
#define public_6c2964d _public_6c2964d
#define public_6c29694 _public_6c29694
#define public_6c29703 _public_6c29703
#define public_6c29740 _public_6c29740
#define public_6c29753 _public_6c29753
#define public_6c2978b _public_6c2978b
#define public_6c297de _public_6c297de
#define public_6c297ed _public_6c297ed
#define public_6c29807 _public_6c29807
#define public_6c29816 _public_6c29816

PROC_DECLARE(0x6c294f0, internal_6c294f0, public_6c294f0);
extern "C" NAKED register_t __cdecl internal_6c294f0()
{
    __asm
    {
        sub esp, 0x108
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov dword ptr ss : [esp+4], esi
        je public_6c29816
        cmp dword ptr ds : [esi+0x1C], 0xFFFFFFFF
        je public_6c29816
        mov eax, dword ptr ss : [esp+0x110]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push edi
        push eax
        call dword ptr ds : [ecx+0x40]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov ebx, eax
        mov eax, dword ptr ds : [public_6c37d4c]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x34], ebx
        call dword ptr ds : [edx+0xA0]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ebp, eax
        mov eax, dword ptr ds : [public_6c37d50]
        push 7
        mov dword ptr ss : [esp+0x1C], 1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6c29608
        mov esi, dword ptr ss : [esp+0x124]
        test esi, esi
        mov eax, dword ptr ds : [public_6c37cc0]
        je public_6c295c2
        test eax, eax
        jne public_6c29580
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc0], eax
        public_6c29580 : nop
        mov edx, dword ptr ds : [eax]
        push ebp
        push esi
        lea ecx, ss:[esp+0xF0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [public_6c37cc0]
        test eax, eax
        mov ecx, 0xC
        lea esi, ss:[esp+0xE8]
        lea edi, ss:[esp+0xB8]
        rep movsd
        jne public_6c295b8
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc0], eax
        public_6c295b8 : nop
        lea ecx, ss:[esp+0xB8]
        push ecx
        jmp public_6c295d1
        public_6c295c2 : nop
        test eax, eax
        jne public_6c295d0
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc0], eax
        public_6c295d0 : nop
        push ebp
        public_6c295d1 : nop
        mov edx, dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x60]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [public_6c37d50]
        lea esi, ss:[esp+0x58]
        lea edi, ss:[esp+0x88]
        mov ecx, 0xC
        rep movsd
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x88]
        push ecx
        push eax
        call dword ptr ds : [edx+0x7C]
        mov esi, dword ptr ss : [esp+0x10]
        jmp public_6c2964d
        public_6c29608 : nop
        mov edi, dword ptr ss : [esp+0x124]
        test edi, edi
        je public_6c29641
        mov eax, dword ptr ds : [public_6c37cc0]
        test eax, eax
        jne public_6c29626
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc0], eax
        public_6c29626 : nop
        mov edx, dword ptr ds : [eax]
        push ebp
        push edi
        lea ecx, ss:[esp+0x60]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [public_6c37d50]
        mov edx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [edx+0x6C]
        jmp public_6c2964d
        public_6c29641 : nop
        mov eax, dword ptr ds : [public_6c37d50]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_6c2964d : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [esp+0x120]
        mov ecx, dword ptr ds : [eax+0x14]
        or edx, 0xC
        add ebx, 0x1C
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], edx
        je public_6c29694
        lea eax, ds:[ebx+0x40]
        mov ecx, 5
        mov esi, eax
        mov edi, offset public_6c37cac
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi+0x14]
        mov ecx, 5
        mov edi, eax
        and edx, 0xFFFFFFFB
        rep movsd
        mov dword ptr ss : [esp+0x18], edx
        public_6c29694 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x24], eax
        cmp dword ptr ds : [ebx], eax
        je public_6c29703
        test dl, dl
        js public_6c29703
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [edx+0x10]
        call public_6c265f0
        test al, al
        jne public_6c29703
        mov eax, dword ptr ds : [public_6c37d64]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ds : [ebx+0x6C]
        push edx
        mov edx, dword ptr ds : [ebx+0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jl public_6c29703
        mov edx, dword ptr ds : [ebx+0x6C]
        mov eax, dword ptr ds : [public_6c37d64]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push 0
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_6c37d64]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        public_6c29703 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0x14]
        cmp ecx, eax
        mov edx, dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x3C], edx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x48], edx
        mov ebp, ecx
        je public_6c297ed
        lea esp, ss:[esp]
        public_6c29740 : nop
        mov esi, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, dword ptr ds : [esi+0x30]
        je public_6c29753
        mov dword ptr ss : [esp+0x48], 0
        public_6c29753 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        mov dword ptr ss : [esp+0x40], ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x44], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ss : [esp+0x128]
        test eax, eax
        mov dword ptr ss : [esp+0x50], 0
        je public_6c2978b
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x54], ecx
        mov edi, eax
        public_6c2978b : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jbe public_6c297de
        test edi, edi
        je public_6c297de
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x34]
        push eax
        push edi
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [edi]
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push edx
        mov edx, dword ptr ds : [esi+0x14]
        push 0
        sub edx, eax
        inc edx
        push edx
        push eax
        mov eax, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x4C]
        push edx
        push edi
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x34]
        push ecx
        push edi
        call dword ptr ds : [eax+0x24]
        cmp dword ptr ds : [esi+0x3C], 2
        jl public_6c297de
        mov dword ptr ss : [esp+0x48], 0
        public_6c297de : nop
        mov eax, dword ptr ss : [esp+0x30]
        add ebp, 4
        cmp ebp, eax
        jne public_6c29740
        public_6c297ed : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6c29807
        lea edi, ds:[ebx+0x40]
        mov ecx, 5
        mov esi, offset public_6c37cac
        rep movsd
        public_6c29807 : nop
        pop edi
        pop ebp
        pop ebx
        mov al, 1
        pop esi
        add esp, 0x108
        ret 0x10
        public_6c29816 : nop
        xor al, al
        pop esi
        add esp, 0x108
        ret 0x10
        UNREACHABLE_TRAP(0x6c294f0)
    }
}

#undef public_6c29580
#undef public_6c295b8
#undef public_6c295c2
#undef public_6c295d0
#undef public_6c295d1
#undef public_6c29608
#undef public_6c29626
#undef public_6c29641
#undef public_6c2964d
#undef public_6c29694
#undef public_6c29703
#undef public_6c29740
#undef public_6c29753
#undef public_6c2978b
#undef public_6c297de
#undef public_6c297ed
#undef public_6c29807
#undef public_6c29816
