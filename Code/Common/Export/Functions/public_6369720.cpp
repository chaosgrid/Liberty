#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345850);
CLANG_FORWARD_PROC_SYMBOL(public_63694a0);
CLANG_FORWARD_PROC_SYMBOL(public_6369720);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6369751 _public_6369751
#define public_6369757 _public_6369757
#define public_636979e _public_636979e
#define public_63697e2 _public_63697e2
#define public_6369823 _public_6369823
#define public_6369838 _public_6369838
#define public_6369857 _public_6369857
#define public_6369882 _public_6369882
#define public_63698a7 _public_63698a7
#define public_63698d0 _public_63698d0
#define public_63698fb _public_63698fb
#define public_6369962 _public_6369962
#define public_636996b _public_636996b
#define public_63699c1 _public_63699c1
#define public_63699e3 _public_63699e3

PROC_DECLARE(0x6369720, internal_6369720, public_6369720);
extern "C" NAKED register_t __cdecl internal_6369720()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ss : [esp+0x30]
        test edx, edx
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [edi+0x14]
        mov esi, ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [esp+0x10], esi
        jne public_6369751
        mov edx, dword ptr ds : [esi]
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx]
        fstp dword ptr ss : [esp+0x38]
        jmp public_6369757
        public_6369751 : nop
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x38], eax
        public_6369757 : nop
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_636979e
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push ebx
        push edi
        push 0
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_63694a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0x28
        public_636979e : nop
        fld dword ptr ds : [public_63a53d0]
        mov eax, dword ptr ss : [esp+0x2C]
        fdiv dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], eax
        xor esi, esi
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63699e3
        public_63697e2 : nop
        fsub dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x34]
        fadd st, st(1)
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_6369823
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [public_63a545c]
        jmp public_6369838
        public_6369823 : nop
        fcom dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6369838
        fstp st(0)
        fld dword ptr ds : [public_63a53d4]
        public_6369838 : nop
        fmul dword ptr ds : [public_63a58ac]
        call public_6391dae
        mov ecx, eax
        cmp ecx, 1
        mov dword ptr ss : [esp+0x3C], ecx
        jge public_6369857
        mov ecx, 1
        mov dword ptr ss : [esp+0x3C], ecx
        public_6369857 : nop
        fld dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x28]
        fild dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_63a5654]
        fadd dword ptr ss : [esp+0x18]
        fcom dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_6369962
        public_6369882 : nop
        fxch 
        fadd dword ptr ds : [public_63a53d0]
        fxch 
        fsub dword ptr ds : [public_63a53d0]
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_6369882
        fstp dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x28]
        public_63698a7 : nop
        mov ebp, dword ptr ss : [esp+0x2C]
        add esi, ecx
        mov eax, dword ptr ds : [edi+esi*4+0x14]
        test eax, eax
        jne public_63698d0
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, esi
        shl ecx, 6
        lea eax, ds:[ecx+edi+0x68]
        push eax
        push ebp
        mov dword ptr ds : [edi+esi*4+0x14], eax
        mov ecx, dword ptr ds : [edi]
        push edx
        call public_6345850
        public_63698d0 : nop
        mov eax, dword ptr ds : [edi+esi*4+0x14]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [ebx+esi*4+0x14]
        test eax, eax
        jne public_63698fb
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, esi
        shl ecx, 6
        lea eax, ds:[ecx+ebx+0x68]
        push eax
        push ebp
        mov dword ptr ds : [ebx+esi*4+0x14], eax
        mov ecx, dword ptr ds : [ebx]
        push edx
        call public_6345850
        public_63698fb : nop
        mov eax, dword ptr ds : [ebx+esi*4+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        call dword ptr ds : [edx]
        fcom dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        je public_636996b
        fcom dword ptr ss : [esp+0x38]
        fnstsw ax
        test ah, 0x41
        jne public_63699c1
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ebp
        fadd dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_63697e2
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 0x28
        public_6369962 : nop
        fstp st(0)
        fstp st(0)
        jmp public_63698a7
        public_636996b : nop
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_63699e3
        mov edx, dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0x40]
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push ebx
        push edi
        push esi
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        push ebp
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        call public_63694a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0x28
        public_63699c1 : nop
        mov eax, dword ptr ss : [esp+0x44]
        fstp st(0)
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        pop ebp
        mov dword ptr ds : [eax+4], ecx
        mov eax, 1
        pop ebx
        add esp, 0xC
        ret 0x28
        public_63699e3 : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 0x28
        UNREACHABLE_TRAP(0x6369720)
    }
}

#undef public_6369751
#undef public_6369757
#undef public_636979e
#undef public_63697e2
#undef public_6369823
#undef public_6369838
#undef public_6369857
#undef public_6369882
#undef public_63698a7
#undef public_63698d0
#undef public_63698fb
#undef public_6369962
#undef public_636996b
#undef public_63699c1
#undef public_63699e3
