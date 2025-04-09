#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595db0);
CLANG_FORWARD_PROC_SYMBOL(public_5972d0);
CLANG_FORWARD_PROC_SYMBOL(public_597550);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a1870);

#define public_5a18e8 _public_5a18e8

PROC_DECLARE(0x5a1870, internal_5a1870, public_5a1870);
extern "C" NAKED register_t __cdecl internal_5a1870()
{
    __asm
    {
        sub esp, 0x1C
        fild dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        push ebx
        mov ebx, dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0xC]
        fild dword ptr ss : [esp+0x38]
        push esi
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+8]
        push eax
        fstp dword ptr ss : [esp+0x18]
        fild dword ptr ss : [esp+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
/*FIXUP push offset public_5e53f4 @0x5a18a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e53f4
        push ecx
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov byte ptr ss : [esp+0x30], bl
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_5a18e8
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        mov ecx, esi
        call public_5972d0
        push 0
        mov ecx, esi
        call public_595db0
        push ebx
        mov ecx, esi
        call public_597550
        public_5a18e8 : nop
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 0x20
        UNREACHABLE_TRAP(0x5a1870)
    }
}

#undef public_5a18e8
