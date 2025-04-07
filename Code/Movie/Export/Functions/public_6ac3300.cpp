#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3300);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3790);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8a90);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8e40);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9d20);
CLANG_FORWARD_PROC_SYMBOL(public_6aca0f0);

#define public_6ac3328 _public_6ac3328
#define public_6ac3335 _public_6ac3335
#define public_6ac33a6 _public_6ac33a6
#define public_6ac33cd _public_6ac33cd
#define public_6ac3402 _public_6ac3402

PROC_DECLARE(0x6ac3300, internal_6ac3300, public_6ac3300);
extern "C" NAKED register_t __cdecl internal_6ac3300()
{
    __asm
    {
        sub esp, 0x204
        push esi
        mov esi, dword ptr ss : [esp+0x214]
        push edi
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        dec eax
        je public_6ac33cd
        dec eax
        je public_6ac33a6
        dec eax
        je public_6ac3335
        public_6ac3328 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x204
        ret 0xC
        public_6ac3335 : nop
        lea eax, ss:[esp+0xC]
        lea edx, ss:[esp+0x10C]
        push eax
        push edx
        lea eax, ds:[ecx+1]
        lea edx, ds:[esi+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x21C]
        push edx
        push ecx
        push eax
        call public_6ac9d20
        test eax, eax
        je public_6ac3328
        lea ecx, ss:[esp+8]
        push 1
        push ecx
        lea edx, ss:[esp+0x14]
        push edi
        push edx
        mov dword ptr ss : [esp+0x18], 1
        call public_6ac8a90
        test eax, eax
        jne public_6ac3328
        mov eax, dword ptr ss : [esp+0x214]
        push esi
        push 1
        lea ecx, ss:[esp+0x114]
        push eax
        push ecx
        call public_6ac3140
        test eax, eax
        je public_6ac3328
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x204
        ret 0xC
        public_6ac33a6 : nop
        mov edx, dword ptr ss : [esp+0x214]
        mov eax, dword ptr ss : [esp+0x210]
        push esi
        push edx
        push eax
        call public_6ac3790
        neg eax
        sbb eax, eax
        pop edi
        neg eax
        pop esi
        add esp, 0x204
        ret 0xC
        public_6ac33cd : nop
        mov esi, dword ptr ds : [esi+0x10]
        push 0
        cmp dword ptr ds : [esi+0x110], 1
        jne public_6ac3402
        mov ecx, dword ptr ss : [esp+0x218]
        mov edx, dword ptr ss : [esp+0x214]
        push ecx
        push esi
        push edx
        call public_6aca0f0
        neg eax
        sbb eax, eax
        pop edi
        neg eax
        pop esi
        add esp, 0x204
        ret 0xC
        public_6ac3402 : nop
        mov ecx, dword ptr ss : [esp+0x218]
        mov edx, dword ptr ss : [esp+0x214]
        lea eax, ss:[esp+0x10]
        push eax
        push 0
        push ecx
        push edi
        push esi
        push edi
        push edx
        call public_6ac8e40
        lea ecx, ss:[esp+8]
        push 1
        push ecx
        lea edx, ss:[esp+0x14]
        push eax
        push edx
        mov dword ptr ss : [esp+0x18], 1
        call public_6ac8a90
        neg eax
        sbb eax, eax
        pop edi
        inc eax
        pop esi
        add esp, 0x204
        ret 0xC
        UNREACHABLE_TRAP(0x6ac3300)
    }
}

#undef public_6ac3328
#undef public_6ac3335
#undef public_6ac33a6
#undef public_6ac33cd
#undef public_6ac3402
