#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ba50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dc40);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ef10);

#define public_6f3ba70 _public_6f3ba70
#define public_6f3ba83 _public_6f3ba83
#define public_6f3ba86 _public_6f3ba86
#define public_6f3ba8a _public_6f3ba8a
#define public_6f3bac3 _public_6f3bac3
#define public_6f3bad0 _public_6f3bad0
#define public_6f3bad8 _public_6f3bad8
#define public_6f3bafc _public_6f3bafc

PROC_DECLARE(0x6f3ba50, internal_6f3ba50, public_6f3ba50);
extern "C" NAKED register_t __cdecl internal_6f3ba50()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ecx
        push edi
        mov edi, edx
        mov al, 1
        je public_6f3ba8a
        lea esp, ss:[esp]
        public_6f3ba70 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setl al
        test al, al
        je public_6f3ba83
        mov esi, dword ptr ds : [esi]
        jmp public_6f3ba86
        public_6f3ba83 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f3ba86 : nop
        cmp esi, ecx
        jne public_6f3ba70
        public_6f3ba8a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6f3bad8
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f3bad0
        cmp edi, dword ptr ds : [edx]
        jne public_6f3bac3
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6f3dc40
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6f3bac3 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f3ef10
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f3bad0 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jge public_6f3bafc
        public_6f3bad8 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6f3dc40
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6f3bafc : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3ba50)
    }
}

#undef public_6f3ba70
#undef public_6f3ba83
#undef public_6f3ba86
#undef public_6f3ba8a
#undef public_6f3bac3
#undef public_6f3bad0
#undef public_6f3bad8
#undef public_6f3bafc
