#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6804de0);
CLANG_FORWARD_PROC_SYMBOL(public_6804e40);
CLANG_FORWARD_PROC_SYMBOL(public_6806550);

#define public_6804e28 _public_6804e28
#define public_6804e36 _public_6804e36

PROC_DECLARE(0x6804de0, internal_6804de0, public_6804de0);
extern "C" NAKED register_t __cdecl internal_6804de0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        push esi
        push 0x7FFFFFFD
/*FIXUP push offset public_680d708 @0x6804deb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d708
        push 0x120
        mov dword ptr ds : [eax+0x68], 0xFFFFFFFA
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+0x64]
        push 7
        push 0
        push edx
        call public_6806550
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x64], eax
        mov edx, dword ptr ds : [public_680e604]
        mov esi, dword ptr ds : [edx+0x68]
        add esp, 0x18
        test esi, esi
        jg public_6804e36
        public_6804e28 : nop
        push esi
        call public_6804e40
        add esp, 4
        inc esi
        test esi, esi
        jle public_6804e28
        public_6804e36 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6804de0)
    }
}

#undef public_6804e28
#undef public_6804e36
