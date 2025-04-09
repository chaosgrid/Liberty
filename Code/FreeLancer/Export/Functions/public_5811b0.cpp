#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_580290);
CLANG_FORWARD_PROC_SYMBOL(public_5811b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_5811e5 _public_5811e5
#define public_58123f _public_58123f
#define public_581514 _public_581514
#define public_581522 _public_581522
#define public_581556 _public_581556

PROC_DECLARE(0x5811b0, internal_5811b0, public_5811b0);
extern "C" NAKED register_t __cdecl internal_5811b0()
{
    __asm
    {
        sub esp, 0x60
        mov eax, dword ptr ds : [public_67c4c0]
        push ebx
        push esi
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        jne public_5811e5
        call public_5b73e0
        mov dword ptr ds : [public_67c4c0], eax
        public_5811e5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ds:[esi+0x540]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_67c4c0]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        jne public_58123f
        call public_5b73e0
        mov dword ptr ds : [public_67c4c0], eax
        public_58123f : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ds:[esi+0x570]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], ecx
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        mov dword ptr ss : [esp+0x70], edx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_67dbf8 @0x581288*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [ecx+0x34]
        test al, al
        je public_581556
        lea edx, ss:[esp+0x60]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        mov eax, dword ptr ds : [public_67dbf8]
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
/*FIXUP push offset public_67dbf8 @0x5812b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [eax+0x34]
        test al, al
        je public_581556
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], ebx
        fstp dword ptr ss : [esp+0x3C]
        sub esp, 0xC
        fild qword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x50], 0
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x14]
        mov ecx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x24]
        fld dword ptr ss : [esp+0x10]
        push edx
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fst dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x74]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x74], ecx
        fld dword ptr ss : [esp+0x74]
        lea eax, ss:[esp+0x40]
        fmul dword ptr ss : [esp+0x74]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x80]
        fstp st(0)
        call public_423b60
        fld dword ptr ss : [esp+0x2C]
        mov eax, 0x5F3759DF
        fmul dword ptr ss : [esp+0x2C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fst dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x70]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x70], eax
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x70]
        fstp st(0)
        fld dword ptr ss : [esp+0x74]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_581556
        fld dword ptr ss : [esp+0x70]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_581556
        fld dword ptr ds : [public_5c75dc]
        sub esp, 0xC
        fdiv dword ptr ss : [esp+0x80]
        lea ecx, ss:[esp+0x3C]
        fst dword ptr ss : [esp+0x80]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ds : [public_5c75dc]
        mov ecx, dword ptr ss : [esp+0x30]
        fdiv dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x65C]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [esi+0x658]
        faddp 
        fld dword ptr ss : [esp+0x38]
        sub ecx, edx
        fmul dword ptr ss : [esp+0x44]
        sub esp, 8
        mov dword ptr ss : [esp+0x28], eax
        mov edi, edx
        faddp 
        fmul dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x78], ecx
        fmul dword ptr ss : [esp+0x7C]
        fimul dword ptr ss : [esp+0x78]
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        mov ecx, dword ptr ds : [esi+0x65C]
        add eax, edi
        cmp eax, ecx
        mov dword ptr ds : [esi+0x664], eax
        jle public_581514
        mov dword ptr ds : [esi+0x664], ecx
        public_581514 : nop
        cmp dword ptr ds : [esi+0x664], edi
        jge public_581522
        mov dword ptr ds : [esi+0x664], edi
        public_581522 : nop
        mov ecx, esi
        call public_580290
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_581556
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov edi, eax
        cmp edi, ebx
        je public_581556
        mov eax, dword ptr ds : [esi+0x664]
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x3E
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        public_581556 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x5811b0)
    }
}

#undef public_5811e5
#undef public_58123f
#undef public_581514
#undef public_581522
#undef public_581556
