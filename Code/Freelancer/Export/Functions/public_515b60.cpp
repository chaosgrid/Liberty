#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4b5150);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_503330);
CLANG_FORWARD_PROC_SYMBOL(public_514010);
CLANG_FORWARD_PROC_SYMBOL(public_514070);
CLANG_FORWARD_PROC_SYMBOL(public_514bf0);
CLANG_FORWARD_PROC_SYMBOL(public_515640);
CLANG_FORWARD_PROC_SYMBOL(public_515b60);
CLANG_FORWARD_PROC_SYMBOL(public_515dd0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_515b88 _public_515b88
#define public_515b93 _public_515b93
#define public_515bb8 _public_515bb8
#define public_515bc1 _public_515bc1
#define public_515c16 _public_515c16
#define public_515c18 _public_515c18
#define public_515c33 _public_515c33
#define public_515c40 _public_515c40
#define public_515c47 _public_515c47
#define public_515c64 _public_515c64
#define public_515c7e _public_515c7e
#define public_515c92 _public_515c92
#define public_515c94 _public_515c94
#define public_515d1b _public_515d1b
#define public_515d44 _public_515d44
#define public_515d50 _public_515d50
#define public_515d57 _public_515d57
#define public_515d72 _public_515d72
#define public_515d8c _public_515d8c

PROC_DECLARE(0x515b60, internal_515b60, public_515b60);
extern "C" NAKED register_t __cdecl internal_515b60()
{
    __asm
    {
        sub esp, 0x4C
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x58]
        mov ebp, dword ptr ds : [esi+0x160]
        test ebp, ebp
        push edi
        mov dword ptr ss : [esp+0xC], ebp
        je public_515bb8
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ds : [ecx]
        cmp ecx, edi
        je public_515b93
        public_515b88 : nop
        cmp dword ptr ds : [edi+8], eax
        je public_515bc1
        mov edi, dword ptr ds : [edi]
        cmp ecx, edi
        jne public_515b88
        public_515b93 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5db7c8 @0x515b99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7c8
        push 0x367
/*FIXUP push offset public_5db798 @0x515ba3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db798
        mov eax, 0x100001
/*FIXUP push offset public_5c862c @0x515bad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_515bb8 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x4C
        ret 
        public_515bc1 : nop
        mov al, byte ptr ds : [esi+0x184]
        test al, al
        push ebx
        jns public_515d57
        test byte ptr ds : [esi+0x185], 4
        jne public_515d57
        call public_54baf0
        cmp esi, eax
        mov eax, dword ptr ss : [ebp+0x14]
        sete bl
        xor ebp, ebp
        cmp eax, ebp
        je public_515c16
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_515c16
        add eax, 0xC
        cmp eax, ebp
        je public_515c16
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebp
        je public_515c16
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_515c18
        public_515c16 : nop
        xor eax, eax
        public_515c18 : nop
        push 0x800000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        cmp eax, ebp
        jne public_515c33
        mov dword ptr ss : [esp+0x60], ebp
        jmp public_515c47
        public_515c33 : nop
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, ebp
        jne public_515c40
        mov dword ptr ss : [esp+0x60], ebp
        jmp public_515c47
        public_515c40 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x60], edx
        public_515c47 : nop
        test bl, bl
        je public_515c64
        mov al, byte ptr ds : [esi+0x184]
        and al, 0xBF
        lea ecx, ds:[esi+0x174]
        mov byte ptr ds : [esi+0x184], al
        call public_515640
        public_515c64 : nop
        lea ebx, ds:[esi+0x164]
        mov ecx, ebx
        call public_503330
        test al, al
        je public_515c7e
        push ebx
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        public_515c7e : nop
        mov eax, dword ptr ds : [esi+0x160]
        add eax, 0x14
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_515c92
        add eax, 0xFFFFFFF8
        jmp public_515c94
        public_515c92 : nop
        xor eax, eax
        public_515c94 : nop
        mov cl, byte ptr ds : [eax+0x1F0]
        test cl, cl
        jne public_515d44
        call public_54baf0
        cmp esi, eax
        jne public_515d1b
        mov eax, dword ptr ss : [esp+0x60]
        lea ebp, ds:[eax+0x64]
        mov ecx, ebp
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_515d1b
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x60]
        fchs 
        lea edx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        call public_514010
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x24]
        call public_422b80
        push eax
        lea eax, ss:[esp+0x34]
        push eax
        push ebp
        mov ecx, offset public_674c5c
        call public_515dd0
        jmp public_515d50
        public_515d1b : nop
        push 0
        lea ecx, ss:[esp+0x30]
        call public_4b5150
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x6C]
        push esi
        add eax, 0x78
        push eax
        mov ecx, offset public_674c60
        call public_514070
        jmp public_515d50
        public_515d44 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push 0
        push esi
        call public_514bf0
        public_515d50 : nop
        or byte ptr ds : [esi+0x185], 5
        public_515d57 : nop
        call public_54baf0
        cmp esi, eax
        jne public_515d72
        lea ecx, ds:[esi+0x174]
        call public_515640
        and byte ptr ds : [esi+0x184], 0xBF
        public_515d72 : nop
        lea ebx, ds:[esi+0x164]
        mov ecx, ebx
        call public_503330
        test al, al
        je public_515d8c
        push ebx
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        public_515d8c : nop
        xor eax, eax
        mov dword ptr ds : [esi+0x184], eax
        mov dword ptr ds : [esi+0x160], eax
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        push edi
        mov dword ptr ds : [eax+4], ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x10]
        add esp, 4
        pop ebx
        pop edi
        dec ecx
        pop esi
        mov dword ptr ds : [eax+0x10], ecx
        pop ebp
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x515b60)
    }
}

#undef public_515b88
#undef public_515b93
#undef public_515bb8
#undef public_515bc1
#undef public_515c16
#undef public_515c18
#undef public_515c33
#undef public_515c40
#undef public_515c47
#undef public_515c64
#undef public_515c7e
#undef public_515c92
#undef public_515c94
#undef public_515d1b
#undef public_515d44
#undef public_515d50
#undef public_515d57
#undef public_515d72
#undef public_515d8c
