#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627ca30 _public_627ca30
#define public_627ca39 _public_627ca39
#define public_627ca3b _public_627ca3b
#define public_627ca50 _public_627ca50
#define public_627ca57 _public_627ca57
#define public_627ca6a _public_627ca6a
#define public_627ca73 _public_627ca73
#define public_627ca77 _public_627ca77

PROC_DECLARE(0x627ca20, internal_627ca20, public_627ca20);
extern "C" NAKED register_t __cdecl internal_627ca20()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov edi, ecx
        xor esi, esi
        lea esp, ss:[esp]
        public_627ca30 : nop
        cmp esi, ebx
        jne public_627ca39
        mov esi, dword ptr ds : [edi+4]
        jmp public_627ca3b
        public_627ca39 : nop
        mov esi, dword ptr ds : [esi]
        public_627ca3b : nop
        cmp esi, ebx
        je public_627ca50
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_62fd570
        add esp, 4
        mov dword ptr ds : [esi+8], ebx
        jmp public_627ca30
        public_627ca50 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_627ca77
        public_627ca57 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_627ca6a
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_627ca73
        public_627ca6a : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627ca73 : nop
        cmp esi, ebx
        jne public_627ca57
        public_627ca77 : nop
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x627ca20)
    }
}

#undef public_627ca30
#undef public_627ca39
#undef public_627ca3b
#undef public_627ca50
#undef public_627ca57
#undef public_627ca6a
#undef public_627ca73
#undef public_627ca77
