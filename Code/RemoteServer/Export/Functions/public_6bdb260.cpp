#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdb260);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdb290 _public_6bdb290
#define public_6bdb2b8 _public_6bdb2b8
#define public_6bdb2c0 _public_6bdb2c0
#define public_6bdb2eb _public_6bdb2eb
#define public_6bdb2f1 _public_6bdb2f1
#define public_6bdb306 _public_6bdb306
#define public_6bdb329 _public_6bdb329
#define public_6bdb33e _public_6bdb33e

PROC_DECLARE(0x6bdb260, internal_6bdb260, public_6bdb260);
extern "C" NAKED register_t __cdecl internal_6bdb260()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        add ecx, 0x24
        cmp ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6bdb33e
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], edx
        je public_6bdb2b8
        lea ebx, ds:[ebx]
        public_6bdb290 : nop
        cmp ebx, dword ptr ss : [esp+0x18]
        je public_6bdb2b8
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
        mov ecx, dword ptr ss : [esp+0x10]
        jne public_6bdb290
        public_6bdb2b8 : nop
        cmp eax, esi
        mov edi, eax
        je public_6bdb2eb
        mov edi, edi
        public_6bdb2c0 : nop
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
        jne public_6bdb2c0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6bdb2eb : nop
        cmp ebx, dword ptr ss : [esp+0x18]
        je public_6bdb33e
        public_6bdb2f1 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        call public_6c09d26
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6bdb306
        mov edi, eax
        public_6bdb306 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6bdb329
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+8], ecx
        public_6bdb329 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6bdb2f1
        mov ecx, dword ptr ss : [esp+0x10]
        public_6bdb33e : nop
        mov dl, byte ptr ds : [ecx+0xC]
        mov byte ptr ss : [ebp+0xC], dl
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [ebp+0x10], eax
        mov edx, dword ptr ds : [ecx+0x14]
        pop edi
        mov dword ptr ss : [ebp+0x14], edx
        mov eax, dword ptr ds : [ecx+0x18]
        pop esi
        mov dword ptr ss : [ebp+0x18], eax
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6bdb260)
    }
}

#undef public_6bdb290
#undef public_6bdb2b8
#undef public_6bdb2c0
#undef public_6bdb2eb
#undef public_6bdb2f1
#undef public_6bdb306
#undef public_6bdb329
#undef public_6bdb33e
