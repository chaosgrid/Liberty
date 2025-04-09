#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_4c94b0);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd8e9);

#define public_4c94fc _public_4c94fc
#define public_4c9510 _public_4c9510
#define public_4c951e _public_4c951e
#define public_4c954a _public_4c954a
#define public_4c9580 _public_4c9580
#define public_4c958e _public_4c958e

PROC_DECLARE(0x4c94b0, internal_4c94b0, public_4c94b0);
extern "C" NAKED register_t __cdecl internal_4c94b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd8e9 @0x4c94b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd8e9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_5d6fac
        mov dword ptr ds : [esi+0xF4], offset public_5d6f78
        lea ebp, ds:[esi+0x7C]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], 1
        call public_420d60
        test al, al
        je public_4c94fc
        mov ecx, ebp
        call public_59eee0
        public_4c94fc : nop
        mov cl, byte ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [esi+0xC]
        and cl, 0xFC
        test edi, edi
        mov byte ptr ds : [esi+0x6C], cl
        je public_4c951e
        lea esp, ss:[esp]
        public_4c9510 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_4c9510
        public_4c951e : nop
        push esi
        call public_59dc00
        lea ecx, ds:[esi+0x11C]
        mov dword ptr ds : [esi+0xF4], offset public_5d6eac
        mov eax, dword ptr ds : [ecx]
        add esp, 4
        test eax, eax
        mov byte ptr ss : [esp+0x18], 0
        je public_4c954a
        push 0
        call dword ptr ds : [public_5c62a8]
        public_4c954a : nop
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], 2
        call public_59ef20
        mov dword ptr ds : [esi], offset public_5d5544
        dec dword ptr ds : [public_67dcd4]
        mov cl, byte ptr ds : [esi+0x6C]
        mov edi, dword ptr ds : [esi+0xC]
        and cl, 0xFC
        test edi, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x6C], cl
        je public_4c958e
        lea ecx, ds:[ecx]
        public_4c9580 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_4c9580
        public_4c958e : nop
        push esi
        call public_59dc00
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4c94b0)
    }
}

#undef public_4c94fc
#undef public_4c9510
#undef public_4c951e
#undef public_4c954a
#undef public_4c9580
#undef public_4c958e
