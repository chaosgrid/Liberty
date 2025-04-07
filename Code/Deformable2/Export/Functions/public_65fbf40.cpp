#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fbf40);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65fbf56 _public_65fbf56
#define public_65fbf70 _public_65fbf70

PROC_DECLARE(0x65fbf40, internal_65fbf40, public_65fbf40);
extern "C" NAKED register_t __cdecl internal_65fbf40()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x40]
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp eax, ebx
        mov dword ptr ds : [esi], offset public_6601340
        jle public_65fbf70
        public_65fbf56 : nop
        mov edx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [edx+edi*4]
        mov eax, dword ptr ds : [public_660313c]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [esi+0x40]
        inc edi
        cmp edi, eax
        jl public_65fbf56
        public_65fbf70 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+0x40], ebx
        call public_6600bb0
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        mov dword ptr ds : [esi+8], ebx
        call public_6600bb0
        mov edx, dword ptr ds : [esi+0x1C]
        push edx
        mov dword ptr ds : [esi+0x18], ebx
        call public_6600bb0
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        mov dword ptr ds : [esi+0x1C], ebx
        call public_6600bb0
        mov ecx, dword ptr ds : [esi+0x2C]
        push ecx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6600bb0
        add esp, 0x14
        pop edi
        mov dword ptr ds : [esi+0x2C], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65fbf40)
    }
}

#undef public_65fbf56
#undef public_65fbf70
