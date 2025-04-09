#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425330);
CLANG_FORWARD_PROC_SYMBOL(public_4253f0);

#define public_425363 _public_425363
#define public_425390 _public_425390
#define public_4253db _public_4253db
#define public_4253e4 _public_4253e4

PROC_DECLARE(0x425330, internal_425330, public_425330);
extern "C" NAKED register_t __cdecl internal_425330()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        push eax
        call dword ptr ds : [ecx+0x4C]
        test eax, eax
        je public_425363
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
/*FIXUP push offset _public_4253f0 @0x425355*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4253f0
        push esi
        push eax
        call dword ptr ds : [ecx+0x54]
        pop edi
        pop esi
        pop ecx
        ret 
        public_425363 : nop
        mov edx, dword ptr ds : [public_5c6df0]
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+8]
        xor edi, edi
        test eax, eax
        jle public_4253e4
        lea esp, ss:[esp]
        public_425390 : nop
        mov ecx, dword ptr ds : [public_5c6df0]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        sub eax, edi
        dec eax
        push eax
        push esi
        push ecx
        call dword ptr ds : [edx+0x34]
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_5c995c @0x4253ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c995c
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x48]
        test eax, eax
        jl public_4253db
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_4253db : nop
        mov eax, dword ptr ss : [esp+8]
        inc edi
        cmp edi, eax
        jl public_425390
        public_4253e4 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x425330)
    }
}

#undef public_425363
#undef public_425390
#undef public_4253db
#undef public_4253e4
