#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cfd0f3 _public_6cfd0f3

PROC_DECLARE(0x6cfd0a0, internal_6cfd0a0, public_6cfd0a0);
extern "C" NAKED register_t __cdecl internal_6cfd0a0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        push 0x2C
        mov edi, ecx
        call public_6d60012
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_6cfd0f3
        mov edx, 0xBF800000
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        mov dl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [eax+0xC], ecx
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov byte ptr ds : [eax+0x14], dl
        mov esi, eax
        mov dword ptr ds : [eax+0x24], ecx
        mov byte ptr ds : [eax+0x28], 1
        mov dword ptr ds : [eax], offset public_6d66bf0
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 
        public_6cfd0f3 : nop
        xor esi, esi
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6cfd0a0)
    }
}

#undef public_6cfd0f3
