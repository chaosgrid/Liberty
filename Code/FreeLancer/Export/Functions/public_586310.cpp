#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_40fb80);
CLANG_FORWARD_PROC_SYMBOL(public_586310);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_586495 _public_586495
#define public_5864a9 _public_5864a9

PROC_DECLARE(0x586310, internal_586310, public_586310);
extern "C" NAKED register_t __cdecl internal_586310()
{
    __asm
    {
        sub esp, 0x24
        mov eax, dword ptr ss : [esp+0x28]
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x47C]
        push edi
        fadd dword ptr ds : [esi+0x488]
        lea ecx, ss:[esp+0x14]
        fld dword ptr ds : [esi+0x480]
        lea edx, ss:[esp+0x10]
        fadd dword ptr ds : [esi+0x48C]
        mov dword ptr ss : [esp+0xC], 0
        fld dword ptr ds : [esi+0x484]
        fadd dword ptr ds : [esi+0x490]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x20]
        push edx
        fsub dword ptr ds : [esi+0x470]
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_67dbf8 @0x58639a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [esi+0x474]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [esi+0x478]
        fstp dword ptr ss : [esp+0x40]
        call dword ptr ds : [ecx+0x34]
        fld dword ptr ss : [esp+0xC]
        lea edi, ds:[esi+0x494]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], eax
        call public_5b7ec0
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x498], eax
        fadd dword ptr ds : [esi+0x470]
        lea edx, ss:[esp+0x24]
        push edx
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x18]
        fadd dword ptr ds : [esi+0x474]
        push eax
        mov eax, dword ptr ds : [public_67dbf8]
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x28]
        push ecx
        fadd dword ptr ds : [esi+0x478]
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_67dbf8 @0x586421*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fstp dword ptr ss : [esp+0x40]
        call dword ptr ds : [eax+0x34]
        fld dword ptr ss : [esp+0xC]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x10]
        mov ebx, eax
        mov dword ptr ds : [esi+0x49C], ebx
        call public_5b7ec0
        mov edx, dword ptr ds : [edi]
        xor ecx, ecx
        cmp edx, ecx
        mov dword ptr ds : [esi+0x4A0], eax
        jl public_586495
        cmp dword ptr ds : [esi+0x498], ecx
        jl public_586495
        cmp ebx, ecx
        jl public_586495
        cmp eax, ecx
        jl public_586495
        cmp byte ptr ss : [esp+0x38], cl
        je public_5864a9
        push 1
        add esi, 0x388
        push edi
        mov ecx, esi
        call public_40fb80
        push 0x461C4000
        push 0x3DCCCCCD
        mov ecx, esi
        call public_40fb60
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 8
        public_586495 : nop
        mov dword ptr ds : [esi+0x4A0], ecx
        mov dword ptr ds : [esi+0x49C], ecx
        mov dword ptr ds : [esi+0x498], ecx
        mov dword ptr ds : [edi], ecx
        public_5864a9 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x586310)
    }
}

#undef public_586495
#undef public_5864a9
