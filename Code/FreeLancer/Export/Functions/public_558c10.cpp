#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412430);
CLANG_FORWARD_PROC_SYMBOL(public_41b2e0);
CLANG_FORWARD_PROC_SYMBOL(public_4214d0);
CLANG_FORWARD_PROC_SYMBOL(public_4215e0);
CLANG_FORWARD_PROC_SYMBOL(public_422120);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_424f30);
CLANG_FORWARD_PROC_SYMBOL(public_425080);
CLANG_FORWARD_PROC_SYMBOL(public_425140);
CLANG_FORWARD_PROC_SYMBOL(public_428030);
CLANG_FORWARD_PROC_SYMBOL(public_428040);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_42d6e0);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_438c90);
CLANG_FORWARD_PROC_SYMBOL(public_43bbc0);
CLANG_FORWARD_PROC_SYMBOL(public_558ac0);
CLANG_FORWARD_PROC_SYMBOL(public_558c10);
CLANG_FORWARD_PROC_SYMBOL(public_558e90);
CLANG_FORWARD_PROC_SYMBOL(public_579190);
CLANG_FORWARD_PROC_SYMBOL(public_59e300);

#define public_558c4f _public_558c4f
#define public_558c7b _public_558c7b
#define public_558c80 _public_558c80
#define public_558cf1 _public_558cf1
#define public_558cfb _public_558cfb
#define public_558d2c _public_558d2c
#define public_558d39 _public_558d39
#define public_558d4f _public_558d4f

PROC_DECLARE(0x558c10, internal_558c10, public_558c10);
extern "C" NAKED register_t __cdecl internal_558c10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 8
        call public_42d680
        fstp qword ptr ss : [esp]
        call public_42d6e0
        mov ecx, dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp], ecx
        cmp eax, dword ptr ds : [public_6799e8]
        mov dword ptr ss : [esp+4], edx
        ja public_558c4f
        mov dword ptr ss : [esp], 0
        mov dword ptr ss : [esp+4], 0
        public_558c4f : nop
        call public_42d740
        test al, al
        jne public_558c7b
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp]
        push eax
        push ecx
        call public_558ac0
        fld qword ptr ss : [esp+8]
        add esp, 4
        fstp dword ptr ss : [esp]
        call public_41b2e0
        add esp, 4
        jmp public_558c80
        public_558c7b : nop
        call public_558e90
        public_558c80 : nop
        call public_424f30
        test al, al
        je public_558cfb
        push 0x222
/*FIXUP push offset public_5e1458 @0x558c8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1458
        push 0
        call public_422610
        push 0x3F800000
        push 0
        push 0
        push 0
        call public_4214d0
        push 0x4100
        call public_4215e0
        add esp, 0x20
        mov ecx, offset public_668708
        call public_43bbc0
        push 0x100
        call public_4215e0
        push 4
        call public_422120
        add esp, 8
        call public_59e300
        call public_42d730
        test al, al
        jne public_558cf1
        call public_438c90
        push eax
        call public_412430
        add esp, 4
        public_558cf1 : nop
        call public_425080
        call public_425140
        public_558cfb : nop
        call public_579190
        push 3
        call public_428030
        fld qword ptr ss : [esp+4]
        fstp dword ptr ss : [esp]
        call public_438c90
        push eax
        call public_428040
        mov al, byte ptr ds : [public_6799dc]
        add esp, 8
        test al, al
        je public_558d2c
        mov eax, 8
        jmp public_558d39
        public_558d2c : nop
        mov cl, byte ptr ds : [public_6799de]
        xor eax, eax
        test cl, cl
        setne al
        public_558d39 : nop
        mov cl, byte ptr ds : [public_6799dd]
        test cl, cl
        je public_558d4f
        mov byte ptr ds : [public_6799dd], 0
        mov eax, 5
        public_558d4f : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x558c10)
    }
}

#undef public_558c4f
#undef public_558c7b
#undef public_558c80
#undef public_558cf1
#undef public_558cfb
#undef public_558d2c
#undef public_558d39
#undef public_558d4f
