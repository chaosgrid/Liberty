#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6264d80);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);

#define public_6264da8 _public_6264da8
#define public_6264df2 _public_6264df2
#define public_6264e0e _public_6264e0e
#define public_6264e30 _public_6264e30
#define public_6264e52 _public_6264e52
#define public_6264e55 _public_6264e55
#define public_6264e65 _public_6264e65
#define public_6264e94 _public_6264e94

PROC_DECLARE(0x6264d80, internal_6264d80, public_6264d80);
extern "C" NAKED register_t __cdecl internal_6264d80()
{
    __asm
    {
        sub esp, 0x100
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10C]
        mov ebx, ecx
        push edi
        mov ecx, esi
        call public_6310170
        test al, al
        je public_6264e65
        push ebp
        mov ebp, dword ptr ds : [public_639931c]
/*FIXUP public_6264da8 : nop
        push offset public_63994e8 @0x6264da8*/
  FIXUP public_6264da8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        mov ecx, esi
        call public_6310410
        test al, al
        jne public_6264e55
/*FIXUP push offset public_63994dc @0x6264dbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994dc
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6264df2
        call public_6310b70
        push eax
        mov eax, dword ptr ds : [ebx]
        push eax
        lea ecx, ss:[esp+0x18]
/*FIXUP push offset public_63994d4 @0x6264ddb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994d4
        push ecx
        call ebp
        lea edx, ss:[esp+0x20]
        push edx
        call public_630d3f0
        mov dword ptr ds : [ebx+4], eax
        jmp public_6264e52
/*FIXUP public_6264df2 : nop
        push offset public_63994c4 @0x6264df2*/
  FIXUP public_6264df2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994c4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6264e0e
        push 0
        call public_63108f0
        fstp dword ptr ds : [ebx+8]
        jmp public_6264e55
/*FIXUP public_6264e0e : nop
        push offset public_63994b0 @0x6264e0e*/
  FIXUP public_6264e0e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994b0
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6264e30
        push 0
        call public_63108f0
        fstp dword ptr ds : [ebx+0xC]
        jmp public_6264e55
        lea ebx, ds:[ebx]
        public_6264e30 : nop
        mov edi, 0x100001
        call public_6310040
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x89
/*FIXUP push offset public_6399484 @0x6264e45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
/*FIXUP push offset public_6399450 @0x6264e4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399450
        push edi
        call dword ptr ds : [eax]
        public_6264e52 : nop
        add esp, 0x14
        public_6264e55 : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_6264da8
        pop ebp
        public_6264e65 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6264e94
        mov ecx, esi
        mov edi, 0x100001
        call public_6310040
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x90
/*FIXUP push offset public_6399484 @0x6264e84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
/*FIXUP push offset public_6399418 @0x6264e89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399418
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6264e94 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x100
        ret 4
        UNREACHABLE_TRAP(0x6264d80)
    }
}

#undef public_6264da8
#undef public_6264df2
#undef public_6264e0e
#undef public_6264e30
#undef public_6264e52
#undef public_6264e55
#undef public_6264e65
#undef public_6264e94
