#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b370);

#define public_6f3b391 _public_6f3b391
#define public_6f3b3bb _public_6f3b3bb
#define public_6f3b3d7 _public_6f3b3d7
#define public_6f3b3f1 _public_6f3b3f1
#define public_6f3b40b _public_6f3b40b
#define public_6f3b425 _public_6f3b425
#define public_6f3b43f _public_6f3b43f
#define public_6f3b457 _public_6f3b457
#define public_6f3b469 _public_6f3b469

PROC_DECLARE(0x6f3b370, internal_6f3b370, public_6f3b370);
extern "C" NAKED register_t __cdecl internal_6f3b370()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3b469
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP public_6f3b391 : nop
        push offset public_6fb445c @0x6f3b391*/
  FIXUP public_6f3b391 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b3bb
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3b457
/*FIXUP public_6f3b3bb : nop
        push offset public_6fba0d0 @0x6f3b3bb*/
  FIXUP public_6f3b3bb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba0d0
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b3d7
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx]
        jmp public_6f3b457
/*FIXUP public_6f3b3d7 : nop
        push offset public_6fba0b0 @0x6f3b3d7*/
  FIXUP public_6f3b3d7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba0b0
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b3f1
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+8]
        jmp public_6f3b457
/*FIXUP public_6f3b3f1 : nop
        push offset public_6fba08c @0x6f3b3f1*/
  FIXUP public_6f3b3f1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba08c
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b40b
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+4]
        jmp public_6f3b457
/*FIXUP public_6f3b40b : nop
        push offset public_6fba070 @0x6f3b40b*/
  FIXUP public_6f3b40b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba070
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b425
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0xC]
        jmp public_6f3b457
/*FIXUP public_6f3b425 : nop
        push offset public_6fba054 @0x6f3b425*/
  FIXUP public_6f3b425 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba054
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b43f
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x14]
        jmp public_6f3b457
/*FIXUP public_6f3b43f : nop
        push offset public_6fba030 @0x6f3b43f*/
  FIXUP public_6f3b43f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba030
        call edi
        test al, al
        je public_6f3b457
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x10]
        public_6f3b457 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3b391
        pop edi
        pop ebx
        public_6f3b469 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3b370)
    }
}

#undef public_6f3b391
#undef public_6f3b3bb
#undef public_6f3b3d7
#undef public_6f3b3f1
#undef public_6f3b40b
#undef public_6f3b425
#undef public_6f3b43f
#undef public_6f3b457
#undef public_6f3b469
