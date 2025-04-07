#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_434630);
CLANG_FORWARD_PROC_SYMBOL(public_559aa0);
CLANG_FORWARD_PROC_SYMBOL(public_55af90);
CLANG_FORWARD_PROC_SYMBOL(public_561da0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_59efa0);

#define public_55aff2 _public_55aff2
#define public_55b00a _public_55b00a
#define public_55b064 _public_55b064
#define public_55b09e _public_55b09e
#define public_55b0c3 _public_55b0c3
#define public_55b0c5 _public_55b0c5
#define public_55b0e6 _public_55b0e6
#define public_55b0ff _public_55b0ff
#define public_55b105 _public_55b105
#define public_55b167 _public_55b167
#define public_55b1b9 _public_55b1b9
#define public_55b1cc _public_55b1cc
#define public_55b1d9 _public_55b1d9
#define public_55b1e8 _public_55b1e8
#define public_55b210 _public_55b210
#define public_55b240 _public_55b240
#define public_55b276 _public_55b276
#define public_55b289 _public_55b289
#define public_55b296 _public_55b296
#define public_55b2a2 _public_55b2a2
#define public_55b2c7 _public_55b2c7
#define public_55b2e5 _public_55b2e5
#define public_55b2f2 _public_55b2f2
#define public_55b2fb _public_55b2fb
#define public_55b2ff _public_55b2ff
#define public_55b325 _public_55b325
#define public_55b33d _public_55b33d
#define public_55b3e0 _public_55b3e0
#define public_55b3f7 _public_55b3f7
#define public_55b419 _public_55b419
#define public_55b46b _public_55b46b
#define public_55b49b _public_55b49b

PROC_DECLARE(0x55af90, internal_55af90, public_55af90);
extern "C" NAKED register_t __cdecl internal_55af90()
{
    __asm
    {
        sub esp, 0x40
        push esi
        mov esi, ecx
        push 6
        mov dword ptr ds : [esi+0x348], 0
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_55b49b
        push 9
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_55b49b
        push 0x14
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_55b49b
        mov al, byte ptr ds : [esi+0x6C]
        test al, 2
        je public_55b49b
        test byte ptr ds : [esi+0x331], 0x10
        jne public_55aff2
        test al, 1
        je public_55b49b
        public_55aff2 : nop
        mov al, byte ptr ds : [esi+0x333]
        test al, al
        je public_55b00a
        mov al, byte ptr ds : [esi+0x334]
        test al, al
        jne public_55b49b
        public_55b00a : nop
        mov ecx, esi
        call public_59e5c0
        mov al, byte ptr ds : [esi+0x330]
        shr al, 6
        and al, 1
        mov byte ptr ss : [esp+7], al
        mov al, byte ptr ds : [esi+0x332]
        test al, al
        je public_55b167
        call public_42d680
        fld dword ptr ds : [esi+0x340]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_55b0c3
        mov al, byte ptr ds : [esi+0x330]
        fmul dword ptr ds : [esi+0x340]
        test al, 1
        je public_55b064
        fadd dword ptr ds : [esi+0x33C]
        fstp dword ptr ds : [esi+0x33C]
        jmp public_55b0c5
        public_55b064 : nop
        fld dword ptr ds : [esi+0x33C]
        fcomp dword ptr ds : [public_5da41c]
        fnstsw ax
        fadd st(0), st
        test ah, 0x41
        jne public_55b09e
        fadd dword ptr ds : [esi+0x33C]
        fst dword ptr ds : [esi+0x33C]
        fcomp dword ptr ds : [public_5e1734]
        fnstsw ax
        test ah, 0x41
        jne public_55b0c5
        mov dword ptr ds : [esi+0x33C], 0
        jmp public_55b0c5
        public_55b09e : nop
        fsubr dword ptr ds : [esi+0x33C]
        fst dword ptr ds : [esi+0x33C]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_55b0c5
        mov dword ptr ds : [esi+0x33C], 0
        jmp public_55b0c5
        public_55b0c3 : nop
        fstp st(0)
        public_55b0c5 : nop
        fld dword ptr ds : [esi+0x33C]
        fcomp dword ptr ds : [public_5ca23c]
        fld dword ptr ds : [esi+0x33C]
        fnstsw ax
        test ah, 1
        jne public_55b0e6
        fsub dword ptr ds : [public_5ca23c]
        jmp public_55b0ff
        public_55b0e6 : nop
        fcomp dword ptr ds : [public_5e1730]
        fnstsw ax
        test ah, 0x41
        jp public_55b105
        fld dword ptr ds : [esi+0x33C]
        fadd dword ptr ds : [public_5ca23c]
        public_55b0ff : nop
        fstp dword ptr ds : [esi+0x33C]
        public_55b105 : nop
        fld dword ptr ds : [esi+0x33C]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [public_5c63fc]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ds : [esi+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x94]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_55b167 : nop
        mov al, byte ptr ds : [esi+0x330]
        test al, 8
        mov cl, byte ptr ds : [esi+0x6C]
        push ebx
        mov byte ptr ss : [esp+0xF], 0
        mov byte ptr ss : [esp+0xE], 0
        mov byte ptr ss : [esp+0xD], 0
        mov byte ptr ss : [esp+0xC], 0
        je public_55b240
        test cl, 1
        jne public_55b1b9
        and al, 0xBB
        mov byte ptr ds : [esi+0x330], al
        mov al, 0x80
        mov byte ptr ss : [esp+0x10], al
        mov byte ptr ss : [esp+0x11], al
        mov byte ptr ss : [esp+0x12], al
        mov byte ptr ss : [esp+0xC], al
        mov byte ptr ss : [esp+0xD], al
        mov byte ptr ss : [esp+0xE], al
        jmp public_55b2e5
        public_55b1b9 : nop
        test al, 0x40
        jne public_55b210
        mov cl, byte ptr ds : [esi+0x331]
        test cl, 4
        je public_55b1cc
        test al, 4
        jne public_55b210
        public_55b1cc : nop
        test al, 2
        jne public_55b1e8
        test al, 1
        je public_55b1d9
        test cl, 8
        jne public_55b1e8
        public_55b1d9 : nop
        mov ebx, dword ptr ds : [public_679bb0]
        mov dword ptr ss : [esp+0xC], ebx
        jmp public_55b2fb
        public_55b1e8 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_561da0
        mov ebx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x18], ebx
        call public_561da0
        mov eax, dword ptr ds : [eax]
        add esp, 8
        mov dword ptr ss : [esp+0xC], eax
        jmp public_55b2ff
        public_55b210 : nop
        mov byte ptr ss : [esp+0xC], 0xFF
        mov byte ptr ss : [esp+0xD], 0xFF
        mov byte ptr ss : [esp+0xE], 0
        mov byte ptr ss : [esp+0xF], 0xFF
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ss : [esp+0x10], 0xFF
        mov byte ptr ss : [esp+0x11], 0xFF
        mov byte ptr ss : [esp+0x12], 0
        mov dword ptr ss : [esp+0xC], ecx
        jmp public_55b2f2
        public_55b240 : nop
        test cl, 1
        jne public_55b276
        and al, 0xBB
        mov byte ptr ds : [esi+0x330], al
        mov al, 0x80
        mov byte ptr ss : [esp+0xC], al
        mov byte ptr ss : [esp+0xD], al
        mov byte ptr ss : [esp+0xE], al
        mov byte ptr ss : [esp+0xF], 0xFF
        mov edx, dword ptr ss : [esp+0xC]
        mov byte ptr ss : [esp+0x10], al
        mov byte ptr ss : [esp+0x11], al
        mov byte ptr ss : [esp+0x12], al
        mov dword ptr ss : [esp+0xC], edx
        jmp public_55b2f2
        public_55b276 : nop
        test al, 0x40
        jne public_55b2c7
        mov cl, byte ptr ds : [esi+0x331]
        test cl, 4
        je public_55b289
        test al, 4
        jne public_55b2c7
        public_55b289 : nop
        test al, 2
        jne public_55b2a2
        test al, 1
        je public_55b296
        test cl, 8
        jne public_55b2a2
        public_55b296 : nop
        mov ebx, dword ptr ds : [public_679bb0]
        mov dword ptr ss : [esp+0xC], ebx
        jmp public_55b2fb
        public_55b2a2 : nop
        lea eax, ss:[esp+0x14]
        push eax
        call public_561da0
        mov ebx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x18], ebx
        call public_561da0
        mov edx, dword ptr ds : [eax]
        add esp, 8
        mov dword ptr ss : [esp+0xC], edx
        jmp public_55b2ff
        public_55b2c7 : nop
        mov byte ptr ss : [esp+0x10], 0xFF
        mov byte ptr ss : [esp+0x11], 0xFF
        mov byte ptr ss : [esp+0x12], 0
        mov byte ptr ss : [esp+0xC], 0xFF
        mov byte ptr ss : [esp+0xD], 0xFF
        mov byte ptr ss : [esp+0xE], 0
        public_55b2e5 : nop
        mov byte ptr ss : [esp+0xF], 0xFF
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0xC], eax
        public_55b2f2 : nop
        mov byte ptr ss : [esp+0x13], 0xFF
        mov ebx, dword ptr ss : [esp+0x10]
        public_55b2fb : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_55b2ff : nop
        mov al, byte ptr ds : [esi+0x330]
        test al, 0x20
        je public_55b325
        mov byte ptr ss : [esp+0x10], 0xFF
        mov byte ptr ss : [esp+0x11], 0xFF
        mov byte ptr ss : [esp+0x12], 0xFF
        mov byte ptr ss : [esp+0x13], 0xFF
        mov ebx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], ebx
        public_55b325 : nop
        mov cl, byte ptr ds : [esi+0x336]
        test cl, cl
        je public_55b33d
        mov ebx, dword ptr ds : [esi+0x370]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], ebx
        public_55b33d : nop
        test byte ptr ds : [esi+0x331], 1
        jne public_55b3f7
        mov cl, byte ptr ds : [esi+0x332]
        test cl, cl
        je public_55b3e0
        test al, 1
        je public_55b3e0
        cmp dword ptr ds : [esi+0x84], 0xFFFFFFFF
        je public_55b3f7
        xor edx, edx
        mov dl, bl
        xor eax, eax
        mov al, bh
        lea ecx, ds:[esi+0x80]
        push 0
        push 0x3F800000
        push 0
        mov dword ptr ss : [esp+0x20], edx
        fild dword ptr ss : [esp+0x20]
        xor edx, edx
        mov dword ptr ss : [esp+0x20], eax
        fmul dword ptr ds : [public_5c7f68]
        mov ax, word ptr ss : [esp+0x1E]
        mov dl, al
        movzx eax, ah
        fstp dword ptr ds : [ecx+0x14]
/*FIXUP push offset public_67dbf8 @0x55b3a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ds : [ecx+0x18]
        fild dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x24], eax
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x1C]
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x24]
        call public_59efa0
        jmp public_55b3f7
        public_55b3e0 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x335]
        lea edx, ss:[esp+0x10]
        push ecx
        push edx
        push esi
        call public_559aa0
        add esp, 0xC
        public_55b3f7 : nop
        push 0xB71
        call public_421ed0
        mov al, byte ptr ds : [esi+0x331]
        add esp, 4
        test al, 1
        pop ebx
        jne public_55b419
        mov al, byte ptr ds : [esi+0x337]
        test al, al
        je public_55b46b
        public_55b419 : nop
        mov eax, dword ptr ds : [esi+0x84]
        cmp eax, 0xFFFFFFFF
        je public_55b46b
        movzx ecx, byte ptr ss : [esp+0xB]
        movzx edx, byte ptr ss : [esp+8]
        shl ecx, 8
        or ecx, edx
        movzx edx, byte ptr ss : [esp+9]
        shl ecx, 8
        or ecx, edx
        movzx edx, byte ptr ss : [esp+0xA]
        push 0
        shl ecx, 8
        push 0x3F800000
        or ecx, edx
        push 1
        mov dword ptr ds : [esi+0x348], ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        push eax
/*FIXUP push offset public_67dbf8 @0x55b45e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_434630
        add esp, 0x1C
        public_55b46b : nop
        push 0xB71
        call public_421ed0
        mov cl, byte ptr ds : [esi+0x330]
        mov al, byte ptr ss : [esp+0xB]
        mov edx, dword ptr ds : [esi]
        shl al, 6
        xor al, cl
        and al, 0x40
        xor al, cl
        add esp, 4
        mov ecx, esi
        mov byte ptr ds : [esi+0x330], al
        call dword ptr ds : [edx+0x9C]
        public_55b49b : nop
        pop esi
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x55af90)
    }
}

#undef public_55aff2
#undef public_55b00a
#undef public_55b064
#undef public_55b09e
#undef public_55b0c3
#undef public_55b0c5
#undef public_55b0e6
#undef public_55b0ff
#undef public_55b105
#undef public_55b167
#undef public_55b1b9
#undef public_55b1cc
#undef public_55b1d9
#undef public_55b1e8
#undef public_55b210
#undef public_55b240
#undef public_55b276
#undef public_55b289
#undef public_55b296
#undef public_55b2a2
#undef public_55b2c7
#undef public_55b2e5
#undef public_55b2f2
#undef public_55b2fb
#undef public_55b2ff
#undef public_55b325
#undef public_55b33d
#undef public_55b3e0
#undef public_55b3f7
#undef public_55b419
#undef public_55b46b
#undef public_55b49b
