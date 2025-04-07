#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285740);
CLANG_FORWARD_PROC_SYMBOL(public_6285c90);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62ac2e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ad540);
CLANG_FORWARD_PROC_SYMBOL(public_62d3b80);
CLANG_FORWARD_PROC_SYMBOL(public_62d4ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);

#define public_62b0285 _public_62b0285
#define public_62b029b _public_62b029b
#define public_62b02cd _public_62b02cd
#define public_62b02cf _public_62b02cf
#define public_62b02e2 _public_62b02e2
#define public_62b02e4 _public_62b02e4
#define public_62b02fd _public_62b02fd
#define public_62b02ff _public_62b02ff
#define public_62b034f _public_62b034f
#define public_62b0366 _public_62b0366
#define public_62b0368 _public_62b0368
#define public_62b038c _public_62b038c
#define public_62b038e _public_62b038e
#define public_62b03aa _public_62b03aa
#define public_62b03ac _public_62b03ac
#define public_62b03f5 _public_62b03f5
#define public_62b0450 _public_62b0450
#define public_62b0487 _public_62b0487
#define public_62b0489 _public_62b0489
#define public_62b04a3 _public_62b04a3
#define public_62b04c5 _public_62b04c5
#define public_62b04c7 _public_62b04c7
#define public_62b04db _public_62b04db
#define public_62b04dd _public_62b04dd
#define public_62b04fc _public_62b04fc
#define public_62b04fe _public_62b04fe
#define public_62b0517 _public_62b0517
#define public_62b0519 _public_62b0519
#define public_62b0544 _public_62b0544
#define public_62b054c _public_62b054c

PROC_DECLARE(0x62b0270, internal_62b0270, public_62b0270);
extern "C" NAKED register_t __cdecl internal_62b0270()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        push esi
        je public_62b0285
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62b029b
        public_62b0285 : nop
        mov byte ptr ds : [ebx+0x4D], 1
        mov cl, byte ptr ds : [ebx+0x4D]
        xor eax, eax
        test cl, cl
        pop esi
        sete al
        pop ebx
        add esp, 0x34
        ret 4
        public_62b029b : nop
        test byte ptr ds : [ebx+0x28], 0x20
        je public_62b054c
        mov al, byte ptr ds : [ebx+0x4C]
        test al, al
        jne public_62b034f
        fld dword ptr ds : [public_639e568]
        fadd dword ptr ds : [public_639e564]
        fcomp dword ptr ds : [ebx+0x30]
        fnstsw ax
        test ah, 0x41
        jp public_62b02cd
        mov eax, 1
        jmp public_62b02cf
        public_62b02cd : nop
        xor eax, eax
        public_62b02cf : nop
        test al, al
        mov byte ptr ds : [ebx+0x4D], al
        je public_62b034f
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_62b02e2
        lea ecx, ds:[eax-8]
        jmp public_62b02e4
        public_62b02e2 : nop
        xor ecx, ecx
        public_62b02e4 : nop
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        push 0x3F800000
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_62b02fd
        lea ecx, ds:[eax-8]
        jmp public_62b02ff
        public_62b02fd : nop
        xor ecx, ecx
        public_62b02ff : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        mov esi, eax
        fld dword ptr ds : [esi+0x10]
        sub esp, 0xC
        fld dword ptr ds : [esi+0x1C]
        lea ecx, ss:[esp+0x18]
        fld dword ptr ds : [esi+0x28]
        fld dword ptr ds : [public_639e560]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call public_628b030
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call public_6285740
        add esp, 8
        public_62b034f : nop
        mov al, byte ptr ds : [ebx+0x4D]
        test al, al
        je public_62b0544
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_62b0366
        lea ecx, ds:[eax-8]
        jmp public_62b0368
        public_62b0366 : nop
        xor ecx, ecx
        public_62b0368 : nop
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0x150]
        mov ebp, eax
        call public_6303220
        test al, al
        jne public_62b04a3
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_62b038c
        lea ecx, ds:[eax-8]
        jmp public_62b038e
        public_62b038c : nop
        xor ecx, ecx
        public_62b038e : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_62b04a3
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_62b03aa
        lea ecx, ds:[eax-8]
        jmp public_62b03ac
        public_62b03aa : nop
        xor ecx, ecx
        public_62b03ac : nop
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x20]
        rep movsd
        mov esi, dword ptr ds : [public_6399308]
        call esi
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x28]
        fild dword ptr ss : [esp+0x10]
        mov ecx, 3
        pop edi
        fmul dword ptr ds : [public_63997d0]
        fmul qword ptr ds : [public_639e5c8]
        fsub qword ptr ds : [public_639e5c0]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0xC]
        fsin 
        public_62b03f5 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62b03f5
        fstp st(0)
        call esi
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0x24]
        mov ecx, 3
        fmul dword ptr ds : [public_63997d0]
        fmul qword ptr ds : [public_639e5c8]
        fsub qword ptr ds : [public_639e5c0]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0xC]
        fsin 
        nop 
        public_62b0450 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-0xC]
        fld st(1)
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62b0450
        mov eax, dword ptr ds : [ebx+0x1C]
        fstp st(0)
        test eax, eax
        je public_62b0487
        lea ecx, ds:[eax-8]
        jmp public_62b0489
        public_62b0487 : nop
        xor ecx, ecx
        public_62b0489 : nop
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [ebp]
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x14]
        push eax
        mov ecx, ebp
        call dword ptr ds : [esi+0x7C]
        public_62b04a3 : nop
        push 1
        mov ecx, ebp
        call public_62ad540
        test ebp, ebp
        je public_62b04c5
        mov ecx, dword ptr ss : [ebp+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62b04c5
        mov ecx, ebp
        jmp public_62b04c7
        public_62b04c5 : nop
        xor ecx, ecx
        public_62b04c7 : nop
        push 0
        call public_62ac2e0
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        pop ebp
        je public_62b04db
        add eax, 0xFFFFFFF8
        jmp public_62b04dd
        public_62b04db : nop
        xor eax, eax
        public_62b04dd : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ds : [eax+0xB0]
        push eax
        call dword ptr ds : [edx+0x70]
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_62b04fc
        lea ecx, ds:[eax-8]
        jmp public_62b04fe
        public_62b04fc : nop
        xor ecx, ecx
        public_62b04fe : nop
        mov edx, dword ptr ds : [ecx+4]
        add ecx, 4
        push 0x3F800000
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_62b0517
        add eax, 0xFFFFFFF8
        jmp public_62b0519
        public_62b0517 : nop
        xor eax, eax
        public_62b0519 : nop
        push eax
        call public_62d4ba0
        add esp, 4
        test eax, eax
        je public_62b054c
        push 0x3F800000
        mov ecx, eax
        call public_62d3b80
        mov cl, byte ptr ds : [ebx+0x4D]
        xor eax, eax
        test cl, cl
        pop esi
        sete al
        pop ebx
        add esp, 0x34
        ret 4
        public_62b0544 : nop
        lea ecx, ds:[ebx+8]
        call public_6285c90
        public_62b054c : nop
        mov cl, byte ptr ds : [ebx+0x4D]
        xor eax, eax
        test cl, cl
        pop esi
        sete al
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x62b0270)
    }
}

#undef public_62b0285
#undef public_62b029b
#undef public_62b02cd
#undef public_62b02cf
#undef public_62b02e2
#undef public_62b02e4
#undef public_62b02fd
#undef public_62b02ff
#undef public_62b034f
#undef public_62b0366
#undef public_62b0368
#undef public_62b038c
#undef public_62b038e
#undef public_62b03aa
#undef public_62b03ac
#undef public_62b03f5
#undef public_62b0450
#undef public_62b0487
#undef public_62b0489
#undef public_62b04a3
#undef public_62b04c5
#undef public_62b04c7
#undef public_62b04db
#undef public_62b04dd
#undef public_62b04fc
#undef public_62b04fe
#undef public_62b0517
#undef public_62b0519
#undef public_62b0544
#undef public_62b054c
