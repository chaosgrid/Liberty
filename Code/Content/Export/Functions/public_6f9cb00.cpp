#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6f9cb00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1959);

#define public_6f9cb50 _public_6f9cb50
#define public_6f9cb54 _public_6f9cb54
#define public_6f9cb7c _public_6f9cb7c
#define public_6f9cb84 _public_6f9cb84
#define public_6f9cbe0 _public_6f9cbe0
#define public_6f9cc08 _public_6f9cc08
#define public_6f9cc2b _public_6f9cc2b
#define public_6f9cc2f _public_6f9cc2f
#define public_6f9cc4b _public_6f9cc4b
#define public_6f9cc70 _public_6f9cc70
#define public_6f9ccb7 _public_6f9ccb7
#define public_6f9ccce _public_6f9ccce
#define public_6f9ccd0 _public_6f9ccd0
#define public_6f9ccd2 _public_6f9ccd2
#define public_6f9ccd4 _public_6f9ccd4

PROC_DECLARE(0x6f9cb00, internal_6f9cb00, public_6f9cb00);
extern "C" NAKED register_t __cdecl internal_6f9cb00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1959 @0x6f9cb02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1959
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        mov al, byte ptr ss : [esp+0x40]
        push ebx
        push esi
        mov esi, ecx
        xor ecx, ecx
        xor edx, edx
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], ecx
        mov ebx, dword ptr ds : [esi+0x10]
        cmp ebx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x40], ecx
        je public_6f9cc4b
        push ebp
        mov ebp, dword ptr ss : [esp+0x4C]
        push edi
        jmp public_6f9cb54
        public_6f9cb50 : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_6f9cb54 : nop
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        add esi, 0x1C
        mov ecx, esi
        call public_6f2e220
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f9cb7c
        mov edx, dword ptr ds : [ebx]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6f9cb7c
        lea eax, ss:[esp+0x14]
        jmp public_6f9cb84
        public_6f9cb7c : nop
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        public_6f9cb84 : nop
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [esi+0xF4]
        lea ecx, ds:[esi+0xEC]
        push ebp
        call public_6eb5f30
        cmp eax, edi
        je public_6f9cc2f
        mov edi, dword ptr ds : [esi+0x104]
        lea eax, ss:[ebp+4]
        lea ecx, ds:[esi+0xFC]
        push eax
        call public_6eb5f30
        cmp eax, edi
        je public_6f9cc2f
        mov ecx, dword ptr ss : [ebp+0x18]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        push edx
        lea ecx, ds:[esi+0x44]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x48]
        je public_6f9cc2f
        mov edi, dword ptr ss : [esp+0x20]
        lea ebx, ds:[ebx]
        public_6f9cbe0 : nop
        lea ecx, ds:[eax+8]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+4]
        test al, al
        jne public_6f9cc08
        push 0
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x48]
        jne public_6f9cbe0
        jmp public_6f9cc2b
        public_6f9cc08 : nop
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+0x54]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ss : [esp+0x3C]
        push 1
        push edx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x38], eax
        call public_6f96770
        public_6f9cc2b : nop
        mov ebp, dword ptr ss : [esp+0x50]
        public_6f9cc2f : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x14]
        add ebx, 4
        cmp ebx, ecx
        jne public_6f9cb50
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop ebp
        public_6f9cc4b : nop
        or esi, 0xFFFFFFFF
        test edx, edx
        je public_6f9ccd4
        mov eax, ecx
        sub eax, edx
        sar eax, 3
        test eax, eax
        je public_6f9ccd4
        cmp edx, ecx
        fld dword ptr ds : [public_6fb444c]
        mov esi, ecx
        mov eax, edx
        je public_6f9ccd0
        nop 
        public_6f9cc70 : nop
        fadd dword ptr ds : [eax+4]
        add eax, 8
        cmp eax, ecx
        jne public_6f9cc70
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f9ccd2
        call dword ptr ds : [public_6fb3370]
        mov edx, dword ptr ss : [esp+0x2C]
        cmp edx, esi
        mov dword ptr ss : [esp+0x48], eax
        fild dword ptr ss : [esp+0x48]
        mov ecx, edx
        fmul dword ptr ds : [public_6fb4448]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [public_6fb444c]
        je public_6f9ccce
        public_6f9ccb7 : nop
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x48]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6f9ccd0
        add ecx, 8
        cmp ecx, esi
        jne public_6f9ccb7
        public_6f9ccce : nop
        mov ecx, esi
        public_6f9ccd0 : nop
        fstp st(0)
        public_6f9ccd2 : nop
        mov esi, dword ptr ds : [ecx]
        public_6f9ccd4 : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6f9cb00)
    }
}

#undef public_6f9cb50
#undef public_6f9cb54
#undef public_6f9cb7c
#undef public_6f9cb84
#undef public_6f9cbe0
#undef public_6f9cc08
#undef public_6f9cc2b
#undef public_6f9cc2f
#undef public_6f9cc4b
#undef public_6f9cc70
#undef public_6f9ccb7
#undef public_6f9ccce
#undef public_6f9ccd0
#undef public_6f9ccd2
#undef public_6f9ccd4
