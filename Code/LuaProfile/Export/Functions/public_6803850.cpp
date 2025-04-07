#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803850);

#define public_680385b _public_680385b
#define public_6803868 _public_6803868
#define public_680387d _public_680387d
#define public_6803884 _public_6803884

PROC_DECLARE(0x6803850, internal_6803850, public_6803850);
extern "C" NAKED register_t __cdecl internal_6803850()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        test edx, edx
        je public_6803884
        push edi
        public_680385b : nop
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        mov dword ptr ds : [edx+4], 0
        je public_680387d
        public_6803868 : nop
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        jne public_680387d
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        jne public_6803868
        public_680387d : nop
        test ecx, ecx
        mov edx, ecx
        jne public_680385b
        pop edi
        public_6803884 : nop
        ret 
        UNREACHABLE_TRAP(0x6803850)
    }
}

#undef public_680385b
#undef public_6803868
#undef public_680387d
#undef public_6803884
