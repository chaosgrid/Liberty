#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805520);
CLANG_FORWARD_PROC_SYMBOL(public_68060b0);

#define public_6805533 _public_6805533
#define public_6805539 _public_6805539
#define public_680553f _public_680553f

PROC_DECLARE(0x6805520, internal_6805520, public_6805520);
extern "C" NAKED register_t __cdecl internal_6805520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        xor edx, edx
        test eax, eax
        jle public_680553f
        add ecx, 0x10
        public_6805533 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFA
        je public_6805539
        inc edx
        public_6805539 : nop
        add ecx, 0x20
        dec eax
        jne public_6805533
        public_680553f : nop
        lea eax, ds:[edx+edx+2]
        push eax
        call public_68060b0
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x6805520)
    }
}

#undef public_6805533
#undef public_6805539
#undef public_680553f
