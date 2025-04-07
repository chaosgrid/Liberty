#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5080);
CLANG_FORWARD_PROC_SYMBOL(public_6f98df0);

#define public_6f98e16 _public_6f98e16
#define public_6f98e2f _public_6f98e2f
#define public_6f98e3f _public_6f98e3f
#define public_6f98e44 _public_6f98e44
#define public_6f98e60 _public_6f98e60
#define public_6f98e79 _public_6f98e79
#define public_6f98e86 _public_6f98e86
#define public_6f98e8c _public_6f98e8c
#define public_6f98ece _public_6f98ece
#define public_6f98efa _public_6f98efa
#define public_6f98f05 _public_6f98f05
#define public_6f98f07 _public_6f98f07
#define public_6f98f1b _public_6f98f1b
#define public_6f98f23 _public_6f98f23
#define public_6f98f68 _public_6f98f68
#define public_6f98f81 _public_6f98f81
#define public_6f98f8e _public_6f98f8e
#define public_6f98f94 _public_6f98f94
#define public_6f98fb0 _public_6f98fb0
#define public_6f98fcb _public_6f98fcb
#define public_6f98fe5 _public_6f98fe5
#define public_6f98ff8 _public_6f98ff8

PROC_DECLARE(0x6f98df0, internal_6f98df0, public_6f98df0);
extern "C" NAKED register_t __cdecl internal_6f98df0()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x64]
        mov esi, ecx
        push 0
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [public_6fb3048]
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, offset public_6fce780
        xor ebp, ebp
        public_6f98e16 : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_6f98e2f
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f98e3f
        public_6f98e2f : nop
        add ebp, 8
        add ebx, 8
        cmp ebp, 0x88
        jb public_6f98e16
        jmp public_6f98e44
        public_6f98e3f : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], ecx
        public_6f98e44 : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, offset public_6fce808
        xor ebp, ebp
        lea esp, ss:[esp]
        public_6f98e60 : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_6f98e79
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push edx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f98e86
        public_6f98e79 : nop
        add ebp, 8
        add ebx, 8
        cmp ebp, 0x60
        jb public_6f98e60
        jmp public_6f98e8c
        public_6f98e86 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi+4], eax
        public_6f98e8c : nop
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+8]
        push 3
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+0xC]
        push 4
        mov ecx, edi
        mov ebx, 5
        call dword ptr ds : [public_6fb3044]
        fst dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi]
        cmp eax, 0xD
        je public_6f98ece
        cmp eax, 0xE
        je public_6f98ece
        cmp eax, 0xF
        je public_6f98ece
        cmp eax, 0x10
        jne public_6f98f05
        public_6f98ece : nop
        fcomp dword ptr ds : [public_6fb6280]
        fnstsw ax
        test ah, 0x41
        jne public_6f98f07
        fld dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x10], 0x40A00000
        fcomp dword ptr ds : [public_6fb6280]
        fnstsw ax
        test ah, 5
        jp public_6f98efa
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ds : [esi+0xC]
        jmp public_6f98f07
        public_6f98efa : nop
        fld dword ptr ds : [public_6fb6280]
        fstp dword ptr ds : [esi+0xC]
        jmp public_6f98f07
        public_6f98f05 : nop
        fstp st(0)
        public_6f98f07 : nop
        push 5
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f98ff8
        jmp public_6f98f23
        public_6f98f1b : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x64]
        public_6f98f23 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[esi+0x14]
        push 1
        push edx
        mov dword ptr ss : [esp+0x24], 1
        mov dword ptr ss : [esp+0x28], 0
        mov byte ptr ss : [esp+0x2C], 0
        call public_6ed5080
        mov ebp, dword ptr ds : [esi+0x1C]
        mov eax, ebx
        sub ebp, 0x48
        push eax
        mov ecx, edi
        inc ebx
        call dword ptr ds : [public_6fb3048]
        mov dword ptr ss : [esp+0x10], eax
        mov esi, offset public_6fce808
        xor edi, edi
        public_6f98f68 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f98f81
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f98f8e
        public_6f98f81 : nop
        add edi, 8
        add esi, 8
        cmp edi, 0x60
        jb public_6f98f68
        jmp public_6f98f94
        public_6f98f8e : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp], ecx
        public_6f98f94 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        mov eax, ebx
        push eax
        inc ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6f98fb0
        mov dword ptr ss : [ebp+4], eax
        mov byte ptr ss : [ebp+8], al
        jmp public_6f98fe5
        public_6f98fb0 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ss:[ebp+8]
        jb public_6f98fcb
        mov eax, 0x3F
        public_6f98fcb : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+8], 0
        mov dword ptr ss : [ebp+4], eax
        public_6f98fe5 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        push ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f98f1b
        public_6f98ff8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 4
        UNREACHABLE_TRAP(0x6f98df0)
    }
}

#undef public_6f98e16
#undef public_6f98e2f
#undef public_6f98e3f
#undef public_6f98e44
#undef public_6f98e60
#undef public_6f98e79
#undef public_6f98e86
#undef public_6f98e8c
#undef public_6f98ece
#undef public_6f98efa
#undef public_6f98f05
#undef public_6f98f07
#undef public_6f98f1b
#undef public_6f98f23
#undef public_6f98f68
#undef public_6f98f81
#undef public_6f98f8e
#undef public_6f98f94
#undef public_6f98fb0
#undef public_6f98fcb
#undef public_6f98fe5
#undef public_6f98ff8
