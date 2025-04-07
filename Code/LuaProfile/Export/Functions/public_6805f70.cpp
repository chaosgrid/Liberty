#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801fb0);
CLANG_FORWARD_PROC_SYMBOL(public_68022e0);
CLANG_FORWARD_PROC_SYMBOL(public_6803340);
CLANG_FORWARD_PROC_SYMBOL(public_6805f70);

#define public_6805f83 _public_6805f83
#define public_6805fa0 _public_6805fa0

PROC_DECLARE(0x6805f70, internal_6805f70, public_6805f70);
extern "C" NAKED register_t __cdecl internal_6805f70()
{
    __asm
    {
        push edi
        call public_6803340
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jle public_6805fa0
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        public_6805f83 : nop
        mov eax, dword ptr ds : [esi+4]
        push 0
        push eax
        call public_68022e0
        mov ecx, dword ptr ds : [esi]
        push ecx
        call public_6801fb0
        add esp, 0xC
        add esi, 8
        dec edi
        jne public_6805f83
        pop esi
        public_6805fa0 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6805f70)
    }
}

#undef public_6805f83
#undef public_6805fa0
