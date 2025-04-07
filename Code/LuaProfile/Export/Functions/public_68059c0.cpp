#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68059c0);

#define public_68059d7 _public_68059d7
#define public_68059f2 _public_68059f2

PROC_DECLARE(0x68059c0, internal_68059c0, public_68059c0);
extern "C" NAKED register_t __cdecl internal_68059c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        mov edx, ecx
        dec ecx
        test edx, edx
        je public_68059f2
        push ebx
        push esi
        lea esi, ds:[ecx+1]
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        public_68059d7 : nop
        xor ebx, ebx
        mov bl, byte ptr ds : [ecx]
        mov edx, eax
        shl edx, 5
        mov edi, eax
        shr edi, 2
        add edx, edi
        add edx, ebx
        xor eax, edx
        inc ecx
        dec esi
        jne public_68059d7
        pop edi
        pop esi
        pop ebx
        public_68059f2 : nop
        ret 
        UNREACHABLE_TRAP(0x68059c0)
    }
}

#undef public_68059d7
#undef public_68059f2
