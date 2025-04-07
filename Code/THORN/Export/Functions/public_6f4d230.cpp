#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d230);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e240);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f480);

#define public_6f4d27d _public_6f4d27d

PROC_DECLARE(0x6f4d230, internal_6f4d230, public_6f4d230);
extern "C" NAKED register_t __cdecl internal_6f4d230()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        lea esi, ds:[edi+0x10]
        push esi
        call public_6f4e240
        lea eax, ds:[eax+eax*8]
        shl eax, 5
        mov ecx, eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+0x64]
        sub edx, ecx
        mov ecx, dword ptr ds : [edx+0x40]
        add edx, 0x40
        add esp, 4
        cmp ecx, 0xFFFFFFFA
        jne public_6f4d27d
        add dword ptr ds : [eax], 0xFFFFFFF0
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx]
        push eax
        push edi
        call public_6f4f480
        add esp, 8
        pop edi
        pop esi
        add esp, 0x10
        ret 
        public_6f4d27d : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        add ecx, 0xFFFFFFF0
        mov ebp, ecx
        mov edi, dword ptr ss : [ebp]
        mov ebx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x14], ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], 0xFFFFFFFE
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx-8], ebp
        mov ebp, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+0xC], esi
        mov ebp, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x14]
        add ebp, 0x10
        mov dword ptr ds : [eax], ebp
        mov ecx, ebp
        mov dword ptr ds : [ecx], edi
        mov dword ptr ds : [ecx+4], esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], esi
        mov ebx, dword ptr ds : [eax]
        push 0
        push 3
        add ebx, 0x10
        push edx
        mov dword ptr ds : [eax], ebx
        call public_6f4c4f0
        add esp, 0xC
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4d230)
    }
}

#undef public_6f4d27d
