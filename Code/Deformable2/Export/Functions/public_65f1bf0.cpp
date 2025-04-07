#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1df0);
CLANG_FORWARD_PROC_SYMBOL(public_65fdfb0);

#define public_65f1c21 _public_65f1c21
#define public_65f1c4a _public_65f1c4a
#define public_65f1c6e _public_65f1c6e
#define public_65f1c92 _public_65f1c92
#define public_65f1cb9 _public_65f1cb9
#define public_65f1ce0 _public_65f1ce0
#define public_65f1d0f _public_65f1d0f
#define public_65f1d3c _public_65f1d3c
#define public_65f1d64 _public_65f1d64

PROC_DECLARE(0x65f1bf0, internal_65f1bf0, public_65f1bf0);
extern "C" NAKED register_t __cdecl internal_65f1bf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        lea esi, ds:[eax-4]
        mov ecx, esi
        call public_65f1df0
        mov eax, dword ptr ds : [public_6603128]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6603130 @0x65f1c06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603130
/*FIXUP push offset public_6602430 @0x65f1c0b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602430
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_65f1c4a
/*FIXUP push offset public_66023e0 @0x65f1c17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66023e0
        push 0xCC
        public_65f1c21 : nop
        mov edx, dword ptr ds : [public_6601008]
/*FIXUP push offset public_6602070 @0x65f1c27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602070
        mov eax, 0x100001
/*FIXUP push offset public_6602054 @0x65f1c31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602054
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov ecx, esi
        call public_65f1df0
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_65f1c4a : nop
        mov eax, dword ptr ds : [public_6603128]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_660312c @0x65f1c51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660312c
/*FIXUP push offset public_66023c8 @0x65f1c56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66023c8
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_65f1c6e
/*FIXUP push offset public_6602378 @0x65f1c62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602378
        push 0xD2
        jmp public_65f1c21
        public_65f1c6e : nop
        mov eax, dword ptr ds : [public_6603128]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6603144 @0x65f1c75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603144
/*FIXUP push offset public_660235c @0x65f1c7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660235c
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_65f1c92
/*FIXUP push offset public_6602308 @0x65f1c86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602308
        push 0xD8
        jmp public_65f1c21
        public_65f1c92 : nop
        mov eax, dword ptr ds : [public_6603128]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6603148 @0x65f1c99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603148
/*FIXUP push offset public_66022f4 @0x65f1c9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66022f4
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_65f1cb9
/*FIXUP push offset public_66022a0 @0x65f1caa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66022a0
        push 0xDE
        jmp public_65f1c21
        public_65f1cb9 : nop
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6603138 @0x65f1cc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603138
/*FIXUP push offset public_660228c @0x65f1cc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660228c
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_65f1ce0
/*FIXUP push offset public_6602240 @0x65f1cd1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602240
        push 0xE6
        jmp public_65f1c21
        public_65f1ce0 : nop
        mov eax, dword ptr ds : [public_6603138]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_660313c @0x65f1cf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660313c
/*FIXUP push offset public_6602230 @0x65f1cf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602230
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jge public_65f1d0f
/*FIXUP push offset public_66021e8 @0x65f1d03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66021e8
        push 0xED
        jmp public_65f1d3c
        public_65f1d0f : nop
        mov eax, dword ptr ds : [public_660313c]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_6603140 @0x65f1d21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6603140
/*FIXUP push offset public_66021d8 @0x65f1d26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66021d8
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jge public_65f1d64
/*FIXUP push offset public_6602190 @0x65f1d32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602190
        push 0xF4
/*FIXUP public_65f1d3c : nop
        push offset public_6602070 @0x65f1d3c*/
  FIXUP public_65f1d3c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602070
        mov eax, 0x100001
/*FIXUP push offset public_6602054 @0x65f1d46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602054
        push eax
        mov eax, dword ptr ds : [public_6601008]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov ecx, esi
        call public_65f1df0
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_65f1d64 : nop
        mov eax, dword ptr ds : [public_6603140]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [public_660312c]
        push edx
        call public_65fdfb0
        add esp, 4
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f1bf0)
    }
}

#undef public_65f1c21
#undef public_65f1c4a
#undef public_65f1c6e
#undef public_65f1c92
#undef public_65f1cb9
#undef public_65f1ce0
#undef public_65f1d0f
#undef public_65f1d3c
#undef public_65f1d64
