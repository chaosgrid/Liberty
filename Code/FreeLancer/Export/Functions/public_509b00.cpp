#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_504970);
CLANG_FORWARD_PROC_SYMBOL(public_509b00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfafb);

#define public_509b3b _public_509b3b

PROC_DECLARE(0x509b00, internal_509b00, public_509b00);
extern "C" NAKED register_t __cdecl internal_509b00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bfafb @0x509b02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfafb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0x2D0
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], esi
        je public_509b3b
        mov ecx, eax
        call public_504970
        mov esi, eax
        public_509b3b : nop
        mov ecx, dword ptr ds : [public_6132dc]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x509b00)
    }
}

#undef public_509b3b
