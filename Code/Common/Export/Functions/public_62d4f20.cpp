#include "Common-PCH.h"


#define public_62d4f8d _public_62d4f8d

PROC_DECLARE(0x62d4f20, internal_62d4f20, public_62d4f20);
extern "C" NAKED register_t __cdecl internal_62d4f20()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        mov esi, ecx
        je public_62d4f8d
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_62d4f8d
        push ebx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, 1
        push 0x3F800000
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0xC], eax
        mov byte ptr ds : [esi+0x10], bl
        mov edx, dword ptr ds : [edi]
        push 0
        mov ecx, edi
        call dword ptr ds : [edx+0xF0]
        fstp dword ptr ds : [esi+0x60]
        mov eax, dword ptr ds : [edi]
        push ebx
        push 0x3F800000
        mov ecx, edi
        call dword ptr ds : [eax+0xD8]
        fstp dword ptr ds : [esi+0x5C]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+0x64]
        push eax
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+0x64]
        push eax
        call dword ptr ds : [edx]
        mov al, bl
        pop ebx
        pop edi
        pop esi
        ret 0xC
        public_62d4f8d : nop
        pop edi
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62d4f20)
    }
}

#undef public_62d4f8d
