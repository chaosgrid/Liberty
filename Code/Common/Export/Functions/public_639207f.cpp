#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6304880);
CLANG_FORWARD_PROC_SYMBOL(public_6391fd4);

#define public_639209b _public_639209b
#define public_63920a5 _public_63920a5
#define public_63920b7 _public_63920b7
#define public_63920c1 _public_63920c1
#define public_63920c3 _public_63920c3
#define public_63920c7 _public_63920c7
#define public_63920e3 _public_63920e3
#define public_63920ec _public_63920ec
#define public_63920fb _public_63920fb
#define public_6392112 _public_6392112
#define public_6392115 _public_6392115

PROC_DECLARE(0x639207f, internal_639207f, public_639207f);
extern "C" NAKED register_t __cdecl internal_639207f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test esi, esi
        jne public_639209b
        cmp dword ptr ds : [public_658c72c], 0
        jmp public_63920c1
        public_639209b : nop
        cmp esi, 1
        je public_63920a5
        cmp esi, 2
        jne public_63920c7
        public_63920a5 : nop
        mov eax, dword ptr ds : [public_658ea04]
        test eax, eax
        je public_63920b7
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_63920c3
        public_63920b7 : nop
        push edi
        push esi
        push ebx
        call public_6391fd4
        test eax, eax
        public_63920c1 : nop
        jne public_63920c7
        public_63920c3 : nop
        xor eax, eax
        jmp public_6392115
        public_63920c7 : nop
        push edi
        push esi
        push ebx
        call public_6304880
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_63920e3
        test eax, eax
        jne public_6392112
        push edi
        push eax
        push ebx
        call public_6391fd4
        public_63920e3 : nop
        test esi, esi
        je public_63920ec
        cmp esi, 3
        jne public_6392112
        public_63920ec : nop
        push edi
        push esi
        push ebx
        call public_6391fd4
        test eax, eax
        jne public_63920fb
        and dword ptr ss : [ebp+0xC], eax
        public_63920fb : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6392112
        mov eax, dword ptr ds : [public_658ea04]
        test eax, eax
        je public_6392112
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6392112 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6392115 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x639207f)
    }
}

#undef public_639209b
#undef public_63920a5
#undef public_63920b7
#undef public_63920c1
#undef public_63920c3
#undef public_63920c7
#undef public_63920e3
#undef public_63920ec
#undef public_63920fb
#undef public_6392112
#undef public_6392115
