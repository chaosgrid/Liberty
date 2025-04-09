#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_58ad70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4d602f _public_4d602f
#define public_4d60d6 _public_4d60d6
#define public_4d60e6 _public_4d60e6
#define public_4d60e8 _public_4d60e8

PROC_DECLARE(0x4d5eb0, internal_4d5eb0, public_4d5eb0);
extern "C" NAKED register_t __cdecl internal_4d5eb0()
{
    __asm
    {
        sub esp, 0x88
        push esi
        push edi
        push 6
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4d60e8
        push 0xA
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4d60e8
        call public_54baf0
        mov edi, eax
        test edi, edi
        je public_4d60e8
        call public_41dd90
        test al, al
        je public_4d60e8
        call public_41a3e0
        test al, al
        jne public_4d60e8
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_4d60e8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4d60e8
        push 0x20000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        push eax
        call dword ptr ds : [public_5c6498]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_4d60e8
        mov al, byte ptr ds : [edi+0x54]
        test al, al
        je public_4d60d6
        mov ecx, edi
        call dword ptr ds : [public_5c6508]
        fld dword ptr ds : [eax+0x80]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4d60e6
        mov edx, dword ptr ds : [edi+0x50]
        mov dword ptr ss : [esp+0xC], edx
        fld dword ptr ss : [esp+0xC]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4d602f
        mov ecx, dword ptr ds : [esi+0x32C]
        push 0
        push 0
        mov byte ptr ds : [esi+0x3F0], 0
        call public_58ad70
        mov ecx, dword ptr ds : [esi+0x32C]
        mov eax, dword ptr ds : [ecx]
        push 1
/*FIXUP push offset public_679ba8 @0x4d5fc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
        push 0x33
        call dword ptr ds : [eax+0xA8]
        fld dword ptr ss : [esp+0xC]
        fchs 
        sub esp, 8
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c712c]
        call public_5b7ec0
        push eax
        lea ecx, ds:[esi+0x390]
        push ecx
        lea edx, ss:[esp+0x20]
/*FIXUP push offset public_5d7fdc @0x4d5ff5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7fdc
        push edx
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x32C]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x18
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x32C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x34]
        pop edi
        pop esi
        add esp, 0x88
        ret 
        public_4d602f : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_4d60e8
        mov al, byte ptr ds : [esi+0x3F0]
        test al, al
        sete cl
        push ecx
        mov ecx, dword ptr ds : [esi+0x32C]
        push 1
        call public_58ad70
        mov ecx, dword ptr ds : [esi+0x32C]
        push 1
/*FIXUP push offset public_679bb0 @0x4d6065*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb0
        mov byte ptr ds : [esi+0x3F0], 1
        mov edx, dword ptr ds : [ecx]
        push 0x33
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5ca230]
        fadd qword ptr ds : [public_5c75e8]
        call public_5b7ec0
        push eax
        lea eax, ds:[esi+0x330]
        push eax
        lea ecx, ss:[esp+0x18]
/*FIXUP push offset public_5d7fc8 @0x4d609c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7fc8
        push ecx
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x32C]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x32C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x34]
        pop edi
        pop esi
        add esp, 0x88
        ret 
        public_4d60d6 : nop
        pop edi
        mov byte ptr ds : [esi+0x3F0], 0
        pop esi
        add esp, 0x88
        ret 
        public_4d60e6 : nop
        fstp st(0)
        public_4d60e8 : nop
        pop edi
        pop esi
        add esp, 0x88
        ret 
        UNREACHABLE_TRAP(0x4d5eb0)
    }
}

#undef public_4d602f
#undef public_4d60d6
#undef public_4d60e6
#undef public_4d60e8
