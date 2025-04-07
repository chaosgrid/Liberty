#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_PROC_SYMBOL(public_63614a0);
CLANG_FORWARD_JUMP_SYMBOL(public_63983a8);

#define public_63614d3 _public_63614d3
#define public_63614e9 _public_63614e9
#define public_63614ec _public_63614ec

PROC_DECLARE(0x63614a0, internal_63614a0, public_63614a0);
extern "C" NAKED register_t __cdecl internal_63614a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63983a8 @0x63614a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63983a8
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
        mov dword ptr ds : [esi], offset public_63a57a4
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0
        jl public_63614ec
        public_63614d3 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+edi*8+4]
        test ecx, ecx
        je public_63614e9
        dec dword ptr ds : [ecx+8]
        jne public_63614e9
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_63614e9 : nop
        dec edi
        jns public_63614d3
        public_63614ec : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_63522f0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63614a0)
    }
}

#undef public_63614d3
#undef public_63614e9
#undef public_63614ec
