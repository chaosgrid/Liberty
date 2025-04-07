#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6617260);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6617273 _public_6617273
#define public_6617279 _public_6617279
#define public_661729a _public_661729a

PROC_DECLARE(0x6617260, internal_6617260, public_6617260);
extern "C" NAKED register_t __cdecl internal_6617260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov edx, dword ptr ds : [eax+8]
        test edx, edx
        jne public_6617273
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx], edx
        jmp public_6617279
        public_6617273 : nop
        mov esi, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], esi
        public_6617279 : nop
        mov edx, dword ptr ds : [eax+0xC]
        test edx, edx
        jne public_661729a
        mov edx, dword ptr ds : [eax+8]
        push eax
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [ecx+8]
        dec edx
        mov dword ptr ds : [ecx+8], edx
        call public_66281d0
        add esp, 4
        pop esi
        ret 4
        public_661729a : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        mov dword ptr ds : [edx+8], esi
        mov edx, dword ptr ds : [ecx+8]
        dec edx
        mov dword ptr ds : [ecx+8], edx
        call public_66281d0
        add esp, 4
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6617260)
    }
}

#undef public_6617273
#undef public_6617279
#undef public_661729a
