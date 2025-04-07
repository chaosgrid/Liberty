#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293210);
CLANG_FORWARD_PROC_SYMBOL(public_629ed20);

#define public_6293229 _public_6293229

PROC_DECLARE(0x6293210, internal_6293210, public_6293210);
extern "C" NAKED register_t __cdecl internal_6293210()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+8]
        test al, al
        je public_6293229
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6293229
        mov al, 1
        pop esi
        ret 8
        public_6293229 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push ecx
        push edx
        mov ecx, esi
        call public_629ed20
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6293210)
    }
}

#undef public_6293229
