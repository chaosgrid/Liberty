#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6281d16 _public_6281d16
#define public_6281d2b _public_6281d2b
#define public_6281d4e _public_6281d4e
#define public_6281d60 _public_6281d60

PROC_DECLARE(0x6281ce0, internal_6281ce0, public_6281ce0);
extern "C" NAKED register_t __cdecl internal_6281ce0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        mov ebp, ecx
        mov cl, byte ptr ds : [eax]
        push esi
        push 0x14
        mov byte ptr ss : [ebp], cl
        call public_6391d9c
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], 0
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        cmp ebx, eax
        je public_6281d60
        push edi
        public_6281d16 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6281d2b
        mov edi, eax
        public_6281d2b : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6281d4e
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+8], ecx
        public_6281d4e : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6281d16
        pop edi
        public_6281d60 : nop
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6281ce0)
    }
}

#undef public_6281d16
#undef public_6281d2b
#undef public_6281d4e
#undef public_6281d60
