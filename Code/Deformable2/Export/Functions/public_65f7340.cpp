#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7340);

#define public_65f7399 _public_65f7399

PROC_DECLARE(0x65f7340, internal_65f7340, public_65f7340);
extern "C" NAKED register_t __cdecl internal_65f7340()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        xor eax, eax
        test ecx, ecx
        jbe public_65f7399
        mov eax, dword ptr ds : [esi+0x10]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [esi+0x14]
        sub edi, eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0x20], eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        inc edi
        call dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        push 0x100
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        push ecx
        mov ecx, dword ptr ds : [esi]
        push ecx
        push ebx
        push eax
        call dword ptr ds : [edx+0x28]
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [edx+0x24]
        mov eax, edi
        pop edi
        pop ebx
        public_65f7399 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x65f7340)
    }
}

#undef public_65f7399
