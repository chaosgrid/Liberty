#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_46ed19 _public_46ed19
#define public_46ed34 _public_46ed34

PROC_DECLARE(0x46ecd0, internal_46ecd0, public_46ecd0);
extern "C" NAKED register_t __cdecl internal_46ecd0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x20]
        cmp dword ptr ds : [ebx+8], ecx
        push ebp
        jb public_46ed34
        mov eax, dword ptr ds : [ebx+0x1C]
        add eax, ecx
        lea eax, ds:[eax+eax*2]
        shl eax, 3
        push eax
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_46ed34
        push esi
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_46ed19
        mov eax, dword ptr ds : [ebx+0x20]
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        mov edx, ecx
        push edi
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        public_46ed19 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+0x20]
        mov ecx, dword ptr ds : [ebx+0x1C]
        add esp, 4
        add eax, ecx
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+0x20], eax
        pop esi
        public_46ed34 : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x46ecd0)
    }
}

#undef public_46ed19
#undef public_46ed34
