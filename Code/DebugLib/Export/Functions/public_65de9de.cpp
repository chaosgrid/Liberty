#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65de9de);
CLANG_FORWARD_PROC_SYMBOL(public_65df35d);

#define public_65de9f6 _public_65de9f6
#define public_65dea1a _public_65dea1a
#define public_65dea48 _public_65dea48
#define public_65dea52 _public_65dea52

PROC_DECLARE(0x65de9de, internal_65de9de, public_65de9de);
extern "C" NAKED register_t __cdecl internal_65de9de()
{
    __asm
    {
        push ebx
        push edi
        push 2
        xor ebx, ebx
        call public_65dceab
        pop ecx
        push 3
        pop edi
        cmp dword ptr ds : [public_65e7900], edi
        jle public_65dea52
        push esi
        public_65de9f6 : nop
        mov eax, dword ptr ds : [public_65e68e8]
        mov esi, edi
        shl esi, 2
        mov eax, dword ptr ds : [esi+eax]
        test eax, eax
        je public_65dea48
        test byte ptr ds : [eax+0xC], 0x83
        je public_65dea1a
        push eax
        call public_65df35d
        cmp eax, 0xFFFFFFFF
        pop ecx
        je public_65dea1a
        inc ebx
        public_65dea1a : nop
        cmp edi, 0x14
        jl public_65dea48
        mov eax, dword ptr ds : [public_65e68e8]
        mov eax, dword ptr ds : [esi+eax]
        add eax, 0x20
        push eax
        call dword ptr ds : [public_65e10a8]
        mov eax, dword ptr ds : [public_65e68e8]
        push dword ptr ds : [esi+eax]
        call public_65d7f23
        mov eax, dword ptr ds : [public_65e68e8]
        pop ecx
        and dword ptr ds : [esi+eax], 0
        public_65dea48 : nop
        inc edi
        cmp edi, dword ptr ds : [public_65e7900]
        jl public_65de9f6
        pop esi
        public_65dea52 : nop
        push 2
        call public_65dcf0c
        pop ecx
        mov eax, ebx
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65de9de)
    }
}

#undef public_65de9f6
#undef public_65dea1a
#undef public_65dea48
#undef public_65dea52
