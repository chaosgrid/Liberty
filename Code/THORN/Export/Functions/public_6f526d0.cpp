#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fc50);
CLANG_FORWARD_PROC_SYMBOL(public_6f526d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52770);

#define public_6f52767 _public_6f52767

PROC_DECLARE(0x6f526d0, internal_6f526d0, public_6f526d0);
extern "C" NAKED register_t __cdecl internal_6f526d0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        call public_6f4fc50
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        xor ebx, ebx
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [edi+0x18], edx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [edi+0x10], ebx
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x34]
        xor eax, eax
        cmp edx, ebx
        setne al
        push ebx
        push esi
        dec eax
        mov dword ptr ds : [esi+0x1C], eax
        call public_6f52770
        push ebx
        push esi
        call public_6f52770
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        mov dword ptr ds : [edx], 0xFFFFFFFC
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [eax+8]
        pop edi
        pop esi
        pop ebx
        jb public_6f52767
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f52767 : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x6f526d0)
    }
}

#undef public_6f52767
