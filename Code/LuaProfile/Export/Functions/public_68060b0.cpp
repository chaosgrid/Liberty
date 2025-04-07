#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_68060b0);

#define public_68060c8 _public_68060c8
#define public_68060da _public_68060da
#define public_68060eb _public_68060eb

PROC_DECLARE(0x68060b0, internal_68060b0, public_68060b0);
extern "C" NAKED register_t __cdecl internal_68060b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680d978]
        xor edx, edx
        cmp eax, 0x7FFFFFFD
        push esi
        jge public_68060da
        mov esi, dword ptr ss : [esp+8]
        mov ecx, offset public_680d978
        public_68060c8 : nop
        cmp eax, esi
        jg public_68060eb
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        inc edx
        cmp eax, 0x7FFFFFFD
        jl public_68060c8
/*FIXUP public_68060da : nop
        push offset public_680da0c @0x68060da*/
  FIXUP public_68060da : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_680da0c
        call public_6802e00
        add esp, 4
        xor eax, eax
        pop esi
        ret 
        public_68060eb : nop
        mov eax, dword ptr ds : [edx*4+public_680d978]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68060b0)
    }
}

#undef public_68060c8
#undef public_68060da
#undef public_68060eb
