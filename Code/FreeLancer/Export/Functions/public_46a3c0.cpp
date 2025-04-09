#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_46a3c0);
CLANG_FORWARD_PROC_SYMBOL(public_579a50);
CLANG_FORWARD_PROC_SYMBOL(public_57b520);
CLANG_FORWARD_PROC_SYMBOL(public_57bdb0);
CLANG_FORWARD_PROC_SYMBOL(public_57bff0);
CLANG_FORWARD_PROC_SYMBOL(public_57c750);
CLANG_FORWARD_PROC_SYMBOL(public_57c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_46a425 _public_46a425
#define public_46a45f _public_46a45f
#define public_46a473 _public_46a473

PROC_DECLARE(0x46a3c0, internal_46a3c0, public_46a3c0);
extern "C" NAKED register_t __cdecl internal_46a3c0()
{
    __asm
    {
        sub esp, 0xC
        push esi
/*FIXUP push offset public_5cf04c @0x46a3c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf04c
        call public_59da10
        mov esi, eax
        mov al, byte ptr ss : [esp+0x18]
        add esp, 4
        test al, al
        je public_46a45f
        test esi, esi
        jne public_46a425
        push esi
        push esi
/*FIXUP push offset public_5cef64 @0x46a3e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef64
/*FIXUP push offset public_5cf04c @0x46a3ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf04c
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_46a473
        fld dword ptr ds : [public_66da30]
        mov eax, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [public_5ceee4]
        lea ecx, ss:[esp+4]
        push ecx
        fstp dword ptr ss : [esp+0xC]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xBF800000
        call dword ptr ds : [eax+0x14]
/*FIXUP public_46a425 : nop
        push offset public_66d3fc @0x46a425*/
  FIXUP public_46a425 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d3fc
        mov ecx, esi
        mov byte ptr ds : [esi+0x539], 1
        call public_45eaf0
        mov ecx, esi
        call public_57c750
        push 0x50
        mov ecx, esi
        call public_57bdb0
        push 1
        mov ecx, esi
        call public_57b520
        push 1
        mov ecx, esi
        call public_579a50
        pop esi
        add esp, 0xC
        ret 
        public_46a45f : nop
        test esi, esi
        je public_46a473
        mov ecx, esi
        call public_57bff0
        push 1
        mov ecx, esi
        call public_57c7d0
        public_46a473 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x46a3c0)
    }
}

#undef public_46a425
#undef public_46a45f
#undef public_46a473
