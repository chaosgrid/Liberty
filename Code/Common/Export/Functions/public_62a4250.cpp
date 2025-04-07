#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a4282 _public_62a4282
#define public_62a42a9 _public_62a42a9

PROC_DECLARE(0x62a4250, internal_62a4250, public_62a4250);
extern "C" NAKED register_t __cdecl internal_62a4250()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0xC
        mov byte ptr ds : [esi+8], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xC], eax
        xor eax, eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], eax
        mov ebx, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [ebx]
        add esp, 4
        cmp edi, ebx
        je public_62a42a9
        public_62a4282 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x10], ecx
        jne public_62a4282
        public_62a42a9 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62a4250)
    }
}

#undef public_62a4282
#undef public_62a42a9
