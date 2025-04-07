#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6368130);

#define public_6368145 _public_6368145
#define public_6368178 _public_6368178

PROC_DECLARE(0x6368130, internal_6368130, public_6368130);
extern "C" NAKED register_t __cdecl internal_6368130()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x28]
        xor edx, edx
        test eax, eax
        jle public_6368178
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        public_6368145 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov eax, edx
        imul eax, dword ptr ds : [ecx+0x24]
        lea edi, ds:[eax+ebp]
        add eax, ebx
        mov eax, dword ptr ds : [esi+eax*4]
        fld dword ptr ds : [esi+edi*4]
        lea edi, ds:[esi+edi*4]
        mov dword ptr ds : [edi], eax
        mov esi, dword ptr ds : [ecx+8]
        mov eax, edx
        imul eax, dword ptr ds : [ecx+0x24]
        add eax, ebx
        inc edx
        fstp dword ptr ds : [esi+eax*4]
        mov eax, dword ptr ds : [ecx+0x28]
        cmp edx, eax
        jl public_6368145
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6368178 : nop
        ret 8
        UNREACHABLE_TRAP(0x6368130)
    }
}

#undef public_6368145
#undef public_6368178
