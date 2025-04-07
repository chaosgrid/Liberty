#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);

#define public_4bb2d8 _public_4bb2d8
#define public_4bb2ee _public_4bb2ee
#define public_4bb2f8 _public_4bb2f8
#define public_4bb330 _public_4bb330

PROC_DECLARE(0x4bb270, internal_4bb270, public_4bb270);
extern "C" NAKED register_t __cdecl internal_4bb270()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push 1
        push 0
        push 1
        push 0
        push 0x40000000
        push 0x3CF5C28F
        push 0x3F82F1AA
        push 0
        lea eax, ss:[esp+0x24]
        push eax
/*FIXUP push offset public_5d3a78 @0x4bb292*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3a78
/*FIXUP push offset public_5d5b40 @0x4bb297*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5b40
        mov esi, ecx
        mov dword ptr ss : [esp+0x30], 0xBF041893
        mov dword ptr ss : [esp+0x34], 0x3E83126F
        mov dword ptr ss : [esp+0x38], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x33C], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_4bb2d8
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], 0
        public_4bb2d8 : nop
        mov ecx, dword ptr ds : [public_672328]
        mov eax, dword ptr ds : [ecx]
        add eax, 8
        je public_4bb2ee
        cmp dword ptr ds : [eax+4], 0x3D3
        je public_4bb2f8
        public_4bb2ee : nop
        push 0xF
        call public_5645c0
        add esp, 4
        public_4bb2f8 : nop
        fld dword ptr ds : [public_672408]
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 0x41
        jne public_4bb330
/*FIXUP push offset public_5d5a30 @0x4bb30b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a30
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4bb330
        push eax
        push eax
/*FIXUP push offset public_5d5a30 @0x4bb31e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a30
/*FIXUP push offset public_5d5a30 @0x4bb323*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a30
        call public_59db20
        add esp, 0x10
        public_4bb330 : nop
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        mov ecx, esi
        call public_4b5060
        test al, al
        setne al
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x4bb270)
    }
}

#undef public_4bb2d8
#undef public_4bb2ee
#undef public_4bb2f8
#undef public_4bb330
