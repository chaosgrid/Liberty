#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cfa0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62c80);

#define public_6d3cfd8 _public_6d3cfd8
#define public_6d3cffa _public_6d3cffa

PROC_DECLARE(0x6d3cfa0, internal_6d3cfa0, public_6d3cfa0);
extern "C" NAKED register_t __cdecl internal_6d3cfa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62c80 @0x6d3cfa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62c80
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6d69f00
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_6d3cfd8
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d3cfd8 : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi], offset public_6d68d00
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 1
        je public_6d3cffa
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d3cffa : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6d68d28
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d3cfa0)
    }
}

#undef public_6d3cfd8
#undef public_6d3cffa
