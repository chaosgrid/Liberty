#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d140);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e600);

#define public_6f4d157 _public_6f4d157

PROC_DECLARE(0x6f4d140, internal_6f4d140, public_6f4d140);
extern "C" NAKED register_t __cdecl internal_6f4d140()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [eax], 0xFFFFFFFD
        je public_6f4d157
/*FIXUP push offset public_6f605a8 @0x6f4d149*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f605a8
        call public_6f4c7f0
        add esp, 4
        ret 
        public_6f4d157 : nop
        push esi
        mov esi, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [esi]
        sub ecx, 0x10
        push ecx
        lea edx, ds:[eax+0x10]
        mov eax, dword ptr ds : [eax+8]
        push edx
        push eax
        call public_6f4e600
        mov eax, dword ptr ds : [esi]
        add eax, 0xFFFFFFD0
        add esp, 0xC
        mov dword ptr ds : [esi], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4d140)
    }
}

#undef public_6f4d157
