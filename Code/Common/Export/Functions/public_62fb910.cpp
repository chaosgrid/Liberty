#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fb910);

#define public_62fb925 _public_62fb925
#define public_62fb943 _public_62fb943

PROC_DECLARE(0x62fb910, internal_62fb910, public_62fb910);
extern "C" NAKED register_t __cdecl internal_62fb910()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_62fb925
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        pop esi
        ret 4
        public_62fb925 : nop
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
        lea ebx, ds:[edx+4]
        jb public_62fb943
        mov eax, 0x3F
        public_62fb943 : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        pop ebp
        mov byte ptr ds : [eax+ebx], 0
        pop ebx
        mov dword ptr ds : [edx], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62fb910)
    }
}

#undef public_62fb925
#undef public_62fb943
