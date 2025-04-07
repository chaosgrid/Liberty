#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_402500);

#define public_40ae9c _public_40ae9c
#define public_40aeaa _public_40aeaa
#define public_40aed6 _public_40aed6
#define public_40aedb _public_40aedb
#define public_40aef0 _public_40aef0
#define public_40af04 _public_40af04
#define public_40af2b _public_40af2b
#define public_40af3d _public_40af3d
#define public_40af64 _public_40af64
#define public_40af76 _public_40af76
#define public_40af9d _public_40af9d
#define public_40afaf _public_40afaf
#define public_40afce _public_40afce
#define public_40afed _public_40afed
#define public_40b000 _public_40b000
#define public_40b013 _public_40b013
#define public_40b032 _public_40b032
#define public_40b058 _public_40b058
#define public_40b070 _public_40b070
#define public_40b08f _public_40b08f

PROC_DECLARE(0x40ae70, internal_40ae70, public_40ae70);
extern "C" NAKED register_t __cdecl internal_40ae70()
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
        jnp public_40ae9c
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        public_40ae9c : nop
        cmp dword ptr ds : [ebx], 0
        jne public_40aeaa
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40af04
        public_40aeaa : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_40af04
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_40aed6
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x10], 0
        jne public_40aedb
        public_40aed6 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_40aedb : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+0x40]
        jne public_40aef0
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40af04
        public_40aef0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_40af04 : nop
        fld dword ptr ds : [edi+0x54]
        fcomp dword ptr ds : [esi+0x54]
        fnstsw ax
        test ah, 0x44
        jp public_40af2b
        fld dword ptr ds : [edi+0x58]
        fcomp dword ptr ds : [esi+0x58]
        fnstsw ax
        test ah, 0x44
        jp public_40af2b
        fld dword ptr ds : [edi+0x5C]
        fcomp dword ptr ds : [esi+0x5C]
        fnstsw ax
        test ah, 0x44
        jnp public_40af3d
        public_40af2b : nop
        mov eax, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [esi+0x54], eax
        mov ecx, dword ptr ds : [edi+0x58]
        mov dword ptr ds : [esi+0x58], ecx
        mov edx, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], edx
        public_40af3d : nop
        fld dword ptr ds : [edi+0x60]
        fcomp dword ptr ds : [esi+0x60]
        fnstsw ax
        test ah, 0x44
        jp public_40af64
        fld dword ptr ds : [edi+0x64]
        fcomp dword ptr ds : [esi+0x64]
        fnstsw ax
        test ah, 0x44
        jp public_40af64
        fld dword ptr ds : [edi+0x68]
        fcomp dword ptr ds : [esi+0x68]
        fnstsw ax
        test ah, 0x44
        jnp public_40af76
        public_40af64 : nop
        mov eax, dword ptr ds : [edi+0x60]
        mov dword ptr ds : [esi+0x60], eax
        mov ecx, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [esi+0x64], ecx
        mov edx, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x68], edx
        public_40af76 : nop
        fld dword ptr ds : [edi+0x6C]
        fcomp dword ptr ds : [esi+0x6C]
        fnstsw ax
        test ah, 0x44
        jp public_40af9d
        fld dword ptr ds : [edi+0x70]
        fcomp dword ptr ds : [esi+0x70]
        fnstsw ax
        test ah, 0x44
        jp public_40af9d
        fld dword ptr ds : [edi+0x74]
        fcomp dword ptr ds : [esi+0x74]
        fnstsw ax
        test ah, 0x44
        jnp public_40afaf
        public_40af9d : nop
        mov eax, dword ptr ds : [edi+0x6C]
        mov dword ptr ds : [esi+0x6C], eax
        mov ecx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], ecx
        mov edx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], edx
        public_40afaf : nop
        fld dword ptr ds : [edi+0x80]
        fcomp dword ptr ds : [esi+0x80]
        fnstsw ax
        test ah, 0x44
        jnp public_40afce
        mov eax, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], eax
        public_40afce : nop
        fld dword ptr ds : [edi+0x88]
        fcomp dword ptr ds : [esi+0x88]
        fnstsw ax
        test ah, 0x44
        jnp public_40afed
        mov ecx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], ecx
        public_40afed : nop
        fld dword ptr ds : [edi+0x78]
        fcomp dword ptr ds : [esi+0x78]
        fnstsw ax
        test ah, 0x44
        jnp public_40b000
        mov edx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], edx
        public_40b000 : nop
        fld dword ptr ds : [edi+0x7C]
        fcomp dword ptr ds : [esi+0x7C]
        fnstsw ax
        test ah, 0x44
        jnp public_40b013
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], eax
        public_40b013 : nop
        fld dword ptr ds : [edi+0x84]
        fcomp dword ptr ds : [esi+0x84]
        fnstsw ax
        test ah, 0x44
        jnp public_40b032
        mov ecx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], ecx
        public_40b032 : nop
        fld dword ptr ds : [edi+0x8C]
        fcomp dword ptr ds : [esi+0x8C]
        fnstsw ax
        test ah, 0x44
        jp public_40b058
        fld dword ptr ds : [edi+0x90]
        fcomp dword ptr ds : [esi+0x90]
        fnstsw ax
        test ah, 0x44
        jnp public_40b070
        public_40b058 : nop
        mov edx, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], edx
        mov eax, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], eax
        public_40b070 : nop
        fld dword ptr ds : [edi+0x94]
        fcomp dword ptr ds : [esi+0x94]
        fnstsw ax
        test ah, 0x44
        jnp public_40b08f
        mov ecx, dword ptr ds : [edi+0x94]
        mov dword ptr ds : [esi+0x94], ecx
        public_40b08f : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40ae70)
    }
}

#undef public_40ae9c
#undef public_40aeaa
#undef public_40aed6
#undef public_40aedb
#undef public_40aef0
#undef public_40af04
#undef public_40af2b
#undef public_40af3d
#undef public_40af64
#undef public_40af76
#undef public_40af9d
#undef public_40afaf
#undef public_40afce
#undef public_40afed
#undef public_40b000
#undef public_40b013
#undef public_40b032
#undef public_40b058
#undef public_40b070
#undef public_40b08f
