#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b10);
CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_507e70);
CLANG_FORWARD_PROC_SYMBOL(public_580290);
CLANG_FORWARD_PROC_SYMBOL(public_580d00);
CLANG_FORWARD_PROC_SYMBOL(public_581560);

#define public_580f4a _public_580f4a
#define public_581193 _public_581193
#define public_581199 _public_581199
#define public_5811a7 _public_5811a7

PROC_DECLARE(0x580d00, internal_580d00, public_580d00);
extern "C" NAKED register_t __cdecl internal_580d00()
{
    __asm
    {
        sub esp, 0x74
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x67B]
        test al, al
        je public_580f4a
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ds:[esi+0x5B8]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        call public_4e7090
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ds:[esi+0x540]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        call public_4e7090
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        mov edx, dword ptr ds : [public_67dbf8]
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
/*FIXUP push offset public_67dbf8 @0x580d88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [edx+0x34]
        test al, al
        je public_5811a7
        lea eax, ss:[esp+0x60]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
/*FIXUP push offset public_67dbf8 @0x580db2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [ecx+0x34]
        test al, al
        je public_5811a7
        fild dword ptr ds : [public_616840]
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+0x34]
        fild dword ptr ds : [public_616844]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        fstp dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x44], 0
        call public_423b60
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_507e70
        fmul dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        call public_423b60
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call public_507e70
        fmul dword ptr ss : [esp+0x24]
        add esp, 0x20
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_5811a7
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_5811a7
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_4c8b10
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], edx
        push ecx
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x24], eax
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        call public_4c8b10
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x38], eax
        add esp, 0x18
        faddp 
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], edx
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fmul dword ptr ss : [esp+4]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 5
        jp public_5811a7
        mov ecx, dword ptr ds : [esi+0x660]
        mov eax, dword ptr ds : [esi+0x664]
        sub eax, ecx
        mov ecx, eax
        mov dword ptr ds : [esi+0x664], eax
        mov eax, dword ptr ds : [esi+0x658]
        cmp ecx, eax
        jge public_581199
        jmp public_581193
        public_580f4a : nop
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ds:[esi+0x5B8]
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        call public_4e7090
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        lea ecx, ds:[esi+0x570]
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        call public_4e7090
        lea eax, ss:[esp+0x60]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        lea edx, ss:[esp+0x60]
        push edx
        lea eax, ss:[esp+0x60]
        push eax
/*FIXUP push offset public_67dbf8 @0x580fbe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [ecx+0x34]
        test al, al
        je public_5811a7
        lea edx, ss:[esp+0x6C]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        mov eax, dword ptr ds : [public_67dbf8]
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
/*FIXUP push offset public_67dbf8 @0x580fe7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [eax+0x34]
        test al, al
        je public_5811a7
        fild dword ptr ds : [public_616840]
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+0x4C]
        fild dword ptr ds : [public_616844]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        fstp dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x5C], 0
        call public_423b60
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_507e70
        fmul dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_423b60
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        mov eax, 0x5F3759DF
        fld dword ptr ss : [esp+0x2C]
        add esp, 0x1C
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fst dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_5811a7
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_5811a7
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        call public_4c8b10
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x28], edx
        push ecx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x30], eax
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        call public_4c8b10
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x2C], eax
        add esp, 0x18
        faddp 
        mov dword ptr ss : [esp+0xC], ecx
        fld dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x10], edx
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fmul dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 5
        jp public_5811a7
        mov ecx, dword ptr ds : [esi+0x660]
        mov eax, dword ptr ds : [esi+0x664]
        add eax, ecx
        mov ecx, eax
        mov dword ptr ds : [esi+0x664], eax
        mov eax, dword ptr ds : [esi+0x65C]
        cmp ecx, eax
        jle public_581199
        public_581193 : nop
        mov dword ptr ds : [esi+0x664], eax
        public_581199 : nop
        mov ecx, esi
        call public_580290
        mov ecx, esi
        call public_581560
        public_5811a7 : nop
        pop esi
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x580d00)
    }
}

#undef public_580f4a
#undef public_581193
#undef public_581199
#undef public_5811a7
