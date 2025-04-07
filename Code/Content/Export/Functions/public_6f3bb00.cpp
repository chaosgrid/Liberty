#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3bb00);

#define public_6f3bb21 _public_6f3bb21
#define public_6f3bb48 _public_6f3bb48
#define public_6f3bb62 _public_6f3bb62
#define public_6f3bb7b _public_6f3bb7b
#define public_6f3bb95 _public_6f3bb95
#define public_6f3bbad _public_6f3bbad
#define public_6f3bbbf _public_6f3bbbf

PROC_DECLARE(0x6f3bb00, internal_6f3bb00, public_6f3bb00);
extern "C" NAKED register_t __cdecl internal_6f3bb00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3bbbf
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP public_6f3bb21 : nop
        push offset public_6fb445c @0x6f3bb21*/
  FIXUP public_6f3bb21 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f3bb48
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3bbad
/*FIXUP public_6f3bb48 : nop
        push offset public_6fba6ec @0x6f3bb48*/
  FIXUP public_6f3bb48 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba6ec
        call edi
        test al, al
        mov ecx, esi
        je public_6f3bb62
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0xC]
        jmp public_6f3bbad
/*FIXUP public_6f3bb62 : nop
        push offset public_6fba6c8 @0x6f3bb62*/
  FIXUP public_6f3bb62 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba6c8
        call edi
        test al, al
        mov ecx, esi
        je public_6f3bb7b
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx]
        jmp public_6f3bbad
/*FIXUP public_6f3bb7b : nop
        push offset public_6fba6a4 @0x6f3bb7b*/
  FIXUP public_6f3bb7b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba6a4
        call edi
        test al, al
        mov ecx, esi
        je public_6f3bb95
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+4]
        jmp public_6f3bbad
/*FIXUP public_6f3bb95 : nop
        push offset public_6fba67c @0x6f3bb95*/
  FIXUP public_6f3bb95 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba67c
        call edi
        test al, al
        je public_6f3bbad
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+8]
        public_6f3bbad : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3bb21
        pop edi
        pop ebx
        public_6f3bbbf : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3bb00)
    }
}

#undef public_6f3bb21
#undef public_6f3bb48
#undef public_6f3bb62
#undef public_6f3bb7b
#undef public_6f3bb95
#undef public_6f3bbad
#undef public_6f3bbbf
