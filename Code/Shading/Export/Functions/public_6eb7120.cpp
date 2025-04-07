#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7120);

#define public_6eb7148 _public_6eb7148
#define public_6eb714a _public_6eb714a

PROC_DECLARE(0x6eb7120, internal_6eb7120, public_6eb7120);
extern "C" NAKED register_t __cdecl internal_6eb7120()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        push ebx
        push esi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_6eb7148
        add eax, 0xFFFFFFFC
        jmp public_6eb714a
        public_6eb7148 : nop
        xor eax, eax
        public_6eb714a : nop
        mov edx, dword ptr ds : [esi]
        push eax
        push 0xB
        push ebx
        push esi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [esi]
        inc ecx
        push ecx
        push 0xD
        push ebx
        push esi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [edi+0x24]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xE
        push ebx
        push esi
        call dword ptr ds : [edx+0xF8]
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb7120)
    }
}

#undef public_6eb7148
#undef public_6eb714a
