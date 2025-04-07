#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5220);

#define public_6ec5235 _public_6ec5235
#define public_6ec5258 _public_6ec5258

PROC_DECLARE(0x6ec5220, internal_6ec5220, public_6ec5220);
extern "C" NAKED register_t __cdecl internal_6ec5220()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, ecx
        push ebp
        mov ebp, dword ptr ds : [eax+8]
        cmp edx, ebp
        je public_6ec5258
        push esi
        push edi
        public_6ec5235 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x34
        mov ecx, 0xD
        add ebx, 0x34
        cmp edx, ebp
        rep movsd
        jne public_6ec5235
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 8
        public_6ec5258 : nop
        mov dword ptr ds : [eax+8], ebx
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec5220)
    }
}

#undef public_6ec5235
#undef public_6ec5258
