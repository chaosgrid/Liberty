#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4253f0);

#define public_425420 _public_425420
#define public_42546b _public_42546b
#define public_425474 _public_425474

PROC_DECLARE(0x4253f0, internal_4253f0, public_4253f0);
extern "C" NAKED register_t __cdecl internal_4253f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_5c6df0]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+8]
        xor edi, edi
        test eax, eax
        jle public_425474
        lea esp, ss:[esp]
        public_425420 : nop
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
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_5c995c @0x42543d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c995c
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x48]
        test eax, eax
        jl public_42546b
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_42546b : nop
        mov eax, dword ptr ss : [esp+8]
        inc edi
        cmp edi, eax
        jl public_425420
        public_425474 : nop
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4253f0)
    }
}

#undef public_425420
#undef public_42546b
#undef public_425474
