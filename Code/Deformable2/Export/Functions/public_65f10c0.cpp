#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f10c0);

#define public_65f10d1 _public_65f10d1
#define public_65f10eb _public_65f10eb

PROC_DECLARE(0x65f10c0, internal_65f10c0, public_65f10c0);
extern "C" NAKED register_t __cdecl internal_65f10c0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        push esi
        xor esi, esi
        test eax, eax
        jle public_65f10eb
        push edi
        lea edi, ds:[ebx+8]
        public_65f10d1 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ds : [ebx+4]
        inc esi
        add edi, 0x34
        cmp esi, eax
        jl public_65f10d1
        pop edi
        public_65f10eb : nop
        mov edx, dword ptr ds : [ebx+0x1E80]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65f10c0)
    }
}

#undef public_65f10d1
#undef public_65f10eb
