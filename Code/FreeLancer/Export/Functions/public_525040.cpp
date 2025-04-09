#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5361e0);

#define public_52508d _public_52508d
#define public_525096 _public_525096
#define public_5250ae _public_5250ae
#define public_5250c0 _public_5250c0
#define public_5250e5 _public_5250e5

PROC_DECLARE(0x525040, internal_525040, public_525040);
extern "C" NAKED register_t __cdecl internal_525040()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x20]
        mov ecx, edi
        call dword ptr ds : [public_5c67f0]
        test eax, eax
        jne public_5250e5
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_5250c0
        cmp dword ptr ds : [eax+0x14], 2
        je public_52508d
/*FIXUP push offset public_5dcc14 @0x525064*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcc14
        push 0x79C
/*FIXUP push offset public_5dc47c @0x52506e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x525078*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        ret 4
        public_52508d : nop
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_5250ae
        push ecx
        public_525096 : nop
        push esi
        push eax
        call public_5361e0
        add esp, 0xC
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c67f4]
        pop edi
        pop esi
        ret 4
        public_5250ae : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        push eax
        mov eax, dword ptr ds : [esi+0x40]
        jmp public_525096
        lea ebx, ds:[ebx]
        public_5250c0 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5dcbd4 @0x5250c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcbd4
        push 0x7A5
/*FIXUP push offset public_5dc47c @0x5250d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x5250da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_5250e5 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x525040)
    }
}

#undef public_52508d
#undef public_525096
#undef public_5250ae
#undef public_5250c0
#undef public_5250e5
