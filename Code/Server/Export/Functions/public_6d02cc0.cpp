#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7e20);

#define public_6d02cd7 _public_6d02cd7
#define public_6d02cef _public_6d02cef
#define public_6d02cf1 _public_6d02cf1

PROC_DECLARE(0x6d02cc0, internal_6d02cc0, public_6d02cc0);
extern "C" NAKED register_t __cdecl internal_6d02cc0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_6ce7e20
        test al, al
        jne public_6d02cd7
        pop edi
        pop esi
        ret 4
        public_6d02cd7 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6d02cef
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_6d02cf1
        public_6d02cef : nop
        xor eax, eax
        public_6d02cf1 : nop
        mov ecx, dword ptr ds : [public_6d64194]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x50]
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d02cc0)
    }
}

#undef public_6d02cd7
#undef public_6d02cef
#undef public_6d02cf1
