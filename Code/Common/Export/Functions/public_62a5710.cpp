#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a2ff0);
CLANG_FORWARD_PROC_SYMBOL(public_62a5710);
CLANG_FORWARD_PROC_SYMBOL(public_62a5ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62a573a _public_62a573a
#define public_62a5740 _public_62a5740
#define public_62a5762 _public_62a5762
#define public_62a5768 _public_62a5768
#define public_62a578a _public_62a578a
#define public_62a5790 _public_62a5790
#define public_62a57c5 _public_62a57c5
#define public_62a57c7 _public_62a57c7
#define public_62a57e3 _public_62a57e3
#define public_62a57e5 _public_62a57e5
#define public_62a5840 _public_62a5840
#define public_62a5848 _public_62a5848
#define public_62a585c _public_62a585c
#define public_62a5864 _public_62a5864
#define public_62a5874 _public_62a5874
#define public_62a5890 _public_62a5890
#define public_62a5898 _public_62a5898
#define public_62a58a0 _public_62a58a0
#define public_62a58c0 _public_62a58c0
#define public_62a58d4 _public_62a58d4
#define public_62a58e8 _public_62a58e8
#define public_62a5922 _public_62a5922
#define public_62a59af _public_62a59af
#define public_62a59b5 _public_62a59b5
#define public_62a59d1 _public_62a59d1
#define public_62a59d7 _public_62a59d7
#define public_62a59fb _public_62a59fb
#define public_62a5a01 _public_62a5a01
#define public_62a5a2b _public_62a5a2b
#define public_62a5a2d _public_62a5a2d
#define public_62a5a49 _public_62a5a49
#define public_62a5a4b _public_62a5a4b
#define public_62a5a67 _public_62a5a67
#define public_62a5a69 _public_62a5a69
#define public_62a5aa5 _public_62a5aa5

PROC_DECLARE(0x62a5710, internal_62a5710, public_62a5710);
extern "C" NAKED register_t __cdecl internal_62a5710()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        mov ebx, dword ptr ss : [esp+0x44]
        fld dword ptr ds : [ebx]
        push ebp
        fcomp dword ptr ds : [public_6399408]
        push esi
        fld dword ptr ds : [ebx]
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        fnstsw ax
        test ah, 0x41
        jne public_62a573a
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a5740
        public_62a573a : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a5740 : nop
        call public_6391dae
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ds : [public_6399408]
        mov edi, eax
        fld dword ptr ds : [ebx+4]
        fnstsw ax
        test ah, 0x41
        jne public_62a5762
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a5768
        public_62a5762 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a5768 : nop
        call public_6391dae
        fld dword ptr ds : [ebx+8]
        fcomp dword ptr ds : [public_6399408]
        mov ebp, eax
        fld dword ptr ds : [ebx+8]
        fnstsw ax
        test ah, 0x41
        jne public_62a578a
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a5790
        public_62a578a : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a5790 : nop
        call public_6391dae
        mov esi, dword ptr ds : [esi+0x44]
        mov dword ptr ss : [esp+0x10], esi
        fild dword ptr ss : [esp+0x10]
        mov ebx, eax
        fadd dword ptr ds : [public_639a1d0]
        fmul dword ptr ds : [public_639c13c]
        call public_6391dae
        mov ecx, eax
        mov eax, edi
        cdq 
        idiv esi
        imul eax, esi
        test edi, edi
        jle public_62a57c5
        add eax, ecx
        jmp public_62a57c7
        public_62a57c5 : nop
        sub eax, ecx
        public_62a57c7 : nop
        mov dword ptr ss : [esp+0x14], eax
        mov eax, ebp
        fild dword ptr ss : [esp+0x14]
        cdq 
        idiv esi
        fstp dword ptr ss : [esp+0x28]
        imul eax, esi
        test ebp, ebp
        jle public_62a57e3
        add eax, ecx
        jmp public_62a57e5
        public_62a57e3 : nop
        sub eax, ecx
        public_62a57e5 : nop
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push ebx
        fstp dword ptr ss : [esp+0x38]
        call public_62a2ff0
        mov dword ptr ss : [esp+0x30], eax
        fild dword ptr ss : [esp+0x30]
        mov al, byte ptr ds : [public_63eb7fc]
        add esp, 0xC
        test al, al
        fstp dword ptr ss : [esp+0x30]
        fild dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_639dfe8]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        je public_62a5922
        mov ecx, dword ptr ss : [esp+0x50]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_62a5840
        mov dword ptr ss : [esp+0x1C], esi
        jmp public_62a5848
        public_62a5840 : nop
        mov eax, esi
        neg eax
        mov dword ptr ss : [esp+0x1C], eax
        public_62a5848 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_62a585c
        mov dword ptr ss : [esp+0x20], esi
        jmp public_62a5864
        public_62a585c : nop
        mov edx, esi
        neg edx
        mov dword ptr ss : [esp+0x20], edx
        public_62a5864 : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        je public_62a5874
        neg esi
        public_62a5874 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x14], 0
        lea esp, ss:[esp]
        public_62a5890 : nop
        mov dword ptr ss : [esp+0x10], 0
        public_62a5898 : nop
        xor esi, esi
        lea ebx, ds:[ebx]
        public_62a58a0 : nop
        test esi, esi
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebp
        je public_62a58c0
        fild dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x34]
        public_62a58c0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_62a58d4
        fild dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x38]
        public_62a58d4 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_62a58e8
        fild dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x3C]
        public_62a58e8 : nop
        mov edx, dword ptr ss : [esp+0x50]
        push edi
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        call public_62a5ab0
        inc esi
        cmp esi, 2
        jl public_62a58a0
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, 2
        mov dword ptr ss : [esp+0x10], eax
        jl public_62a5898
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, 2
        mov dword ptr ss : [esp+0x14], eax
        jl public_62a5890
        public_62a5922 : nop
        mov al, byte ptr ds : [public_63eb7fd]
        test al, al
        je public_62a5aa5
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax+0x44]
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x10], esi
        fild dword ptr ss : [esp+0x10]
        fld st(0)
        fld st(0)
        fmul dword ptr ds : [eax]
        fld st(1)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        fmul dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_639dfe4]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_639dfe4]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_639dfe4]
        fstp dword ptr ss : [esp+0x48]
        fxch 
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_62a59af
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a59b5
        public_62a59af : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a59b5 : nop
        call public_6391dae
        fcom dword ptr ds : [public_6399408]
        mov edi, eax
        fnstsw ax
        test ah, 0x41
        jne public_62a59d1
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a59d7
        public_62a59d1 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a59d7 : nop
        call public_6391dae
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6399408]
        mov ebp, eax
        fld dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_62a59fb
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a5a01
        public_62a59fb : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a5a01 : nop
        call public_6391dae
        fadd dword ptr ds : [public_639a1d0]
        mov ebx, eax
        fmul dword ptr ds : [public_639c13c]
        call public_6391dae
        mov ecx, eax
        mov eax, edi
        cdq 
        idiv esi
        imul eax, esi
        test edi, edi
        jle public_62a5a2b
        add eax, ecx
        jmp public_62a5a2d
        public_62a5a2b : nop
        sub eax, ecx
        public_62a5a2d : nop
        mov dword ptr ss : [esp+0x54], eax
        mov eax, ebp
        fild dword ptr ss : [esp+0x54]
        cdq 
        idiv esi
        fstp dword ptr ss : [esp+0x28]
        imul eax, esi
        test ebp, ebp
        jle public_62a5a49
        add eax, ecx
        jmp public_62a5a4b
        public_62a5a49 : nop
        sub eax, ecx
        public_62a5a4b : nop
        mov dword ptr ss : [esp+0x54], eax
        mov eax, ebx
        fild dword ptr ss : [esp+0x54]
        cdq 
        idiv esi
        fstp dword ptr ss : [esp+0x2C]
        imul eax, esi
        test ebx, ebx
        jle public_62a5a67
        add eax, ecx
        jmp public_62a5a69
        public_62a5a67 : nop
        sub eax, ecx
        public_62a5a69 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x54], eax
        fild dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x40], ecx
        push 0x49742400
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x48], edx
        fstp dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x54], eax
        call public_62a5ab0
        public_62a5aa5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x62a5710)
    }
}

#undef public_62a573a
#undef public_62a5740
#undef public_62a5762
#undef public_62a5768
#undef public_62a578a
#undef public_62a5790
#undef public_62a57c5
#undef public_62a57c7
#undef public_62a57e3
#undef public_62a57e5
#undef public_62a5840
#undef public_62a5848
#undef public_62a585c
#undef public_62a5864
#undef public_62a5874
#undef public_62a5890
#undef public_62a5898
#undef public_62a58a0
#undef public_62a58c0
#undef public_62a58d4
#undef public_62a58e8
#undef public_62a5922
#undef public_62a59af
#undef public_62a59b5
#undef public_62a59d1
#undef public_62a59d7
#undef public_62a59fb
#undef public_62a5a01
#undef public_62a5a2b
#undef public_62a5a2d
#undef public_62a5a49
#undef public_62a5a4b
#undef public_62a5a67
#undef public_62a5a69
#undef public_62a5aa5
