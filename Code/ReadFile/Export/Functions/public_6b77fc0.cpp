#include "ReadFile-PCH.h"


#define public_6b77feb _public_6b77feb
#define public_6b78010 _public_6b78010

PROC_DECLARE(0x6b77fc0, internal_6b77fc0, public_6b77fc0);
extern "C" NAKED register_t __cdecl internal_6b77fc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        or ecx, 0xFFFFFFFF
        lea esi, ds:[eax+4]
        xor eax, eax
        mov edi, esi
        repne scasb
        mov eax, dword ptr ss : [esp+0x14]
        not ecx
        cmp eax, ecx
        jb public_6b77feb
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        inc eax
        public_6b77feb : nop
        test eax, eax
        jbe public_6b78010
        mov edx, dword ptr ss : [esp+0x10]
        test edx, edx
        je public_6b78010
        mov ecx, eax
        push ebx
        mov ebx, ecx
        mov edi, edx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        pop ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [edx+eax-1], 0
        public_6b78010 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6b77fc0)
    }
}

#undef public_6b77feb
#undef public_6b78010
