#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_631d765 _public_631d765
#define public_631d78c _public_631d78c
#define public_631d792 _public_631d792
#define public_631d7c1 _public_631d7c1
#define public_631d7d0 _public_631d7d0
#define public_631d7e5 _public_631d7e5
#define public_631d815 _public_631d815

PROC_DECLARE(0x631d720, internal_631d720, public_631d720);
extern "C" NAKED register_t __cdecl internal_631d720()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [edx+8]
        push ebx
        push ebp
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [edx+0xC]
        add edx, 0x10
        lea ebp, ds:[ecx+0x10]
        cmp ebp, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx+0xC], eax
        je public_631d815
        mov ebx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], edx
        je public_631d78c
        public_631d765 : nop
        cmp edx, dword ptr ss : [esp+0x18]
        je public_631d78c
        lea esi, ds:[edx+8]
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        jne public_631d765
        public_631d78c : nop
        cmp eax, ebx
        mov esi, eax
        je public_631d7c1
        public_631d792 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ss : [ebp+8], ecx
        jne public_631d792
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        public_631d7c1 : nop
        cmp edx, dword ptr ss : [esp+0x18]
        mov esi, edx
        je public_631d815
        lea esp, ss:[esp]
        public_631d7d0 : nop
        mov edi, dword ptr ds : [ebx+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_631d7e5
        mov edi, eax
        public_631d7e5 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_631d7d0
        mov ecx, dword ptr ss : [esp+0x14]
        public_631d815 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0x1C], edx
        mov al, byte ptr ds : [eax+0x20]
        pop ebp
        mov byte ptr ds : [ecx+0x20], al
        mov eax, ecx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x631d720)
    }
}

#undef public_631d765
#undef public_631d78c
#undef public_631d792
#undef public_631d7c1
#undef public_631d7d0
#undef public_631d7e5
#undef public_631d815
