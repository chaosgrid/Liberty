#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac36d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8b30);

#define public_6ac3701 _public_6ac3701
#define public_6ac3712 _public_6ac3712
#define public_6ac371a _public_6ac371a
#define public_6ac374d _public_6ac374d
#define public_6ac3762 _public_6ac3762

PROC_DECLARE(0x6ac36d0, internal_6ac36d0, public_6ac36d0);
extern "C" NAKED register_t __cdecl internal_6ac36d0()
{
    __asm
    {
        sub esp, 0x204
        mov eax, dword ptr ss : [esp+0x214]
        push ebp
        push esi
        mov dword ptr ss : [esp+8], 1
        mov ecx, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        cmp ecx, 2
        je public_6ac3701
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x204
        ret 0x10
        public_6ac3701 : nop
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x21C]
        test edi, edi
        jl public_6ac3712
        cmp edi, ebp
        jle public_6ac371a
        public_6ac3712 : nop
        mov dword ptr ss : [esp+0x10], 0
        public_6ac371a : nop
        mov ebx, dword ptr ss : [esp+0x218]
        lea eax, ss:[esp+0x114]
        push esi
        push eax
        push edi
        push ebx
        call public_6ac8b30
        lea ecx, ss:[esp+0x14]
        push esi
        sub edi, ebp
        push ecx
        push edi
        push ebx
        call public_6ac8b30
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x220]
        test esi, esi
        je public_6ac3762
        public_6ac374d : nop
        mov edx, dword ptr ss : [esp+eax*4+0x14]
        mov ebx, dword ptr ss : [esp+eax*4+0x114]
        or edx, ebx
        mov dword ptr ds : [ecx+eax*4], edx
        inc eax
        cmp eax, esi
        jne public_6ac374d
        public_6ac3762 : nop
        mov eax, dword ptr ss : [esp+0x224]
        pop edi
        pop ebx
        mov edx, dword ptr ds : [eax+0x128]
        mov eax, dword ptr ds : [ecx+esi*4-4]
        and eax, edx
        mov dword ptr ds : [ecx+esi*4-4], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebp
        add esp, 0x204
        ret 0x10
        UNREACHABLE_TRAP(0x6ac36d0)
    }
}

#undef public_6ac3701
#undef public_6ac3712
#undef public_6ac371a
#undef public_6ac374d
#undef public_6ac3762
