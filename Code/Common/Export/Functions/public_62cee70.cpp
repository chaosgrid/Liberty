#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);

#define public_62ceea1 _public_62ceea1

PROC_DECLARE(0x62cee70, internal_62cee70, public_62cee70);
extern "C" NAKED register_t __cdecl internal_62cee70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_62d2090
        xor ecx, ecx
        cmp al, cl
        je public_62ceea1
        mov byte ptr ds : [esi+0x55], cl
        mov byte ptr ds : [esi+0x56], cl
        mov byte ptr ds : [esi+0x54], cl
        mov dword ptr ds : [esi+0x34], ecx
        mov dword ptr ds : [esi+0x38], ecx
        mov dword ptr ds : [esi+0x58], ecx
        public_62ceea1 : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62cee70)
    }
}

#undef public_62ceea1
