#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5950);
CLANG_FORWARD_PROC_SYMBOL(public_62e5af0);

#define public_62ca200 _public_62ca200
#define public_62ca244 _public_62ca244
#define public_62ca246 _public_62ca246
#define public_62ca279 _public_62ca279
#define public_62ca27b _public_62ca27b

PROC_DECLARE(0x62ca1e0, internal_62ca1e0, public_62ca1e0);
extern "C" NAKED register_t __cdecl internal_62ca1e0()
{
    __asm
    {
        sub esp, 0x34
        push esi
        mov esi, ecx
        call public_62d20d0
        push 3
        push 1
        mov ecx, esi
        call public_62d21d0
        mov dword ptr ss : [esp+4], 0x3DCCCCCD
        mov edi, edi
        public_62ca200 : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [esi+0x14]
        push eax
        push 0
        push 0
        push 0x3F800000
        push ecx
        call public_62e5950
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [public_639d20c]
        add esp, 0x14
        fst dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_639c478]
        fnstsw ax
        test ah, 0x41
        je public_62ca244
        fcomp qword ptr ds : [public_639e2d8]
        fnstsw ax
        test ah, 0x41
        jnp public_62ca200
        jmp public_62ca246
        public_62ca244 : nop
        fstp st(0)
        public_62ca246 : nop
        mov edx, dword ptr ds : [esi+0x14]
        push 1
        push 0x3F800000
        push edx
        call public_62e5af0
        fld dword ptr ss : [esp+0x10]
        fadd qword ptr ds : [public_6399410]
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 8
        add esp, 0xC
        fmulp 
        fstp dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ca279
        lea ecx, ds:[eax-8]
        jmp public_62ca27b
        public_62ca279 : nop
        xor ecx, ecx
        public_62ca27b : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [eax+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x44], eax
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        lea eax, ds:[esi+0x38]
        fstp dword ptr ss : [esp+0x28]
        fxch 
        mov byte ptr ds : [esi+0x64], 0
        fchs 
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fchs 
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0xC]
        fchs 
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [eax+0x16C8]
        mov dword ptr ds : [esi+0x34], edx
        mov ecx, dword ptr ds : [eax+0x16CC]
        mov dword ptr ds : [esi+0x58], ecx
        mov edx, dword ptr ds : [eax+0x16D0]
        mov dword ptr ds : [esi+0x5C], edx
        mov dword ptr ds : [esi+0x48], 2
        pop esi
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x62ca1e0)
    }
}

#undef public_62ca200
#undef public_62ca244
#undef public_62ca246
#undef public_62ca279
#undef public_62ca27b
