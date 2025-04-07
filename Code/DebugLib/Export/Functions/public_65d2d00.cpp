#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2d00);
CLANG_FORWARD_JUMP_SYMBOL(public_65dff41);

#define public_65d2d3e _public_65d2d3e
#define public_65d2d45 _public_65d2d45

PROC_DECLARE(0x65d2d00, internal_65d2d00, public_65d2d00);
extern "C" NAKED register_t __cdecl internal_65d2d00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65dff41 @0x65d2d02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dff41
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_65d2d45
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_65d2d3e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_65d2d3e : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        public_65d2d45 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x65d2d00)
    }
}

#undef public_65d2d3e
#undef public_65d2d45
