#include "Common-PCH.h"


#define public_62610bc _public_62610bc
#define public_62610da _public_62610da

PROC_DECLARE(0x62610a0, internal_62610a0, public_62610a0);
extern "C" NAKED register_t __cdecl internal_62610a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        lea esi, ds:[eax+8]
        xor eax, eax
        cmp esi, eax
        mov edx, ecx
        jne public_62610bc
        mov byte ptr ds : [edx+8], al
        mov dword ptr ds : [edx+4], eax
        mov eax, edx
        pop esi
        ret 4
        public_62610bc : nop
        push ebx
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea ebp, ds:[edx+8]
        jb public_62610da
        mov eax, 0x3F
        public_62610da : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp], 0
        pop ebp
        pop ebx
        mov dword ptr ds : [edx+4], eax
        mov eax, edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62610a0)
    }
}

#undef public_62610bc
#undef public_62610da
