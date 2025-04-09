#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f5c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_44f5d7 _public_44f5d7
#define public_44f5e6 _public_44f5e6
#define public_44f60b _public_44f60b

PROC_DECLARE(0x44f5c0, internal_44f5c0, public_44f5c0);
extern "C" NAKED register_t __cdecl internal_44f5c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push esi
        mov esi, ecx
        je public_44f60b
        mov ecx, dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_44f60b
        public_44f5d7 : nop
        cmp dword ptr ds : [eax+0x20], edx
        je public_44f5e6
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_44f5d7
        pop esi
        ret 4
        public_44f5e6 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0xB0]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0xB0], eax
        public_44f60b : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x44f5c0)
    }
}

#undef public_44f5d7
#undef public_44f5e6
#undef public_44f60b
