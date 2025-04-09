#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c120);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_50c163 _public_50c163
#define public_50c17e _public_50c17e

PROC_DECLARE(0x50c120, internal_50c120, public_50c120);
extern "C" NAKED register_t __cdecl internal_50c120()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x20]
        cmp dword ptr ds : [ebx+8], ecx
        push ebp
        jb public_50c17e
        mov eax, dword ptr ds : [ebx+0x1C]
        add eax, ecx
        shl eax, 5
        push eax
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_50c17e
        push esi
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_50c163
        mov ecx, dword ptr ds : [ebx+0x20]
        shl ecx, 5
        mov eax, ecx
        push edi
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        public_50c163 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [ebx+0x1C]
        add esp, 4
        add eax, edx
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+0x20], eax
        pop esi
        public_50c17e : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x50c120)
    }
}

#undef public_50c163
#undef public_50c17e
