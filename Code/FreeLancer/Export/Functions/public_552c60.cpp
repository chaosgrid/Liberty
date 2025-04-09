#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_552c60);
CLANG_FORWARD_JUMP_SYMBOL(public_5c13e3);

#define public_552c70 _public_552c70

PROC_DECLARE(0x552c60, internal_552c60, public_552c60);
extern "C" NAKED register_t __cdecl internal_552c60()
{
    __asm
    {
        mov ecx, offset public_679900
        jmp public_552c70
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_552c70 : nop
        push 0xFFFFFFFF
/*FIXUP push public_5c13e3 @0x552c72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c13e3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        lea ecx, ds:[esi+0x28]
        mov dword ptr ss : [esp+0x10], 1
        call public_420d10
        lea ecx, ds:[esi+0x14]
        mov byte ptr ss : [esp+0x10], 0
        call public_420d10
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_420d10
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x552c60)
    }
}

#undef public_552c70
