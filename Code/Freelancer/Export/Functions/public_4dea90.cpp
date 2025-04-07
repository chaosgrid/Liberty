#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dde70);
CLANG_FORWARD_PROC_SYMBOL(public_4dea90);

#define public_4deab0 _public_4deab0
#define public_4deafc _public_4deafc
#define public_4deb05 _public_4deb05
#define public_4deb26 _public_4deb26

PROC_DECLARE(0x4dea90, internal_4dea90, public_4dea90);
extern "C" NAKED register_t __cdecl internal_4dea90()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        cmp ebp, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov esi, eax
        je public_4deafc
        lea edi, ss:[ebp+0xC]
        sub ebp, eax
        nop 
        public_4deab0 : nop
        mov ax, word ptr ds : [edi-0xC]
        mov word ptr ds : [esi], ax
        mov ecx, dword ptr ds : [esi+ebp+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi-4]
        mov dword ptr ds : [esi+8], edx
        mov al, byte ptr ds : [edi]
        mov byte ptr ds : [esi+0xC], al
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[edi+4]
        push eax
        lea ecx, ds:[esi+0x10]
        call dword ptr ds : [public_5c6f9c]
        mov ecx, dword ptr ds : [edi+0x14]
        add edi, 0x24
        mov dword ptr ds : [esi+0x20], ecx
        lea edx, ds:[edi-0xC]
        add esi, 0x24
        cmp edx, ebx
        jne public_4deab0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        public_4deafc : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp esi, ebx
        mov edi, esi
        je public_4deb26
        public_4deb05 : nop
        mov ecx, edi
        call public_4dde70
        add edi, 0x24
        cmp edi, ebx
        jne public_4deb05
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax+8], esi
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_4deb26 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4dea90)
    }
}

#undef public_4deab0
#undef public_4deafc
#undef public_4deb05
#undef public_4deb26
