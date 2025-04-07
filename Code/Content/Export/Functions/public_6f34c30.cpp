#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34c30);

#define public_6f34c74 _public_6f34c74

PROC_DECLARE(0x6f34c30, internal_6f34c30, public_6f34c30);
extern "C" NAKED register_t __cdecl internal_6f34c30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x178]
        test ecx, ecx
        je public_6f34c74
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x178]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_6f34c74
        mov ecx, dword ptr ds : [esi+0x178]
        test ecx, ecx
        je public_6f34c74
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x178], 0
        public_6f34c74 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f34c30)
    }
}

#undef public_6f34c74
