#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2fd0b _public_6f2fd0b
#define public_6f2fd1d _public_6f2fd1d
#define public_6f2fd3b _public_6f2fd3b

PROC_DECLARE(0x6f2fcc0, internal_6f2fcc0, public_6f2fcc0);
extern "C" NAKED register_t __cdecl internal_6f2fcc0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x15]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_6f2fd3b
        mov al, byte ptr ss : [ebp+0x14]
        push esi
        push 0x18
        mov byte ptr ss : [esp+0x18], al
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ds:[esi+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov byte ptr ds : [esi+0x14], dl
        mov byte ptr ds : [esi+0x15], 0
        je public_6f2fd0b
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+4], edx
        public_6f2fd0b : nop
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        cmp ebx, dword ptr ds : [edi+8]
        jne public_6f2fd1d
        mov ebx, esi
        public_6f2fd1d : nop
        mov edx, dword ptr ss : [ebp]
        push esi
        push edx
        mov ecx, edi
        call public_6f2fcc0
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        mov ecx, edi
        call public_6f2fcc0
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_6f2fd3b : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f2fcc0)
    }
}

#undef public_6f2fd0b
#undef public_6f2fd1d
#undef public_6f2fd3b
