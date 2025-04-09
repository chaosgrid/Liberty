#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420fb0);
CLANG_FORWARD_PROC_SYMBOL(public_559900);
CLANG_FORWARD_PROC_SYMBOL(public_559aa0);
CLANG_FORWARD_PROC_SYMBOL(public_59efa0);

#define public_559af7 _public_559af7
#define public_559b2d _public_559b2d
#define public_559b68 _public_559b68
#define public_559c07 _public_559c07

PROC_DECLARE(0x559aa0, internal_559aa0, public_559aa0);
extern "C" NAKED register_t __cdecl internal_559aa0()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+8], 0x3CB43958
        je public_559af7
        mov eax, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_559af7
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+0x84]
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0x88]
        public_559af7 : nop
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x84]
        cmp eax, 0xFFFFFFFF
        fmul dword ptr ds : [public_5e1514]
        fstp dword ptr ss : [esp+0x28]
        je public_559b2d
        lea ecx, ds:[esi+0x80]
        call public_420fb0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [eax+8]
        jmp public_559b68
        public_559b2d : nop
        fld dword ptr ds : [esi+0xA8]
        fadd dword ptr ds : [esi+0x60]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x64]
        mov eax, dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0xAC]
        mov dword ptr ss : [esp+0xC], eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+0xB0]
        mov dword ptr ss : [esp+0x10], ecx
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        public_559b68 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x2C]
        push 0
        push 0
        push eax
        push edi
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [esi+0x338]
        push ecx
        push edx
        call public_559900
        add esp, 0x18
        test al, al
        jne public_559c07
        cmp dword ptr ds : [esi+0x84], 0xFFFFFFFF
        je public_559c07
        movzx eax, byte ptr ds : [edi]
        mov dword ptr ss : [esp+0x28], eax
        lea ecx, ds:[esi+0x80]
        push 0
        fild dword ptr ss : [esp+0x2C]
        push 0x3F800000
        push 0
/*FIXUP push offset public_67dbf8 @0x559bb5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x14]
        movzx edx, byte ptr ds : [edi+1]
        mov dword ptr ss : [esp+0x38], edx
        fild dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x18]
        movzx eax, byte ptr ds : [edi+2]
        mov dword ptr ss : [esp+0x38], eax
        fild dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x1C]
        movzx edx, byte ptr ds : [edi+3]
        mov dword ptr ss : [esp+0x38], edx
        fild dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x24]
        call public_59efa0
        public_559c07 : nop
        pop edi
        pop esi
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x559aa0)
    }
}

#undef public_559af7
#undef public_559b2d
#undef public_559b68
#undef public_559c07
