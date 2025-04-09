#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ef0);
CLANG_FORWARD_PROC_SYMBOL(public_411470);
CLANG_FORWARD_PROC_SYMBOL(public_4114f0);
CLANG_FORWARD_PROC_SYMBOL(public_5097c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_509921 _public_509921
#define public_509932 _public_509932
#define public_509954 _public_509954
#define public_5099bd _public_5099bd
#define public_5099d6 _public_5099d6
#define public_5099eb _public_5099eb
#define public_509a24 _public_509a24
#define public_509a33 _public_509a33
#define public_509a47 _public_509a47
#define public_509a54 _public_509a54
#define public_509a65 _public_509a65
#define public_509a71 _public_509a71
#define public_509aab _public_509aab

PROC_DECLARE(0x5097c0, internal_5097c0, public_5097c0);
extern "C" NAKED register_t __cdecl internal_5097c0()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x270]
        test ecx, ecx
        push edi
        je public_509aab
        fld dword ptr ds : [esi+0x278]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jnp public_509aab
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_410ef0
        fld dword ptr ds : [esi+0x27C]
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ds : [esi+0x1C]
        fadd dword ptr ds : [esi+0x27C]
        fnstsw ax
        fst dword ptr ds : [esi+0x27C]
        test ah, 0x41
        jne public_509921
        fcomp dword ptr ds : [esi+0x278]
        fnstsw ax
        test ah, 0x41
        jne public_509932
        mov edi, dword ptr ds : [public_5c71dc]
        call edi
        mov dword ptr ss : [esp+0x2C], eax
        fild dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_5caeec]
        fmul qword ptr ds : [public_5db0b8]
        fsub qword ptr ds : [public_5d3c48]
        fmul dword ptr ds : [esi+0x274]
        fstp dword ptr ds : [esi+0x27C]
        call edi
        mov dword ptr ss : [esp+0x2C], eax
        fild dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_5caeec]
        fstp qword ptr ss : [esp+8]
        call edi
        mov dword ptr ss : [esp+0x2C], eax
        fild dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_5caeec]
        fstp qword ptr ss : [esp+0x10]
        call edi
        mov dword ptr ss : [esp+0x2C], eax
        fild dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x1C]
        push ecx
        fmul dword ptr ds : [public_5caeec]
        mov ecx, dword ptr ds : [esi+0x270]
        fadd st(0), st
        fsub qword ptr ds : [public_5c89b8]
        fld qword ptr ss : [esp+0x14]
        fadd st(0), st
        fsub qword ptr ds : [public_5c89b8]
        fld qword ptr ss : [esp+0xC]
        fadd st(0), st
        fsub qword ptr ds : [public_5c89b8]
        fst dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x30]
        fxch 
        fmul dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x28]
        call public_411470
        mov ecx, dword ptr ds : [esi+0x270]
        test byte ptr ds : [ecx+0xB4], 8
        je public_509aab
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        add esp, 0x20
        ret 4
        public_509921 : nop
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_509aab
        public_509932 : nop
        mov eax, dword ptr ds : [esi+0x28C]
        mov dword ptr ss : [esp+0x2C], eax
        mov al, byte ptr ds : [esi+0x26C]
        test al, al
        je public_509954
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+0x290]
        fstp dword ptr ss : [esp+0x2C]
        public_509954 : nop
        mov edi, dword ptr ds : [public_5c71dc]
        call edi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ss : [esp+0x10]
        call edi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_5caeec]
        fld st(0)
        fmul dword ptr ds : [esi+0x280]
        fstp dword ptr ss : [esp+0x1C]
        fld st(0)
        fmul dword ptr ds : [esi+0x284]
        fstp dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+0x288]
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_5099bd
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        public_5099bd : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_5099d6
        mov dword ptr ss : [esp+0x20], 0x3F800000
        public_5099d6 : nop
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_5099eb
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_5099eb : nop
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75d8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c75d8]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        jge public_509a24
        mov dword ptr ss : [esp+8], 0
        jmp public_509a33
        public_509a24 : nop
        cmp eax, 0xFF
        jle public_509a33
        mov dword ptr ss : [esp+8], 0xFF
        public_509a33 : nop
        fld dword ptr ss : [esp+0x14]
        push ebx
        call public_5b7ec0
        mov ebx, eax
        test ebx, ebx
        jge public_509a47
        xor ebx, ebx
        jmp public_509a54
        public_509a47 : nop
        cmp ebx, 0xFF
        jle public_509a54
        mov ebx, 0xFF
        public_509a54 : nop
        fld dword ptr ss : [esp+0x14]
        call public_5b7ec0
        test eax, eax
        jge public_509a65
        xor eax, eax
        jmp public_509a71
        public_509a65 : nop
        cmp eax, 0xFF
        jle public_509a71
        mov eax, 0xFF
        public_509a71 : nop
        mov cl, byte ptr ss : [esp+0xC]
        lea edx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x32], cl
        mov ecx, dword ptr ds : [esi+0x270]
        push edx
        mov byte ptr ss : [esp+0x34], al
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x37], 0xFF
        call public_4114f0
        mov ecx, dword ptr ds : [esi+0x270]
        test byte ptr ds : [ecx+0xB4], 8
        pop ebx
        jne public_509aab
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_509aab : nop
        pop edi
        pop esi
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x5097c0)
    }
}

#undef public_509921
#undef public_509932
#undef public_509954
#undef public_5099bd
#undef public_5099d6
#undef public_5099eb
#undef public_509a24
#undef public_509a33
#undef public_509a47
#undef public_509a54
#undef public_509a65
#undef public_509a71
#undef public_509aab
