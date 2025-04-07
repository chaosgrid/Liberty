#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d03cf0);

#define public_6d03d14 _public_6d03d14
#define public_6d03d30 _public_6d03d30

PROC_DECLARE(0x6d03cf0, internal_6d03cf0, public_6d03cf0);
extern "C" NAKED register_t __cdecl internal_6d03cf0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        xor eax, eax
        test esi, esi
        je public_6d03d30
        or ecx, 0xFFFFFFFF
        push ebx
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        jb public_6d03d14
        lea eax, ds:[ecx-1]
        public_6d03d14 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+edx], 0
        pop ebx
        public_6d03d30 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d03cf0)
    }
}

#undef public_6d03d14
#undef public_6d03d30
