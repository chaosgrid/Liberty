#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6ceb7d4 _public_6ceb7d4
#define public_6ceb7dc _public_6ceb7dc
#define public_6ceb851 _public_6ceb851
#define public_6ceb853 _public_6ceb853
#define public_6ceb870 _public_6ceb870
#define public_6ceb880 _public_6ceb880
#define public_6ceb890 _public_6ceb890
#define public_6ceb892 _public_6ceb892
#define public_6ceb920 _public_6ceb920
#define public_6ceb928 _public_6ceb928
#define public_6ceb940 _public_6ceb940
#define public_6ceb948 _public_6ceb948
#define public_6ceb9c4 _public_6ceb9c4
#define public_6ceb9e0 _public_6ceb9e0
#define public_6ceba12 _public_6ceba12
#define public_6ceba26 _public_6ceba26
#define public_6ceba31 _public_6ceba31

PROC_DECLARE(0x6ceb7b0, internal_6ceb7b0, public_6ceb7b0);
extern "C" NAKED register_t __cdecl internal_6ceb7b0()
{
    __asm
    {
        sub esp, 0x50
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6ceb7d4
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        mov dword ptr ss : [esp+0xC], eax
        je public_6ceb7dc
        public_6ceb7d4 : nop
        mov dword ptr ss : [esp+0xC], 0
        public_6ceb7dc : nop
        mov ebp, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0xC]
        xor edx, edx
        mov dx, word ptr ss : [ebp]
        lea ecx, ds:[eax+0xE4]
        push edx
        call dword ptr ds : [public_6d641c4]
        mov esi, eax
        test esi, esi
        je public_6ceba31
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        jne public_6ceba31
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x44]
        fcomp qword ptr ds : [public_6d65538]
        fnstsw ax
        test ah, 0x41
        jne public_6ceb890
        push esi
        call dword ptr ds : [public_6d641ac]
        add esp, 4
        test eax, eax
        je public_6ceb890
        mov eax, dword ptr ds : [edi+0x10]
        mov cx, word ptr ss : [ebp]
        xor ebx, ebx
        cmp eax, ebx
        je public_6ceb851
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ceb853
        public_6ceb851 : nop
        xor eax, eax
        public_6ceb853 : nop
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d641c4]
        mov edx, dword ptr ds : [edi+0x74]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_6ceb892
        lea esp, ss:[esp]
        public_6ceb870 : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [ebx+4], eax
        je public_6ceb880
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6ceb870
        jmp public_6ceb890
        public_6ceb880 : nop
        mov ebx, dword ptr ds : [ecx+8]
        test ebx, ebx
        je public_6ceb890
        call dword ptr ds : [public_6d64228]
        fstp qword ptr ds : [ebx+0x10]
        public_6ceb890 : nop
        xor ebx, ebx
        public_6ceb892 : nop
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        call public_6d06cd0
        mov ebx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [ebx+0x14]
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [edx+0x3C]
        fsub dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [eax+0x38]
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6ceb920
        fld dword ptr ss : [esp+0x30]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x34]
        jmp public_6ceb928
        public_6ceb920 : nop
        mov dword ptr ss : [esp+0x34], 0
        public_6ceb928 : nop
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6ceb940
        fld dword ptr ss : [ebp+4]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x38]
        jmp public_6ceb948
        public_6ceb940 : nop
        mov dword ptr ss : [esp+0x38], 0
        public_6ceb948 : nop
        lea ecx, ss:[esp+0x18]
        fstp st(0)
        push ecx
        push 0xD
        call public_6d43650
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        call dword ptr ds : [public_6d6422c]
        xor ecx, ecx
        cmp eax, ecx
        je public_6ceb9c4
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx]
        public_6ceb9c4 : nop
        cmp dword ptr ds : [ebx+0x10], 0x13
        pop ebx
        jne public_6ceb9e0
        mov edx, dword ptr ss : [ebp+4]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d642dc]
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 8
        public_6ceb9e0 : nop
        cmp dword ptr ds : [esi+0x14], 0x10000
        jne public_6ceba26
        cmp dword ptr ds : [esi+0x28], 1
        jbe public_6ceba26
        fld dword ptr ss : [ebp+4]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jp public_6ceba12
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d641dc]
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 8
        public_6ceba12 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x40]
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 8
        public_6ceba26 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        push eax
        call dword ptr ds : [edx+0x40]
        public_6ceba31 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x6ceb7b0)
    }
}

#undef public_6ceb7d4
#undef public_6ceb7dc
#undef public_6ceb851
#undef public_6ceb853
#undef public_6ceb870
#undef public_6ceb880
#undef public_6ceb890
#undef public_6ceb892
#undef public_6ceb920
#undef public_6ceb928
#undef public_6ceb940
#undef public_6ceb948
#undef public_6ceb9c4
#undef public_6ceb9e0
#undef public_6ceba12
#undef public_6ceba26
#undef public_6ceba31
