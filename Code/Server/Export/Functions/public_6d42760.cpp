#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42760);

#define public_6d42775 _public_6d42775
#define public_6d42798 _public_6d42798

PROC_DECLARE(0x6d42760, internal_6d42760, public_6d42760);
extern "C" NAKED register_t __cdecl internal_6d42760()
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
        je public_6d42798
        push esi
        push edi
        public_6d42775 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x20
        mov ecx, 8
        add ebx, 0x20
        cmp edx, ebp
        rep movsd
        jne public_6d42775
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 8
        public_6d42798 : nop
        mov dword ptr ds : [eax+8], ebx
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d42760)
    }
}

#undef public_6d42775
#undef public_6d42798
