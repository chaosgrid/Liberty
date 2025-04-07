#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdb386 _public_6bdb386
#define public_6bdb3aa _public_6bdb3aa
#define public_6bdb3b0 _public_6bdb3b0
#define public_6bdb3d7 _public_6bdb3d7
#define public_6bdb3e0 _public_6bdb3e0
#define public_6bdb3f5 _public_6bdb3f5
#define public_6bdb418 _public_6bdb418
#define public_6bdb429 _public_6bdb429

PROC_DECLARE(0x6bdb360, internal_6bdb360, public_6bdb360);
extern "C" NAKED register_t __cdecl internal_6bdb360()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        lea ebp, ds:[ecx+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ebp, ecx
        push esi
        push edi
        je public_6bdb429
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6bdb3aa
        public_6bdb386 : nop
        cmp ebx, dword ptr ss : [esp+0x10]
        je public_6bdb3aa
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
        jne public_6bdb386
        public_6bdb3aa : nop
        cmp eax, esi
        mov edi, eax
        je public_6bdb3d7
        public_6bdb3b0 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6c09aaa
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6bdb3b0
        public_6bdb3d7 : nop
        cmp ebx, dword ptr ss : [esp+0x10]
        je public_6bdb429
        lea ecx, ds:[ecx]
        public_6bdb3e0 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        call public_6c09d26
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6bdb3f5
        mov edi, eax
        public_6bdb3f5 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6bdb418
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+8], ecx
        public_6bdb418 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6bdb3e0
        public_6bdb429 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ds : [eax+0xC]
        mov byte ptr ss : [ebp+0xC], dl
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, dword ptr ds : [eax+0x14]
        pop edi
        mov dword ptr ss : [ebp+0x14], edx
        mov eax, dword ptr ds : [eax+0x18]
        pop esi
        mov dword ptr ss : [ebp+0x18], eax
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6bdb360)
    }
}

#undef public_6bdb386
#undef public_6bdb3aa
#undef public_6bdb3b0
#undef public_6bdb3d7
#undef public_6bdb3e0
#undef public_6bdb3f5
#undef public_6bdb418
#undef public_6bdb429
