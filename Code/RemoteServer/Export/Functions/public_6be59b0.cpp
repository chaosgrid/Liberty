#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be59b0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be59c0 _public_6be59c0
#define public_6be59e7 _public_6be59e7

PROC_DECLARE(0x6be59b0, internal_6be59b0, public_6be59b0);
extern "C" NAKED register_t __cdecl internal_6be59b0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x2C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6be59e7
        mov edi, edi
        public_6be59c0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ds : [edi+0x30]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x30], ecx
        jne public_6be59c0
        public_6be59e7 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        push eax
        call public_6c09aaa
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x30], eax
        mov ecx, edi
        pop edi
        pop esi
        pop ebx
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be59b0)
    }
}

#undef public_6be59c0
#undef public_6be59e7
