#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d53fd0);

#define public_6d4569b _public_6d4569b

PROC_DECLARE(0x6d45670, internal_6d45670, public_6d45670);
extern "C" NAKED register_t __cdecl internal_6d45670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov esi, ecx
        push eax
        mov ecx, offset public_6d90260
        call public_6d53fd0
        test al, al
        mov ecx, esi
        je public_6d4569b
        mov edx, dword ptr ds : [esi]
        push 0
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 8
        public_6d4569b : nop
        mov eax, dword ptr ds : [esi]
        push 1
        push edi
        call dword ptr ds : [eax+0x4C]
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d45670)
    }
}

#undef public_6d4569b
