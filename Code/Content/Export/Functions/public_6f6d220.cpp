#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6d220);

#define public_6f6d236 _public_6f6d236
#define public_6f6d241 _public_6f6d241
#define public_6f6d243 _public_6f6d243
#define public_6f6d250 _public_6f6d250
#define public_6f6d262 _public_6f6d262
#define public_6f6d26b _public_6f6d26b
#define public_6f6d26d _public_6f6d26d

PROC_DECLARE(0x6f6d220, internal_6f6d220, public_6f6d220);
extern "C" NAKED register_t __cdecl internal_6f6d220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd1cc0]
        mov ecx, dword ptr ds : [public_6fd1cc4]
        cmp eax, ecx
        push esi
        je public_6f6d241
        mov edx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edx]
        public_6f6d236 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d26d
        add eax, 4
        cmp eax, ecx
        jne public_6f6d236
        public_6f6d241 : nop
        mov edx, ecx
        public_6f6d243 : nop
        cmp edx, ecx
        je public_6f6d26b
        lea eax, ds:[edx+4]
        cmp eax, ecx
        je public_6f6d262
        sub edx, eax
        public_6f6d250 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6f6d250
        mov ecx, dword ptr ds : [public_6fd1cc4]
        public_6f6d262 : nop
        sub ecx, 4
        mov dword ptr ds : [public_6fd1cc4], ecx
        public_6f6d26b : nop
        pop esi
        ret 
        public_6f6d26d : nop
        mov edx, eax
        jmp public_6f6d243
        UNREACHABLE_TRAP(0x6f6d220)
    }
}

#undef public_6f6d236
#undef public_6f6d241
#undef public_6f6d243
#undef public_6f6d250
#undef public_6f6d262
#undef public_6f6d26b
#undef public_6f6d26d
