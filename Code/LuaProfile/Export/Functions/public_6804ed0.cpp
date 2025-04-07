#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6804ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);

#define public_6804ee4 _public_6804ee4
#define public_6804ef2 _public_6804ef2

PROC_DECLARE(0x6804ed0, internal_6804ed0, public_6804ed0);
extern "C" NAKED register_t __cdecl internal_6804ed0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [ecx+0x68], eax
        jg public_6804ee4
        cmp eax, 0xFFFFFFFA
        jl public_6804ef2
        public_6804ee4 : nop
        push eax
/*FIXUP push offset public_680d730 @0x6804ee5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d730
        call public_6805fb0
        add esp, 8
        public_6804ef2 : nop
        ret 
        UNREACHABLE_TRAP(0x6804ed0)
    }
}

#undef public_6804ee4
#undef public_6804ef2
