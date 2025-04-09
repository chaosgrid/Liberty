#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4ced00 _public_4ced00
#define public_4ced09 _public_4ced09
#define public_4ced0b _public_4ced0b
#define public_4ced20 _public_4ced20
#define public_4ced27 _public_4ced27
#define public_4ced3a _public_4ced3a
#define public_4ced43 _public_4ced43
#define public_4ced47 _public_4ced47

PROC_DECLARE(0x4cecf0, internal_4cecf0, public_4cecf0);
extern "C" NAKED register_t __cdecl internal_4cecf0()
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
        public_4ced00 : nop
        cmp esi, ebx
        jne public_4ced09
        mov esi, dword ptr ds : [edi+4]
        jmp public_4ced0b
        public_4ced09 : nop
        mov esi, dword ptr ds : [esi]
        public_4ced0b : nop
        cmp esi, ebx
        je public_4ced20
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+8], ebx
        jmp public_4ced00
        public_4ced20 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_4ced47
        public_4ced27 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_4ced3a
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_4ced43
        public_4ced3a : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4ced43 : nop
        cmp esi, ebx
        jne public_4ced27
        public_4ced47 : nop
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4cecf0)
    }
}

#undef public_4ced00
#undef public_4ced09
#undef public_4ced0b
#undef public_4ced20
#undef public_4ced27
#undef public_4ced3a
#undef public_4ced43
#undef public_4ced47
