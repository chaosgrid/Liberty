#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6373e20);
CLANG_FORWARD_PROC_SYMBOL(public_638a270);
CLANG_FORWARD_PROC_SYMBOL(public_638b7f0);

#define public_638a2c0 _public_638a2c0
#define public_638a2dd _public_638a2dd
#define public_638a2ee _public_638a2ee
#define public_638a315 _public_638a315
#define public_638a321 _public_638a321
#define public_638a338 _public_638a338
#define public_638a36a _public_638a36a
#define public_638a382 _public_638a382
#define public_638a395 _public_638a395
#define public_638a39f _public_638a39f
#define public_638a3c2 _public_638a3c2
#define public_638a3cf _public_638a3cf
#define public_638a3dc _public_638a3dc
#define public_638a3e0 _public_638a3e0
#define public_638a412 _public_638a412
#define public_638a433 _public_638a433
#define public_638a442 _public_638a442
#define public_638a455 _public_638a455
#define public_638a468 _public_638a468
#define public_638a471 _public_638a471

PROC_DECLARE(0x638a270, internal_638a270, public_638a270);
extern "C" NAKED register_t __cdecl internal_638a270()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        xor edi, edi
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], edi
        je public_638a471
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp+0x50]
        test ah, 4
        je public_638a2ee
        mov eax, dword ptr ds : [public_658b8a0]
        test eax, eax
        je public_638a2ee
        mov edi, dword ptr ds : [public_63991e8]
/*FIXUP push offset public_63f8754 @0x638a2a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8754
        push ebx
        call edi
        mov eax, dword ptr ss : [ebp+0x38]
        add esp, 8
        test eax, eax
        je public_638a2dd
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638a2dd
        public_638a2c0 : nop
        mov eax, dword ptr ds : [eax+0xC]
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63f874c @0x638a2c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f874c
        push ebx
        call edi
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_638a2c0
/*FIXUP public_638a2dd : nop
        push offset public_63edccc @0x638a2dd*/
  FIXUP public_638a2dd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call edi
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
/*FIXUP public_638a2ee : nop
        push offset public_63f873c @0x638a2ee*/
  FIXUP public_638a2ee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f873c
        push ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [ebp+0x38]
        add esp, 8
        test eax, eax
        je public_638a321
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638a321
        mov edx, 0xFEFFFFFF
        public_638a315 : nop
        and dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638a315
        public_638a321 : nop
        cmp dword ptr ds : [public_658b24c], 3
        jne public_638a36a
        mov ecx, dword ptr ss : [ebp+0x38]
        mov esi, dword ptr ds : [ecx+4]
        test esi, esi
        je public_638a3e0
        public_638a338 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, 0x1000000
        jne public_638a3e0
        or eax, 0x1000000
        push esi
        push ebx
        mov dword ptr ds : [esi+0xC], eax
        call public_638b7f0
        push 0
        push ebp
        push esi
        inc edi
        call public_6373e20
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne public_638a338
        jmp public_638a3e0
        public_638a36a : nop
        mov eax, dword ptr ss : [ebp+0x3C]
        test eax, eax
        je public_638a3e0
        mov edi, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        add ecx, 4
        test edi, edi
        mov dword ptr ss : [esp+0x18], ecx
        je public_638a3dc
        public_638a382 : nop
        mov eax, dword ptr ss : [ebp+0x38]
        test eax, eax
        je public_638a3cf
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638a3cf
        public_638a395 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebp
        jne public_638a39f
        mov ecx, dword ptr ds : [eax+8]
        public_638a39f : nop
        cmp ecx, edi
        jne public_638a3c2
        mov edx, dword ptr ds : [eax+0xC]
        push eax
        or edx, 0x1000000
        push ebx
        mov dword ptr ds : [eax+0xC], edx
        call public_638b7f0
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        public_638a3c2 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_638a395
        mov ecx, dword ptr ss : [esp+0x18]
        public_638a3cf : nop
        mov edi, dword ptr ds : [ecx]
        add ecx, 4
        test edi, edi
        mov dword ptr ss : [esp+0x18], ecx
        jne public_638a382
        public_638a3dc : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_638a3e0 : nop
        mov edx, dword ptr ss : [ebp+0x38]
        push edx
        call public_636ec10
        add esp, 4
        cmp edi, eax
        je public_638a442
/*FIXUP push offset public_63f8728 @0x638a3f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8728
        push ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [ebp+0x38]
        add esp, 8
        test eax, eax
        je public_638a433
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638a433
        public_638a412 : nop
        mov eax, dword ptr ds : [eax+0xC]
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63f874c @0x638a41b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f874c
        push ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_638a412
/*FIXUP public_638a433 : nop
        push offset public_63edccc @0x638a433*/
  FIXUP public_638a433 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638a442 : nop
        mov eax, dword ptr ss : [ebp+0x38]
        test eax, eax
        je public_638a471
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638a471
        public_638a455 : nop
        test dword ptr ds : [eax+0xC], 0x1000000
        jne public_638a468
        push eax
        push ebx
        call public_638b7f0
        add esp, 8
        public_638a468 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_638a455
        public_638a471 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x638a270)
    }
}

#undef public_638a2c0
#undef public_638a2dd
#undef public_638a2ee
#undef public_638a315
#undef public_638a321
#undef public_638a338
#undef public_638a36a
#undef public_638a382
#undef public_638a395
#undef public_638a39f
#undef public_638a3c2
#undef public_638a3cf
#undef public_638a3dc
#undef public_638a3e0
#undef public_638a412
#undef public_638a433
#undef public_638a442
#undef public_638a455
#undef public_638a468
#undef public_638a471
