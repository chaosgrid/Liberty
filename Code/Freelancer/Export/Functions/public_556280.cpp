#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_41a390);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5150);
CLANG_FORWARD_PROC_SYMBOL(public_556280);
CLANG_FORWARD_PROC_SYMBOL(public_556480);
CLANG_FORWARD_PROC_SYMBOL(public_5564a0);
CLANG_FORWARD_PROC_SYMBOL(public_5564b0);
CLANG_FORWARD_PROC_SYMBOL(public_5566a0);
CLANG_FORWARD_PROC_SYMBOL(public_556710);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c14c3);

#define public_55632e _public_55632e
#define public_556330 _public_556330

PROC_DECLARE(0x556280, internal_556280, public_556280);
extern "C" NAKED register_t __cdecl internal_556280()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c14c3 @0x556282*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c14c3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call dword ptr ds : [public_5c6070]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        push 0xBC
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], eax
        call public_5b7e84
        mov esi, eax
        add esp, 0xC
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x38], ebx
        je public_55632e
        mov ecx, esi
        call public_5564a0
        mov eax, 1
        mov dword ptr ds : [esi], offset public_5e1304
        mov dword ptr ds : [esi+0x58], eax
        lea edi, ds:[esi+0x5C]
        mov ecx, edi
        mov byte ptr ss : [esp+0x38], al
        call public_4215b0
        lea ecx, ds:[esi+0x8C]
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        call public_4b5150
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_5e12a4
        call public_5564b0
        jmp public_556330
        public_55632e : nop
        xor esi, esi
        public_556330 : nop
        fld dword ptr ss : [esp+0x54]
        lea edi, ds:[esi+0x40]
        fadd st(0), st
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        fmul dword ptr ds : [public_5c901c]
        fptan 
        fstp st(0)
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x54]
        fld1 
        mov eax, dword ptr ss : [esp+0x54]
        fpatan 
        mov ecx, eax
        push ecx
        push ebx
        push 0x3F800000
        mov ecx, edi
        mov dword ptr ds : [esi+0x24], eax
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [esi+0x14]
        call public_556480
        mov ecx, edi
        call public_41a390
        fld dword ptr ds : [esi+0x30]
        fdiv dword ptr ds : [esi+0x24]
        lea edi, ds:[esi+0x4C]
        mov ecx, edi
        fstp dword ptr ds : [esi+0x38]
        fld dword ptr ds : [esi+0x24]
        fdiv dword ptr ds : [esi+0x28]
        fstp dword ptr ds : [esi+0x2C]
        fild dword ptr ss : [esp+0x4C]
        fidiv dword ptr ss : [esp+0x50]
        fst dword ptr ds : [esi+0x2C]
        fdivr dword ptr ds : [esi+0x24]
        fst dword ptr ds : [esi+0x28]
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [esi+0x18]
        fld dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi], ebx
        fstp dword ptr ds : [edi+8]
        mov dword ptr ds : [edi+4], 0x3F800000
        call public_410190
        fdivr dword ptr ds : [public_5c75dc]
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, esi
        fld st(0)
        fmul dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+0x1C], edx
        fld dword ptr ds : [esi+0x34]
        fdiv dword ptr ds : [esi+0x28]
        fchs 
        fstp dword ptr ds : [esi+0x3C]
        fld dword ptr ds : [esi+0x14]
        fadd st(0), st
        fmul dword ptr ds : [public_5c75e0]
        fst dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [public_5c77f4]
        fptan 
        fstp st(0)
        fstp dword ptr ds : [esi+0x24]
        call public_5566a0
        fld dword ptr ds : [esi+0x24]
        fdiv dword ptr ds : [esi+0x28]
        fstp dword ptr ds : [esi+0x2C]
        fld dword ptr ds : [esi+0x18]
        fadd st(0), st
        fmul dword ptr ds : [public_5c75e0]
        fst dword ptr ds : [esi+0x18]
        fmul dword ptr ds : [public_5c77f4]
        fptan 
        mov ecx, esi
        fstp st(0)
        fstp dword ptr ds : [esi+0x28]
        call public_556710
        fld dword ptr ds : [esi+0x24]
        fdiv dword ptr ds : [esi+0x28]
        mov edi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        mov dword ptr ds : [esi+0x20], eax
        fstp dword ptr ds : [esi+0x2C]
        call dword ptr ds : [ecx+0x4C]
        mov edx, dword ptr ds : [esi]
        add edi, 0xC
        push edi
        push esi
        call dword ptr ds : [edx+0x50]
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x556280)
    }
}

#undef public_55632e
#undef public_556330
