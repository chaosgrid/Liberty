#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);

#define public_6eb80ed _public_6eb80ed
#define public_6eb8121 _public_6eb8121
#define public_6eb8140 _public_6eb8140
#define public_6eb815e _public_6eb815e

PROC_DECLARE(0x6eb80d0, internal_6eb80d0, public_6eb80d0);
extern "C" NAKED register_t __cdecl internal_6eb80d0()
{
    __asm
    {
        push esi
        push edi
        call public_6ecf670
        mov eax, dword ptr ds : [eax+4]
        add eax, 4
        mov esi, dword ptr ss : [esp+0xC]
        je public_6eb80ed
        cmp dword ptr ds : [eax], 1
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x74], al
        public_6eb80ed : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        mov byte ptr ds : [esi+0x75], 1
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov edi, eax
        test edi, edi
        setge al
        test al, al
        mov byte ptr ds : [esi+0x75], al
        je public_6eb8121
        mov al, byte ptr ds : [esi+0x74]
        test al, al
        jne public_6eb815e
        public_6eb8121 : nop
        mov edi, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [esi+8]
        add edi, 0x2C
        cmp eax, 0xFFFFFFFF
        je public_6eb8140
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [edi+4], 0xFFFFFFFF
        public_6eb8140 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [esi+0x75], 0
        mov byte ptr ds : [esi+0x74], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov edi, eax
        public_6eb815e : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x24]
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6eb80d0)
    }
}

#undef public_6eb80ed
#undef public_6eb8121
#undef public_6eb8140
#undef public_6eb815e
