#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24140);

#define public_6f24151 _public_6f24151
#define public_6f24159 _public_6f24159
#define public_6f24164 _public_6f24164

PROC_DECLARE(0x6f24140, internal_6f24140, public_6f24140);
extern "C" NAKED register_t __cdecl internal_6f24140()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6f24164
        push esi
        public_6f24151 : nop
        test eax, eax
        je public_6f24159
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6f24159 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6f24151
        pop esi
        public_6f24164 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f24140)
    }
}

#undef public_6f24151
#undef public_6f24159
#undef public_6f24164
