#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_63919b0);

PROC_DECLARE(0x63919b0, internal_63919b0, public_63919b0);
extern "C" NAKED register_t __cdecl internal_63919b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658bf58]
        push esi
        lea ecx, ss:[esp+4]
        push edi
        push ecx
        mov dword ptr ds : [public_658b944], eax
        call dword ptr ds : [public_639928c]
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [public_63992b4]
        mov esi, dword ptr ds : [public_658baf8]
        mov ecx, dword ptr ds : [public_658bb00]
        mov edi, eax
        mov eax, dword ptr ds : [public_658bf58]
        sub esi, ecx
        add esi, eax
        mov eax, dword ptr ds : [public_658b900]
        push eax
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b848]
        mov edx, dword ptr ds : [public_658b844]
        add esp, 0xC
        sub ecx, eax
        mov eax, dword ptr ds : [public_658b824]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        sub edx, eax
        mov eax, dword ptr ds : [edi]
        push edx
        mov edx, dword ptr ds : [edi+8]
        push esi
        push 0x3FF00000
        push 0
        push eax
        push ecx
        push edx
/*FIXUP push offset public_63fba68 @0x6391a22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fba68
        call public_6356960
        add esp, 0x24
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63919b0)
    }
}
