#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402790);
CLANG_FORWARD_PROC_SYMBOL(public_415e40);
CLANG_FORWARD_PROC_SYMBOL(public_415ea0);
CLANG_FORWARD_PROC_SYMBOL(public_418b30);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4165ed _public_4165ed
#define public_41670b _public_41670b
#define public_416710 _public_416710
#define public_416727 _public_416727
#define public_41675f _public_41675f
#define public_41676d _public_41676d
#define public_416786 _public_416786
#define public_416788 _public_416788
#define public_4167e3 _public_4167e3
#define public_41680e _public_41680e

PROC_DECLARE(0x416570, internal_416570, public_416570);
extern "C" NAKED register_t __cdecl internal_416570()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6105b0]
        sub esp, 0x114
        push ebp
        mov ebp, ecx
        cmp dword ptr ss : [ebp+0x158], eax
        je public_41680e
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
        jnp public_4167e3
/*FIXUP push offset public_610850 @0x4165c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610850
        lea edx, ss:[esp+0x34]
        lea ecx, ss:[ebp+0x15C]
        push edx
        call public_418b30
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ss : [ebp+0x160]
        je public_4165ed
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+8], eax
        jmp public_4167e3
        public_4165ed : nop
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
        jne public_41670b
        or esi, 0xFFFFFFFF
        jmp public_416710
        public_41670b : nop
        mov esi, 1
        public_416710 : nop
        fld dword ptr ss : [esp+0x10]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_416788
        public_416727 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x18]
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+ebx]
        cmp eax, ecx
        ja public_416788
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
        jle public_41675f
        test ah, 0x41
        je public_416786
        add ebx, esi
        jmp public_41676d
        public_41675f : nop
        add ebx, esi
        test ah, 0x41
        jnp public_416786
        add edi, ebx
        cmp edi, 4
        jle public_416786
        public_41676d : nop
        fld dword ptr ss : [esp+0x10]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_416727
        jmp public_416788
        public_416786 : nop
        fstp st(0)
        public_416788 : nop
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
        je public_4167e3
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, ebp
        call public_415ea0
        public_4167e3 : nop
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
        public_41680e : nop
        mov eax, dword ptr ss : [ebp+0x118]
        pop ebp
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x416570)
    }
}

#undef public_4165ed
#undef public_41670b
#undef public_416710
#undef public_416727
#undef public_41675f
#undef public_41676d
#undef public_416786
#undef public_416788
#undef public_4167e3
#undef public_41680e
