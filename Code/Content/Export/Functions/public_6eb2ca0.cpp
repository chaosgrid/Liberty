#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac110);
CLANG_FORWARD_PROC_SYMBOL(public_6eac2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2b10);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb33f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3470);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3580);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d650);
CLANG_FORWARD_PROC_SYMBOL(public_6f69a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa098);

#define public_6eb2ce2 _public_6eb2ce2
#define public_6eb2d6f _public_6eb2d6f
#define public_6eb2da0 _public_6eb2da0
#define public_6eb2dd5 _public_6eb2dd5
#define public_6eb2e10 _public_6eb2e10
#define public_6eb2e1b _public_6eb2e1b
#define public_6eb2e1f _public_6eb2e1f
#define public_6eb2e2c _public_6eb2e2c
#define public_6eb2e2f _public_6eb2e2f
#define public_6eb2e34 _public_6eb2e34
#define public_6eb2e46 _public_6eb2e46
#define public_6eb2e55 _public_6eb2e55
#define public_6eb2e5e _public_6eb2e5e
#define public_6eb2e62 _public_6eb2e62
#define public_6eb2e6b _public_6eb2e6b
#define public_6eb2e90 _public_6eb2e90
#define public_6eb2e9d _public_6eb2e9d
#define public_6eb2ea1 _public_6eb2ea1
#define public_6eb2ea5 _public_6eb2ea5
#define public_6eb2f01 _public_6eb2f01
#define public_6eb2f46 _public_6eb2f46
#define public_6eb2f5d _public_6eb2f5d
#define public_6eb2f63 _public_6eb2f63
#define public_6eb2f7a _public_6eb2f7a
#define public_6eb2f7c _public_6eb2f7c
#define public_6eb2f82 _public_6eb2f82
#define public_6eb2f92 _public_6eb2f92
#define public_6eb2fa8 _public_6eb2fa8
#define public_6eb2fb2 _public_6eb2fb2
#define public_6eb2fd7 _public_6eb2fd7
#define public_6eb2fe7 _public_6eb2fe7
#define public_6eb2ffd _public_6eb2ffd
#define public_6eb3007 _public_6eb3007
#define public_6eb3098 _public_6eb3098
#define public_6eb30af _public_6eb30af

PROC_DECLARE(0x6eb2ca0, internal_6eb2ca0, public_6eb2ca0);
extern "C" NAKED register_t __cdecl internal_6eb2ca0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faa098 @0x6eb2ca8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa098
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edi
        xor esi, esi
        call public_6eac110
        test eax, eax
        je public_6eb2ce2
        mov ecx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [ecx+0xC]
        push ecx
        mov ecx, eax
        call public_6eac2a0
        mov esi, eax
        public_6eb2ce2 : nop
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        mov ecx, edi
        call public_6eac2c0
        mov edi, eax
        sub edi, esi
        test edi, edi
        mov dword ptr ss : [esp+0xC], edi
        jle public_6eb30af
        mov ebp, dword ptr ss : [esp+0x3C]
        mov ecx, ebp
        call public_6fa3db0
        test eax, eax
        je public_6eb30af
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        mov ecx, ebx
        call public_6eb6b30
        cmp eax, edi
        jae public_6eb2d6f
        shl edi, 2
        push edi
        call public_6fa912a
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push eax
        push ecx
        mov ecx, ebx
        call public_6eed270
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        push edx
        push eax
        mov ecx, ebx
        call public_6ea1490
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        add edi, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], edi
        call public_6fa3db0
        lea ecx, ds:[esi+eax*4]
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], esi
        public_6eb2d6f : nop
        mov edx, dword ptr ss : [esp+0x48]
        add edx, 0x58
        push edx
        lea ecx, ss:[esp+0x24]
        call public_6eb33f0
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        cmp esi, ecx
        mov dword ptr ss : [esp+0x38], 0
        je public_6eb2ea5
        add esi, 8
        nop 
        lea esp, ss:[esp]
        public_6eb2da0 : nop
        fld dword ptr ds : [esi+0x1C]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jnp public_6eb2e62
        lea ecx, ds:[esi-4]
        call public_6fa3db0
        test eax, eax
        je public_6eb2e5e
        mov eax, dword ptr ss : [esp+0x48]
        mov edi, dword ptr ds : [esi]
        lea ebx, ds:[eax+0x84]
        cmp edi, dword ptr ds : [esi+4]
        je public_6eb2e34
        public_6eb2dd5 : nop
        push edi
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, ebx
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [eax+0x98]
        test edx, edx
        je public_6eb2e2c
        mov ecx, dword ptr ds : [eax+0x9C]
        mov eax, ecx
        sub eax, edx
        sar eax, 2
        test eax, eax
        je public_6eb2e2c
        mov eax, edx
        cmp ecx, eax
        je public_6eb2e1f
        mov edx, dword ptr ss : [esp+0x4C]
        nop 
        lea esp, ss:[esp]
        public_6eb2e10 : nop
        cmp dword ptr ds : [eax], edx
        je public_6eb2e1b
        add eax, 4
        cmp eax, ecx
        jne public_6eb2e10
        public_6eb2e1b : nop
        cmp ecx, eax
        jne public_6eb2e2c
        public_6eb2e1f : nop
        push edi
        lea ecx, ds:[esi-4]
        call public_6f69a10
        mov edi, eax
        jmp public_6eb2e2f
        public_6eb2e2c : nop
        add edi, 4
        public_6eb2e2f : nop
        cmp edi, dword ptr ds : [esi+4]
        jne public_6eb2dd5
        public_6eb2e34 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6eb2e46
        mov eax, dword ptr ds : [esi+4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jne public_6eb2e55
        public_6eb2e46 : nop
        mov eax, dword ptr ss : [esp+0x28]
        lea edx, ds:[esi-8]
        push edx
        push eax
        lea ecx, ds:[esi+0x20]
        push ecx
        jmp public_6eb2e6b
        public_6eb2e55 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        add esi, 0x28
        jmp public_6eb2e90
        public_6eb2e5e : nop
        mov ecx, dword ptr ss : [esp+0x28]
        public_6eb2e62 : nop
        lea edx, ds:[esi-8]
        push edx
        push ecx
        lea eax, ds:[esi+0x20]
        push eax
        public_6eb2e6b : nop
        call public_6eb3ae0
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0xC
        push eax
        add eax, 0xFFFFFFD8
        lea ecx, ss:[esp+0x24]
        push eax
        call public_6eb3580
        mov ecx, dword ptr ss : [esp+0x28]
        sub ecx, 0x28
        mov dword ptr ss : [esp+0x28], ecx
        public_6eb2e90 : nop
        lea edx, ds:[esi-8]
        cmp edx, ecx
        jne public_6eb2da0
        jmp public_6eb2ea1
        public_6eb2e9d : nop
        mov ecx, dword ptr ss : [esp+0x28]
        public_6eb2ea1 : nop
        mov esi, dword ptr ss : [esp+0x24]
        public_6eb2ea5 : nop
        test esi, esi
        je public_6eb3098
        mov edx, ecx
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x40], edx
        je public_6eb3098
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jle public_6eb3098
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        je public_6eb3098
        mov eax, dword ptr ss : [ebp+8]
        sub eax, edx
        sar eax, 2
        test eax, eax
        je public_6eb3098
        cmp esi, ecx
        fld dword ptr ds : [public_6fb444c]
        mov edi, ecx
        mov eax, esi
        je public_6eb2f7a
        public_6eb2f01 : nop
        fadd dword ptr ds : [eax+0x24]
        add eax, 0x28
        cmp eax, ecx
        jne public_6eb2f01
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6eb2f7c
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x40], eax
        fild dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_6fb4448]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [public_6fb444c]
        je public_6eb2f5d
        public_6eb2f46 : nop
        fadd dword ptr ds : [ecx+0x24]
        fld dword ptr ss : [esp+0x40]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6eb2f7a
        add ecx, 0x28
        cmp ecx, edi
        jne public_6eb2f46
        public_6eb2f5d : nop
        fstp st(0)
        mov dword ptr ss : [esp+0x40], edi
        public_6eb2f63 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        lea edi, ds:[ecx+4]
        mov ecx, edi
        call public_6fa3db0
        test eax, eax
        jne public_6eb2f82
        mov ebx, dword ptr ds : [edi+8]
        jmp public_6eb2fb2
        public_6eb2f7a : nop
        fstp st(0)
        public_6eb2f7c : nop
        mov dword ptr ss : [esp+0x40], ecx
        jmp public_6eb2f63
        public_6eb2f82 : nop
        mov ecx, edi
        call public_6fa3db0
        mov esi, eax
        dec esi
        jne public_6eb2f92
        xor eax, eax
        jmp public_6eb2fa8
        public_6eb2f92 : nop
        call dword ptr ds : [public_6fb3370]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6eb2fa8 : nop
        test eax, eax
        mov ebx, dword ptr ds : [edi+4]
        jbe public_6eb2fb2
        lea ebx, ds:[ebx+eax*4]
        public_6eb2fb2 : nop
        mov eax, dword ptr ss : [esp+0x48]
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[eax+0x84]
        call public_6f7b0f0
        mov ecx, ebp
        call public_6fa3db0
        test eax, eax
        jne public_6eb2fd7
        mov esi, dword ptr ss : [ebp+8]
        jmp public_6eb3007
        public_6eb2fd7 : nop
        mov ecx, ebp
        call public_6fa3db0
        mov esi, eax
        dec esi
        jne public_6eb2fe7
        xor eax, eax
        jmp public_6eb2ffd
        public_6eb2fe7 : nop
        call dword ptr ds : [public_6fb3370]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6eb2ffd : nop
        test eax, eax
        mov esi, dword ptr ss : [ebp+4]
        jbe public_6eb3007
        lea esi, ds:[esi+eax*4]
        public_6eb3007 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x4C]
        add ecx, 0x10
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        push edx
        mov edx, dword ptr ss : [esp+0x4C]
        push eax
        push ecx
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_6eb2b10
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [ecx+8]
        add esp, 0x18
        push eax
        push edx
        call public_6eb5770
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        add esi, 4
        push esi
        call public_6f6a640
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0xC
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [esp+0x10]
        add eax, 0xFFFFFFFC
        dec esi
        push ebx
        mov ecx, edi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [esp+0x14], esi
        call public_6f69a10
        mov ecx, edi
        call public_6fa3db0
        test eax, eax
        jne public_6eb2e9d
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6eb3470
        jmp public_6eb2e9d
        public_6eb3098 : nop
        call public_6f4d650
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call public_6eac640
        pop ebx
        public_6eb30af : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x6eb2ca0)
    }
}

#undef public_6eb2ce2
#undef public_6eb2d6f
#undef public_6eb2da0
#undef public_6eb2dd5
#undef public_6eb2e10
#undef public_6eb2e1b
#undef public_6eb2e1f
#undef public_6eb2e2c
#undef public_6eb2e2f
#undef public_6eb2e34
#undef public_6eb2e46
#undef public_6eb2e55
#undef public_6eb2e5e
#undef public_6eb2e62
#undef public_6eb2e6b
#undef public_6eb2e90
#undef public_6eb2e9d
#undef public_6eb2ea1
#undef public_6eb2ea5
#undef public_6eb2f01
#undef public_6eb2f46
#undef public_6eb2f5d
#undef public_6eb2f63
#undef public_6eb2f7a
#undef public_6eb2f7c
#undef public_6eb2f82
#undef public_6eb2f92
#undef public_6eb2fa8
#undef public_6eb2fb2
#undef public_6eb2fd7
#undef public_6eb2fe7
#undef public_6eb2ffd
#undef public_6eb3007
#undef public_6eb3098
#undef public_6eb30af
