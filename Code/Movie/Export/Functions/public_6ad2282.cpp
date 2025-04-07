#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad221c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2282);

#define public_6ad2298 _public_6ad2298
#define public_6ad22b6 _public_6ad22b6

PROC_DECLARE(0x6ad2282, internal_6ad2282, public_6ad2282);
extern "C" NAKED register_t __cdecl internal_6ad2282()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, ebx
        dec ebx
        push esi
        push edi
        test eax, eax
        jle public_6ad22b6
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x10]
        public_6ad2298 : nop
        movsx eax, byte ptr ds : [esi]
        push edi
        inc esi
        push dword ptr ss : [esp+0x1C]
        push eax
        call public_6ad221c
        add esp, 0xC
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        je public_6ad22b6
        mov eax, ebx
        dec ebx
        test eax, eax
        jg public_6ad2298
        public_6ad22b6 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad2282)
    }
}

#undef public_6ad2298
#undef public_6ad22b6
