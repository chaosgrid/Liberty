#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402790);
CLANG_FORWARD_PROC_SYMBOL(public_415e40);
CLANG_FORWARD_PROC_SYMBOL(public_415ea0);
CLANG_FORWARD_PROC_SYMBOL(public_418b30);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_416b6d _public_416b6d
#define public_416c8b _public_416c8b
#define public_416c90 _public_416c90
#define public_416ca7 _public_416ca7
#define public_416cdf _public_416cdf
#define public_416ced _public_416ced
#define public_416d06 _public_416d06
#define public_416d08 _public_416d08
#define public_416d63 _public_416d63
#define public_416d8e _public_416d8e
#define public_416da6 _public_416da6

PROC_DECLARE(0x416af0, internal_416af0, public_416af0);
extern "C" NAKED register_t __cdecl internal_416af0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6105b0]
        sub esp, 0x114
        push ebp
        mov ebp, ecx
        cmp dword ptr ss : [ebp+0x158], eax
        je public_416d8e
        mov dword ptr ss : [ebp+0x158], eax
        mov eax, dword ptr ss : [ebp]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        fimul dword ptr ds : [public_610854]
        xor ebx, ebx
        mov dword ptr ss : [esp+8], ebx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [ebp+0xD0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_416d63
/*FIXUP push offset public_610850 @0x416b40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610850
        lea edx, ss:[esp+0x34]
        lea ecx, ss:[ebp+0x15C]
        push edx
        call public_418b30
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ss : [ebp+0x160]
        je public_416b6d
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+8], eax
        jmp public_416d63
        public_416b6d : nop
        fld dword ptr ss : [ebp+0xD0]
        mov ecx, dword ptr ss : [ebp+0x11C]
        fmul dword ptr ds : [public_5c8da4]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x118]
        fadd qword ptr ds : [public_5c75e8]
        cmp edi, ebx
        setne byte ptr ss : [esp+0x17]
        sub esp, 8
        fstp qword ptr ss : [esp]
        mov dword ptr ss : [esp+0x38], ecx
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        mov ecx, 0x1B
        mov esi, offset public_5c8d38
        lea edi, ss:[esp+0x4C]
        rep movsd
        push eax
        mov ecx, ebp
        call public_415ea0
        mov edx, dword ptr ss : [ebp]
        push 0xFFFFFFFF
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [public_610854]
        mov eax, dword ptr ds : [public_610850]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], ebx
        fild qword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        sub esp, 8
        fmul dword ptr ds : [public_5c8d30]
        mov dword ptr ss : [esp+0x30], eax
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [ebp+0xD0]
        fild dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        fstp st(0)
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        mov ecx, 0x1B
        mov esi, offset public_5c8d38
        lea edi, ss:[esp+0xB8]
        rep movsd
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_415ea0
        mov edx, dword ptr ss : [ebp]
        push 0xFFFFFFFF
        lea eax, ss:[esp+0xBC]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], 0
        fild qword ptr ss : [esp+0x20]
        fidiv dword ptr ss : [esp+0x28]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_416c8b
        or esi, 0xFFFFFFFF
        jmp public_416c90
        public_416c8b : nop
        mov esi, 1
        public_416c90 : nop
        fld dword ptr ss : [esp+0x10]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_416d08
        public_416ca7 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x18]
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+ebx]
        cmp eax, ecx
        ja public_416d08
        mov edx, dword ptr ss : [esp+0x28]
        lea eax, ds:[esi+edi]
        push edx
        add eax, ebx
        push eax
        mov ecx, ebp
        call public_415e40
        fcom dword ptr ss : [esp+0x10]
        test esi, esi
        fnstsw ax
        jle public_416cdf
        test ah, 0x41
        je public_416d06
        add ebx, esi
        jmp public_416ced
        public_416cdf : nop
        add ebx, esi
        test ah, 0x41
        jnp public_416d06
        add edi, ebx
        cmp edi, 4
        jle public_416d06
        public_416ced : nop
        fld dword ptr ss : [esp+0x10]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_416ca7
        jmp public_416d08
        public_416d06 : nop
        fstp st(0)
        public_416d08 : nop
        mov ecx, dword ptr ds : [public_610850]
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x24], ecx
        push eax
        lea ecx, ss:[ebp+0x15C]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x2C], 0
        call public_402790
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x30]
        call public_46d660
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+0x10], ebx
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        pop edi
        pop esi
        je public_416d63
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, ebp
        call public_415ea0
        public_416d63 : nop
        fild dword ptr ss : [esp+8]
        sub esp, 8
        fadd dword ptr ss : [esp+0x34]
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        push eax
        mov ecx, ebp
        call public_415ea0
        pop ebx
        public_416d8e : nop
        mov eax, dword ptr ss : [ebp+0x118]
        test eax, eax
        je public_416da6
        mov eax, dword ptr ss : [ebp+0x120]
        pop ebp
        add esp, 0x114
        ret 
        public_416da6 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x1C]
        pop ebp
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x416af0)
    }
}

#undef public_416b6d
#undef public_416c8b
#undef public_416c90
#undef public_416ca7
#undef public_416cdf
#undef public_416ced
#undef public_416d06
#undef public_416d08
#undef public_416d63
#undef public_416d8e
#undef public_416da6
