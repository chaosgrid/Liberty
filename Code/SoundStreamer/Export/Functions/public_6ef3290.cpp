#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1120);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3910);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3930);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);

#define public_6ef32d0 _public_6ef32d0
#define public_6ef32db _public_6ef32db
#define public_6ef3312 _public_6ef3312
#define public_6ef3321 _public_6ef3321
#define public_6ef332d _public_6ef332d
#define public_6ef3340 _public_6ef3340
#define public_6ef3350 _public_6ef3350
#define public_6ef335b _public_6ef335b
#define public_6ef3394 _public_6ef3394
#define public_6ef33ae _public_6ef33ae
#define public_6ef33c0 _public_6ef33c0
#define public_6ef33cc _public_6ef33cc
#define public_6ef33d0 _public_6ef33d0
#define public_6ef33e7 _public_6ef33e7

PROC_DECLARE(0x6ef3290, internal_6ef3290, public_6ef3290);
extern "C" NAKED register_t __cdecl internal_6ef3290()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        test ebp, ebp
        je public_6ef33e7
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+0x60]
        test eax, eax
        je public_6ef33e7
        mov eax, dword ptr ds : [ebx]
        push esi
        push edi
        push ebp
        push ebx
        call dword ptr ds : [eax+0x18]
        lea eax, ds:[ebx+0x20]
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6efc050]
        mov eax, dword ptr ds : [ebx+0x40]
        mov esi, dword ptr ds : [ebx+0x3C]
        cmp esi, eax
        je public_6ef3340
        mov edi, edi
        public_6ef32d0 : nop
        cmp dword ptr ds : [esi], ebp
        je public_6ef32db
        add esi, 4
        cmp esi, eax
        jne public_6ef32d0
        public_6ef32db : nop
        cmp esi, eax
        je public_6ef3340
        mov edi, dword ptr ds : [esi]
        test edi, edi
        je public_6ef3312
        mov ecx, edi
        call public_6ef1120
        lea ecx, ds:[edi+0xB8]
        call public_6ef3910
        lea ecx, ds:[edi+0xA8]
        call public_6ef3ea0
        mov ecx, edi
        call public_6ef3ec0
        push edi
        call public_6ef4507
        add esp, 4
        public_6ef3312 : nop
        mov ecx, dword ptr ds : [ebx+0x40]
        lea edi, ds:[ebx+0x38]
        lea eax, ds:[esi+4]
        cmp eax, ecx
        je public_6ef332d
        sub esi, eax
        public_6ef3321 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6ef3321
        public_6ef332d : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, edi
        call public_6ef3930
        add dword ptr ds : [edi+8], 0xFFFFFFFC
        public_6ef3340 : nop
        mov eax, dword ptr ds : [ebx+0x50]
        mov esi, dword ptr ds : [ebx+0x4C]
        cmp esi, eax
        je public_6ef33d0
        mov edi, edi
        public_6ef3350 : nop
        cmp dword ptr ds : [esi], ebp
        je public_6ef335b
        add esi, 4
        cmp esi, eax
        jne public_6ef3350
        public_6ef335b : nop
        cmp esi, eax
        je public_6ef33d0
        mov edi, dword ptr ds : [esi]
        test edi, edi
        je public_6ef33ae
        mov ecx, edi
        call public_6ef1120
        lea ecx, ds:[edi+0xB8]
        call public_6ef3910
        mov eax, dword ptr ds : [edi+0xA8]
        test eax, eax
        je public_6ef3394
        push eax
        call public_6ef4512
        add esp, 4
        mov dword ptr ds : [edi+0xA8], 0
        public_6ef3394 : nop
        lea ecx, ds:[edi+0x10]
        call public_6ef3910
        push 1
        mov ecx, edi
        call public_6ef2800
        push edi
        call public_6ef4507
        add esp, 4
        public_6ef33ae : nop
        mov ecx, dword ptr ds : [ebx+0x50]
        lea eax, ds:[esi+4]
        cmp eax, ecx
        je public_6ef33cc
        sub esi, eax
        lea ebx, ds:[ebx]
        public_6ef33c0 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6ef33c0
        public_6ef33cc : nop
        add dword ptr ds : [ebx+0x50], 0xFFFFFFFC
        public_6ef33d0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [public_6efc04c]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_6ef33e7 : nop
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ef3290)
    }
}

#undef public_6ef32d0
#undef public_6ef32db
#undef public_6ef3312
#undef public_6ef3321
#undef public_6ef332d
#undef public_6ef3340
#undef public_6ef3350
#undef public_6ef335b
#undef public_6ef3394
#undef public_6ef33ae
#undef public_6ef33c0
#undef public_6ef33cc
#undef public_6ef33d0
#undef public_6ef33e7
