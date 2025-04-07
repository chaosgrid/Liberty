#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1aa30);
CLANG_FORWARD_PROC_SYMBOL(public_6d1aa70);

#define public_6d1aa63 _public_6d1aa63

PROC_DECLARE(0x6d1aa30, internal_6d1aa30, public_6d1aa30);
extern "C" NAKED register_t __cdecl internal_6d1aa30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6d1aa63
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 4
        cmp eax, 3
        jne public_6d1aa63
        mov eax, dword ptr ss : [esp+4]
        push 0xD681
/*FIXUP push offset public_6d8f5ec @0x6d1aa51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8f5ec
        add ecx, 0x20
        push ecx
        push eax
        call public_6d1aa70
        add esp, 0x10
        public_6d1aa63 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6d1aa30)
    }
}

#undef public_6d1aa63
