#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222b60);
CLANG_FORWARD_JUMP_SYMBOL(public_6248ca1);

#define public_6222bae _public_6222bae

PROC_DECLARE(0x6222b60, internal_6222b60, public_6222b60);
extern "C" NAKED register_t __cdecl internal_6222b60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248ca1 @0x6222b62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248ca1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_6222bae
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        mov dword ptr ds : [eax+0xC], ecx
        je public_6222bae
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+4]
        public_6222bae : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6222b60)
    }
}

#undef public_6222bae
