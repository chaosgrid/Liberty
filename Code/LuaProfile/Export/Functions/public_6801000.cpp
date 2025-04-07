#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801000);
CLANG_FORWARD_PROC_SYMBOL(public_6801120);
CLANG_FORWARD_PROC_SYMBOL(public_6801e80);
CLANG_FORWARD_PROC_SYMBOL(public_68022e0);
CLANG_FORWARD_PROC_SYMBOL(public_68026d0);
CLANG_FORWARD_PROC_SYMBOL(public_68032d0);
CLANG_FORWARD_PROC_SYMBOL(public_6803340);

PROC_DECLARE(0x6801000, internal_6801000, public_6801000);
extern "C" NAKED register_t __cdecl internal_6801000()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi+0x14], 0xFFFFFFFF
        push edi
        push 0
        mov dword ptr ds : [esi], offset public_680c0f0
        mov dword ptr ds : [esi+4], offset public_680c0cc
        mov dword ptr ds : [esi+8], offset public_680c0bc
        call public_68026d0
        mov edi, eax
        call public_6803340
        mov eax, dword ptr ds : [public_680d010]
        push eax
        call public_68032d0
        mov ecx, dword ptr ds : [public_680d014]
        push ecx
        call public_68032d0
        push 0
/*FIXUP push offset _public_6801120 @0x680104d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6801120
        call public_68022e0
        call public_6801e80
        push edi
        call public_68026d0
        add esp, 0x18
        mov dword ptr ds : [esi+0xC], eax
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6801000)
    }
}
