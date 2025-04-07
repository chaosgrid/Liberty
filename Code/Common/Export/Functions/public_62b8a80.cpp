#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63206c0);

#define public_62b8a9d _public_62b8a9d

PROC_DECLARE(0x62b8a80, internal_62b8a80, public_62b8a80);
extern "C" NAKED register_t __cdecl internal_62b8a80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push edi
        push eax
        or edi, 0xFFFFFFFF
        call public_63206c0
        add esp, 4
        test al, al
        je public_62b8a9d
        mov eax, dword ptr ds : [esi]
        pop edi
        pop esi
        ret 
        public_62b8a9d : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62b8a80)
    }
}

#undef public_62b8a9d
