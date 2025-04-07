#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6362360);
CLANG_FORWARD_JUMP_SYMBOL(public_63984d8);

#define public_6362370 _public_6362370

PROC_DECLARE(0x6362360, internal_6362360, public_6362360);
extern "C" NAKED register_t __cdecl internal_6362360()
{
    __asm
    {
        mov ecx, offset public_658afe0
        jmp public_6362370
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6362370 : nop
        push 0xFFFFFFFF
/*FIXUP push public_63984d8 @0x6362372*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63984d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        push 0x10
        push 0x20
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ds : [esi], offset public_63a5830
        call public_6343fc0
        mov edi, eax
        add esp, 8
        mov dword ptr ds : [esi+4], edi
        xor eax, eax
        mov ecx, 8
        rep stosd
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6362360)
    }
}

#undef public_6362370
