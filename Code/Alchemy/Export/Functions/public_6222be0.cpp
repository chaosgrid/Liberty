#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222be0);

#define public_6222bf6 _public_6222bf6
#define public_6222c08 _public_6222c08

PROC_DECLARE(0x6222be0, internal_6222be0, public_6222be0);
extern "C" NAKED register_t __cdecl internal_6222be0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6222bf6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6222bf6 : nop
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6222c08
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6222c08 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, esi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6222be0)
    }
}

#undef public_6222bf6
#undef public_6222c08
