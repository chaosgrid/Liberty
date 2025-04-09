#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_5a1fe0);
CLANG_FORWARD_PROC_SYMBOL(public_5a27e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4fe8);

#define public_5a2048 _public_5a2048
#define public_5a2056 _public_5a2056

PROC_DECLARE(0x5a1fe0, internal_5a1fe0, public_5a1fe0);
extern "C" NAKED register_t __cdecl internal_5a1fe0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4fe8 @0x5a1fe2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4fe8
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
        mov dword ptr ds : [edi], offset public_5e5f9c
/*FIXUP push offset _public_5a27e0 @0x5a2004*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5a27e0
        push 0x100
        push 4
        lea eax, ds:[edi+0x48C]
        push eax
        mov dword ptr ss : [esp+0x24], 0
        call public_5b7ec6
        mov dword ptr ds : [edi], offset public_5d5544
        dec dword ptr ds : [public_67dcd4]
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov byte ptr ds : [edi+0x6C], cl
        je public_5a2056
        public_5a2048 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_5a2048
        public_5a2056 : nop
        push edi
        call public_59dc00
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5a1fe0)
    }
}

#undef public_5a2048
#undef public_5a2056
