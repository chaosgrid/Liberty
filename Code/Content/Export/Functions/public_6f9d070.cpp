#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6f9d070);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb19a8);

#define public_6f9d0c0 _public_6f9d0c0
#define public_6f9d100 _public_6f9d100
#define public_6f9d12d _public_6f9d12d
#define public_6f9d135 _public_6f9d135
#define public_6f9d155 _public_6f9d155
#define public_6f9d15d _public_6f9d15d
#define public_6f9d182 _public_6f9d182
#define public_6f9d197 _public_6f9d197
#define public_6f9d1aa _public_6f9d1aa
#define public_6f9d1b2 _public_6f9d1b2
#define public_6f9d1ca _public_6f9d1ca
#define public_6f9d1d0 _public_6f9d1d0
#define public_6f9d1e8 _public_6f9d1e8
#define public_6f9d204 _public_6f9d204
#define public_6f9d216 _public_6f9d216
#define public_6f9d224 _public_6f9d224
#define public_6f9d270 _public_6f9d270
#define public_6f9d287 _public_6f9d287
#define public_6f9d289 _public_6f9d289
#define public_6f9d28b _public_6f9d28b

PROC_DECLARE(0x6f9d070, internal_6f9d070, public_6f9d070);
extern "C" NAKED register_t __cdecl internal_6f9d070()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb19a8 @0x6f9d072*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb19a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        mov al, byte ptr ss : [esp+0x4C]
        push ebx
        push ebp
        mov ebp, ecx
        xor ecx, ecx
        push esi
        xor edx, edx
        push edi
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ss : [esp+0x3C], al
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x48], ecx
        mov ebx, dword ptr ss : [esp+0x5C]
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x54], ecx
        je public_6f9d216
        mov edi, edi
        public_6f9d0c0 : nop
        lea edx, ss:[esp+0x24]
        push edx
        push 1
        push ecx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], 0x3F800000
        call public_6f96770
        mov ecx, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ds:[ecx-4]
        mov dword ptr ss : [esp+0x18], eax
        cmp esi, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x10], edx
        je public_6f9d204
        add ebp, 0x1C
        mov edi, edi
        public_6f9d100 : nop
        mov bl, byte ptr ds : [esi]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call public_6f2e220
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f9d12d
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6f9d12d
        lea eax, ss:[esp+0x14]
        jmp public_6f9d135
        public_6f9d12d : nop
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        public_6f9d135 : nop
        cmp bl, 1
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x120]
        jne public_6f9d197
        cmp ecx, 0xBF800000
        jne public_6f9d182
        mov edx, dword ptr ds : [eax+0x30]
        test edx, edx
        jne public_6f9d155
        xor ecx, ecx
        jmp public_6f9d15d
        public_6f9d155 : nop
        mov ecx, dword ptr ds : [eax+0x34]
        sub ecx, edx
        sar ecx, 2
        public_6f9d15d : nop
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], 0
        fild qword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x18]
        fdivr dword ptr ds : [public_6fb5810]
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax+0x30]
        mov eax, dword ptr ds : [eax]
        jmp public_6f9d1e8
        public_6f9d182 : nop
        fld dword ptr ds : [eax+0x120]
        mov ecx, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax+0x30]
        mov eax, dword ptr ds : [eax]
        jmp public_6f9d1e8
        public_6f9d197 : nop
        cmp ecx, 0xBF800000
        jne public_6f9d1ca
        mov edx, dword ptr ds : [eax+0x30]
        test edx, edx
        jne public_6f9d1aa
        xor ecx, ecx
        jmp public_6f9d1b2
        public_6f9d1aa : nop
        mov ecx, dword ptr ds : [eax+0x34]
        sub ecx, edx
        sar ecx, 2
        public_6f9d1b2 : nop
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], 0
        fild qword ptr ss : [esp+0x34]
        fdivr dword ptr ds : [public_6fb5810]
        jmp public_6f9d1d0
        public_6f9d1ca : nop
        fld dword ptr ds : [eax+0x120]
        public_6f9d1d0 : nop
        fld dword ptr ds : [public_6fb5810]
        mov ecx, dword ptr ss : [esp+0x18]
        fsub st, st(1)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax+0x30]
        mov eax, dword ptr ds : [ecx+4]
        fstp st(0)
        public_6f9d1e8 : nop
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+0xC]
        inc esi
        cmp esi, eax
        jne public_6f9d100
        mov ecx, dword ptr ss : [esp+0x44]
        mov ebx, dword ptr ss : [esp+0x5C]
        mov ebp, dword ptr ss : [esp+0x20]
        public_6f9d204 : nop
        mov eax, dword ptr ds : [ebx+8]
        add edi, 0x14
        cmp edi, eax
        jne public_6f9d0c0
        mov edx, dword ptr ss : [esp+0x40]
        public_6f9d216 : nop
        cmp edx, ecx
        fld dword ptr ds : [public_6fb444c]
        mov esi, ecx
        mov eax, edx
        je public_6f9d289
        public_6f9d224 : nop
        fadd dword ptr ds : [eax+4]
        add eax, 8
        cmp eax, ecx
        jne public_6f9d224
        fst dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f9d28b
        call dword ptr ds : [public_6fb3370]
        mov edx, dword ptr ss : [esp+0x40]
        cmp edx, esi
        mov dword ptr ss : [esp+0x5C], eax
        fild dword ptr ss : [esp+0x5C]
        mov ecx, edx
        fmul dword ptr ds : [public_6fb4448]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [public_6fb444c]
        je public_6f9d287
        nop 
        lea esp, ss:[esp]
        public_6f9d270 : nop
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x5C]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6f9d289
        add ecx, 8
        cmp ecx, esi
        jne public_6f9d270
        public_6f9d287 : nop
        mov ecx, esi
        public_6f9d289 : nop
        fstp st(0)
        public_6f9d28b : nop
        mov esi, dword ptr ds : [ecx]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x50]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x6f9d070)
    }
}

#undef public_6f9d0c0
#undef public_6f9d100
#undef public_6f9d12d
#undef public_6f9d135
#undef public_6f9d155
#undef public_6f9d15d
#undef public_6f9d182
#undef public_6f9d197
#undef public_6f9d1aa
#undef public_6f9d1b2
#undef public_6f9d1ca
#undef public_6f9d1d0
#undef public_6f9d1e8
#undef public_6f9d204
#undef public_6f9d216
#undef public_6f9d224
#undef public_6f9d270
#undef public_6f9d287
#undef public_6f9d289
#undef public_6f9d28b
