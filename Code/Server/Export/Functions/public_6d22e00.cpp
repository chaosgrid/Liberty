#include "Server-PCH.h"


#define public_6d22e4a _public_6d22e4a
#define public_6d22e60 _public_6d22e60
#define public_6d22e6d _public_6d22e6d
#define public_6d22eb4 _public_6d22eb4
#define public_6d22eb6 _public_6d22eb6
#define public_6d22eb8 _public_6d22eb8
#define public_6d22ec2 _public_6d22ec2
#define public_6d22ece _public_6d22ece
#define public_6d22f0e _public_6d22f0e
#define public_6d22f24 _public_6d22f24
#define public_6d22f28 _public_6d22f28

PROC_DECLARE(0x6d22e00, internal_6d22e00, public_6d22e00);
extern "C" NAKED register_t __cdecl internal_6d22e00()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [eax+0x18]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+4]
        shl edx, 5
        add eax, edx
        mov edx, dword ptr ds : [eax+0x18]
        cmp ebx, edx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x18], edx
        jne public_6d22e6d
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d22e4a
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        pop ecx
        ret 8
        public_6d22e4a : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d22e60
        cmp dword ptr ds : [esi+8], ebx
        jne public_6d22e60
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6d22e60 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        public_6d22e6d : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [eax+0x18], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        mov dword ptr ds : [ecx+eax+0x1C], ebx
        mov edi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        shl edx, 5
        lea eax, ds:[edx+ecx+0x10]
        mov edx, dword ptr ds : [edi+0x10]
        cmp edx, dword ptr ds : [eax]
        jne public_6d22ece
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        je public_6d22ec2
        mov eax, dword ptr ds : [edi]
        push ebx
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+4]
        public_6d22eb4 : nop
        test al, al
        public_6d22eb6 : nop
        je public_6d22f28
        public_6d22eb8 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d22ec2 : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d22eb8
        cmp dword ptr ds : [esi+8], ebx
        jmp public_6d22eb6
        public_6d22ece : nop
        inc dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_6d22eb8
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        lea eax, ds:[ecx+eax+0x10]
        mov ecx, dword ptr ds : [eax]
        dec ecx
        mov dword ptr ds : [eax], ecx
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6d22f24
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_6d22f0e
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        call dword ptr ds : [edx+4]
        mov ebp, dword ptr ss : [esp+0x10]
        jmp public_6d22eb4
        public_6d22f0e : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d22eb8
        cmp dword ptr ds : [esi+8], ebx
        je public_6d22f24
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d22f24 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d22f28 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        shl edx, 5
        lea eax, ds:[edx+ecx]
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [eax+0x1C], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        shl edx, 5
        pop ebp
        mov dword ptr ds : [edx+ecx+0x18], eax
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d22e00)
    }
}

#undef public_6d22e4a
#undef public_6d22e60
#undef public_6d22e6d
#undef public_6d22eb4
#undef public_6d22eb6
#undef public_6d22eb8
#undef public_6d22ec2
#undef public_6d22ece
#undef public_6d22f0e
#undef public_6d22f24
#undef public_6d22f28
