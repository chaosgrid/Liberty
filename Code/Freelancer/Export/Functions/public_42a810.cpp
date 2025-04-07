#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a810);
CLANG_FORWARD_PROC_SYMBOL(public_42a970);

#define public_42a830 _public_42a830
#define public_42a890 _public_42a890
#define public_42a894 _public_42a894
#define public_42a8b1 _public_42a8b1
#define public_42a8d0 _public_42a8d0
#define public_42a8d4 _public_42a8d4
#define public_42a8f2 _public_42a8f2
#define public_42a90e _public_42a90e
#define public_42a91d _public_42a91d
#define public_42a941 _public_42a941
#define public_42a94f _public_42a94f
#define public_42a964 _public_42a964

PROC_DECLARE(0x42a810, internal_42a810, public_42a810);
extern "C" NAKED register_t __cdecl internal_42a810()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, ebx
        sub eax, ebp
        sar eax, 2
        cmp eax, 0x10
        jle public_42a964
        push esi
        push edi
        nop 
        public_42a830 : nop
        mov ecx, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [ebx-4]
        cdq 
        sub eax, edx
        sar eax, 1
        test ecx, ecx
        mov edx, dword ptr ss : [ebp+eax*4]
        mov al, byte ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x20], esi
        mov byte ptr ss : [esp+0x10], al
        je public_42a894
        test edx, edx
        je public_42a894
        fld dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [edx+0x28]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_42a894
        test esi, esi
        je public_42a890
        fld dword ptr ds : [edx+0x28]
        fld dword ptr ds : [esi+0x28]
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_42a8d0
        fld dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [esi+0x28]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_42a890
        mov edx, esi
        jmp public_42a8d0
        public_42a890 : nop
        mov edx, ecx
        jmp public_42a8d0
        public_42a894 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_42a970
        test al, al
        je public_42a8b1
        mov edx, dword ptr ss : [esp+0x1C]
        jmp public_42a8d0
        public_42a8b1 : nop
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_42a970
        test al, al
        mov edx, dword ptr ss : [esp+0x20]
        jne public_42a8d0
        mov edx, dword ptr ss : [esp+0x14]
        public_42a8d0 : nop
        mov ecx, ebx
        mov esi, ebp
        public_42a8d4 : nop
        mov edi, dword ptr ds : [esi]
        test edi, edi
        je public_42a8f2
        test edx, edx
        je public_42a8f2
        fld dword ptr ds : [edi+0x28]
        fld dword ptr ds : [edx+0x28]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_42a8f2
        add esi, 4
        jmp public_42a8d4
        public_42a8f2 : nop
        sub ecx, 4
        test edx, edx
        je public_42a90e
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_42a90e
        fld dword ptr ds : [edx+0x28]
        fld dword ptr ds : [eax+0x28]
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_42a8f2
        public_42a90e : nop
        cmp ecx, esi
        jbe public_42a91d
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [ecx], edi
        add esi, 4
        jmp public_42a8d4
        public_42a91d : nop
        mov ecx, ebx
        mov edx, esi
        sub ecx, esi
        sub edx, ebp
        and ecx, 0xFFFFFFFC
        and edx, 0xFFFFFFFC
        cmp ecx, edx
        push 0
        jg public_42a941
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push ebx
        push esi
        call public_42a810
        mov ebx, esi
        jmp public_42a94f
        public_42a941 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        push ebp
        call public_42a810
        mov ebp, esi
        public_42a94f : nop
        mov eax, ebx
        sub eax, ebp
        sar eax, 2
        add esp, 0x10
        cmp eax, 0x10
        jg public_42a830
        pop edi
        pop esi
        public_42a964 : nop
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x42a810)
    }
}

#undef public_42a830
#undef public_42a890
#undef public_42a894
#undef public_42a8b1
#undef public_42a8d0
#undef public_42a8d4
#undef public_42a8f2
#undef public_42a90e
#undef public_42a91d
#undef public_42a941
#undef public_42a94f
#undef public_42a964
