#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d33f73);

#define public_6d33fb3 _public_6d33fb3
#define public_6d33fdc _public_6d33fdc
#define public_6d34095 _public_6d34095
#define public_6d340ba _public_6d340ba

PROC_DECLARE(0x6d33f73, internal_6d33f73, public_6d33f73);
extern "C" NAKED register_t __cdecl internal_6d33f73()
{
    __asm
    {
        sub esp, 0x24
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0x18]
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx]
        mov ebp, dword ptr ds : [esi+0x105C]
        push edi
        mov edi, dword ptr ds : [esi+0x1050]
        imul ebp, edi
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+0x18]
        add ebp, eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x2C], ebp
        jae public_6d340ba
        mov edx, 0xF81F
        push ebx
        public_6d33fb3 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi+0x1058]
        lea esi, ds:[eax+esi*2]
        mov dword ptr ss : [esp+0x10], ebx
        add edi, eax
        cmp eax, esi
        mov ebx, eax
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x28], esi
        jae public_6d34095
        public_6d33fdc : nop
        movzx ecx, word ptr ds : [ebx]
        movzx esi, word ptr ds : [ebx+2]
        movzx eax, word ptr ds : [edi+2]
        movzx edi, word ptr ds : [edi]
        mov ebp, ecx
        mov ebx, eax
        and bx, dx
        and bp, dx
        mov dword ptr ss : [esp+0x24], ecx
        and ecx, 0xFFFF07E0
        add ebx, ebp
        mov ebp, edi
        and bp, dx
        add ebx, ebp
        mov ebp, esi
        and bp, dx
        lea ebx, ds:[ebx+ebp+0x1002]
        mov ebp, eax
        and ebp, 0xFFFF07E0
        add ebp, ecx
        mov ecx, edi
        and ecx, 0xFFFF07E0
        add ebp, ecx
        mov ecx, esi
        and ecx, 0xFFFF07E0
        shr ebx, 2
        lea ecx, ds:[ecx+ebp+0x40]
        shr ecx, 2
        xor ebx, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        and eax, edx
        and ecx, edx
        add eax, ecx
        and edi, edx
        add eax, edi
        mov edi, dword ptr ss : [esp+0x1C]
        and esi, edx
        and ebx, 0xFFFF07E0
        lea eax, ds:[eax+esi+0x1002]
        shr eax, 2
        xor ebx, eax
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ss : [esp+0x10], 2
        mov word ptr ds : [eax], bx
        mov ebx, dword ptr ss : [esp+0x18]
        add ebx, 4
        add edi, 4
        cmp ebx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], edi
        jb public_6d33fdc
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x30]
        public_6d34095 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [esi+0x1050]
        add dword ptr ss : [esp+0x14], esi
        mov esi, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [esi+0x1050]
        lea eax, ds:[eax+edi*2]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20], eax
        jb public_6d33fb3
        pop ebx
        public_6d340ba : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6d33f73)
    }
}

#undef public_6d33fb3
#undef public_6d33fdc
#undef public_6d34095
#undef public_6d340ba
