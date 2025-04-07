#include "Shading-PCH.h"


#define public_6ec28be _public_6ec28be
#define public_6ec28d9 _public_6ec28d9

PROC_DECLARE(0x6ec2890, internal_6ec2890, public_6ec2890);
extern "C" NAKED register_t __cdecl internal_6ec2890()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        mov byte ptr ds : [edx], 0
        je public_6ec28d9
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        mov eax, dword ptr ss : [esp+0x1C]
        not ecx
        dec ecx
        dec eax
        cmp ecx, eax
        jae public_6ec28be
        mov eax, ecx
        public_6ec28be : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov byte ptr ds : [eax+edx], 0
        xor eax, eax
        pop ebx
        public_6ec28d9 : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6ec2890)
    }
}

#undef public_6ec28be
#undef public_6ec28d9
