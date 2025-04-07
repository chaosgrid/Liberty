#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f870);

#define public_6f4f87d _public_6f4f87d

PROC_DECLARE(0x6f4f870, internal_6f4f870, public_6f4f870);
extern "C" NAKED register_t __cdecl internal_6f4f870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6f4f87d
        mov eax, offset public_6f609c4
        public_6f4f87d : nop
        mov ecx, dword ptr ss : [esp+4]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        add eax, 0xFFFFFFFE
        push eax
/*FIXUP push offset public_6f609bc @0x6f4f88a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f609bc
        push ecx
        call dword ptr ds : [public_6f5a06c]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4f870)
    }
}

#undef public_6f4f87d
