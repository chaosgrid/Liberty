#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c33a10);

#define public_6c32393 _public_6c32393
#define public_6c323cb _public_6c323cb
#define public_6c323f1 _public_6c323f1
#define public_6c32410 _public_6c32410
#define public_6c3242f _public_6c3242f
#define public_6c3244e _public_6c3244e
#define public_6c32489 _public_6c32489
#define public_6c324c8 _public_6c324c8

PROC_DECLARE(0x6c32380, internal_6c32380, public_6c32380);
extern "C" NAKED register_t __cdecl internal_6c32380()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jne public_6c32393
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6c32393 : nop
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6c37d50 @0x6c32395*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d50
/*FIXUP push offset public_6c37bb0 @0x6c3239a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37bb0
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6c323cb
        mov edx, dword ptr ds : [public_6c36010]
/*FIXUP push offset public_6c37b80 @0x6c323ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37b80
        push 0xEA
/*FIXUP push offset public_6c37a38 @0x6c323b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37a38
        mov eax, 0x100002
/*FIXUP push offset public_6c3719c @0x6c323c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6c323cb : nop
        mov eax, dword ptr ds : [public_6c37d50]
        test eax, eax
        je public_6c3244e
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6c37d64 @0x6c323d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d64
/*FIXUP push offset public_6c379c0 @0x6c323de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c379c0
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6c323f1
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6c323f1 : nop
        mov eax, dword ptr ds : [public_6c37d50]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_6c37d58 @0x6c323f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d58
/*FIXUP push offset public_6c37b68 @0x6c323fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37b68
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jge public_6c32410
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6c32410 : nop
        mov eax, dword ptr ds : [public_6c37d50]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6c37d5c @0x6c32417*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d5c
/*FIXUP push offset public_6c37b54 @0x6c3241c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37b54
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6c3242f
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6c3242f : nop
        mov eax, dword ptr ds : [public_6c37d50]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_6c37d60 @0x6c32436*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d60
/*FIXUP push offset public_6c37b44 @0x6c3243b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37b44
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jge public_6c3244e
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6c3244e : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6c37d54 @0x6c32453*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d54
/*FIXUP push offset public_6c37b2c @0x6c32458*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37b2c
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6c32489
        mov edx, dword ptr ds : [public_6c36010]
/*FIXUP push offset public_6c37afc @0x6c3246a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37afc
        push 0xFE
/*FIXUP push offset public_6c37a38 @0x6c32474*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37a38
        mov eax, 0x100002
/*FIXUP push offset public_6c3719c @0x6c3247e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6c32489 : nop
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6c37d4c @0x6c3248b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37d4c
/*FIXUP push offset public_6c37aec @0x6c32490*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37aec
        push esi
        call dword ptr ds : [eax]
        test eax, eax
        jge public_6c324c8
        mov ecx, dword ptr ds : [public_6c36010]
/*FIXUP push offset public_6c37ab4 @0x6c324a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37ab4
        push 0x103
/*FIXUP push offset public_6c37a38 @0x6c324ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37a38
        mov eax, 0x100002
/*FIXUP push offset public_6c3719c @0x6c324b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6c324c8 : nop
        mov eax, dword ptr ds : [public_6c37d4c]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov ecx, esi
        call public_6c33a10
        xor ecx, ecx
        test eax, eax
        setge cl
        pop esi
        dec ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6c32380)
    }
}

#undef public_6c32393
#undef public_6c323cb
#undef public_6c323f1
#undef public_6c32410
#undef public_6c3242f
#undef public_6c3244e
#undef public_6c32489
#undef public_6c324c8
