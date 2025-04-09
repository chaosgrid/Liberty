#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405a00);
CLANG_FORWARD_PROC_SYMBOL(public_45a1a0);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4e6ec0);
CLANG_FORWARD_PROC_SYMBOL(public_548eb0);
CLANG_FORWARD_PROC_SYMBOL(public_561f20);

#define public_4e6f50 _public_4e6f50
#define public_4e6f90 _public_4e6f90
#define public_4e6fd9 _public_4e6fd9
#define public_4e6fdd _public_4e6fdd
#define public_4e7007 _public_4e7007
#define public_4e700b _public_4e700b
#define public_4e704a _public_4e704a
#define public_4e7062 _public_4e7062

PROC_DECLARE(0x4e6ec0, internal_4e6ec0, public_4e6ec0);
extern "C" NAKED register_t __cdecl internal_4e6ec0()
{
    __asm
    {
        sub esp, 0x24
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x398]
        test eax, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_4e7062
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e7062
        add eax, 0xC
        test eax, eax
        je public_4e7062
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_4e7062
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_4e7062
        mov ecx, dword ptr ds : [esi+0xB0]
        push ecx
        call public_548eb0
        add esp, 4
        push 0x1FE0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c64f4]
        lea edx, ss:[esp+0x20]
        lea edi, ds:[esi+0xE4]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_5c64f0]
        mov esi, eax
        test esi, esi
        je public_4e7062
        push ebx
        lea ebx, ds:[ebx]
        public_4e6f50 : nop
        mov ebx, dword ptr ds : [public_679b98]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [eax+0x44]
        fsubr dword ptr ds : [public_5c75dc]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4e6f90
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_45a1a0
        mov ebx, dword ptr ds : [eax]
        add esp, 8
        mov dword ptr ss : [esp+0x10], ebx
        public_4e6f90 : nop
        push esi
        call dword ptr ds : [public_5c6538]
        add esp, 4
        test eax, eax
        je public_4e6fdd
        push esi
        call dword ptr ds : [public_5c6544]
        add esp, 4
        test eax, eax
        je public_4e6fdd
        mov ecx, eax
        call dword ptr ds : [public_5c659c]
        test eax, eax
        je public_4e6fdd
        mov cl, byte ptr ds : [eax+0xBA]
        test cl, cl
        jne public_4e6fdd
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        mov ebx, dword ptr ds : [public_679ba4]
        jne public_4e6fd9
        mov ebx, dword ptr ds : [public_679bb4]
        public_4e6fd9 : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_4e6fdd : nop
        mov cx, word ptr ss : [ebp+0x3B4]
        cmp cx, word ptr ds : [esi+8]
        jne public_4e700b
        call public_45a740
        test al, al
        jne public_4e7007
        lea edx, ss:[esp+0x20]
        push ebx
        push edx
        call public_561f20
        mov ebx, dword ptr ds : [eax]
        add esp, 8
        mov dword ptr ss : [esp+0x10], ebx
        public_4e7007 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_4e700b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        cmp eax, 0xFFFFFFFF
        je public_4e704a
        mov cx, word ptr ss : [esp+0x12]
        xor edx, edx
        mov dl, ch
        movzx esi, bl
        movzx ecx, cl
        shl edx, 8
        or edx, esi
        shl edx, 8
        movzx esi, bh
        or edx, esi
        shl edx, 8
        or edx, ecx
        push edx
        push 1
        push eax
        lea ecx, ss:[ebp+0x3A0]
        call public_405a00
        public_4e704a : nop
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_5c64f0]
        mov esi, eax
        test esi, esi
        jne public_4e6f50
        pop ebx
        public_4e7062 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x4e6ec0)
    }
}

#undef public_4e6f50
#undef public_4e6f90
#undef public_4e6fd9
#undef public_4e6fdd
#undef public_4e7007
#undef public_4e700b
#undef public_4e704a
#undef public_4e7062
