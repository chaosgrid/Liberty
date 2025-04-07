#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6276c00);
CLANG_FORWARD_PROC_SYMBOL(public_6279670);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);

#define public_6276c30 _public_6276c30
#define public_6276c82 _public_6276c82
#define public_6276cf4 _public_6276cf4
#define public_6276d13 _public_6276d13
#define public_6276d32 _public_6276d32
#define public_6276d4e _public_6276d4e
#define public_6276d6a _public_6276d6a
#define public_6276d8b _public_6276d8b
#define public_6276da2 _public_6276da2
#define public_6276dc8 _public_6276dc8
#define public_6276dcd _public_6276dcd
#define public_6276ddc _public_6276ddc

PROC_DECLARE(0x6276c00, internal_6276c00, public_6276c00);
extern "C" NAKED register_t __cdecl internal_6276c00()
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
        mov dword ptr ds : [edi+0x1C], 1
        call public_6310170
        test al, al
        je public_6276ddc
        lea esp, ss:[esp]
/*FIXUP public_6276c30 : nop
        push offset public_639ac84 @0x6276c30*/
  FIXUP public_6276c30 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac84
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276c82
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
        jmp public_6276dcd
/*FIXUP public_6276c82 : nop
        push offset public_639ac7c @0x6276c82*/
  FIXUP public_6276c82 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac7c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276cf4
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
        jmp public_6276dcd
/*FIXUP public_6276cf4 : nop
        push offset public_639ac70 @0x6276cf4*/
  FIXUP public_6276cf4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac70
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276d13
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0xC]
        jmp public_6276dcd
/*FIXUP public_6276d13 : nop
        push offset public_639ac6c @0x6276d13*/
  FIXUP public_6276d13 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac6c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276d32
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x10]
        jmp public_6276dcd
/*FIXUP public_6276d32 : nop
        push offset public_639ac64 @0x6276d32*/
  FIXUP public_6276d32 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac64
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276d4e
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x14]
        jmp public_6276dcd
/*FIXUP public_6276d4e : nop
        push offset public_639ac58 @0x6276d4e*/
  FIXUP public_6276d4e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac58
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276d6a
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x18]
        jmp public_6276dcd
/*FIXUP public_6276d6a : nop
        push offset public_639a288 @0x6276d6a*/
  FIXUP public_6276d6a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a288
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276da2
        call public_6310b70
        mov ecx, dword ptr ds : [edi+0xE20]
        push eax
        lea edx, ds:[edi+ecx*4+0x20]
        push edx
        public_6276d8b : nop
        call public_6334400
        mov eax, dword ptr ds : [edi+0xE20]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+0xE20], eax
        jmp public_6276dcd
/*FIXUP public_6276da2 : nop
        push offset public_639ac4c @0x6276da2*/
  FIXUP public_6276da2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac4c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276dc8
        call public_6310b70
        push eax
        mov eax, dword ptr ds : [edi+0xE20]
        lea ecx, ds:[edi+eax*4+0x120]
        push ecx
        jmp public_6276d8b
        public_6276dc8 : nop
        call public_6310040
        public_6276dcd : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_6276c30
        public_6276ddc : nop
        pop edi
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6276c00)
    }
}

#undef public_6276c30
#undef public_6276c82
#undef public_6276cf4
#undef public_6276d13
#undef public_6276d32
#undef public_6276d4e
#undef public_6276d6a
#undef public_6276d8b
#undef public_6276da2
#undef public_6276dc8
#undef public_6276dcd
#undef public_6276ddc
