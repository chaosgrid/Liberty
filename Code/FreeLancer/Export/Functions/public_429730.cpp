#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b8070);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8c58);

#define public_4297c9 _public_4297c9
#define public_4297e2 _public_4297e2
#define public_429812 _public_429812
#define public_429816 _public_429816
#define public_429828 _public_429828

PROC_DECLARE(0x429730, internal_429730, public_429730);
extern "C" NAKED register_t __cdecl internal_429730()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b8c58 @0x429738*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8c58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x18]
        xor esi, esi
        test ecx, ecx
        je public_429828
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        cmp eax, 0xFFFFFFFF
        je public_429828
        push ebp
        mov dword ptr ss : [esp+0x14], esi
        mov ecx, dword ptr ds : [public_5c6d44]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        lea ebp, ss:[esp+0x14]
        push ebp
        push eax
        push ecx
        mov dword ptr ss : [esp+0x30], esi
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        pop ebp
        je public_429816
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [edi]
        mov esi, eax
        lea eax, ss:[esp+0x14]
        push eax
        push edi
        call dword ptr ds : [edx+0x28]
        test eax, eax
        jne public_429812
        fld dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5ca234]
        fnstsw ax
        test ah, 5
        jp public_4297c9
        mov dword ptr ss : [esp+8], 0xC2C80000
        jmp public_4297e2
        public_4297c9 : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5ca230]
        fnstsw ax
        test ah, 0x41
        jne public_4297e2
        mov dword ptr ss : [esp+8], 0x42C80000
        public_4297e2 : nop
        fld qword ptr ds : [public_5ca228]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5c99c8]
        call public_5b8070
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        fxch 
        fdivp 
        call public_5b7ec0
        mov esi, eax
        public_429812 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_429816 : nop
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_429828
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_429828 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x429730)
    }
}

#undef public_4297c9
#undef public_4297e2
#undef public_429812
#undef public_429816
#undef public_429828
