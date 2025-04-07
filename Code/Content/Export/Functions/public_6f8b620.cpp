#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1ccb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6f47af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb11bb);

#define public_6f8b712 _public_6f8b712
#define public_6f8b776 _public_6f8b776
#define public_6f8b795 _public_6f8b795
#define public_6f8b7b2 _public_6f8b7b2
#define public_6f8b7d1 _public_6f8b7d1
#define public_6f8b814 _public_6f8b814
#define public_6f8b850 _public_6f8b850
#define public_6f8b88d _public_6f8b88d
#define public_6f8b8aa _public_6f8b8aa
#define public_6f8b8b1 _public_6f8b8b1
#define public_6f8b8cd _public_6f8b8cd
#define public_6f8b8ea _public_6f8b8ea
#define public_6f8b8f1 _public_6f8b8f1
#define public_6f8b90b _public_6f8b90b
#define public_6f8b90d _public_6f8b90d

PROC_DECLARE(0x6f8b620, internal_6f8b620, public_6f8b620);
extern "C" NAKED register_t __cdecl internal_6f8b620()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb11bb @0x6f8b628*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb11bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC4
        push ebp
        mov ebp, dword ptr ss : [esp+0xD8]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x7C]
        test ecx, ecx
        lea esi, ss:[ebp+8]
        je public_6f8b8cd
        mov eax, dword ptr ds : [edi+0x80]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6f8b8cd
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x38]
        push edx
        mov dword ptr ss : [esp+0x14], ecx
        call dword ptr ds : [eax+0x1C]
        test al, al
        je public_6f8b88d
        push ebx
        lea eax, ss:[esp+0x1F]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f93280
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0xDC], 0
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f75f30
        mov ebp, dword ptr ss : [ebp+0x20]
        add esp, 4
        lea ecx, ss:[esp+0x30]
        mov ebx, eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], ebx
        call public_6f47af0
        fld dword ptr ss : [esp+0x30]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f8b712
        fld dword ptr ss : [esp+0x34]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f8b712
        fld dword ptr ss : [esp+0x38]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_6f8b850
        public_6f8b712 : nop
        push 1
        lea edx, ss:[esp+0x14]
        push edx
        push 0x19
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], 0x3DCCCCCD
        call public_6f47af0
        push eax
        push ebx
        call public_6f5ea40
        mov eax, dword ptr ds : [edi+0x8C]
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 0x1C
        xor ebx, ebx
        dec eax
        je public_6f8b795
        dec eax
        je public_6f8b776
        dec eax
        jne public_6f8b7b2
        call dword ptr ds : [public_6fb3370]
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov ebx, eax
        sar ebx, 0xF
        add ebx, 0x330A
        jmp public_6f8b7b2
        public_6f8b776 : nop
        call dword ptr ds : [public_6fb3370]
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov ebx, eax
        sar ebx, 0xF
        add ebx, 0x3304
        jmp public_6f8b7b2
        public_6f8b795 : nop
        call dword ptr ds : [public_6fb3370]
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov ebx, eax
        sar ebx, 0xF
        add ebx, 0x3307
        public_6f8b7b2 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        jne public_6f8b7d1
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6f8b7d1
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        public_6f8b7d1 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x34]
        xor eax, eax
        cmp edx, 0xC
        jne public_6f8b814
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx+0x48]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x18]
        push eax
        push 0x600DE0
        push 0
        lea ecx, ss:[esp+0x48]
        push ecx
        push 0x20
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call dword ptr ds : [public_6fb3460]
        mov eax, dword ptr ss : [esp+0x70]
        add esp, 0x1C
        public_6f8b814 : nop
        mov ecx, dword ptr ds : [edi+0x88]
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx]
        push 0xA
        neg edi
        push 9
        sbb edi, edi
        and edi, 0x50
        or edi, 0xA
        push edi
        push eax
        push 1
        push 1
        push ebx
        push esi
        lea eax, ss:[esp+0x48]
        push eax
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ss : [esp+0xE8]
        mov byte ptr ds : [ecx], al
        public_6f8b850 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xE8], 0xFFFFFFFF
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xEC]
        mov al, byte ptr ds : [ecx]
        add esp, 4
        pop ebx
        jmp public_6f8b90d
        public_6f8b88d : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        mov edi, dword ptr ss : [esp+0xE4]
        je public_6f8b90b
        mov ecx, esi
        call public_6f1cd00
        cmp eax, 5
        jne public_6f8b8aa
        mov byte ptr ds : [edi], 1
        public_6f8b8aa : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6f8b90b
        public_6f8b8b1 : nop
        mov ecx, esi
        call public_6f1cd00
        cmp eax, 5
        jne public_6f8b90b
        mov ecx, esi
        call public_6f1ccb0
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_6f8b8b1
        jmp public_6f8b90b
        public_6f8b8cd : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        mov edi, dword ptr ss : [esp+0xE4]
        je public_6f8b90b
        mov ecx, esi
        call public_6f1cd00
        cmp eax, 5
        jne public_6f8b8ea
        mov byte ptr ds : [edi], 1
        public_6f8b8ea : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6f8b90b
        public_6f8b8f1 : nop
        mov ecx, esi
        call public_6f1cd00
        cmp eax, 5
        jne public_6f8b90b
        mov ecx, esi
        call public_6f1ccb0
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_6f8b8f1
        public_6f8b90b : nop
        mov al, byte ptr ds : [edi]
        public_6f8b90d : nop
        mov ecx, dword ptr ss : [esp+0xD0]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xD0
        ret 8
        UNREACHABLE_TRAP(0x6f8b620)
    }
}

#undef public_6f8b712
#undef public_6f8b776
#undef public_6f8b795
#undef public_6f8b7b2
#undef public_6f8b7d1
#undef public_6f8b814
#undef public_6f8b850
#undef public_6f8b88d
#undef public_6f8b8aa
#undef public_6f8b8b1
#undef public_6f8b8cd
#undef public_6f8b8ea
#undef public_6f8b8f1
#undef public_6f8b90b
#undef public_6f8b90d
