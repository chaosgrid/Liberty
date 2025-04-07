#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

#define public_65c2d51 _public_65c2d51
#define public_65c2d63 _public_65c2d63
#define public_65c2d70 _public_65c2d70
#define public_65c2d9f _public_65c2d9f
#define public_65c2da3 _public_65c2da3
#define public_65c2db8 _public_65c2db8
#define public_65c2dcf _public_65c2dcf
#define public_65c2de4 _public_65c2de4

PROC_DECLARE(0x65c2d20, internal_65c2d20, public_65c2d20);
extern "C" NAKED register_t __cdecl internal_65c2d20()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov edx, ecx
        push ebp
        lea ecx, ds:[eax+4]
        lea ebp, ds:[edx+4]
        cmp ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], edx
        je public_65c2de4
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_65c2d63
        public_65c2d51 : nop
        cmp ebx, ecx
        je public_65c2d63
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_65c2d51
        public_65c2d63 : nop
        cmp eax, esi
        mov edi, eax
        je public_65c2d9f
        lea esp, ss:[esp]
        public_65c2d70 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_65c6a60
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_65c2d70
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_65c2d9f : nop
        cmp ebx, ecx
        je public_65c2de4
        public_65c2da3 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_65c6a66
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_65c2db8
        mov edi, eax
        public_65c2db8 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_65c2dcf
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_65c2dcf : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_65c2da3
        mov edx, dword ptr ss : [esp+0x14]
        public_65c2de4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea esi, ds:[eax+0x10]
        lea edi, ds:[edx+0x10]
        mov ecx, 6
        rep movsd
        pop edi
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+0x28]
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0x28], eax
        mov eax, edx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x65c2d20)
    }
}

#undef public_65c2d51
#undef public_65c2d63
#undef public_65c2d70
#undef public_65c2d9f
#undef public_65c2da3
#undef public_65c2db8
#undef public_65c2dcf
#undef public_65c2de4
