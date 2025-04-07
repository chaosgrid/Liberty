#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263450);
CLANG_FORWARD_PROC_SYMBOL(public_62769d0);
CLANG_FORWARD_PROC_SYMBOL(public_6279400);
CLANG_FORWARD_PROC_SYMBOL(public_6303840);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62769f3 _public_62769f3
#define public_6276a19 _public_6276a19
#define public_6276a72 _public_6276a72
#define public_6276aa9 _public_6276aa9
#define public_6276ae3 _public_6276ae3
#define public_6276b0c _public_6276b0c
#define public_6276b33 _public_6276b33
#define public_6276b5a _public_6276b5a
#define public_6276b7b _public_6276b7b
#define public_6276b9c _public_6276b9c
#define public_6276bb0 _public_6276bb0
#define public_6276bc0 _public_6276bc0
#define public_6276bd7 _public_6276bd7
#define public_6276bde _public_6276bde
#define public_6276bee _public_6276bee

PROC_DECLARE(0x62769d0, internal_62769d0, public_62769d0);
extern "C" NAKED register_t __cdecl internal_62769d0()
{
    __asm
    {
        push ebx
        push esi
        add ecx, 0x194
        call public_6279400
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, esi
        mov ebx, eax
        call public_6310170
        test al, al
        je public_6276bee
        push edi
/*FIXUP public_62769f3 : nop
        push offset public_6399f10 @0x62769f3*/
  FIXUP public_62769f3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f10
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276a19
        call public_6310b70
        push eax
        push ebx
        call public_6334400
        add esp, 8
        jmp public_6276bde
/*FIXUP public_6276a19 : nop
        push offset public_639ac40 @0x6276a19*/
  FIXUP public_6276a19 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac40
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276a72
        mov dword ptr ss : [esp+0x10], 0
        call public_6310b70
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_6334400
        add esp, 8
        mov ecx, esi
        call public_6310040
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push 0xC
/*FIXUP push offset public_63eabc8 @0x6276a52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eabc8
        push ecx
        call public_6303840
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ds : [ebx+0x10], eax
        call public_6334430
        add esp, 0x14
        jmp public_6276bde
/*FIXUP public_6276a72 : nop
        push offset public_639ab34 @0x6276a72*/
  FIXUP public_6276a72 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ab34
        call public_6310410
        test al, al
        je public_6276aa9
/*FIXUP push offset _public_6263450 @0x6276a80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6263450
        push 0x6E7
/*FIXUP push offset public_639a188 @0x6276a8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639ac08 @0x6276a94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ac08
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6276bde
/*FIXUP public_6276aa9 : nop
        push offset public_639aaf4 @0x6276aa9*/
  FIXUP public_6276aa9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639aaf4
        mov ecx, esi
        call public_6310410
        test al, al
        je public_6276ae3
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset _public_6263450 @0x6276abf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6263450
        push 0x6EB
/*FIXUP push offset public_639a188 @0x6276ac9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639abcc @0x6276ad3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639abcc
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_6276bde
/*FIXUP public_6276ae3 : nop
        push offset public_639abc0 @0x6276ae3*/
  FIXUP public_6276ae3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639abc0
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276b0c
        call public_6310b70
        push eax
        lea edx, ds:[ebx+4]
        push edx
        call public_6334400
        add esp, 8
        jmp public_6276bde
/*FIXUP public_6276b0c : nop
        push offset public_639abb0 @0x6276b0c*/
  FIXUP public_6276b0c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639abb0
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276b33
        call public_6310b70
        push eax
        lea eax, ds:[ebx+8]
        push eax
        call public_6334400
        add esp, 8
        jmp public_6276bde
/*FIXUP public_6276b33 : nop
        push offset public_639ab9c @0x6276b33*/
  FIXUP public_6276b33 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ab9c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276b5a
        call public_6310b70
        push eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        call public_6334400
        add esp, 8
        jmp public_6276bde
/*FIXUP public_6276b5a : nop
        push offset public_639ab90 @0x6276b5a*/
  FIXUP public_6276b5a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ab90
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276b7b
        push 0
        call public_63108f0
        call public_6391dae
        or dword ptr ds : [ebx+0x14], eax
        jmp public_6276bde
/*FIXUP public_6276b7b : nop
        push offset public_639ab84 @0x6276b7b*/
  FIXUP public_6276b7b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ab84
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276b9c
        push 0
        call public_63108f0
        call public_6391dae
        or dword ptr ds : [ebx+0x18], eax
        jmp public_6276bde
/*FIXUP public_6276b9c : nop
        push offset public_639ab70 @0x6276b9c*/
  FIXUP public_6276b9c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ab70
        call public_6310410
        test al, al
        je public_6276bd7
        xor edi, edi
        lea eax, ds:[ebx+0x1C]
        nop 
        public_6276bb0 : nop
        cmp dword ptr ds : [eax], 0
        je public_6276bc0
        inc edi
        add eax, 4
        cmp edi, 4
        jl public_6276bb0
        jmp public_6276bde
        public_6276bc0 : nop
        mov ecx, esi
        call public_6310b70
        push eax
        lea edx, ds:[ebx+edi*4+0x1C]
        push edx
        call public_6334400
        add esp, 8
        jmp public_6276bde
        public_6276bd7 : nop
        mov ecx, esi
        call public_6310040
        public_6276bde : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_62769f3
        pop edi
        public_6276bee : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62769d0)
    }
}

#undef public_62769f3
#undef public_6276a19
#undef public_6276a72
#undef public_6276aa9
#undef public_6276ae3
#undef public_6276b0c
#undef public_6276b33
#undef public_6276b5a
#undef public_6276b7b
#undef public_6276b9c
#undef public_6276bb0
#undef public_6276bc0
#undef public_6276bd7
#undef public_6276bde
#undef public_6276bee
