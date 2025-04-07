#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c308c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c30920);
CLANG_FORWARD_PROC_SYMBOL(public_6c30f90);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2d775 _public_6c2d775
#define public_6c2d777 _public_6c2d777
#define public_6c2d7aa _public_6c2d7aa
#define public_6c2d7c4 _public_6c2d7c4
#define public_6c2d7c6 _public_6c2d7c6
#define public_6c2d7d2 _public_6c2d7d2

PROC_DECLARE(0x6c2d740, internal_6c2d740, public_6c2d740);
extern "C" NAKED register_t __cdecl internal_6c2d740()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx]
        push edi
/*FIXUP push offset public_6c36408 @0x6c2d748*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c36408
        push ebx
        or edi, 0xFFFFFFFF
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6c2d7d2
        push esi
        push 0x90
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c2d775
        mov ecx, eax
        call public_6c30920
        mov esi, eax
        jmp public_6c2d777
        public_6c2d775 : nop
        xor esi, esi
        public_6c2d777 : nop
        push ebx
        mov ecx, esi
        call public_6c30f90
        test eax, eax
        jge public_6c2d7aa
        test esi, esi
        je public_6c2d7c6
        mov ecx, esi
        call public_6c308c0
        push esi
        call public_6c34ea0
        mov ecx, dword ptr ds : [ebx]
        add esp, 4
/*FIXUP push offset public_6c37250 @0x6c2d799*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37250
        push ebx
        call dword ptr ds : [ecx+0x60]
        pop esi
        mov eax, edi
        pop edi
        pop ebx
        ret 8
        public_6c2d7aa : nop
        test esi, esi
        jne public_6c2d7c4
        mov ecx, dword ptr ds : [ebx]
/*FIXUP push offset public_6c37250 @0x6c2d7b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37250
        push ebx
        or edi, 0xFFFFFFFF
        call dword ptr ds : [ecx+0x60]
        pop esi
        mov eax, edi
        pop edi
        pop ebx
        ret 8
        public_6c2d7c4 : nop
        mov edi, esi
        public_6c2d7c6 : nop
        mov ecx, dword ptr ds : [ebx]
/*FIXUP push offset public_6c37250 @0x6c2d7c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37250
        push ebx
        call dword ptr ds : [ecx+0x60]
        pop esi
        public_6c2d7d2 : nop
        mov eax, edi
        pop edi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6c2d740)
    }
}

#undef public_6c2d775
#undef public_6c2d777
#undef public_6c2d7aa
#undef public_6c2d7c4
#undef public_6c2d7c6
#undef public_6c2d7d2
