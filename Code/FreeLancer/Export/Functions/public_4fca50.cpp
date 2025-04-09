#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fca50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4fcaa1 _public_4fcaa1
#define public_4fcab8 _public_4fcab8

PROC_DECLARE(0x4fca50, internal_4fca50, public_4fca50);
extern "C" NAKED register_t __cdecl internal_4fca50()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0x24]
        push ebp
        add eax, 6
        cmp eax, ecx
        push esi
        push edi
        jbe public_4fcab8
        mov eax, dword ptr ds : [ebx+0x1C]
        lea edi, ds:[eax+eax*2]
        add ecx, edi
        shl ecx, 1
        push ecx
        mov dword ptr ss : [esp+0x14], edi
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_4fcab8
        mov esi, dword ptr ds : [ebx+0x10]
        test esi, esi
        je public_4fcaa1
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
        public_4fcaa1 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+0x24]
        add esp, 4
        add eax, edi
        mov dword ptr ds : [ebx+0x10], ebp
        mov dword ptr ds : [ebx+0x24], eax
        public_4fcab8 : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        mov word ptr ds : [edx+ecx*2], ax
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ebx+0x10]
        mov si, word ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ds : [ebx+0x14], ecx
        mov word ptr ds : [edx+ecx*2], si
        mov ebp, dword ptr ds : [ebx+0x14]
        mov esi, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        inc ebp
        mov dword ptr ds : [ebx+0x14], ebp
        mov ecx, ebp
        mov word ptr ds : [esi+ecx*2], dx
        mov edi, dword ptr ds : [ebx+0x14]
        mov esi, dword ptr ds : [ebx+0x10]
        inc edi
        mov dword ptr ds : [ebx+0x14], edi
        mov ecx, edi
        mov word ptr ds : [esi+ecx*2], ax
        mov esi, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0x10]
        inc esi
        mov dword ptr ds : [ebx+0x14], esi
        mov eax, esi
        mov word ptr ds : [ecx+eax*2], dx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ebx+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0x14], ecx
        mov eax, ecx
        mov cx, word ptr ss : [esp+0x24]
        mov word ptr ds : [edx+eax*2], cx
        mov eax, dword ptr ds : [ebx+0x14]
        pop edi
        pop esi
        inc eax
        pop ebp
        mov dword ptr ds : [ebx+0x14], eax
        pop ebx
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x4fca50)
    }
}

#undef public_4fcaa1
#undef public_4fcab8
