#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac5050);
CLANG_FORWARD_PROC_SYMBOL(public_6ac52f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac54d0);

#define public_6ac5333 _public_6ac5333
#define public_6ac5337 _public_6ac5337
#define public_6ac535c _public_6ac535c
#define public_6ac5360 _public_6ac5360
#define public_6ac538b _public_6ac538b
#define public_6ac53a7 _public_6ac53a7
#define public_6ac53cc _public_6ac53cc
#define public_6ac53ec _public_6ac53ec
#define public_6ac53f0 _public_6ac53f0
#define public_6ac545a _public_6ac545a
#define public_6ac549b _public_6ac549b
#define public_6ac54b5 _public_6ac54b5

PROC_DECLARE(0x6ac52f0, internal_6ac52f0, public_6ac52f0);
extern "C" NAKED register_t __cdecl internal_6ac52f0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x2C]
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x10], ebp
        test eax, eax
        mov ebx, eax
        jbe public_6ac5333
        mov ecx, dword ptr ds : [edi+eax*4-4]
        mov edx, dword ptr ss : [esp+0x30]
        cmp ecx, edx
        jae public_6ac5333
        mov esi, dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ds : [edi+eax*4-4]
        lea ebx, ds:[eax-1]
        mov dword ptr ss : [esp+0x10], ebp
        test esi, esi
        je public_6ac5337
        mov dword ptr ds : [esi+ebx*4], 0
        jmp public_6ac5337
        public_6ac5333 : nop
        mov esi, dword ptr ss : [esp+0x38]
        public_6ac5337 : nop
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        jne public_6ac53a7
        cmp ebx, 2
        jae public_6ac53a7
        lea eax, ds:[ebx-1]
        cmp eax, 0xFFFFFFFF
        je public_6ac54b5
        lea ebx, ds:[esi+eax*4]
        sub edi, esi
        inc eax
        mov dword ptr ss : [esp+0x38], eax
        jmp public_6ac5360
        public_6ac535c : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6ac5360 : nop
        mov eax, dword ptr ds : [edi+ebx]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x28], 0
        push ecx
        push edx
        push ebp
        push eax
        call public_6ac5050
        test esi, esi
        je public_6ac538b
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ebx], eax
        public_6ac538b : nop
        mov eax, dword ptr ss : [esp+0x38]
        sub ebx, 4
        dec eax
        mov dword ptr ss : [esp+0x38], eax
        jne public_6ac535c
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x14
        public_6ac53a7 : nop
        test eax, eax
        mov dword ptr ss : [esp+0x2C], eax
        jne public_6ac53cc
        lea ecx, ss:[esp+0x20]
        lea edx, ss:[esp+0x30]
        push ecx
        push 1
        push edx
        call public_6ac54d0
        mov ebp, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x2C], eax
        public_6ac53cc : nop
        dec ebx
        cmp ebx, 0xFFFFFFFF
        je public_6ac54b5
        mov eax, edi
        lea ecx, ds:[esi+ebx*4]
        sub eax, esi
        inc ebx
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x34], ebx
        jmp public_6ac53f0
        public_6ac53ec : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6ac53f0 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov edi, ebp
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov ebx, dword ptr ds : [edx+eax]
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, 0x1F
        mov esi, ebx
        mov eax, dword ptr ds : [eax+4]
        sub edx, eax
        shr esi, 1
        mov ecx, edx
        shr esi, cl
        mov ecx, eax
        xor eax, eax
        shl edi, cl
        or esi, edi
        mov edi, ebx
        shl edi, cl
        mov ecx, edx
        shr eax, cl
        or edi, eax
        mov dword ptr ss : [esp+0x18], esi
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        mov eax, dword ptr ss : [esp+0x14]
        mul dword ptr ss : [esp+0x18]
        add eax, edi
        adc edx, esi
        test edi, 0x80000000
        je public_6ac545a
        shr ecx, 1
        add eax, ecx
        adc edx, 0
        public_6ac545a : nop
        mov edi, dword ptr ss : [esp+0x30]
        or ecx, 0xFFFFFFFF
        mov esi, ebp
        sub ecx, edx
        mov dword ptr ss : [esp+0x1C], 0
        sub esi, edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edi
        mov eax, dword ptr ss : [esp+0x18]
        mul dword ptr ss : [esp+0x14]
        add eax, ebx
        adc edx, esi
        mov esi, edx
        and esi, edi
        add esi, eax
        mov eax, dword ptr ss : [esp+0x38]
        test eax, eax
        mov ebp, esi
        je public_6ac549b
        mov eax, dword ptr ss : [esp+0x3C]
        sub edx, ecx
        mov dword ptr ds : [eax], edx
        public_6ac549b : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x34]
        sub ecx, 4
        dec eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x34], eax
        jne public_6ac53ec
        public_6ac54b5 : nop
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x14
        UNREACHABLE_TRAP(0x6ac52f0)
    }
}

#undef public_6ac5333
#undef public_6ac5337
#undef public_6ac535c
#undef public_6ac5360
#undef public_6ac538b
#undef public_6ac53a7
#undef public_6ac53cc
#undef public_6ac53ec
#undef public_6ac53f0
#undef public_6ac545a
#undef public_6ac549b
#undef public_6ac54b5
