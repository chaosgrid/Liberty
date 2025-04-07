#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);

#define public_62d20c0 _public_62d20c0

PROC_DECLARE(0x62d2090, internal_62d2090, public_62d2090);
extern "C" NAKED register_t __cdecl internal_62d2090()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        push edi
        je public_62d20c0
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        je public_62d20c0
        mov dword ptr ds : [esi+0x14], ecx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov dword ptr ds : [esi+0x20], ecx
        mov al, 1
        pop esi
        ret 0xC
        public_62d20c0 : nop
        pop edi
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62d2090)
    }
}

#undef public_62d20c0
