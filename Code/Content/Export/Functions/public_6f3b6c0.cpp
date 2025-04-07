#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b6c0);

#define public_6f3b6e1 _public_6f3b6e1
#define public_6f3b708 _public_6f3b708
#define public_6f3b721 _public_6f3b721
#define public_6f3b741 _public_6f3b741
#define public_6f3b759 _public_6f3b759
#define public_6f3b76b _public_6f3b76b

PROC_DECLARE(0x6f3b6c0, internal_6f3b6c0, public_6f3b6c0);
extern "C" NAKED register_t __cdecl internal_6f3b6c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f3b76b
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP public_6f3b6e1 : nop
        push offset public_6fb445c @0x6f3b6e1*/
  FIXUP public_6f3b6e1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b708
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        jmp public_6f3b759
/*FIXUP public_6f3b708 : nop
        push offset public_6fba31c @0x6f3b708*/
  FIXUP public_6f3b708 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba31c
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b721
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx]
        jmp public_6f3b759
/*FIXUP public_6f3b721 : nop
        push offset public_6fba304 @0x6f3b721*/
  FIXUP public_6f3b721 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba304
        call edi
        test al, al
        mov ecx, esi
        je public_6f3b741
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb6060]
        fstp dword ptr ds : [ebx+4]
        jmp public_6f3b759
/*FIXUP public_6f3b741 : nop
        push offset public_6fba2f0 @0x6f3b741*/
  FIXUP public_6f3b741 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fba2f0
        call edi
        test al, al
        je public_6f3b759
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+8]
        public_6f3b759 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f3b6e1
        pop edi
        pop ebx
        public_6f3b76b : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3b6c0)
    }
}

#undef public_6f3b6e1
#undef public_6f3b708
#undef public_6f3b721
#undef public_6f3b741
#undef public_6f3b759
#undef public_6f3b76b
