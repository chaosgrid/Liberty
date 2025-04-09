#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b39b0);
CLANG_FORWARD_PROC_SYMBOL(public_4b3dd0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ce0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4f70);
CLANG_FORWARD_PROC_SYMBOL(public_4c4f90);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fa0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4b46bc _public_4b46bc
#define public_4b46f8 _public_4b46f8
#define public_4b471c _public_4b471c
#define public_4b4722 _public_4b4722
#define public_4b4786 _public_4b4786
#define public_4b4791 _public_4b4791
#define public_4b47a3 _public_4b47a3
#define public_4b47b2 _public_4b47b2

PROC_DECLARE(0x4b4670, internal_4b4670, public_4b4670);
extern "C" NAKED register_t __cdecl internal_4b4670()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66873c]
        sub esp, 0x200
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        je public_4b4786
        call public_5a17b0
        call public_4c4f90
        cmp dword ptr ds : [esi+0x488], eax
        jne public_4b46bc
        call public_4c4fa0
        cmp dword ptr ds : [esi+0x48C], eax
        jne public_4b46bc
        call public_4c4f70
        fcomp dword ptr ds : [esi+0x490]
        fnstsw ax
        test ah, 0x44
        jnp public_4b47b2
        public_4b46bc : nop
        push ebx
        call public_4c4f90
        mov dword ptr ds : [esi+0x488], eax
        call public_4c4fa0
        mov dword ptr ds : [esi+0x48C], eax
        call public_4c4f70
        fstp dword ptr ds : [esi+0x490]
        mov ecx, esi
        call public_4b39b0
        mov ecx, esi
        call public_4b3dd0
        mov edi, dword ptr ds : [esi+0x334]
        xor ebx, ebx
        xor ecx, ecx
        xor edx, edx
        public_4b46f8 : nop
        test edi, edi
        je public_4b4722
        mov eax, dword ptr ds : [esi+0x338]
        sub eax, edi
        sar eax, 5
        cmp ecx, eax
        jae public_4b4722
        mov eax, dword ptr ds : [esi+0x334]
        add eax, edx
        cmp byte ptr ds : [eax+0x1C], 0
        je public_4b471c
        add ebx, dword ptr ds : [eax+0xC]
        public_4b471c : nop
        inc ecx
        add edx, 0x20
        jmp public_4b46f8
        public_4b4722 : nop
        push ebx
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_5d0ec4 @0x4b4727*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push eax
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x474]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        push 0x476
        call public_4c4ce0
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_4779a0
        mov ecx, dword ptr ds : [esi+0x47C]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        pop ebx
        pop edi
        pop esi
        add esp, 0x200
        ret 
        public_4b4786 : nop
        test esi, esi
        je public_4b47b2
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4b47a3
        public_4b4791 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4b4791
        public_4b47a3 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        public_4b47b2 : nop
        pop edi
        pop esi
        add esp, 0x200
        ret 
        UNREACHABLE_TRAP(0x4b4670)
    }
}

#undef public_4b46bc
#undef public_4b46f8
#undef public_4b471c
#undef public_4b4722
#undef public_4b4786
#undef public_4b4791
#undef public_4b47a3
#undef public_4b47b2
