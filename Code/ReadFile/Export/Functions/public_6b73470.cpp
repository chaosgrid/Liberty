#include "ReadFile-PCH.h"


#define public_6b734a3 _public_6b734a3
#define public_6b734ad _public_6b734ad
#define public_6b734db _public_6b734db
#define public_6b734e6 _public_6b734e6

PROC_DECLARE(0x6b73470, internal_6b73470, public_6b73470);
extern "C" NAKED register_t __cdecl internal_6b73470()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [ebp+0x234]
        test eax, eax
        je public_6b734e6
        mov eax, dword ptr ss : [ebp+0x124]
        push esi
        push edi
        or ecx, 0xFFFFFFFF
        lea esi, ds:[eax+ebp+0x20]
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 2
        ja public_6b734a3
        mov eax, 2
        public_6b734a3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        jb public_6b734ad
        mov eax, ecx
        public_6b734ad : nop
        test eax, eax
        jbe public_6b734db
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, eax
        push ebx
        mov ebx, ecx
        mov edi, edx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        pop ebx
        and ecx, 3
        dec eax
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        pop edi
        mov dword ptr ss : [ebp+0x1C], 0
        pop esi
        pop ebp
        ret 0xC
        public_6b734db : nop
        xor eax, eax
        pop edi
        mov dword ptr ss : [ebp+0x1C], eax
        pop esi
        pop ebp
        ret 0xC
        public_6b734e6 : nop
        mov dword ptr ss : [ebp+0x1C], 5
        xor eax, eax
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6b73470)
    }
}

#undef public_6b734a3
#undef public_6b734ad
#undef public_6b734db
#undef public_6b734e6
