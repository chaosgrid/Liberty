#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6276df0);
CLANG_FORWARD_PROC_SYMBOL(public_6279670);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6276e20 _public_6276e20
#define public_6276e72 _public_6276e72
#define public_6276ee4 _public_6276ee4
#define public_6276f03 _public_6276f03
#define public_6276f22 _public_6276f22
#define public_6276f41 _public_6276f41
#define public_6276f60 _public_6276f60
#define public_6276f81 _public_6276f81
#define public_6276f98 _public_6276f98
#define public_6276fbe _public_6276fbe
#define public_6276fe2 _public_6276fe2
#define public_6276fe7 _public_6276fe7
#define public_6276ff6 _public_6276ff6

PROC_DECLARE(0x6276df0, internal_6276df0, public_6276df0);
extern "C" NAKED register_t __cdecl internal_6276df0()
{
    __asm
    {
        sub esp, 0x24
        push esi
        push edi
        add ecx, 0x1A4
        call public_6279670
        mov esi, dword ptr ss : [esp+0x30]
        mov edi, eax
        mov ecx, esi
        mov dword ptr ds : [edi+0x1C], 2
        call public_6310170
        test al, al
        je public_6276ff6
        lea esp, ss:[esp]
/*FIXUP public_6276e20 : nop
        push offset public_639ac84 @0x6276e20*/
  FIXUP public_6276e20 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac84
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276e72
        push 0
        call public_63108f0
        fstp dword ptr ss : [esp+8]
        push 1
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ss : [esp+0xC]
        push 2
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        jmp public_6276fe7
/*FIXUP public_6276e72 : nop
        push offset public_639ac7c @0x6276e72*/
  FIXUP public_6276e72 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac7c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276ee4
        push 0
        call public_63108f0
        fstp dword ptr ss : [esp+0x20]
        push 1
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ss : [esp+0x24]
        push 2
        mov ecx, esi
        call public_63108f0
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_639ac78]
        mov edx, edi
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_639ac78]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_639ac78]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+8], eax
        jmp public_6276fe7
/*FIXUP public_6276ee4 : nop
        push offset public_639ac70 @0x6276ee4*/
  FIXUP public_6276ee4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac70
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276f03
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0xC]
        jmp public_6276fe7
/*FIXUP public_6276f03 : nop
        push offset public_639ac6c @0x6276f03*/
  FIXUP public_6276f03 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac6c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276f22
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x10]
        jmp public_6276fe7
/*FIXUP public_6276f22 : nop
        push offset public_639ac64 @0x6276f22*/
  FIXUP public_6276f22 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac64
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276f41
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x14]
        jmp public_6276fe7
/*FIXUP public_6276f41 : nop
        push offset public_639ac58 @0x6276f41*/
  FIXUP public_6276f41 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac58
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276f60
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x18]
        jmp public_6276fe7
/*FIXUP public_6276f60 : nop
        push offset public_639a288 @0x6276f60*/
  FIXUP public_6276f60 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a288
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276f98
        call public_6310b70
        mov ecx, dword ptr ds : [edi+0xE20]
        push eax
        lea edx, ds:[edi+ecx*4+0x20]
        push edx
        public_6276f81 : nop
        call public_6334400
        mov eax, dword ptr ds : [edi+0xE20]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+0xE20], eax
        jmp public_6276fe7
/*FIXUP public_6276f98 : nop
        push offset public_639ac4c @0x6276f98*/
  FIXUP public_6276f98 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac4c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276fbe
        call public_6310b70
        push eax
        mov eax, dword ptr ds : [edi+0xE20]
        lea ecx, ds:[edi+eax*4+0x120]
        push ecx
        jmp public_6276f81
/*FIXUP public_6276fbe : nop
        push offset public_639ac8c @0x6276fbe*/
  FIXUP public_6276fbe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac8c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276fe2
        push 0
        call public_63108f0
        call public_6391dae
        mov dword ptr ds : [edi+0xE24], eax
        jmp public_6276fe7
        public_6276fe2 : nop
        call public_6310040
        public_6276fe7 : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_6276e20
        public_6276ff6 : nop
        pop edi
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6276df0)
    }
}

#undef public_6276e20
#undef public_6276e72
#undef public_6276ee4
#undef public_6276f03
#undef public_6276f22
#undef public_6276f41
#undef public_6276f60
#undef public_6276f81
#undef public_6276f98
#undef public_6276fbe
#undef public_6276fe2
#undef public_6276fe7
#undef public_6276ff6
