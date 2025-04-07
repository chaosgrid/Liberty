#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e53e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5b70);
CLANG_FORWARD_PROC_SYMBOL(public_62e5bc0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62ebf50);
CLANG_FORWARD_PROC_SYMBOL(public_63327f0);
CLANG_FORWARD_PROC_SYMBOL(public_6332df0);

#define public_62d9d6e _public_62d9d6e
#define public_62d9d9f _public_62d9d9f
#define public_62d9e86 _public_62d9e86
#define public_62d9eac _public_62d9eac
#define public_62d9f72 _public_62d9f72
#define public_62da00f _public_62da00f
#define public_62da044 _public_62da044
#define public_62da072 _public_62da072
#define public_62da08c _public_62da08c
#define public_62da0f6 _public_62da0f6
#define public_62da0fd _public_62da0fd
#define public_62da114 _public_62da114
#define public_62da129 _public_62da129
#define public_62da1c4 _public_62da1c4
#define public_62da206 _public_62da206
#define public_62da22c _public_62da22c
#define public_62da2e0 _public_62da2e0
#define public_62da2ec _public_62da2ec

PROC_DECLARE(0x62d9d00, internal_62d9d00, public_62d9d00);
extern "C" NAKED register_t __cdecl internal_62d9d00()
{
    __asm
    {
        sub esp, 0x80
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        je public_62da2ec
        mov eax, dword ptr ds : [esi+0x14C]
        test eax, eax
        je public_62da2ec
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_62da2ec
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x70]
        push eax
        add ecx, 0x1364
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], 0
        call public_62ebf50
        test al, al
        je public_62d9d6e
        fld dword ptr ss : [esp+0x74]
        fstp dword ptr ds : [esi+0x54]
        public_62d9d6e : nop
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        mov ebx, 1
        jne public_62d9d9f
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d9d9f : nop
        fld dword ptr ds : [esi+0x168]
        add edi, 0xC
        fdiv dword ptr ds : [esi+0x164]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x4C], ecx
        mov edx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, dword ptr ds : [esi+0x170]
        mov dword ptr ss : [esp+0x54], edx
        mov eax, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x58], eax
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, dword ptr ds : [esi+0x14C]
        push edx
        call public_6332df0
        fst dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x170]
        mov ecx, dword ptr ds : [esi+0x14C]
        push edi
        lea eax, ss:[esp+0x68]
        push eax
        call public_63327f0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x34]
        push eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fsqrt 
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62d9e86
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x34]
        call public_628b030
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_62c5a70
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ecx
        jmp public_62d9eac
        public_62d9e86 : nop
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        call public_62e1680
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [eax+8]
        add esp, 8
        mov dword ptr ss : [esp+0x24], eax
        public_62d9eac : nop
        fld dword ptr ds : [esi+0x160]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x54]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ds : [esi+0x168]
        push ecx
        fdiv dword ptr ds : [esi+0x164]
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp]
        push edi
        push ecx
        mov ecx, dword ptr ds : [esi+0x14C]
        call public_6332df0
        fstp dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi+0x150]
        mov edi, dword ptr ds : [esi+8]
        add edi, 0x14FC
        test al, al
        mov al, byte ptr ds : [edi+0x7E]
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov ebp, 2
        jne public_62da072
        test al, al
        jne public_62d9f72
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62d9f72 : nop
        fld dword ptr ds : [edi+0x18]
        push ecx
        fadd dword ptr ds : [public_639e6d4]
        lea ecx, ss:[esp+0x74]
        fdiv dword ptr ds : [esi+0x164]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, dword ptr ds : [esi+0x14C]
        call public_63327f0
        mov edi, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], eax
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x60]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x34], edi
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x4C]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fsqrt 
        fcomp dword ptr ds : [public_639f538]
        fnstsw ax
        test ah, 5
        jp public_62da00f
        fld dword ptr ds : [public_639a1d0]
        jmp public_62da044
        public_62da00f : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x78]
        push eax
        call public_62e1680
        add esp, 8
        push eax
        call public_62e1630
        fcom dword ptr ds : [public_639d20c]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_62da044
        fstp st(0)
        fld dword ptr ds : [public_639d20c]
        public_62da044 : nop
        fmul dword ptr ds : [esi+0x160]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp]
        push ecx
        call public_62e5bc0
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edx
        push eax
        call public_62e5b70
        add esp, 0x14
        jmp public_62da0fd
        public_62da072 : nop
        test al, al
        jne public_62da08c
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62da08c : nop
        fld dword ptr ds : [edi+0x18]
        push ecx
        fadd dword ptr ds : [public_639b22c]
        lea ecx, ss:[esp+0x74]
        fdiv dword ptr ds : [esi+0x164]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, dword ptr ds : [esi+0x14C]
        call public_63327f0
        mov edx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [esi+0x48]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x2C], edx
        je public_62da0f6
        cmp eax, ebx
        jne public_62da0f6
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        add ecx, 0x18
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        call public_62e8ce0
        public_62da0f6 : nop
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x48], ebp
        public_62da0fd : nop
        fcom dword ptr ss : [esp+0x80]
        fnstsw ax
        test ah, 1
        jne public_62da114
        fstp st(0)
        fld dword ptr ss : [esp+0x80]
        public_62da114 : nop
        fcom dword ptr ds : [esi+0x154]
        fnstsw ax
        test ah, 0x41
        jne public_62da129
        fstp st(0)
        fld dword ptr ds : [esi+0x154]
        public_62da129 : nop
        mov eax, dword ptr ds : [esi+0x14C]
        fstp dword ptr ds : [esi+0x54]
        mov dword ptr ds : [esi+0x4C], 0x40490FDB
        add eax, 0x18
        mov dword ptr ds : [esi+0x5C], ebp
        mov ebp, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x14]
        lea edx, ds:[ecx+0x1C]
        mov ebx, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [eax+0xC]
        mov ebx, dword ptr ds : [edx]
        add eax, 0x200
        mov dword ptr ds : [eax], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [edx+8]
        mov ebx, dword ptr ss : [esp+0x94]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0x248], 0x30038010
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_6399410]
        mov ebp, eax
        lea ecx, ds:[esi+0x8C]
        fnstsw ax
        test ah, 5
        jp public_62da1c4
        mov eax, dword ptr ss : [esp+0x2C]
        lea edx, ds:[ecx+0x1C]
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+0xA0], 2
        jmp public_62da206
        public_62da1c4 : nop
        mov eax, dword ptr ds : [esi+0x14C]
        fld dword ptr ds : [eax+0x24]
        lea edx, ds:[ecx+0x28]
        fsub dword ptr ds : [eax+0x18]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [eax+0x28]
        fsub dword ptr ds : [eax+0x1C]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [eax+0x2C]
        fsub dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x48]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ecx+0xA0], 3
        public_62da206 : nop
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+4]
        pop edi
        cmp ebp, 1
        pop ebp
        pop ebx
        je public_62da22c
        fld dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        jne public_62da2e0
        public_62da22c : nop
        mov eax, dword ptr ds : [esi+0x14C]
        fld dword ptr ds : [eax+0x2C]
        lea ecx, ss:[esp+0x1C]
        fsub dword ptr ds : [eax+0x20]
        fld dword ptr ds : [eax+0x28]
        fsub dword ptr ds : [eax+0x1C]
        fld dword ptr ds : [eax+0x24]
        fsub dword ptr ds : [eax+0x18]
        lea eax, ss:[esp+0x34]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x44]
        call public_62e1680
        fld dword ptr ds : [esi+0x16C]
        mov eax, dword ptr ds : [esi+0x14C]
        fchs 
        mov edx, dword ptr ds : [esi+4]
        fsub dword ptr ds : [public_639a1d0]
        add eax, 0x18
        fld dword ptr ss : [esp+0x24]
        push 0
        push edx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [eax]
        lea eax, ss:[esp+0x44]
        push eax
        fstp dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x50]
        call public_62e53e0
        add esp, 0x14
        test al, al
        je public_62da2e0
        mov ecx, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x58], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov eax, 1
        pop esi
        add esp, 0x80
        ret 4
        public_62da2e0 : nop
        xor eax, eax
        pop esi
        add esp, 0x80
        ret 4
        public_62da2ec : nop
        mov eax, 3
        pop esi
        add esp, 0x80
        ret 4
        UNREACHABLE_TRAP(0x62d9d00)
    }
}

#undef public_62d9d6e
#undef public_62d9d9f
#undef public_62d9e86
#undef public_62d9eac
#undef public_62d9f72
#undef public_62da00f
#undef public_62da044
#undef public_62da072
#undef public_62da08c
#undef public_62da0f6
#undef public_62da0fd
#undef public_62da114
#undef public_62da129
#undef public_62da1c4
#undef public_62da206
#undef public_62da22c
#undef public_62da2e0
#undef public_62da2ec
