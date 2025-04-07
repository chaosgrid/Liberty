#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6804fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);

#define public_6804fc3 _public_6804fc3
#define public_6804fd1 _public_6804fd1

PROC_DECLARE(0x6804fb0, internal_6804fb0, public_6804fb0);
extern "C" NAKED register_t __cdecl internal_6804fb0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [ecx+0x68], eax
        jg public_6804fc3
        test eax, eax
        jle public_6804fd1
        public_6804fc3 : nop
        push eax
/*FIXUP push offset public_680d754 @0x6804fc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d754
        call public_6805fb0
        add esp, 8
        public_6804fd1 : nop
        ret 
        UNREACHABLE_TRAP(0x6804fb0)
    }
}

#undef public_6804fc3
#undef public_6804fd1
