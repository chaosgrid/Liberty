#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fd560);

#define public_4f7ac7 _public_4f7ac7
#define public_4f7add _public_4f7add

PROC_DECLARE(0x4f7ab0, internal_4f7ab0, public_4f7ab0);
extern "C" NAKED register_t __cdecl internal_4f7ab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        je public_4f7add
        mov ecx, dword ptr ds : [esi+0x5C]
        test ecx, ecx
        jg public_4f7ac7
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x5C], eax
        public_4f7ac7 : nop
        mov ecx, dword ptr ds : [esi+0x5C]
        push ecx
        call public_4fd560
        add esp, 4
        test eax, eax
        je public_4f7add
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0xC], edx
        public_4f7add : nop
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f7ab0)
    }
}

#undef public_4f7ac7
#undef public_4f7add
