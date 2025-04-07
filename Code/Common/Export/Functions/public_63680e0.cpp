#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63680e0);

#define public_63680f5 _public_63680f5
#define public_6368128 _public_6368128

PROC_DECLARE(0x63680e0, internal_63680e0, public_63680e0);
extern "C" NAKED register_t __cdecl internal_63680e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x28]
        xor edx, edx
        test eax, eax
        jle public_6368128
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        public_63680f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov eax, edx
        imul eax, dword ptr ds : [ecx+0x24]
        lea edi, ds:[eax+ebp]
        add eax, ebx
        mov eax, dword ptr ds : [esi+eax*4]
        fld dword ptr ds : [esi+edi*4]
        lea edi, ds:[esi+edi*4]
        mov dword ptr ds : [edi], eax
        mov esi, dword ptr ds : [ecx+4]
        mov eax, edx
        imul eax, dword ptr ds : [ecx+0x24]
        add eax, ebx
        inc edx
        fstp dword ptr ds : [esi+eax*4]
        mov eax, dword ptr ds : [ecx+0x28]
        cmp edx, eax
        jl public_63680f5
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6368128 : nop
        ret 8
        UNREACHABLE_TRAP(0x63680e0)
    }
}

#undef public_63680f5
#undef public_6368128
