#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_424510);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8b38);

#define public_42458d _public_42458d
#define public_4245a3 _public_4245a3

PROC_DECLARE(0x424510, internal_424510, public_424510);
extern "C" NAKED register_t __cdecl internal_424510()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8b38 @0x424512*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8b38
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        push ebx
        xor bl, bl
        test ecx, ecx
        je public_4245a3
        mov dword ptr ss : [esp+4], 0
        lea edx, ss:[esp+4]
        push edx
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_5c9828 @0x424545*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9828
        push eax
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_42458d
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, byte ptr ds : [public_679be5]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [public_610858]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x3F800000
        push 0
        push edx
        push 7
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        setge bl
        public_42458d : nop
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_4245a3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_4245a3 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x424510)
    }
}

#undef public_42458d
#undef public_4245a3
