#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805370);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

#define public_6805392 _public_6805392
#define public_680539d _public_680539d

PROC_DECLARE(0x6805370, internal_6805370, public_6805370);
extern "C" NAKED register_t __cdecl internal_6805370()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, esi
        shl eax, 5
        push eax
        push 0
        call public_68065d0
        add esp, 8
        test esi, esi
        jle public_680539d
        mov edx, esi
        mov ecx, eax
        mov esi, 0xFFFFFFFA
        public_6805392 : nop
        mov dword ptr ds : [ecx+0x10], esi
        mov dword ptr ds : [ecx], esi
        add ecx, 0x20
        dec edx
        jne public_6805392
        public_680539d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805370)
    }
}

#undef public_6805392
#undef public_680539d
