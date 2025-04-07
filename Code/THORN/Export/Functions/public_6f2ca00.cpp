#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ca00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58668);

#define public_6f2ca35 _public_6f2ca35
#define public_6f2ca47 _public_6f2ca47
#define public_6f2ca61 _public_6f2ca61

PROC_DECLARE(0x6f2ca00, internal_6f2ca00, public_6f2ca00);
extern "C" NAKED register_t __cdecl internal_6f2ca00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58668 @0x6f2ca02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58668
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
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_6f2ca35
        push eax
        call public_6f57e26
        add esp, 4
        public_6f2ca35 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f2ca47
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f2ca47 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_6f2ca61
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], 0
        public_6f2ca61 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f2ca00)
    }
}

#undef public_6f2ca35
#undef public_6f2ca47
#undef public_6f2ca61
