#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6281d94 _public_6281d94
#define public_6281db8 _public_6281db8
#define public_6281dc0 _public_6281dc0
#define public_6281de7 _public_6281de7
#define public_6281df0 _public_6281df0
#define public_6281e05 _public_6281e05
#define public_6281e28 _public_6281e28
#define public_6281e39 _public_6281e39

PROC_DECLARE(0x6281d70, internal_6281d70, public_6281d70);
extern "C" NAKED register_t __cdecl internal_6281d70()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ebp, ecx
        push esi
        push edi
        je public_6281e39
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6281db8
        public_6281d94 : nop
        cmp ebx, dword ptr ss : [esp+0x14]
        je public_6281db8
        lea ecx, ds:[ebx+8]
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ebx, dword ptr ds : [ebx]
        jne public_6281d94
        public_6281db8 : nop
        cmp eax, esi
        mov edi, eax
        je public_6281de7
        mov edi, edi
        public_6281dc0 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6281dc0
        public_6281de7 : nop
        cmp ebx, dword ptr ss : [esp+0x14]
        je public_6281e39
        lea ecx, ds:[ecx]
        public_6281df0 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6281e05
        mov edi, eax
        public_6281e05 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6281e28
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+8], ecx
        public_6281e28 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6281df0
        public_6281e39 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6281d70)
    }
}

#undef public_6281d94
#undef public_6281db8
#undef public_6281dc0
#undef public_6281de7
#undef public_6281df0
#undef public_6281e05
#undef public_6281e28
#undef public_6281e39
