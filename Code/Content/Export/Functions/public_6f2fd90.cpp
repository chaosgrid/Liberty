#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fd90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2fde9 _public_6f2fde9
#define public_6f2fdfb _public_6f2fdfb
#define public_6f2fe19 _public_6f2fe19

PROC_DECLARE(0x6f2fd90, internal_6f2fd90, public_6f2fd90);
extern "C" NAKED register_t __cdecl internal_6f2fd90()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x1D]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_6f2fe19
        mov al, byte ptr ss : [ebp+0x1C]
        push esi
        push 0x20
        mov byte ptr ss : [esp+0x18], al
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ds:[esi+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov byte ptr ds : [esi+0x1C], dl
        mov byte ptr ds : [esi+0x1D], 0
        je public_6f2fde9
        lea ecx, ss:[ebp+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_6f2fde9 : nop
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        cmp ebx, dword ptr ds : [edi+8]
        jne public_6f2fdfb
        mov ebx, esi
        public_6f2fdfb : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_6f2fd90
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_6f2fd90
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_6f2fe19 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f2fd90)
    }
}

#undef public_6f2fde9
#undef public_6f2fdfb
#undef public_6f2fe19
