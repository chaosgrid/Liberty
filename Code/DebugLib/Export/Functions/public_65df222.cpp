#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65df222);
CLANG_FORWARD_PROC_SYMBOL(public_65df291);

#define public_65df240 _public_65df240
#define public_65df26a _public_65df26a
#define public_65df286 _public_65df286
#define public_65df289 _public_65df289
#define public_65df28f _public_65df28f

PROC_DECLARE(0x65df222, internal_65df222, public_65df222);
extern "C" NAKED register_t __cdecl internal_65df222()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_65e63e8], ebx
        jne public_65df240
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x61
        jl public_65df28f
        cmp eax, 0x7A
        jg public_65df28f
        sub eax, 0x20
        pop ebx
        ret 
        public_65df240 : nop
        push esi
        mov esi, offset public_65e66c8
        push edi
        push esi
        call dword ptr ds : [public_65e10e4]
        cmp dword ptr ds : [public_65e66c4], ebx
        mov edi, dword ptr ds : [public_65e10fc]
        je public_65df26a
        push esi
        call edi
        push 0x13
        call public_65dceab
        pop ecx
        push 1
        pop ebx
        public_65df26a : nop
        push dword ptr ss : [esp+0x10]
        call public_65df291
        test ebx, ebx
        pop ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_65df286
        push 0x13
        call public_65dcf0c
        pop ecx
        jmp public_65df289
        public_65df286 : nop
        push esi
        call edi
        public_65df289 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        public_65df28f : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65df222)
    }
}

#undef public_65df240
#undef public_65df26a
#undef public_65df286
#undef public_65df289
#undef public_65df28f
