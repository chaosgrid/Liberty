#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec250);

#define public_6eec280 _public_6eec280
#define public_6eec29e _public_6eec29e

PROC_DECLARE(0x6eec250, internal_6eec250, public_6eec250);
extern "C" NAKED register_t __cdecl internal_6eec250()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        mov ebx, ecx
        je public_6eec29e
        mov eax, dword ptr ds : [ebx]
        push ebp
        mov edx, 0x40
        sub edx, eax
        or ecx, 0xFFFFFFFF
        push edi
        lea ebp, ds:[eax+ebx+4]
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, edx
        jb public_6eec280
        lea eax, ds:[edx-1]
        public_6eec280 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        mov ecx, dword ptr ds : [ebx]
        add ecx, eax
        pop edi
        mov dword ptr ds : [ebx], ecx
        pop ebp
        public_6eec29e : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eec250)
    }
}

#undef public_6eec280
#undef public_6eec29e
