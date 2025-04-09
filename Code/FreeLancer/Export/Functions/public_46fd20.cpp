#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_46fc90);
CLANG_FORWARD_PROC_SYMBOL(public_561da0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_46fd40 _public_46fd40
#define public_46fd52 _public_46fd52
#define public_46fd69 _public_46fd69
#define public_46fdf0 _public_46fdf0
#define public_46fe90 _public_46fe90
#define public_46fec0 _public_46fec0
#define public_46fee3 _public_46fee3
#define public_46fef6 _public_46fef6
#define public_46ff07 _public_46ff07
#define public_46ff66 _public_46ff66
#define public_46ff79 _public_46ff79
#define public_46ffc8 _public_46ffc8
#define public_46ffd3 _public_46ffd3

PROC_DECLARE(0x46fd20, internal_46fd20, public_46fd20);
extern "C" NAKED register_t __cdecl internal_46fd20()
{
    __asm
    {
        sub esp, 0x58
        push ebp
        push esi
        mov ebp, ecx
        call public_46fc90
        test al, al
        je public_46fd69
        test ebp, ebp
        je public_46ffd3
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_46fd52
        nop 
        public_46fd40 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_46fd40
        public_46fd52 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        pop esi
        pop ebp
        add esp, 0x58
        ret 
        public_46fd69 : nop
        push edi
        mov ecx, ebp
        call public_5a17b0
        fild dword ptr ds : [public_616840]
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0x40]
        fsub dword ptr ds : [public_67dc60]
        fdiv dword ptr ds : [public_67dc70]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        fild dword ptr ds : [public_616844]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [public_66db04]
        test eax, eax
        fsub dword ptr ds : [public_67dc64]
        fdiv dword ptr ds : [public_67dc74]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x30], ecx
        fchs 
        mov ecx, 9
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x34], edx
        rep movsd
        jne public_46fdf0
        call public_5b73e0
        mov dword ptr ds : [public_66db04], eax
        public_46fdf0 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+0x338]
        faddp 
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [ebp+0x33C]
        fmul dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [ebp+0x340]
        mov dword ptr ss : [esp+0x30], eax
        faddp 
        mov eax, dword ptr ss : [ebp+0x344]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        fsqrt 
        mov dword ptr ss : [esp+0x3C], eax
        xor edi, edi
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        nop 
        lea esp, ss:[esp]
        public_46fe90 : nop
        test edi, edi
        je public_46fef6
        mov esi, dword ptr ss : [esp+edi*4+0x2C]
        test esi, esi
        je public_46fef6
        test byte ptr ds : [esi+0x6C], 2
        je public_46fef6
        cmp dword ptr ss : [ebp+0x34C], edi
        mov ecx, dword ptr ds : [public_679bb0]
        mov dword ptr ss : [esp+0xC], ecx
        jne public_46fec0
        mov edx, dword ptr ds : [public_679ba4]
        mov dword ptr ss : [esp+0xC], edx
        jmp public_46fee3
        public_46fec0 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        test al, al
        je public_46fee3
        lea edx, ss:[esp+0x10]
        push edx
        call public_561da0
        mov eax, dword ptr ds : [eax]
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        public_46fee3 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        lea eax, ss:[esp+0x10]
        push eax
        push 0x33
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        public_46fef6 : nop
        inc edi
        cmp edi, 5
        jl public_46fe90
        lea esi, ss:[ebp+0x35C]
        mov edi, 0xD
        public_46ff07 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_46ffc8
        test byte ptr ds : [ecx+0x6C], 2
        je public_46ffc8
        mov edx, dword ptr ds : [public_679bb0]
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x10]
        test al, al
        jne public_46ff66
        mov ecx, dword ptr ds : [esi-4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x10]
        test al, al
        jne public_46ff66
        mov ecx, dword ptr ds : [esi-8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x10]
        test al, al
        jne public_46ff66
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x10]
        test al, al
        je public_46ff79
        public_46ff66 : nop
        lea eax, ss:[esp+0x10]
        push eax
        call public_561da0
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        mov dword ptr ss : [esp+0xC], ecx
        public_46ff79 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 1
        lea eax, ss:[esp+0x10]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-4]
        mov edx, dword ptr ds : [ecx]
        push 1
        lea eax, ss:[esp+0x10]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-8]
        mov edx, dword ptr ds : [ecx]
        push 1
        lea eax, ss:[esp+0x10]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        push 1
        lea eax, ss:[esp+0x10]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        public_46ffc8 : nop
        add esi, 0x10
        dec edi
        jne public_46ff07
        pop edi
        public_46ffd3 : nop
        pop esi
        pop ebp
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x46fd20)
    }
}

#undef public_46fd40
#undef public_46fd52
#undef public_46fd69
#undef public_46fdf0
#undef public_46fe90
#undef public_46fec0
#undef public_46fee3
#undef public_46fef6
#undef public_46ff07
#undef public_46ff66
#undef public_46ff79
#undef public_46ffc8
#undef public_46ffd3
