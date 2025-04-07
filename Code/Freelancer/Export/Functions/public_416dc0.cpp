#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415e40);
CLANG_FORWARD_PROC_SYMBOL(public_415ea0);
CLANG_FORWARD_PROC_SYMBOL(public_416f50);
CLANG_FORWARD_PROC_SYMBOL(public_418430);
CLANG_FORWARD_PROC_SYMBOL(public_418b30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_416e3f _public_416e3f
#define public_416ecf _public_416ecf
#define public_416ef9 _public_416ef9

PROC_DECLARE(0x416dc0, internal_416dc0, public_416dc0);
extern "C" NAKED register_t __cdecl internal_416dc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6105b0]
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x158], eax
        push edi
        je public_416ef9
        mov dword ptr ds : [esi+0x158], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        fimul dword ptr ds : [public_610854]
        mov dword ptr ss : [esp+0x10], 0
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0xD0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_416ecf
/*FIXUP push offset public_610850 @0x416e10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610850
        lea ecx, ss:[esp+0x1C]
        lea ebp, ds:[esi+0x15C]
        push ecx
        mov ecx, ebp
        call public_418b30
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+0x160]
        je public_416e3f
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x10], edx
        jmp public_416ecf
        public_416e3f : nop
        fld dword ptr ds : [esi+0xD0]
        mov ecx, dword ptr ds : [esi+0x118]
        fmul dword ptr ds : [public_5c8da4]
        mov eax, dword ptr ds : [esi+0x11C]
        test ecx, ecx
        setne bl
        fadd qword ptr ds : [public_5c75e8]
        sub esp, 8
        mov dword ptr ss : [esp+0x24], eax
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        push 0x320
        push eax
        mov ecx, esi
        call public_415e40
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_610854]
        mov eax, dword ptr ds : [public_610850]
        push edx
        push ecx
        push eax
        mov eax, dword ptr ds : [esi+0xD0]
        push eax
        mov ecx, esi
        call public_416f50
        mov edi, eax
/*FIXUP push offset public_610850 @0x416ead*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610850
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], edi
        call public_418430
        test bl, bl
        mov dword ptr ds : [eax], edi
        je public_416ecf
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, esi
        call public_415ea0
        public_416ecf : nop
        fild dword ptr ss : [esp+0x10]
        sub esp, 8
        fadd dword ptr ss : [esp+0x28]
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        push eax
        mov ecx, esi
        call public_415ea0
        public_416ef9 : nop
        mov eax, dword ptr ds : [esi+0x118]
        mov edi, dword ptr ds : [esi+0xD8]
        mov ebx, dword ptr ds : [public_5c6e0c]
        push eax
        push edi
        call ebx
        mov ebp, eax
        movzx eax, word ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        push eax
        mov eax, dword ptr ds : [esi+0xD8]
        push eax
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [public_616410]
        push ebp
        fild dword ptr ss : [esp+0x18]
        push edi
        fstp dword ptr ss : [esp+0x30]
        call ebx
        fld dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x416dc0)
    }
}

#undef public_416e3f
#undef public_416ecf
#undef public_416ef9
