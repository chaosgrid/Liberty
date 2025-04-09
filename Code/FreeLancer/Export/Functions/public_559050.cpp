#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559050);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1558);

#define public_559090 _public_559090

PROC_DECLARE(0x559050, internal_559050, public_559050);
extern "C" NAKED register_t __cdecl internal_559050()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1558 @0x559052*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1558
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        xor esi, esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [edi], offset public_5e1494
        mov dword ptr ss : [esp+0xC], 5
        mov dword ptr ss : [esp+0x10], 6
        lea esp, ss:[esp]
        public_559090 : nop
        mov eax, dword ptr ss : [esp+esi*4+0xC]
        push eax
        mov ecx, edi
        call public_5760d0
        inc esi
        cmp esi, 2
        jb public_559090
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x559050)
    }
}

#undef public_559090
