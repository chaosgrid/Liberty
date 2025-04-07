#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b38a21 _public_6b38a21
#define public_6b38a33 _public_6b38a33
#define public_6b38a40 _public_6b38a40
#define public_6b38a6f _public_6b38a6f
#define public_6b38a73 _public_6b38a73
#define public_6b38a88 _public_6b38a88
#define public_6b38a9f _public_6b38a9f
#define public_6b38ab4 _public_6b38ab4

PROC_DECLARE(0x6b389f0, internal_6b389f0, public_6b389f0);
extern "C" NAKED register_t __cdecl internal_6b389f0()
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
        je public_6b38ab4
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b38a33
        public_6b38a21 : nop
        cmp ebx, ecx
        je public_6b38a33
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6b38a21
        public_6b38a33 : nop
        cmp eax, esi
        mov edi, eax
        je public_6b38a6f
        lea esp, ss:[esp]
        public_6b38a40 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6b6a092
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6b38a40
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6b38a6f : nop
        cmp ebx, ecx
        je public_6b38ab4
        public_6b38a73 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6b38a88
        mov edi, eax
        public_6b38a88 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6b38a9f
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6b38a9f : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6b38a73
        mov edx, dword ptr ss : [esp+0x14]
        public_6b38ab4 : nop
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
        UNREACHABLE_TRAP(0x6b389f0)
    }
}

#undef public_6b38a21
#undef public_6b38a33
#undef public_6b38a40
#undef public_6b38a6f
#undef public_6b38a73
#undef public_6b38a88
#undef public_6b38a9f
#undef public_6b38ab4
