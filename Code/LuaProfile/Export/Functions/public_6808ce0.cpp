#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6808ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6808d50);
CLANG_FORWARD_PROC_SYMBOL(public_6808e40);

#define public_6808cf1 _public_6808cf1
#define public_6808d1f _public_6808d1f
#define public_6808d2c _public_6808d2c
#define public_6808d32 _public_6808d32
#define public_6808d41 _public_6808d41

PROC_DECLARE(0x6808ce0, internal_6808ce0, public_6808ce0);
extern "C" NAKED register_t __cdecl internal_6808ce0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], 0x2C
        push edi
        mov edi, 1
        jne public_6808d32
        public_6808cf1 : nop
        push esi
        call public_6806a20
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, 0x3B
        je public_6808d32
        cmp eax, 0x7D
        je public_6808d32
        push esi
        call public_6808e40
        add esp, 4
        inc edi
        mov eax, edi
        and eax, 0x8000001F
        jns public_6808d1f
        dec eax
        or eax, 0xFFFFFFE0
        inc eax
        public_6808d1f : nop
        jne public_6808d2c
        push 0x20
        push esi
        call public_6808d50
        add esp, 8
        public_6808d2c : nop
        cmp dword ptr ds : [esi+4], 0x2C
        je public_6808cf1
        public_6808d32 : nop
        mov ecx, edi
        and ecx, 0x8000001F
        jns public_6808d41
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6808d41 : nop
        push ecx
        push esi
        call public_6808d50
        add esp, 8
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6808ce0)
    }
}

#undef public_6808cf1
#undef public_6808d1f
#undef public_6808d2c
#undef public_6808d32
#undef public_6808d41
