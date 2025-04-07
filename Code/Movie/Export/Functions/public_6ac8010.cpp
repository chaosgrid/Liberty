#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac30a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7e60);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8010);

#define public_6ac804c _public_6ac804c
#define public_6ac80cb _public_6ac80cb
#define public_6ac80da _public_6ac80da
#define public_6ac815f _public_6ac815f

PROC_DECLARE(0x6ac8010, internal_6ac8010, public_6ac8010);
extern "C" NAKED register_t __cdecl internal_6ac8010()
{
    __asm
    {
        sub esp, 0x200
        push ebx
        mov ebx, dword ptr ss : [esp+0x20C]
        push ebp
        push esi
        mov esi, dword ptr ds : [ebx]
        push edi
        mov edi, dword ptr ss : [esp+0x214]
        push ebx
        mov eax, dword ptr ds : [esi]
        push edi
        lea ebp, ds:[edi+eax*4]
        call public_6ac7e60
        test eax, eax
        je public_6ac804c
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x200
        ret 8
        public_6ac804c : nop
        lea ecx, ss:[esp+0x10]
        push esi
        push ecx
        push edi
        push edi
        call public_6ac3490
        mov ecx, dword ptr ds : [esi+8]
        neg eax
        sbb eax, eax
        neg eax
        cmp ecx, 1
        jne public_6ac80da
        test eax, eax
        je public_6ac80cb
        lea edx, ss:[esp+0x10]
        push esi
        lea eax, ds:[ebx+4]
        push edx
        lea ecx, ss:[esp+0x18]
        push eax
        push ecx
        call public_6ac30a0
        test eax, eax
        je public_6ac80cb
        lea edx, ss:[esp+0x10]
        push esi
        lea eax, ss:[esp+0x14]
        push edx
        push eax
        push edi
        call public_6ac3490
        test eax, eax
        je public_6ac80cb
        lea ecx, ss:[esp+0x10]
        push esi
        add ebx, 0x104
        push ecx
        lea edx, ss:[esp+0x18]
        push ebx
        push edx
        call public_6ac30a0
        test eax, eax
        je public_6ac80cb
        lea eax, ss:[esp+0x110]
        push esi
        push eax
        push ebp
        push ebp
        call public_6ac3490
        test eax, eax
        jne public_6ac815f
        public_6ac80cb : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x200
        ret 8
        public_6ac80da : nop
        test eax, eax
        je public_6ac80cb
        lea ecx, ss:[esp+0x110]
        push esi
        lea edx, ds:[ebx+4]
        push ecx
        push edx
        push edi
        call public_6ac30a0
        test eax, eax
        je public_6ac80cb
        lea eax, ss:[esp+0x10]
        push esi
        lea ecx, ss:[esp+0x114]
        push eax
        lea edx, ss:[esp+0x18]
        push ecx
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac80cb
        lea eax, ss:[esp+0x10]
        push esi
        add ebx, 0x104
        push eax
        lea ecx, ss:[esp+0x18]
        push ebx
        push ecx
        call public_6ac30a0
        test eax, eax
        je public_6ac80cb
        lea edx, ss:[esp+0x110]
        push esi
        push edx
        push edi
        push ebp
        call public_6ac30a0
        test eax, eax
        je public_6ac80cb
        lea eax, ss:[esp+0x110]
        push esi
        lea ecx, ss:[esp+0x114]
        push eax
        push ecx
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac80cb
        public_6ac815f : nop
        lea edx, ss:[esp+0x110]
        push esi
        lea eax, ss:[esp+0x14]
        push edx
        push eax
        call public_6ac31d0
        test eax, eax
        je public_6ac80cb
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x200
        ret 8
        UNREACHABLE_TRAP(0x6ac8010)
    }
}

#undef public_6ac804c
#undef public_6ac80cb
#undef public_6ac80da
#undef public_6ac815f
