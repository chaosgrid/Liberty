#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fc9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4fc9f1 _public_4fc9f1
#define public_4fca09 _public_4fca09

PROC_DECLARE(0x4fc9a0, internal_4fc9a0, public_4fc9a0);
extern "C" NAKED register_t __cdecl internal_4fc9a0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0x24]
        add eax, 3
        cmp eax, ecx
        push ebp
        push edi
        jbe public_4fca09
        mov eax, dword ptr ds : [ebx+0x1C]
        lea edi, ds:[eax+eax*2]
        add ecx, edi
        shl ecx, 1
        push ecx
        mov dword ptr ss : [esp+0x10], edi
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_4fca09
        push esi
        mov esi, dword ptr ds : [ebx+0x10]
        test esi, esi
        je public_4fc9f1
        mov ecx, dword ptr ds : [ebx+0x24]
        shl ecx, 1
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x10]
        public_4fc9f1 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+0x24]
        add esp, 4
        add eax, edi
        mov dword ptr ds : [ebx+0x10], ebp
        mov dword ptr ds : [ebx+0x24], eax
        pop esi
        public_4fca09 : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ebx+0x10]
        mov ax, word ptr ss : [esp+0x14]
        mov word ptr ds : [edx+ecx*2], ax
        mov edx, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0x10]
        inc edx
        mov dword ptr ds : [ebx+0x14], edx
        mov eax, edx
        mov dx, word ptr ss : [esp+0x18]
        mov word ptr ds : [ecx+eax*2], dx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dx, word ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ds : [ebx+0x14], ecx
        mov eax, ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov word ptr ds : [ecx+eax*2], dx
        mov eax, dword ptr ds : [ebx+0x14]
        pop edi
        inc eax
        pop ebp
        mov dword ptr ds : [ebx+0x14], eax
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x4fc9a0)
    }
}

#undef public_4fc9f1
#undef public_4fca09
