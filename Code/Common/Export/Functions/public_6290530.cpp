#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6290530);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6393589);

#define public_6290584 _public_6290584

PROC_DECLARE(0x6290530, internal_6290530, public_6290530);
extern "C" NAKED register_t __cdecl internal_6290530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393589 @0x6290532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393589
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], ecx
        xor edx, edx
        cmp ecx, edx
        mov dword ptr ss : [esp+0xC], edx
        je public_6290584
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        mov byte ptr ss : [esp+0xC], 1
        je public_6290584
        add eax, 0xFFFFFF64
        cmp eax, edx
        je public_6290584
        add eax, 0x9C
        cmp eax, edx
        je public_6290584
        push eax
        call public_6341610
        public_6290584 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6290530)
    }
}

#undef public_6290584
