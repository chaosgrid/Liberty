#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8c40);
CLANG_FORWARD_PROC_SYMBOL(public_6f30820);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb8c87 _public_6eb8c87
#define public_6eb8cbc _public_6eb8cbc
#define public_6eb8cce _public_6eb8cce
#define public_6eb8ced _public_6eb8ced

PROC_DECLARE(0x6eb8c40, internal_6eb8c40, public_6eb8c40);
extern "C" NAKED register_t __cdecl internal_6eb8c40()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x48]
        push esi
        push eax
        call public_6fa8fe0
        xor ebx, ebx
        mov dword ptr ss : [ebp+0x48], ebx
        mov dword ptr ss : [ebp+0x4C], ebx
        mov dword ptr ss : [ebp+0x50], ebx
        mov ecx, dword ptr ss : [ebp+0x20]
        push ecx
        call public_6fa8fe0
        mov dword ptr ss : [ebp+0x20], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov eax, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ss : [ebp+0x10]
        add esp, 8
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0xC], esi
        je public_6eb8ced
        add esi, 0x30
        push edi
        public_6eb8c87 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        je public_6eb8cce
        lea edi, ds:[esi-4]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6fb32f0]
        cmp byte ptr ds : [eax], bl
        je public_6eb8cbc
        mov edx, dword ptr ds : [esi]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6fb32f0]
        cmp byte ptr ds : [eax], 0xFF
        je public_6eb8cbc
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6fb32f0]
        dec byte ptr ds : [eax]
        jmp public_6eb8cce
        public_6eb8cbc : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi]
        add ecx, 2
        push ecx
        dec edx
        push edx
        mov ecx, edi
        call public_6f30820
        public_6eb8cce : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0x3C
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        add esi, 0x3C
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6eb8c87
        pop edi
        public_6eb8ced : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        call public_6fa8fe0
        add esp, 4
        pop esi
        mov dword ptr ss : [ebp+0x10], ebx
        mov dword ptr ss : [ebp+0x14], ebx
        mov dword ptr ss : [ebp+0x18], ebx
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6eb8c40)
    }
}

#undef public_6eb8c87
#undef public_6eb8cbc
#undef public_6eb8cce
#undef public_6eb8ced
