#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efc7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efc807 _public_6efc807
#define public_6efc81c _public_6efc81c
#define public_6efc845 _public_6efc845
#define public_6efc857 _public_6efc857

PROC_DECLARE(0x6efc7d0, internal_6efc7d0, public_6efc7d0);
extern "C" NAKED register_t __cdecl internal_6efc7d0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi]
        push edi
        mov ebp, ecx
        push 0x18
        mov byte ptr ss : [ebp], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6efc857
        push ebx
        public_6efc807 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x18
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6efc81c
        mov ebx, eax
        public_6efc81c : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6efc845
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+0xC], ecx
        public_6efc845 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6efc807
        pop ebx
        public_6efc857 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6efc7d0)
    }
}

#undef public_6efc807
#undef public_6efc81c
#undef public_6efc845
#undef public_6efc857
