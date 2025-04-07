#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ad60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa91f6);

#define public_6f4adb9 _public_6f4adb9
#define public_6f4adc1 _public_6f4adc1
#define public_6f4adda _public_6f4adda
#define public_6f4adde _public_6f4adde
#define public_6f4ae08 _public_6f4ae08
#define public_6f4ae12 _public_6f4ae12
#define public_6f4ae45 _public_6f4ae45
#define public_6f4ae61 _public_6f4ae61
#define public_6f4ae72 _public_6f4ae72
#define public_6f4ae79 _public_6f4ae79
#define public_6f4aea8 _public_6f4aea8
#define public_6f4aeb1 _public_6f4aeb1
#define public_6f4aeba _public_6f4aeba
#define public_6f4aebc _public_6f4aebc
#define public_6f4aee4 _public_6f4aee4
#define public_6f4aeea _public_6f4aeea
#define public_6f4aef4 _public_6f4aef4
#define public_6f4aef6 _public_6f4aef6
#define public_6f4af13 _public_6f4af13
#define public_6f4af15 _public_6f4af15
#define public_6f4af3c _public_6f4af3c
#define public_6f4af42 _public_6f4af42
#define public_6f4af4c _public_6f4af4c
#define public_6f4af4e _public_6f4af4e
#define public_6f4af6a _public_6f4af6a
#define public_6f4af9c _public_6f4af9c
#define public_6f4afd3 _public_6f4afd3
#define public_6f4afec _public_6f4afec

PROC_DECLARE(0x6f4ad60, internal_6f4ad60, public_6f4ad60);
extern "C" NAKED register_t __cdecl internal_6f4ad60()
{
    __asm
    {
        sub esp, 0x10
        push esi
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6f4ae45
        mov esi, dword ptr ds : [public_6fb3370]
        call esi
        cdq 
        mov ecx, 3
        idiv ecx
        test edx, edx
        je public_6f4adb9
        fld dword ptr ds : [public_6fbb230]
        fstp qword ptr ss : [esp+4]
        call esi
        cdq 
        fld qword ptr ss : [esp+4]
        mov ecx, 3
        idiv ecx
        lea edx, ds:[edx+edx+2]
        mov dword ptr ss : [esp+0x18], edx
        fild dword ptr ss : [esp+0x18]
        call public_6fa91f6
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        jmp public_6f4adc1
        public_6f4adb9 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], eax
        public_6f4adc1 : nop
        fld dword ptr ds : [public_6fbb228]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_6f4adda
        fld dword ptr ds : [public_6fbb228]
        jmp public_6f4adde
        public_6f4adda : nop
        fld dword ptr ss : [esp+0x20]
        public_6f4adde : nop
        fcomp dword ptr ds : [public_6fbb22c]
        fnstsw ax
        test ah, 5
        jp public_6f4ae08
        fld dword ptr ds : [public_6fbb228]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_6f4ae12
        mov ecx, dword ptr ds : [public_6fbb228]
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f4ae12
        public_6f4ae08 : nop
        mov edx, dword ptr ds : [public_6fbb22c]
        mov dword ptr ss : [esp+0x20], edx
        public_6f4ae12 : nop
        fld dword ptr ss : [esp+0x20]
        fstp qword ptr ss : [esp+4]
        call esi
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        pop esi
        fmul dword ptr ds : [public_6fb4448]
        fmul qword ptr ds : [public_6fb74e8]
        fcos 
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x18]
        fmulp 
        fsubr qword ptr ss : [esp]
        add esp, 0x10
        ret 
        public_6f4ae45 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0xDC]
        mov eax, dword ptr ds : [public_6fd0c3c]
        push edi
        mov edi, dword ptr ds : [public_6fd0c40]
        cmp eax, edi
        mov esi, eax
        je public_6f4ae72
        public_6f4ae61 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, edx
        je public_6f4aea8
        jge public_6f4aeb1
        mov esi, eax
        add eax, 8
        cmp eax, edi
        jne public_6f4ae61
        public_6f4ae72 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], eax
        public_6f4ae79 : nop
        fld dword ptr ds : [public_6fbb230]
        fld dword ptr ds : [public_6fbb234]
        call public_6fa91f6
        fld dword ptr ss : [esp+0x1C]
        fdiv st, st(1)
        pop edi
        fld dword ptr ds : [public_6fbb228]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6f4aeba
        fld dword ptr ds : [public_6fbb228]
        jmp public_6f4aebc
        public_6f4aea8 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], ecx
        jmp public_6f4ae79
        public_6f4aeb1 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], edx
        jmp public_6f4ae79
        public_6f4aeba : nop
        fld st(0)
        public_6f4aebc : nop
        fcomp dword ptr ds : [public_6fbb22c]
        fnstsw ax
        test ah, 5
        jp public_6f4aeea
        fld dword ptr ds : [public_6fbb228]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6f4aee4
        mov ecx, dword ptr ds : [public_6fbb228]
        mov dword ptr ss : [esp+4], ecx
        jmp public_6f4aef4
        public_6f4aee4 : nop
        fstp dword ptr ss : [esp+4]
        jmp public_6f4aef6
        public_6f4aeea : nop
        mov edx, dword ptr ds : [public_6fbb22c]
        mov dword ptr ss : [esp+4], edx
        public_6f4aef4 : nop
        fstp st(0)
        public_6f4aef6 : nop
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld dword ptr ds : [public_6fbb228]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6f4af13
        fld dword ptr ds : [public_6fbb228]
        jmp public_6f4af15
        public_6f4af13 : nop
        fld st(0)
        public_6f4af15 : nop
        fcomp dword ptr ds : [public_6fbb22c]
        fnstsw ax
        test ah, 5
        jp public_6f4af42
        fld dword ptr ds : [public_6fbb228]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6f4af3c
        mov eax, dword ptr ds : [public_6fbb228]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6f4af4c
        public_6f4af3c : nop
        fstp dword ptr ss : [esp+0x18]
        jmp public_6f4af4e
        public_6f4af42 : nop
        mov ecx, dword ptr ds : [public_6fbb22c]
        mov dword ptr ss : [esp+0x18], ecx
        public_6f4af4c : nop
        fstp st(0)
        public_6f4af4e : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jp public_6f4af6a
        fstp st(0)
        pop esi
        fld dword ptr ds : [public_6fbb224]
        add esp, 0x10
        ret 
        public_6f4af6a : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 1
        jne public_6f4afd3
        fld dword ptr ss : [esp+0x20]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_6f4af9c
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], edx
        public_6f4af9c : nop
        fld dword ptr ss : [esp+0x20]
        fstp qword ptr ss : [esp+4]
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        pop esi
        fmul dword ptr ds : [public_6fb4448]
        fmul qword ptr ds : [public_6fb74e8]
        fcos 
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x14]
        fmulp 
        fsubr qword ptr ss : [esp]
        add esp, 0x10
        ret 
        public_6f4afd3 : nop
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_6f4afec
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], eax
        public_6f4afec : nop
        fld dword ptr ss : [esp+0x18]
        fstp qword ptr ss : [esp+0xC]
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x20], eax
        fild dword ptr ss : [esp+0x20]
        pop esi
        fmul dword ptr ds : [public_6fb4448]
        fmul qword ptr ds : [public_6fb74e8]
        fcos 
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp]
        fmulp 
        fsubr qword ptr ss : [esp+8]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4ad60)
    }
}

#undef public_6f4adb9
#undef public_6f4adc1
#undef public_6f4adda
#undef public_6f4adde
#undef public_6f4ae08
#undef public_6f4ae12
#undef public_6f4ae45
#undef public_6f4ae61
#undef public_6f4ae72
#undef public_6f4ae79
#undef public_6f4aea8
#undef public_6f4aeb1
#undef public_6f4aeba
#undef public_6f4aebc
#undef public_6f4aee4
#undef public_6f4aeea
#undef public_6f4aef4
#undef public_6f4aef6
#undef public_6f4af13
#undef public_6f4af15
#undef public_6f4af3c
#undef public_6f4af42
#undef public_6f4af4c
#undef public_6f4af4e
#undef public_6f4af6a
#undef public_6f4af9c
#undef public_6f4afd3
#undef public_6f4afec
