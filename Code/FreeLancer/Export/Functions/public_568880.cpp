#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_568880);
CLANG_FORWARD_PROC_SYMBOL(public_58cd00);
CLANG_FORWARD_PROC_SYMBOL(public_58cdb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c250a);

#define public_568951 _public_568951
#define public_5689ab _public_5689ab
#define public_5689f9 _public_5689f9
#define public_568a53 _public_568a53
#define public_568a79 _public_568a79
#define public_568a9d _public_568a9d
#define public_568aca _public_568aca
#define public_568b23 _public_568b23
#define public_568b5f _public_568b5f
#define public_568b71 _public_568b71
#define public_568b97 _public_568b97
#define public_568bae _public_568bae
#define public_568c48 _public_568c48
#define public_568c51 _public_568c51
#define public_568c96 _public_568c96
#define public_568cd4 _public_568cd4
#define public_568cd8 _public_568cd8
#define public_568ce6 _public_568ce6
#define public_568cfc _public_568cfc

PROC_DECLARE(0x568880, internal_568880, public_568880);
extern "C" NAKED register_t __cdecl internal_568880()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c250a @0x568882*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c250a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x2B8]
        push ebx
        push esi
        mov dword ptr ss : [esp+0x20], edi
        call public_58cd00
        test al, al
        je public_568cfc
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push ebp
        push eax
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call public_46c860
        xor ebp, ebp
        cmp esi, ebp
        mov byte ptr ss : [esp+0x13], 0
        lea ecx, ss:[esp+0x20]
        jne public_5689f9
        cmp ebx, dword ptr ds : [edi+0x390]
        jne public_568951
        push 0xD190
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebp
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x44], 1
        call public_46c800
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x38], 0
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        mov byte ptr ss : [esp+0x13], 1
        jmp public_5689ab
        public_568951 : nop
        push 0xD824
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 2
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x44], 3
        call public_46c800
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x38], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        public_5689ab : nop
        push 1
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 4
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x44], 5
        call public_46c800
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x38], bl
        call public_45eeb0
        jmp public_568b71
        public_5689f9 : nop
        mov al, byte ptr ss : [esp+0x4C]
        test al, al
        je public_568a79
        mov al, byte ptr ss : [esp+0x50]
        test al, al
        je public_568a53
        push 0x3343
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 6
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x44], 7
        call public_46c800
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x38], bl
        call public_45eeb0
        jmp public_568aca
        public_568a53 : nop
        push 0x69F5
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 8
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov byte ptr ss : [esp+0x38], 9
        jmp public_568a9d
        public_568a79 : nop
        push 0xBB80
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0xA
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov byte ptr ss : [esp+0x38], 0xB
        public_568a9d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x58]
        push eax
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x38], bl
        je public_568aca
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], ebp
        public_568aca : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        cmp dword ptr ss : [esp+0x44], ebp
        lea ecx, ss:[esp+0x20]
        jne public_568b23
        push ebp
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], 0xC
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x58]
        push eax
        mov byte ptr ss : [esp+0x44], 0xD
        call public_46c800
        mov byte ptr ss : [esp+0x38], 0xC
        jmp public_568b5f
        public_568b23 : nop
        push 1
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0xE
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x58]
        push eax
        mov byte ptr ss : [esp+0x44], 0xF
        call public_46c800
        mov byte ptr ss : [esp+0x38], bl
        public_568b5f : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp ecx, ebp
        je public_568b71
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], ebp
        public_568b71 : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_5c62bc]
        mov eax, dword ptr ss : [esp+0x48]
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov ebx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [ebx+4]
        je public_568bae
        public_568b97 : nop
        lea ecx, ds:[esi+8]
        push ecx
        push ebp
        lea edx, ss:[esp+0x54]
        push edx
        mov ecx, ebx
        call public_46c800
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_568b97
        public_568bae : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov ebx, dword ptr ss : [esp+0x18]
        je public_568ce6
        mov eax, dword ptr ss : [esp+0x44]
        mov cl, byte ptr ds : [eax+ebx+0x394]
        test cl, cl
        je public_568c51
        mov ecx, dword ptr ds : [ebx+0x38C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], 0x10
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push esi
        mov byte ptr ss : [esp+0x40], 0x11
        mov edi, ecx
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x38], 0x10
        je public_568c48
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], 0
        public_568c48 : nop
        lea ecx, ss:[esp+0x20]
        jmp public_568cd8
        public_568c51 : nop
        mov eax, dword ptr ds : [ebx+0x388]
        push eax
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x38], 0x12
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x50], eax
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        mov byte ptr ss : [esp+0x3C], 0x13
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_568c96
        mov ebp, eax
        public_568c96 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x50]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        test ecx, ecx
        mov byte ptr ss : [esp+0x38], 0x12
        je public_568cd4
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x50], 0
        public_568cd4 : nop
        lea ecx, ss:[esp+0x28]
        public_568cd8 : nop
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ec]
        public_568ce6 : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        push eax
        push ecx
        mov ecx, dword ptr ds : [ebx+0x2B8]
        call public_58cdb0
        pop ebp
        public_568cfc : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 0x14
        UNREACHABLE_TRAP(0x568880)
    }
}

#undef public_568951
#undef public_5689ab
#undef public_5689f9
#undef public_568a53
#undef public_568a79
#undef public_568a9d
#undef public_568aca
#undef public_568b23
#undef public_568b5f
#undef public_568b71
#undef public_568b97
#undef public_568bae
#undef public_568c48
#undef public_568c51
#undef public_568c96
#undef public_568cd4
#undef public_568cd8
#undef public_568ce6
#undef public_568cfc
