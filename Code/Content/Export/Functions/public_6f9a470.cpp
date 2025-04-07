#include "Content-PCH.h"


#define public_6f9a4b8 _public_6f9a4b8
#define public_6f9a4d7 _public_6f9a4d7
#define public_6f9a4f6 _public_6f9a4f6
#define public_6f9a515 _public_6f9a515
#define public_6f9a534 _public_6f9a534
#define public_6f9a553 _public_6f9a553
#define public_6f9a572 _public_6f9a572
#define public_6f9a591 _public_6f9a591
#define public_6f9a5b0 _public_6f9a5b0
#define public_6f9a5cf _public_6f9a5cf
#define public_6f9a5ee _public_6f9a5ee
#define public_6f9a60d _public_6f9a60d
#define public_6f9a62c _public_6f9a62c
#define public_6f9a64b _public_6f9a64b
#define public_6f9a669 _public_6f9a669
#define public_6f9a676 _public_6f9a676

PROC_DECLARE(0x6f9a470, internal_6f9a470, public_6f9a470);
extern "C" NAKED register_t __cdecl internal_6f9a470()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov byte ptr ss : [esp+0x13], 0
        je public_6f9a676
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [public_6fb3000]
        mov bl, 1
/*FIXUP push offset public_6fbba9c @0x6f9a494*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbba9c
        mov byte ptr ss : [esp+0x17], bl
        lea esi, ds:[eax+4]
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a4b8
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0xC], bl
        pop ebp
        mov al, bl
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a4b8 : nop
        push offset public_6fbd154 @0x6f9a4b8*/
  FIXUP public_6f9a4b8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd154
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a4d7
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0xD], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a4d7 : nop
        push offset public_6fbd140 @0x6f9a4d7*/
  FIXUP public_6f9a4d7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd140
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a4f6
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0xE], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a4f6 : nop
        push offset public_6fbd12c @0x6f9a4f6*/
  FIXUP public_6f9a4f6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd12c
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a515
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0xF], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a515 : nop
        push offset public_6fbd124 @0x6f9a515*/
  FIXUP public_6f9a515 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd124
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a534
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x10], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a534 : nop
        push offset public_6fbd114 @0x6f9a534*/
  FIXUP public_6f9a534 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd114
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a553
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x11], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a553 : nop
        push offset public_6fbd100 @0x6f9a553*/
  FIXUP public_6f9a553 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd100
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a572
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x12], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a572 : nop
        push offset public_6fbd0e0 @0x6f9a572*/
  FIXUP public_6f9a572 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd0e0
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a591
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x13], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a591 : nop
        push offset public_6fbd0c4 @0x6f9a591*/
  FIXUP public_6f9a591 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd0c4
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a5b0
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x14], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a5b0 : nop
        push offset public_6fbd0b4 @0x6f9a5b0*/
  FIXUP public_6f9a5b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd0b4
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a5cf
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x15], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a5cf : nop
        push offset public_6fbd0a4 @0x6f9a5cf*/
  FIXUP public_6f9a5cf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd0a4
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a5ee
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x16], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a5ee : nop
        push offset public_6fbd084 @0x6f9a5ee*/
  FIXUP public_6f9a5ee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd084
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a60d
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x17], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a60d : nop
        push offset public_6fbd068 @0x6f9a60d*/
  FIXUP public_6f9a60d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd068
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a62c
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x18], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a62c : nop
        push offset public_6fbd058 @0x6f9a62c*/
  FIXUP public_6f9a62c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd058
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a64b
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x19], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9a64b : nop
        push offset public_6fbd050 @0x6f9a64b*/
  FIXUP public_6f9a64b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd050
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9a669
        pop edi
        pop esi
        pop ebp
        mov byte ptr ss : [esp+7], bl
        mov al, bl
        pop ebx
        pop ecx
        ret 8
        public_6f9a669 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        mov byte ptr ss : [esp+0x13], 0
        public_6f9a676 : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f9a470)
    }
}

#undef public_6f9a4b8
#undef public_6f9a4d7
#undef public_6f9a4f6
#undef public_6f9a515
#undef public_6f9a534
#undef public_6f9a553
#undef public_6f9a572
#undef public_6f9a591
#undef public_6f9a5b0
#undef public_6f9a5cf
#undef public_6f9a5ee
#undef public_6f9a60d
#undef public_6f9a62c
#undef public_6f9a64b
#undef public_6f9a669
#undef public_6f9a676
