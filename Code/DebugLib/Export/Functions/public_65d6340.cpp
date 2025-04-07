#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6340);
CLANG_FORWARD_JUMP_SYMBOL(public_65e00f8);

#define public_65d6379 _public_65d6379
#define public_65d6393 _public_65d6393

PROC_DECLARE(0x65d6340, internal_65d6340, public_65d6340);
extern "C" NAKED register_t __cdecl internal_65d6340()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65e00f8 @0x65d6342*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65e00f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], 0
        test eax, eax
        je public_65d6379
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_65d6379 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        test eax, eax
        je public_65d6393
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], 0
        public_65d6393 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x65d6340)
    }
}

#undef public_65d6379
#undef public_65d6393
