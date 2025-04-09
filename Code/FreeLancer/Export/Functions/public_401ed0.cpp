#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401ed0);
CLANG_FORWARD_PROC_SYMBOL(public_402180);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_401f2f _public_401f2f
#define public_401f80 _public_401f80
#define public_401fa0 _public_401fa0
#define public_401fbe _public_401fbe
#define public_401fe3 _public_401fe3
#define public_402011 _public_402011
#define public_402013 _public_402013
#define public_402018 _public_402018
#define public_402025 _public_402025
#define public_40205c _public_40205c
#define public_402084 _public_402084
#define public_402096 _public_402096
#define public_4020b2 _public_4020b2
#define public_4020b8 _public_4020b8
#define public_4020c0 _public_4020c0
#define public_4020fb _public_4020fb
#define public_402116 _public_402116
#define public_402118 _public_402118
#define public_402169 _public_402169

PROC_DECLARE(0x401ed0, internal_401ed0, public_401ed0);
extern "C" NAKED register_t __cdecl internal_401ed0()
{
    __asm
    {
        mov eax, 0x2010
        call public_5b7e90
        mov eax, dword ptr ds : [public_5c6df0]
        push ebx
        mov ebx, dword ptr ss : [esp+0x201C]
        push esi
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_402169
        mov eax, dword ptr ds : [public_5c6df4]
        mov edx, dword ptr ss : [esp+0x2020]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0xE0]
        mov esi, eax
        test esi, esi
        jne public_401f2f
        mov esi, offset public_5c74f8
        public_401f2f : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 8
        jle public_401f80
        push esi
        push 8
        push eax
        lea eax, ss:[esp+0x28]
/*FIXUP push offset public_5c74c0 @0x401f40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c74c0
        push eax
        call public_402180
        mov al, byte ptr ds : [public_616471]
        add esp, 0x14
        test al, al
        jne public_401f80
        mov edx, dword ptr ds : [public_5c6d18]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 0x6A
/*FIXUP push offset public_5c7494 @0x401f64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7494
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x401f6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov byte ptr ds : [public_616471], 1
        call dword ptr ds : [edx]
        add esp, 0x14
        public_401f80 : nop
        push esi
        call dword ptr ds : [public_5c6d14]
        mov edx, dword ptr ss : [esp+0x2030]
        mov esi, dword ptr ds : [edx]
        mov edi, esi
        add esp, 4
        test edi, edi
        je public_402169
        lea ecx, ds:[ecx]
        public_401fa0 : nop
        mov ecx, dword ptr ds : [edi+0x24]
        test ecx, ecx
        je public_401fbe
        cmp eax, ecx
        je public_401fbe
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_401fa0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2010
        ret 
        public_401fbe : nop
        mov byte ptr ds : [esi+0x28], 1
        fld dword ptr ds : [edi]
        mov byte ptr ds : [edi+0x28], 1
        fmul dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ds : [edx+0xC]
        cmp ebp, ecx
        fmul qword ptr ds : [public_5c7410]
        fstp dword ptr ss : [esp+0x1C]
        jle public_401fe3
        mov ebp, ecx
        public_401fe3 : nop
        fld dword ptr ds : [edi+ecx*4]
        fcom dword ptr ds : [public_5c7478]
        fnstsw ax
        test ah, 5
        jp public_402011
        fld dword ptr ds : [public_6101d4]
        fmul st, st(1)
        fcomp dword ptr ds : [public_5c7478]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_402013
        mov byte ptr ss : [esp+0x13], 1
        jmp public_402018
        public_402011 : nop
        fstp st(0)
        public_402013 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_402018 : nop
        xor esi, esi
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], esi
        jle public_402096
        lea ebx, ds:[edi+4]
        public_402025 : nop
        fld dword ptr ds : [ebx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jnp public_40205c
        mov eax, dword ptr ds : [public_5c6df0]
        mov edx, dword ptr ss : [esp+0x2028]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        inc esi
        add ebx, 4
        cmp esi, ebp
        jl public_402025
        mov dword ptr ss : [esp+0x14], esi
        jmp public_402084
/*FIXUP public_40205c : nop
        push offset public_5c7434 @0x40205c*/
  FIXUP public_40205c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7434
        push 0xA0
/*FIXUP push offset public_5c7494 @0x402066*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7494
        mov eax, 0x100002
/*FIXUP push offset public_5c7418 @0x402070*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7418
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        mov dword ptr ss : [esp+0x28], esi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_402084 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x2030]
        mov ebx, dword ptr ss : [esp+0x2028]
        public_402096 : nop
        cmp esi, ecx
        pop ebp
        jge public_402169
        fld dword ptr ds : [edi+esi*4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 0x41
        jne public_4020b2
        mov ecx, dword ptr ds : [edi+esi*4]
        mov dword ptr ds : [edx+4], ecx
        public_4020b2 : nop
        lea edi, ds:[edi+esi*4+4]
        jmp public_4020c0
        public_4020b8 : nop
        mov edx, dword ptr ss : [esp+0x202C]
        nop 
        public_4020c0 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_402169
        mov al, byte ptr ss : [esp+0xF]
        fld dword ptr ds : [edi]
        test al, al
        je public_4020fb
        fld st(0)
        fmul dword ptr ds : [edx+0x10]
        fcomp dword ptr ds : [public_5c7478]
        fnstsw ax
        test ah, 0x41
        jne public_4020fb
        fstp st(0)
        fild dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5c7478]
        public_4020fb : nop
        fld qword ptr ds : [public_5c7410]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fcom dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 0x41
        jne public_402116
        fstp dword ptr ds : [edx+4]
        jmp public_402118
        public_402116 : nop
        fstp st(0)
        public_402118 : nop
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push esi
        push ebx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov edx, dword ptr ss : [esp+0x202C]
        mov edx, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0xFFFFFFFF
        push ebx
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x14]
        inc esi
        add edi, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], esi
        jl public_4020b8
        public_402169 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x2010
        ret 
        UNREACHABLE_TRAP(0x401ed0)
    }
}

#undef public_401f2f
#undef public_401f80
#undef public_401fa0
#undef public_401fbe
#undef public_401fe3
#undef public_402011
#undef public_402013
#undef public_402018
#undef public_402025
#undef public_40205c
#undef public_402084
#undef public_402096
#undef public_4020b2
#undef public_4020b8
#undef public_4020c0
#undef public_4020fb
#undef public_402116
#undef public_402118
#undef public_402169
