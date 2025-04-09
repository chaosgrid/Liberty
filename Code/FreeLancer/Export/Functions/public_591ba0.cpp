#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_591ba0);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_JUMP_SYMBOL(public_5c49e8);

#define public_591bfb _public_591bfb
#define public_591c32 _public_591c32
#define public_591c40 _public_591c40

PROC_DECLARE(0x591ba0, internal_591ba0, public_591ba0);
extern "C" NAKED register_t __cdecl internal_591ba0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c49e8 @0x591ba2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c49e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x80]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_5e5384
        mov dword ptr ds : [esi+0x7C], offset public_5e536c
        mov dword ptr ds : [edi], offset public_5e5364
        mov ecx, dword ptr ds : [esi+0x88]
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], 2
        je public_591bfb
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x88], 0
        public_591bfb : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 1
        call public_576010
        mov dword ptr ds : [esi+0x7C], offset public_5e534c
        mov dword ptr ds : [esi], offset public_5d5544
        dec dword ptr ds : [public_67dcd4]
        mov cl, byte ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [esi+0xC]
        and cl, 0xFC
        test edi, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x6C], cl
        je public_591c40
        public_591c32 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_591c32
        public_591c40 : nop
        push esi
        call public_59dc00
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x591ba0)
    }
}

#undef public_591bfb
#undef public_591c32
#undef public_591c40
