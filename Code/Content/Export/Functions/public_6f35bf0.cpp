#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f35bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

#define public_6f35c41 _public_6f35c41
#define public_6f35c9c _public_6f35c9c
#define public_6f35ca0 _public_6f35ca0
#define public_6f35cae _public_6f35cae
#define public_6f35cc0 _public_6f35cc0
#define public_6f35d45 _public_6f35d45
#define public_6f35d48 _public_6f35d48
#define public_6f35d60 _public_6f35d60
#define public_6f35d88 _public_6f35d88
#define public_6f35d8e _public_6f35d8e
#define public_6f35d91 _public_6f35d91
#define public_6f35d9a _public_6f35d9a

PROC_DECLARE(0x6f35bf0, internal_6f35bf0, public_6f35bf0);
extern "C" NAKED register_t __cdecl internal_6f35bf0()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x44]
        xor ebx, ebx
        xor ebp, ebp
        push ecx
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [public_6fb3514]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], ebx
        fild qword ptr ss : [esp+0x2C]
        add esp, 8
        fmul qword ptr ds : [public_6fb95c8]
        call public_6fa9130
        mov edi, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x10], eax
        cmp esi, dword ptr ds : [edi+8]
        je public_6f35cae
        public_6f35c41 : nop
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebx
        fild qword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+8]
        call public_6fa9130
        mov ebp, eax
        cmp dword ptr ds : [esi+4], ebx
        jbe public_6f35ca0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [public_6fb3510]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], ebx
        fild qword ptr ss : [esp+0x24]
        add esp, 0xC
        fmul dword ptr ss : [esp+0x14]
        call public_6fa9130
        cmp eax, dword ptr ss : [esp+0x10]
        jb public_6f35c9c
        mov dword ptr ss : [esp+0x10], ebx
        jmp public_6f35ca0
        public_6f35c9c : nop
        sub dword ptr ss : [esp+0x10], eax
        public_6f35ca0 : nop
        mov eax, dword ptr ds : [edi+8]
        add esi, 0xC
        cmp esi, eax
        jne public_6f35c41
        mov dword ptr ss : [esp+0x20], ebp
        public_6f35cae : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f35d9a
        lea ebx, ds:[ebx]
        public_6f35cc0 : nop
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f35d48
        cmp ebp, ebx
        jbe public_6f35d48
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebx
        fild qword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ebx
        fdivr dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        mov dword ptr ss : [esp+0x20], 0
        fimul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [public_6fb3510]
        fld dword ptr ss : [esp+0x20]
        add esp, 0xC
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f35d45
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jp public_6f35d45
        fld dword ptr ss : [esp+0x18]
        fdiv dword ptr ss : [esp+0x14]
        call public_6fa9130
        mov dword ptr ds : [esi+4], eax
        jmp public_6f35d48
        public_6f35d45 : nop
        mov dword ptr ds : [esi+4], ebx
        public_6f35d48 : nop
        cmp dword ptr ds : [esi+4], ebx
        ja public_6f35d8e
        mov edx, dword ptr ds : [edi+8]
        lea eax, ds:[esi+0xC]
        cmp eax, edx
        je public_6f35d88
        mov ecx, esi
        lea esp, ss:[esp]
        public_6f35d60 : nop
        mov edi, eax
        mov ebp, dword ptr ds : [edi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edi, dword ptr ds : [edi+8]
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        mov dword ptr ds : [ebx+8], edi
        jne public_6f35d60
        mov ebp, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x44]
        xor ebx, ebx
        public_6f35d88 : nop
        add dword ptr ds : [edi+8], 0xFFFFFFF4
        jmp public_6f35d91
        public_6f35d8e : nop
        add esi, 0xC
        public_6f35d91 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6f35cc0
        public_6f35d9a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x6f35bf0)
    }
}

#undef public_6f35c41
#undef public_6f35c9c
#undef public_6f35ca0
#undef public_6f35cae
#undef public_6f35cc0
#undef public_6f35d45
#undef public_6f35d48
#undef public_6f35d60
#undef public_6f35d88
#undef public_6f35d8e
#undef public_6f35d91
#undef public_6f35d9a
