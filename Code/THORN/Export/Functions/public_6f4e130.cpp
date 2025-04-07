#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e130);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);

#define public_6f4e144 _public_6f4e144
#define public_6f4e152 _public_6f4e152

PROC_DECLARE(0x6f4e130, internal_6f4e130, public_6f4e130);
extern "C" NAKED register_t __cdecl internal_6f4e130()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [ecx+0x68], eax
        jg public_6f4e144
        cmp eax, 0xFFFFFFFA
        jl public_6f4e152
        public_6f4e144 : nop
        push eax
/*FIXUP push offset public_6f607b4 @0x6f4e145*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f607b4
        call public_6f4f7a0
        add esp, 8
        public_6f4e152 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4e130)
    }
}

#undef public_6f4e144
#undef public_6f4e152
