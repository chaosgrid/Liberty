#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9978);
CLANG_FORWARD_PROC_SYMBOL(public_65d99ad);

#define public_65d99be _public_65d99be
#define public_65d99db _public_65d99db

PROC_DECLARE(0x65d99ad, internal_65d99ad, public_65d99ad);
extern "C" NAKED register_t __cdecl internal_65d99ad()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, edi
        dec edi
        test eax, eax
        jle public_65d99db
        mov esi, dword ptr ss : [esp+0x18]
        public_65d99be : nop
        push esi
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x14]
        call public_65d9978
        add esp, 0xC
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        je public_65d99db
        mov eax, edi
        dec edi
        test eax, eax
        jg public_65d99be
        public_65d99db : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d99ad)
    }
}

#undef public_65d99be
#undef public_65d99db
