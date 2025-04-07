#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e91d0);

#define public_62e89b9 _public_62e89b9
#define public_62e89c3 _public_62e89c3
#define public_62e89cf _public_62e89cf
#define public_62e89d1 _public_62e89d1
#define public_62e89f6 _public_62e89f6
#define public_62e8a06 _public_62e8a06
#define public_62e8a32 _public_62e8a32
#define public_62e8a4b _public_62e8a4b
#define public_62e8a63 _public_62e8a63
#define public_62e8a65 _public_62e8a65
#define public_62e8a84 _public_62e8a84
#define public_62e8a94 _public_62e8a94
#define public_62e8a96 _public_62e8a96
#define public_62e8a9f _public_62e8a9f
#define public_62e8ad2 _public_62e8ad2
#define public_62e8ad4 _public_62e8ad4
#define public_62e8af0 _public_62e8af0
#define public_62e8b00 _public_62e8b00
#define public_62e8b02 _public_62e8b02
#define public_62e8b13 _public_62e8b13
#define public_62e8b49 _public_62e8b49
#define public_62e8b5f _public_62e8b5f
#define public_62e8b7a _public_62e8b7a
#define public_62e8b93 _public_62e8b93
#define public_62e8bb0 _public_62e8bb0
#define public_62e8bb2 _public_62e8bb2
#define public_62e8bcc _public_62e8bcc
#define public_62e8bdc _public_62e8bdc
#define public_62e8bde _public_62e8bde
#define public_62e8bed _public_62e8bed
#define public_62e8c06 _public_62e8c06
#define public_62e8c08 _public_62e8c08
#define public_62e8c15 _public_62e8c15

PROC_DECLARE(0x62e89a0, internal_62e89a0, public_62e89a0);
extern "C" NAKED register_t __cdecl internal_62e89a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+8]
        xor ebx, ebx
        cmp eax, ebx
        je public_62e89b9
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        jne public_62e89c3
        public_62e89b9 : nop
        pop esi
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        public_62e89c3 : nop
        mov ecx, dword ptr ds : [ecx+8]
        cmp ecx, ebx
        je public_62e89cf
        add ecx, 0xFFFFFFF8
        jmp public_62e89d1
        public_62e89cf : nop
        xor ecx, ecx
        public_62e89d1 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], ecx
        fnstsw ax
        test ah, 0x41
        jne public_62e89f6
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], edx
        public_62e89f6 : nop
        cmp byte ptr ds : [esi+0x15], bl
        mov eax, dword ptr ss : [esp+0x18]
        jne public_62e8a06
        cmp eax, 2
        jne public_62e8a06
        xor eax, eax
        public_62e8a06 : nop
        sub eax, ebx
        push edi
        je public_62e8b5f
        sub eax, 2
        jne public_62e8c15
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a07a0]
        fnstsw ax
        test ah, 0x41
        jne public_62e8a32
        mov eax, dword ptr ds : [public_63a07a0]
        mov dword ptr ss : [esp+0x10], eax
        public_62e8a32 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e8a4b
        mov dword ptr ss : [esp+0x10], 0
        public_62e8a4b : nop
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62e8a63
        lea ecx, ds:[eax-8]
        jmp public_62e8a65
        public_62e8a63 : nop
        xor ecx, ecx
        public_62e8a65 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x5C]
        cmp byte ptr ss : [esp+0x18], bl
        mov edi, dword ptr ss : [esp+0x10]
        je public_62e8a84
        cmp byte ptr ss : [esp+0x1C], bl
        je public_62e8a9f
        public_62e8a84 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62e8a94
        add eax, 0xFFFFFFF8
        jmp public_62e8a96
        public_62e8a94 : nop
        xor eax, eax
        public_62e8a96 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push edi
        call dword ptr ds : [edx]
        public_62e8a9f : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e8b13
        cmp byte ptr ds : [esi+0x15], bl
        je public_62e8b13
        push 1
        mov ecx, esi
        call public_62e91d0
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov byte ptr ss : [esp+0xE], bl
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62e8ad2
        lea ecx, ds:[eax-8]
        jmp public_62e8ad4
        public_62e8ad2 : nop
        xor ecx, ecx
        public_62e8ad4 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xF]
        push edx
        lea edx, ss:[esp+0x12]
        push edx
        call dword ptr ds : [eax+0x5C]
        cmp byte ptr ss : [esp+0xE], 1
        jne public_62e8af0
        cmp byte ptr ds : [esi+0x14], 1
        je public_62e8b13
        public_62e8af0 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62e8b00
        add eax, 0xFFFFFFF8
        jmp public_62e8b02
        public_62e8b00 : nop
        xor eax, eax
        public_62e8b02 : nop
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        call dword ptr ds : [eax+0x50]
        mov byte ptr ds : [esi+0x14], 1
        public_62e8b13 : nop
        cmp byte ptr ss : [esp+0x18], bl
        je public_62e8c15
        cmp byte ptr ss : [esp+0x1C], bl
        jne public_62e8c15
        mov esi, dword ptr ds : [esi]
        add esi, 8
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        je public_62e8b49
        lea eax, ds:[esi-8]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push edi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_62e8b49 : nop
        xor eax, eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push edi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_62e8b5f : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_63a03f0]
        fnstsw ax
        test ah, 5
        jp public_62e8b7a
        mov dword ptr ss : [esp+0x10], 0xBF800000
        jmp public_62e8b93
        public_62e8b7a : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        jne public_62e8b93
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_62e8b93 : nop
        push 1
        mov ecx, esi
        call public_62e91d0
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov byte ptr ss : [esp+0x18], bl
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62e8bb0
        lea ecx, ds:[eax-8]
        jmp public_62e8bb2
        public_62e8bb0 : nop
        xor ecx, ecx
        public_62e8bb2 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [eax+0x5C]
        cmp byte ptr ss : [esp+0x18], bl
        jne public_62e8bcc
        cmp byte ptr ds : [esi+0x14], bl
        je public_62e8bed
        public_62e8bcc : nop
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62e8bdc
        add eax, 0xFFFFFFF8
        jmp public_62e8bde
        public_62e8bdc : nop
        xor eax, eax
        public_62e8bde : nop
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        call dword ptr ds : [eax+0x50]
        mov byte ptr ds : [esi+0x14], bl
        public_62e8bed : nop
        push 1
        mov ecx, esi
        call public_62e91d0
        mov esi, dword ptr ds : [esi]
        add esi, 8
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        je public_62e8c06
        lea eax, ds:[esi-8]
        jmp public_62e8c08
        public_62e8c06 : nop
        xor eax, eax
        public_62e8c08 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call dword ptr ds : [edx]
        public_62e8c15 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x62e89a0)
    }
}

#undef public_62e89b9
#undef public_62e89c3
#undef public_62e89cf
#undef public_62e89d1
#undef public_62e89f6
#undef public_62e8a06
#undef public_62e8a32
#undef public_62e8a4b
#undef public_62e8a63
#undef public_62e8a65
#undef public_62e8a84
#undef public_62e8a94
#undef public_62e8a96
#undef public_62e8a9f
#undef public_62e8ad2
#undef public_62e8ad4
#undef public_62e8af0
#undef public_62e8b00
#undef public_62e8b02
#undef public_62e8b13
#undef public_62e8b49
#undef public_62e8b5f
#undef public_62e8b7a
#undef public_62e8b93
#undef public_62e8bb0
#undef public_62e8bb2
#undef public_62e8bcc
#undef public_62e8bdc
#undef public_62e8bde
#undef public_62e8bed
#undef public_62e8c06
#undef public_62e8c08
#undef public_62e8c15
