#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f526d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f527d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52940);
CLANG_FORWARD_PROC_SYMBOL(public_6f53130);
CLANG_FORWARD_PROC_SYMBOL(public_6f531a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53670);
CLANG_FORWARD_PROC_SYMBOL(public_6f53710);
CLANG_FORWARD_PROC_SYMBOL(public_6f537d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54620);

#define public_6f536cb _public_6f536cb

PROC_DECLARE(0x6f53670, internal_6f53670, public_6f53670);
extern "C" NAKED register_t __cdecl internal_6f53670()
{
    __asm
    {
        sub esp, 0x444
        push esi
        mov esi, dword ptr ss : [esp+0x44C]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0x18]
        push edi
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call public_6f526d0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x464]
        push 0x28
        push esi
        mov dword ptr ds : [ecx+0x14], edi
        call public_6f53130
        mov eax, dword ptr ss : [esp+0x468]
        add esp, 0x14
        test eax, eax
        je public_6f536cb
/*FIXUP push offset public_6f612f0 @0x6f536b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f612f0
        call public_6f4f270
        push eax
        push esi
        call public_6f53710
        add esp, 0xC
        public_6f536cb : nop
        push esi
        call public_6f54620
        push 0x29
        push esi
        call public_6f53130
        push esi
        call public_6f52940
        push edi
        push 0x109
        push 0x108
        push esi
        call public_6f531a0
        push esi
        call public_6f527d0
        lea edx, ss:[esp+0x2C]
        push edx
        push esi
        call public_6f537d0
        add esp, 0x2C
        pop edi
        pop esi
        add esp, 0x444
        ret 
        UNREACHABLE_TRAP(0x6f53670)
    }
}

#undef public_6f536cb
