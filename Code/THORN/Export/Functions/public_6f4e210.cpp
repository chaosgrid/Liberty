#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e210);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);

#define public_6f4e223 _public_6f4e223
#define public_6f4e231 _public_6f4e231

PROC_DECLARE(0x6f4e210, internal_6f4e210, public_6f4e210);
extern "C" NAKED register_t __cdecl internal_6f4e210()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [ecx+0x68], eax
        jg public_6f4e223
        test eax, eax
        jle public_6f4e231
        public_6f4e223 : nop
        push eax
/*FIXUP push offset public_6f607d8 @0x6f4e224*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f607d8
        call public_6f4f7a0
        add esp, 8
        public_6f4e231 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4e210)
    }
}

#undef public_6f4e223
#undef public_6f4e231
