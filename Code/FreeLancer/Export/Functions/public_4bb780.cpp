#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a7690);
CLANG_FORWARD_PROC_SYMBOL(public_4bb780);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd3d8);

#define public_4bb7e2 _public_4bb7e2

PROC_DECLARE(0x4bb780, internal_4bb780, public_4bb780);
extern "C" NAKED register_t __cdecl internal_4bb780()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd3d8 @0x4bb782*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd3d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_5d5b74
        mov dword ptr ds : [esi+0x7C], offset public_5d5b64
        xor ebx, ebx
        mov dword ptr ds : [public_6723fc], ebx
        mov byte ptr ds : [public_66d359], bl
        cmp byte ptr ds : [esi+0x38C], bl
        mov dword ptr ss : [esp+0x14], ebx
        je public_4bb7e2
        xor eax, eax
        mov al, byte ptr ds : [esi+0x37D]
        push eax
        call public_4a7690
        mov byte ptr ds : [esi+0x38C], bl
        add esp, 4
        mov byte ptr ds : [public_67dcc8], bl
        public_4bb7e2 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4bb780)
    }
}

#undef public_4bb7e2
