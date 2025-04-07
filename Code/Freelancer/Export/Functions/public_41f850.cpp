#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41f850);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_41f875 _public_41f875
#define public_41f892 _public_41f892

PROC_DECLARE(0x41f850, internal_41f850, public_41f850);
extern "C" NAKED register_t __cdecl internal_41f850()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x2C
        mov byte ptr ss : [esp+0x2C], 1
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_41f875
        mov edi, eax
        public_41f875 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_41f892
        mov ecx, 9
        lea esi, ss:[esp+0xC]
        rep movsd
        public_41f892 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x41f850)
    }
}

#undef public_41f875
#undef public_41f892
