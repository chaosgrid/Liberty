#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b23c0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5978);

#define public_5b2414 _public_5b2414

PROC_DECLARE(0x5b23c0, internal_5b23c0, public_5b23c0);
extern "C" NAKED register_t __cdecl internal_5b23c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5978 @0x5b23c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5978
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        xor esi, esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ds : [edi], offset public_5e6d20
        mov dword ptr ss : [esp+0xC], 0xC5
        mov dword ptr ss : [esp+0x10], 0x14
        mov dword ptr ss : [esp+0x14], 0x15
        mov dword ptr ss : [esp+0x18], 0x17
        mov dword ptr ss : [esp+0x1C], 0xCB
        public_5b2414 : nop
        mov eax, dword ptr ss : [esp+esi*4+0xC]
        push eax
        mov ecx, edi
        call public_5760d0
        inc esi
        cmp esi, 5
        jb public_5b2414
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x5b23c0)
    }
}

#undef public_5b2414
