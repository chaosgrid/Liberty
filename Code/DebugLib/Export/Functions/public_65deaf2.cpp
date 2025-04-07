#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd7c7);
CLANG_FORWARD_PROC_SYMBOL(public_65dd819);
CLANG_FORWARD_PROC_SYMBOL(public_65dea5f);
CLANG_FORWARD_PROC_SYMBOL(public_65deaf2);

#define public_65deb0b _public_65deb0b
#define public_65deb4c _public_65deb4c
#define public_65deb66 _public_65deb66
#define public_65deb76 _public_65deb76
#define public_65deb7f _public_65deb7f
#define public_65deb92 _public_65deb92

PROC_DECLARE(0x65deaf2, internal_65deaf2, public_65deaf2);
extern "C" NAKED register_t __cdecl internal_65deaf2()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 2
        xor ebx, ebx
        xor edi, edi
        call public_65dceab
        xor esi, esi
        pop ecx
        cmp dword ptr ds : [public_65e7900], esi
        jle public_65deb7f
        public_65deb0b : nop
        mov eax, dword ptr ds : [public_65e68e8]
        mov eax, dword ptr ds : [eax+esi*4]
        test eax, eax
        je public_65deb76
        test byte ptr ds : [eax+0xC], 0x83
        je public_65deb76
        push eax
        push esi
        call public_65dd7c7
        mov eax, dword ptr ds : [public_65e68e8]
        pop ecx
        pop ecx
        mov eax, dword ptr ds : [eax+esi*4]
        mov ecx, dword ptr ds : [eax+0xC]
        test cl, 0x83
        je public_65deb66
        cmp dword ptr ss : [esp+0x10], 1
        jne public_65deb4c
        push eax
        call public_65dea5f
        cmp eax, 0xFFFFFFFF
        pop ecx
        je public_65deb66
        inc ebx
        jmp public_65deb66
        public_65deb4c : nop
        cmp dword ptr ss : [esp+0x10], 0
        jne public_65deb66
        test cl, 2
        je public_65deb66
        push eax
        call public_65dea5f
        cmp eax, 0xFFFFFFFF
        pop ecx
        jne public_65deb66
        or edi, eax
        public_65deb66 : nop
        mov eax, dword ptr ds : [public_65e68e8]
        push dword ptr ds : [eax+esi*4]
        push esi
        call public_65dd819
        pop ecx
        pop ecx
        public_65deb76 : nop
        inc esi
        cmp esi, dword ptr ds : [public_65e7900]
        jl public_65deb0b
        public_65deb7f : nop
        push 2
        call public_65dcf0c
        cmp dword ptr ss : [esp+0x14], 1
        pop ecx
        mov eax, ebx
        je public_65deb92
        mov eax, edi
        public_65deb92 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65deaf2)
    }
}

#undef public_65deb0b
#undef public_65deb4c
#undef public_65deb66
#undef public_65deb76
#undef public_65deb7f
#undef public_65deb92
