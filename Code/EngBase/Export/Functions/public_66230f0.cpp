#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66230f0);

#define public_6623105 _public_6623105
#define public_6623128 _public_6623128

PROC_DECLARE(0x66230f0, internal_66230f0, public_66230f0);
extern "C" NAKED register_t __cdecl internal_66230f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [eax+8]
        cmp edx, ebp
        je public_6623128
        push esi
        push edi
        public_6623105 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x48
        mov ecx, 0x12
        add ebx, 0x48
        cmp edx, ebp
        rep movsd
        jne public_6623105
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 8
        public_6623128 : nop
        mov dword ptr ds : [eax+8], ebx
        mov eax, ebx
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66230f0)
    }
}

#undef public_6623105
#undef public_6623128
