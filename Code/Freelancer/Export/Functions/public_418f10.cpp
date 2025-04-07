#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418f10);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8951);

#define public_418f54 _public_418f54

PROC_DECLARE(0x418f10, internal_418f10, public_418f10);
extern "C" NAKED register_t __cdecl internal_418f10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8951 @0x418f12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8951
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
        je public_418f54
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov cl, byte ptr ds : [ecx+4]
        mov byte ptr ds : [eax+4], cl
        mov eax, edx
        test eax, eax
        je public_418f54
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        public_418f54 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x418f10)
    }
}

#undef public_418f54
