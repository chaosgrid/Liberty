#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416420);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x4163e0, internal_4163e0, public_4163e0);
extern "C" NAKED register_t __cdecl internal_4163e0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x178
        mov byte ptr ds : [public_616518], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_416420 @0x4163f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_416420
        mov dword ptr ds : [public_61651c], eax
        mov dword ptr ds : [public_616520], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4163e0)
    }
}
