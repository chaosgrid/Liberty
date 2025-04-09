#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_489e00);
CLANG_FORWARD_PROC_SYMBOL(public_4bc990);
CLANG_FORWARD_PROC_SYMBOL(public_55e170);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_55e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_45c928 _public_45c928
#define public_45c9ab _public_45c9ab
#define public_45c9f7 _public_45c9f7

PROC_DECLARE(0x45c8c0, internal_45c8c0, public_45c8c0);
extern "C" NAKED register_t __cdecl internal_45c8c0()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_45c928
        mov al, byte ptr ds : [esi+0x52F]
        test al, al
        je public_45c928
        mov eax, dword ptr ds : [esi+0x3A8]
        test eax, eax
        jne public_45c928
        call public_42d730
        test al, al
        jne public_45c928
        push 0x40400000
        push 0
        call public_41a0f0
        push 1
        call public_41dda0
        push 0
/*FIXUP push offset public_5c95fc @0x45c901*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        call public_41dde0
        add esp, 0x14
        lea ecx, ds:[esi+0x32C]
        mov byte ptr ds : [public_67dcc8], 0
        mov eax, dword ptr ds : [ecx]
        push 0x67
        call dword ptr ds : [eax]
        mov byte ptr ds : [public_67dcc8], 1
        public_45c928 : nop
        mov ecx, esi
        call public_5a17b0
        lea edi, ds:[esi+0x330]
        mov ecx, edi
        call public_55e170
        lea ebp, ds:[esi+0x350]
        mov ecx, ebp
        call public_55e5e0
        call public_4bc990
        call public_42d680
        push ecx
        fstp dword ptr ss : [esp]
        call public_489e00
        mov al, byte ptr ds : [esi+0x52D]
        add esp, 4
        test al, al
        je public_45c9ab
        call public_45a740
        test al, al
        jne public_45c9ab
/*FIXUP push offset public_5cb7c4 @0x45c972*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_45c9ab
        mov ecx, edi
        call public_55e280
        test al, al
        jne public_45c9ab
        mov ecx, ebp
        call public_55e280
        test al, al
        jne public_45c9ab
        push 0
        push 0x66
        mov byte ptr ds : [esi+0x52D], al
        call public_5763b0
        add esp, 8
        public_45c9ab : nop
        mov al, byte ptr ds : [esi+0x52E]
        test al, al
        je public_45c9f7
        call public_45a740
        test al, al
        jne public_45c9f7
/*FIXUP push offset public_5cb7c4 @0x45c9be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
        call public_59da10
        add esp, 4
        test eax, eax
        je public_45c9f7
        mov ecx, edi
        call public_55e280
        test al, al
        jne public_45c9f7
        mov ecx, ebp
        call public_55e280
        test al, al
        jne public_45c9f7
        push 0
        push 0x66
        mov byte ptr ds : [esi+0x52E], al
        call public_5763b0
        add esp, 8
        public_45c9f7 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x45c8c0)
    }
}

#undef public_45c928
#undef public_45c9ab
#undef public_45c9f7
