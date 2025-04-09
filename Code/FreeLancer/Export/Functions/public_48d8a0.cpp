#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48d780);
CLANG_FORWARD_PROC_SYMBOL(public_48d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2ee0);
CLANG_FORWARD_PROC_SYMBOL(public_4a3680);
CLANG_FORWARD_PROC_SYMBOL(public_4a3a10);
CLANG_FORWARD_PROC_SYMBOL(public_4a3a50);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_48d8b8 _public_48d8b8
#define public_48d8cd _public_48d8cd
#define public_48d8f0 _public_48d8f0
#define public_48d946 _public_48d946
#define public_48d98b _public_48d98b
#define public_48d991 _public_48d991
#define public_48d99b _public_48d99b
#define public_48d9a3 _public_48d9a3
#define public_48d9d9 _public_48d9d9
#define public_48da46 _public_48da46
#define public_48da4b _public_48da4b
#define public_48da5f _public_48da5f
#define public_48db04 _public_48db04
#define public_48db73 _public_48db73
#define public_48db9b _public_48db9b
#define public_48dbc0 _public_48dbc0
#define public_48dbdb _public_48dbdb
#define public_48dbe4 _public_48dbe4
#define public_48dbfe _public_48dbfe

PROC_DECLARE(0x48d8a0, internal_48d8a0, public_48d8a0);
extern "C" NAKED register_t __cdecl internal_48d8a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_672050]
        mov edx, dword ptr ds : [public_67204c]
        sub esp, 0x40
        push ebx
        push ebp
        mov ebx, eax
        cmp eax, ebx
        push esi
        push edi
        je public_48d8cd
        public_48d8b8 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x18
        mov ecx, 6
        add edx, 0x18
        cmp eax, ebx
        rep movsd
        jne public_48d8b8
        public_48d8cd : nop
        mov ebp, dword ptr ss : [esp+0x54]
        mov ecx, edx
        mov dword ptr ds : [public_672050], ecx
        mov eax, dword ptr ss : [ebp]
        add ebp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        jle public_48d99b
        mov dword ptr ss : [esp+0x54], eax
        nop 
        public_48d8f0 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_48d9a3
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        call public_48d780
        fld dword ptr ss : [esp+0x20]
        fabs 
        add esp, 0xC
        fcomp qword ptr ds : [public_5d2ee0]
        fnstsw ax
        test ah, 5
        jp public_48d946
        fld dword ptr ss : [esp+0x18]
        fabs 
        fcomp qword ptr ds : [public_5d2ee0]
        fnstsw ax
        test ah, 5
        jp public_48d946
        fld dword ptr ss : [esp+0x1C]
        fabs 
        fcomp qword ptr ds : [public_5d2ee0]
        fnstsw ax
        test ah, 5
        jnp public_48d98b
        public_48d946 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x44], eax
        lea eax, ss:[esp+0x38]
        push eax
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ds : [public_672050]
        push 1
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ss : [ebp+0x14]
        push ecx
        mov ecx, offset public_672048
        mov dword ptr ss : [esp+0x58], edx
        call public_4a3680
        public_48d98b : nop
        mov ecx, dword ptr ds : [public_672050]
        public_48d991 : nop
        dec dword ptr ss : [esp+0x54]
        jne public_48d8f0
        public_48d99b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 
        public_48d9a3 : nop
        fld dword ptr ss : [ebp]
        fabs 
        fcomp qword ptr ds : [public_5d2ee0]
        fnstsw ax
        test ah, 5
        jp public_48d9d9
        fld dword ptr ss : [ebp+4]
        fabs 
        fcomp qword ptr ds : [public_5d2ee0]
        fnstsw ax
        test ah, 5
        jp public_48d9d9
        fld dword ptr ss : [ebp+8]
        fabs 
        fcomp qword ptr ds : [public_5d2ee0]
        fnstsw ax
        test ah, 5
        jnp public_48d991
        public_48d9d9 : nop
        mov edx, ebp
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [public_672054]
        mov dword ptr ss : [esp+0x30], eax
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov dword ptr ss : [esp+0x2C], 0
        mov ebx, ecx
        jae public_48db04
        mov ecx, offset public_672048
        call public_4a2ee0
        cmp eax, 1
        jbe public_48da46
        mov ecx, offset public_672048
        call public_4a2ee0
        mov esi, eax
        jmp public_48da4b
        public_48da46 : nop
        mov esi, 1
        public_48da4b : nop
        mov ecx, offset public_672048
        call public_4a2ee0
        mov edi, eax
        add edi, esi
        mov eax, edi
        jns public_48da5f
        xor eax, eax
        public_48da5f : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        push ecx
        call public_5b7e84
        mov edx, dword ptr ds : [public_67204c]
        add esp, 4
        mov esi, eax
        push esi
        push ebx
        push edx
        mov ecx, offset public_672048
        call public_4a3a10
        mov ebp, eax
        lea eax, ss:[esp+0x20]
        push eax
        push 1
        push ebp
        mov ecx, offset public_672048
        call public_4a3a50
        mov ecx, dword ptr ds : [public_672050]
        add ebp, 0x18
        push ebp
        push ecx
        push ebx
        mov ecx, offset public_672048
        call public_4a3a10
        mov edx, dword ptr ds : [public_672050]
        mov eax, dword ptr ds : [public_67204c]
        push edx
        push eax
        mov ecx, offset public_672048
        call public_53aaa0
        mov ecx, dword ptr ds : [public_67204c]
        push ecx
        call public_5b7e1d
        lea edx, ds:[edi+edi*2]
        lea eax, ds:[esi+edx*8]
        add esp, 4
        mov ecx, offset public_672048
        mov dword ptr ds : [public_672054], eax
        call public_4a2ee0
        mov ebp, dword ptr ss : [esp+0x10]
        inc eax
        lea ecx, ds:[eax+eax*2]
        lea ecx, ds:[esi+ecx*8]
        mov dword ptr ds : [public_672050], ecx
        mov dword ptr ds : [public_67204c], esi
        jmp public_48d991
        public_48db04 : nop
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_48db9b
        lea edx, ds:[ebx+0x18]
        push edx
        push ecx
        push ebx
        mov ecx, offset public_672048
        call public_4a3a10
        mov esi, dword ptr ds : [public_672050]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, offset public_672048
        call public_4a3a50
        mov ecx, dword ptr ds : [public_672050]
        mov edx, ecx
        cmp ebx, edx
        mov eax, ebx
        je public_48dbfe
        public_48db73 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        lea esi, ss:[esp+0x20]
        rep movsd
        jne public_48db73
        mov ecx, dword ptr ds : [public_672050]
        add ecx, 0x18
        mov dword ptr ds : [public_672050], ecx
        jmp public_48d991
        public_48db9b : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFE8
        push ecx
        mov ecx, offset public_672048
        call public_4a3a10
        mov ecx, dword ptr ds : [public_672050]
        lea eax, ds:[ecx-0x18]
        cmp ebx, eax
        mov edx, ecx
        je public_48dbdb
        lea ebx, ds:[ebx]
        public_48dbc0 : nop
        sub eax, 0x18
        sub edx, 0x18
        cmp eax, ebx
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_48dbc0
        mov ecx, dword ptr ds : [public_672050]
        public_48dbdb : nop
        lea edx, ds:[ebx+0x18]
        cmp ebx, edx
        mov eax, ebx
        je public_48dbfe
        public_48dbe4 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        lea esi, ss:[esp+0x20]
        rep movsd
        jne public_48dbe4
        mov ecx, dword ptr ds : [public_672050]
        public_48dbfe : nop
        add ecx, 0x18
        mov dword ptr ds : [public_672050], ecx
        jmp public_48d991
        UNREACHABLE_TRAP(0x48d8a0)
    }
}

#undef public_48d8b8
#undef public_48d8cd
#undef public_48d8f0
#undef public_48d946
#undef public_48d98b
#undef public_48d991
#undef public_48d99b
#undef public_48d9a3
#undef public_48d9d9
#undef public_48da46
#undef public_48da4b
#undef public_48da5f
#undef public_48db04
#undef public_48db73
#undef public_48db9b
#undef public_48dbc0
#undef public_48dbdb
#undef public_48dbe4
#undef public_48dbfe
