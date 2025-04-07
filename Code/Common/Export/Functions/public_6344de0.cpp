#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_63483d0);
CLANG_FORWARD_PROC_SYMBOL(public_63484e0);
CLANG_FORWARD_PROC_SYMBOL(public_634d510);
CLANG_FORWARD_PROC_SYMBOL(public_6350ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6350fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6344e13 _public_6344e13
#define public_6344e2a _public_6344e2a
#define public_6344e6e _public_6344e6e
#define public_6344e8a _public_6344e8a
#define public_6344eca _public_6344eca
#define public_6344edc _public_6344edc
#define public_6344ef1 _public_6344ef1
#define public_6344eff _public_6344eff

PROC_DECLARE(0x6344de0, internal_6344de0, public_6344de0);
extern "C" NAKED register_t __cdecl internal_6344de0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        push edi
/*FIXUP push offset _public_6261260 @0x6344de7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea eax, ss:[esp+0x1C]
        push eax
        mov esi, ecx
        call public_6273bc0
        mov ebx, dword ptr ss : [esp+0x54]
        push ebx
        lea ecx, ss:[esp+0x14]
        call public_63483d0
        mov edi, dword ptr ds : [esi+0x7C]
        xor ebp, ebp
        cmp edi, ebp
        je public_6344e2a
        public_6344e13 : nop
        lea ecx, ds:[edi+0x1C]
        push ecx
        lea edx, ds:[edi+0xC]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_63484e0
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6344e13
        public_6344e2a : nop
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fcomp dword ptr ds : [public_63a5438]
        fnstsw ax
        test ah, 1
        je public_6344e6e
        mov eax, dword ptr ds : [esi+0x78]
        and eax, 0xFFFFF7FF
        or eax, 0x400
        mov dword ptr ds : [esi+0x78], eax
        mov dword ptr ds : [esi+0x30], ebp
        mov dword ptr ds : [esi+0x34], ebp
        mov dword ptr ds : [esi+0x38], ebp
        jmp public_6344e8a
        public_6344e6e : nop
        fld dword ptr ss : [esp+0x40]
        fstp dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x44]
        fstp dword ptr ds : [esi+0x34]
        fld dword ptr ss : [esp+0x48]
        fstp dword ptr ds : [esi+0x38]
        and dword ptr ds : [esi+0x78], 0xFFFFF3FF
        public_6344e8a : nop
        fld dword ptr ds : [ebx]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x40
        je public_6344eca
        fld dword ptr ds : [ebx+0x14]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x40
        je public_6344eca
        fld dword ptr ds : [ebx+0x28]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x40
        je public_6344eca
        mov ecx, dword ptr ds : [esi+0x2C]
        push ecx
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [esi+0x2C], ebp
        jmp public_6344ef1
        public_6344eca : nop
        cmp dword ptr ds : [esi+0x2C], ebp
        jne public_6344edc
        push 0x10
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+0x2C], eax
        public_6344edc : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        lea edx, ss:[esp+0x10]
        push edx
        call public_6350ca0
        mov ecx, dword ptr ds : [esi+0x2C]
        call public_6350fb0
        public_6344ef1 : nop
        cmp dword ptr ds : [esi+0x40], ebp
        je public_6344eff
        push esi
        call public_634d510
        add esp, 4
        public_6344eff : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x6344de0)
    }
}

#undef public_6344e13
#undef public_6344e2a
#undef public_6344e6e
#undef public_6344e8a
#undef public_6344eca
#undef public_6344edc
#undef public_6344ef1
#undef public_6344eff
