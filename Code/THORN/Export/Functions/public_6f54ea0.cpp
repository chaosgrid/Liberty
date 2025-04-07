#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fc50);
CLANG_FORWARD_PROC_SYMBOL(public_6f54ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f00);
CLANG_FORWARD_PROC_SYMBOL(public_6f54fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55040);
CLANG_FORWARD_PROC_SYMBOL(public_6f55080);
CLANG_FORWARD_PROC_SYMBOL(public_6f55100);

#define public_6f54eda _public_6f54eda

PROC_DECLARE(0x6f54ea0, internal_6f54ea0, public_6f54ea0);
extern "C" NAKED register_t __cdecl internal_6f54ea0()
{
    __asm
    {
        push esi
        push edi
        call public_6f4fc50
        mov edi, dword ptr ss : [esp+0xC]
/*FIXUP push offset public_6f6149c @0x6f54eab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6149c
        push edi
        mov esi, eax
        call public_6f54f00
        push edi
        mov dword ptr ds : [esi+0x14], eax
        call public_6f55040
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [esi+0x18], eax
        jne public_6f54eda
        mov eax, dword ptr ds : [edi+0x10]
        push eax
        call public_6f4f270
        add esp, 4
        mov dword ptr ds : [esi+0x18], eax
        public_6f54eda : nop
        push edi
        call public_6f54fb0
        push edi
        push esi
        mov dword ptr ds : [esi+0x10], eax
        call public_6f55080
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push edi
        push esi
        call public_6f55100
        add esp, 0x18
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54ea0)
    }
}

#undef public_6f54eda
