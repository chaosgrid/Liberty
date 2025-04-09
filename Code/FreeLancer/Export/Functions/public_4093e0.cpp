#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_402500);

#define public_40940c _public_40940c
#define public_40941a _public_40941a
#define public_409446 _public_409446
#define public_40944b _public_40944b
#define public_409460 _public_409460
#define public_409474 _public_409474
#define public_409484 _public_409484
#define public_40948d _public_40948d
#define public_40949d _public_40949d
#define public_4094a6 _public_4094a6
#define public_4094bc _public_4094bc
#define public_4094cb _public_4094cb

PROC_DECLARE(0x4093e0, internal_4093e0, public_4093e0);
extern "C" NAKED register_t __cdecl internal_4093e0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+4]
        mov esi, ecx
        push eax
        lea ebx, ds:[esi+4]
        push ebx
        call public_402500
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [esi+8]
        add esp, 8
        fnstsw ax
        test ah, 0x44
        jnp public_40940c
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        public_40940c : nop
        cmp dword ptr ds : [ebx], 0
        jne public_40941a
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_409474
        public_40941a : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_409474
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_409446
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x10], 0
        jne public_40944b
        public_409446 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_40944b : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+0x40]
        jne public_409460
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_409474
        public_409460 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_409474 : nop
        mov eax, dword ptr ds : [edi+0x64]
        cmp eax, dword ptr ds : [esi+0x64]
        jne public_409484
        mov ecx, dword ptr ds : [edi+0x68]
        cmp ecx, dword ptr ds : [esi+0x68]
        je public_40948d
        public_409484 : nop
        mov dword ptr ds : [esi+0x64], eax
        mov edx, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x68], edx
        public_40948d : nop
        mov eax, dword ptr ds : [edi+0x6C]
        cmp eax, dword ptr ds : [esi+0x6C]
        jne public_40949d
        mov ecx, dword ptr ds : [edi+0x70]
        cmp ecx, dword ptr ds : [esi+0x70]
        je public_4094a6
        public_40949d : nop
        mov dword ptr ds : [esi+0x6C], eax
        mov edx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], edx
        public_4094a6 : nop
        mov eax, dword ptr ds : [edi+0x7C]
        cmp eax, dword ptr ds : [esi+0x7C]
        jne public_4094bc
        mov ecx, dword ptr ds : [edi+0x80]
        cmp ecx, dword ptr ds : [esi+0x80]
        je public_4094cb
        public_4094bc : nop
        mov dword ptr ds : [esi+0x7C], eax
        mov edx, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], edx
        public_4094cb : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4093e0)
    }
}

#undef public_40940c
#undef public_40941a
#undef public_409446
#undef public_40944b
#undef public_409460
#undef public_409474
#undef public_409484
#undef public_40948d
#undef public_40949d
#undef public_4094a6
#undef public_4094bc
#undef public_4094cb
