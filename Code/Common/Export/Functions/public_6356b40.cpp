#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6356b40);

#define public_6356b59 _public_6356b59
#define public_6356b75 _public_6356b75

PROC_DECLARE(0x6356b40, internal_6356b40, public_6356b40);
extern "C" NAKED register_t __cdecl internal_6356b40()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        mov esi, dword ptr ds : [ebx]
        lea ecx, ds:[esi-1]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        jl public_6356b75
        lea ebp, ds:[ecx+1]
        public_6356b59 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [edi]
        inc edi
        xor ecx, eax
        and ecx, 0xFF
        mov ecx, dword ptr ds : [ecx*4+public_63edcdc]
        shr eax, 8
        xor eax, ecx
        dec ebp
        jne public_6356b59
        public_6356b75 : nop
        xor edx, edx
        div dword ptr ds : [ebx+4]
        add esi, 0xC
        push esi
        mov ebp, edx
        call public_6343f70
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, ecx
        shr ecx, 2
        lea edi, ds:[eax+8]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [ecx+ebp*4]
        add esp, 4
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+ebp*4], eax
        pop ebp
        mov dword ptr ds : [eax+4], edx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6356b40)
    }
}

#undef public_6356b59
#undef public_6356b75
