#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43140);

#define public_6f43166 _public_6f43166
#define public_6f43187 _public_6f43187
#define public_6f431ad _public_6f431ad
#define public_6f431c6 _public_6f431c6

PROC_DECLARE(0x6f43140, internal_6f43140, public_6f43140);
extern "C" NAKED register_t __cdecl internal_6f43140()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10C]
        test eax, eax
        je public_6f431c6
        push ebx
        mov bl, byte ptr ss : [esp+0xC]
        test bl, 1
        je public_6f43166
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x138]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        public_6f43166 : nop
        test bl, 0xA
        je public_6f43187
        mov edx, dword ptr ds : [esi+0x148]
        mov eax, dword ptr ds : [esi+0x10C]
        mov ecx, dword ptr ds : [eax]
        push edx
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x139]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        public_6f43187 : nop
        test bl, 0x70
        je public_6f431ad
        mov edx, dword ptr ds : [esi+0x154]
        mov eax, dword ptr ds : [esi+0x10C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [esi+0x150]
        push edx
        mov edx, dword ptr ds : [esi+0x14C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_6f431ad : nop
        test bl, 4
        pop ebx
        je public_6f431c6
        mov eax, dword ptr ds : [esi+0x10C]
        mov ecx, dword ptr ds : [eax]
        add esi, 0x13C
        push esi
        push eax
        call dword ptr ds : [ecx+0x14]
        public_6f431c6 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f43140)
    }
}

#undef public_6f43166
#undef public_6f43187
#undef public_6f431ad
#undef public_6f431c6
