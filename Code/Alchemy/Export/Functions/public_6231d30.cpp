#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231d30);

#define public_6231d69 _public_6231d69

PROC_DECLARE(0x6231d30, internal_6231d30, public_6231d30);
extern "C" NAKED register_t __cdecl internal_6231d30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov edx, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[ebx+0xC]
        mov ecx, 6
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x20]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+0x28], edx
        mov dword ptr ds : [ebx+0x24], ecx
        mov dword ptr ds : [ebx+0x6C], eax
        test eax, eax
        je public_6231d69
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6231d69 : nop
        fld dword ptr ds : [public_624bac4]
        mov dword ptr ds : [ebx+0x70], 0
        pop edi
        fdiv dword ptr ds : [ebx+0x28]
        mov eax, ebx
        pop esi
        fstp dword ptr ds : [ebx+0x2C]
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x6231d30)
    }
}

#undef public_6231d69
