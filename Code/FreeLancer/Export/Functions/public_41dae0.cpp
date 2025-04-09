#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dae0);
CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_420620);
CLANG_FORWARD_PROC_SYMBOL(public_420690);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_41dafe _public_41dafe
#define public_41db21 _public_41db21
#define public_41db38 _public_41db38
#define public_41db67 _public_41db67
#define public_41db7d _public_41db7d
#define public_41db89 _public_41db89
#define public_41dbac _public_41dbac
#define public_41dbd7 _public_41dbd7
#define public_41dbf1 _public_41dbf1

PROC_DECLARE(0x41dae0, internal_41dae0, public_41dae0);
extern "C" NAKED register_t __cdecl internal_41dae0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x6C]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        je public_41db38
        mov edi, dword ptr ds : [esi+0x60]
        cmp edi, 1
        ja public_41dafe
        cmp dword ptr ds : [esi+0x28], ebx
        jne public_41db38
        public_41dafe : nop
        fld dword ptr ds : [esi+0x68]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_41db21
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [esi+0x68]
        call public_5b7ec0
        xor edx, edx
        div edi
        mov dword ptr ds : [esi+0x64], edx
        public_41db21 : nop
        mov eax, dword ptr ds : [esi+0x64]
        push eax
        lea ecx, ds:[esi+0x70]
        push ecx
        lea edx, ds:[esi+0x28]
        push edx
        call public_420620
        add esp, 0xC
        mov dword ptr ds : [esi+0x24], ebx
        public_41db38 : nop
        cmp dword ptr ds : [esi+0x24], ebx
        jne public_41dbd7
        lea eax, ds:[esi+0x2C]
        push eax
        lea ecx, ss:[esp+0x10]
        call public_4205c0
        mov edi, dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        call public_420690
        test al, al
        je public_41db67
        mov eax, dword ptr ds : [edi+0x14]
        jmp public_41db7d
        public_41db67 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, edi
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x14], eax
        public_41db7d : nop
        cmp eax, dword ptr ds : [edi+4]
        je public_41db89
        lea ebx, ds:[eax+0x28]
        test ebx, ebx
        jne public_41dbac
        public_41db89 : nop
        lea eax, ds:[esi+0x2C]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0xF2
/*FIXUP push offset public_5c95c8 @0x41db97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95c8
        mov ecx, 0x100002
/*FIXUP push offset public_5c958c @0x41dba1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_41dbac : nop
        test ebx, ebx
        mov dword ptr ds : [esi+0x24], ebx
        jne public_41dbd7
        lea eax, ds:[esi+0x2C]
        push eax
        push 0x430
/*FIXUP push offset public_5c952c @0x41dbbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c952c
        mov ecx, 0x100002
/*FIXUP push offset public_5c9558 @0x41dbc6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9558
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_41dbd7 : nop
        fld dword ptr ds : [esi+0x5C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_41dbf1
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [esi+0x5C]
        fstp dword ptr ds : [esi+0x58]
        public_41dbf1 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x41dae0)
    }
}

#undef public_41dafe
#undef public_41db21
#undef public_41db38
#undef public_41db67
#undef public_41db7d
#undef public_41db89
#undef public_41dbac
#undef public_41dbd7
#undef public_41dbf1
