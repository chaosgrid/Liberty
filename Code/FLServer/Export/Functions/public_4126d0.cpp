#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4126d0);

#define public_4126f1 _public_4126f1
#define public_412730 _public_412730
#define public_412761 _public_412761

PROC_DECLARE(0x4126d0, internal_4126d0, public_4126d0);
extern "C" NAKED register_t __cdecl internal_4126d0()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x20C]
        test eax, eax
        je public_4126f1
        push eax
        call dword ptr ds : [public_41b970]
        add esp, 4
        mov dword ptr ds : [edi+0x20C], 0
        public_4126f1 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp byte ptr ds : [eax], 0
        je public_412761
/*FIXUP push offset public_425998 @0x4126fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425998
        push eax
        call dword ptr ds : [public_41b978]
        add esp, 8
        test eax, eax
        mov dword ptr ds : [edi+0x20C], eax
        je public_412761
        push ebx
        mov ebx, dword ptr ds : [public_41b950]
        push esi
/*FIXUP push offset public_42597c @0x41271b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42597c
        push eax
        call ebx
        add esp, 8
        mov esi, 1
        nop 
        lea esp, ss:[esp]
        public_412730 : nop
        mov eax, dword ptr ds : [edi+0x20C]
        push esi
        push esi
        push esi
        push esi
/*FIXUP push offset public_425938 @0x41273a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425938
        push eax
        call ebx
        add esp, 0x18
        inc esi
        lea ecx, ds:[esi-1]
        cmp ecx, 0x10
        jl public_412730
        mov edx, dword ptr ds : [edi+0x20C]
/*FIXUP push offset public_425914 @0x412754*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425914
        push edx
        call ebx
        add esp, 8
        pop esi
        pop ebx
        public_412761 : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x4126d0)
    }
}

#undef public_4126f1
#undef public_412730
#undef public_412761
