#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59cf70);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4df8);

#define public_59cfc2 _public_59cfc2
#define public_59cfd0 _public_59cfd0

PROC_DECLARE(0x59cf70, internal_59cf70, public_59cf70);
extern "C" NAKED register_t __cdecl internal_59cf70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4df8 @0x59cf72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4df8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        lea ecx, ds:[edi+0x7C]
        mov dword ptr ss : [esp+0x14], 0
        call public_59ef20
        mov dword ptr ds : [edi], offset public_5d5544
        dec dword ptr ds : [public_67dcd4]
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov byte ptr ds : [edi+0x6C], cl
        je public_59cfd0
        public_59cfc2 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_59cfc2
        public_59cfd0 : nop
        push edi
        call public_59dc00
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x59cf70)
    }
}

#undef public_59cfc2
#undef public_59cfd0
