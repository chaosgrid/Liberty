#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284a90);
CLANG_FORWARD_PROC_SYMBOL(public_6343700);

#define public_6284ad9 _public_6284ad9

PROC_DECLARE(0x6284a90, internal_6284a90, public_6284a90);
extern "C" NAKED register_t __cdecl internal_6284a90()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edi+0x54]
        test ecx, ecx
        je public_6284ad9
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_6284ad9
        push 8
        add ecx, 0x84
        push ecx
        add eax, 0x84
        push eax
        call dword ptr ds : [public_63992e0]
        mov eax, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [edi+0x54]
        push 0xBF800000
        push eax
        push ecx
        call public_6343700
        add esp, 0x18
        mov dword ptr ds : [esi+0x74], 2
        public_6284ad9 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6284a90)
    }
}

#undef public_6284ad9
