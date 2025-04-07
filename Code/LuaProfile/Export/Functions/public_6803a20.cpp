#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803950);
CLANG_FORWARD_PROC_SYMBOL(public_6803a20);

#define public_6803a45 _public_6803a45
#define public_6803a56 _public_6803a56

PROC_DECLARE(0x6803a20, internal_6803a20, public_6803a20);
extern "C" NAKED register_t __cdecl internal_6803a20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6803a56
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        mov dword ptr ds : [ecx+4], 1
        jl public_6803a56
        push esi
        inc eax
        mov esi, eax
        shl esi, 4
        push edi
        add esi, ecx
        mov edi, eax
        public_6803a45 : nop
        push esi
        call public_6803950
        add esp, 4
        sub esi, 0x10
        dec edi
        jne public_6803a45
        pop edi
        pop esi
        public_6803a56 : nop
        ret 
        UNREACHABLE_TRAP(0x6803a20)
    }
}

#undef public_6803a45
#undef public_6803a56
