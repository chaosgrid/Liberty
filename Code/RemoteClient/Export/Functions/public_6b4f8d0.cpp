#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f8d0);

#define public_6b4f8ef _public_6b4f8ef
#define public_6b4f8f1 _public_6b4f8f1
#define public_6b4f90f _public_6b4f90f
#define public_6b4f916 _public_6b4f916
#define public_6b4f922 _public_6b4f922
#define public_6b4f95e _public_6b4f95e
#define public_6b4f970 _public_6b4f970
#define public_6b4f98a _public_6b4f98a
#define public_6b4f9b1 _public_6b4f9b1
#define public_6b4f9de _public_6b4f9de
#define public_6b4fa0a _public_6b4fa0a
#define public_6b4fa38 _public_6b4fa38
#define public_6b4fa62 _public_6b4fa62
#define public_6b4fa8d _public_6b4fa8d
#define public_6b4fac0 _public_6b4fac0
#define public_6b4fb03 _public_6b4fb03

PROC_DECLARE(0x6b4f8d0, internal_6b4f8d0, public_6b4f8d0);
extern "C" NAKED register_t __cdecl internal_6b4f8d0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x20]
        test ecx, ecx
        push esi
        push edi
        je public_6b4f8ef
        call public_6b3a4f0
        test eax, eax
        je public_6b4f8ef
        mov cx, word ptr ds : [eax+8]
        jmp public_6b4f8f1
        public_6b4f8ef : nop
        xor ecx, ecx
        public_6b4f8f1 : nop
        mov esi, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ebx+0x14]
        mov ebp, 2
        add esi, ebp
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx+0x10], esi
        mov edi, 0x16
        jbe public_6b4f90f
        mov dword ptr ds : [ebx+0x1C], edi
        public_6b4f90f : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b4f922
        public_6b4f916 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6b4f922 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov word ptr ds : [eax], cx
        add eax, 2
        test cx, cx
        mov dword ptr ds : [ebx+0x18], eax
        jbe public_6b4fb03
        mov ecx, dword ptr ds : [ebx+0x20]
        call public_6b3a4f0
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6b4fb03
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6b4fb03
        jmp public_6b4f970
        public_6b4f95e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, 0x16
        mov ebp, 2
        lea esp, ss:[esp]
        public_6b4f970 : nop
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [ebx+0x14]
        mov ecx, 4
        add eax, ecx
        cmp eax, esi
        mov dword ptr ds : [ebx+0x10], eax
        jbe public_6b4f98a
        mov dword ptr ds : [ebx+0x1C], edi
        public_6b4f98a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b4f916
        mov eax, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax], esi
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [ebx+0x14]
        add eax, ecx
        cmp eax, esi
        mov dword ptr ds : [ebx+0x10], eax
        jbe public_6b4f9b1
        mov dword ptr ds : [ebx+0x1C], edi
        public_6b4f9b1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b4f916
        fld dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ebx+0x18]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ds : [ebx+0x10]
        add esi, ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6b4f9de
        mov dword ptr ds : [ebx+0x1C], edi
        public_6b4f9de : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b4f916
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add esi, ebp
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6b4fa0a
        mov dword ptr ds : [ebx+0x1C], edi
        public_6b4fa0a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b4f916
        mov eax, dword ptr ds : [ebx+0x18]
        mov cx, word ptr ds : [edx+0xC]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6b4fa38
        mov dword ptr ds : [ebx+0x1C], edi
        public_6b4fa38 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b4f916
        mov esi, dword ptr ds : [ebx+0x18]
        mov al, byte ptr ds : [edx+0xE]
        mov byte ptr ds : [esi], al
        inc esi
        mov dword ptr ds : [ebx+0x18], esi
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6b4fa62
        mov dword ptr ds : [ebx+0x1C], edi
        public_6b4fa62 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b4f916
        mov esi, dword ptr ds : [ebx+0x18]
        mov cl, byte ptr ds : [edx+0xF]
        mov byte ptr ds : [esi], cl
        inc esi
        mov dword ptr ds : [ebx+0x18], esi
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add esi, ebp
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6b4fa8d
        mov dword ptr ds : [ebx+0x1C], edi
        public_6b4fa8d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b4f916
        mov eax, dword ptr ds : [ebx+0x18]
        mov cx, word ptr ds : [edx+0x10]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [ebx+0x18], eax
        movzx eax, word ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        add esi, eax
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x10], esi
        jbe public_6b4fac0
        mov dword ptr ds : [ebx+0x1C], edi
        public_6b4fac0 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b4f916
        movzx eax, word ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [edx+0x14]
        mov ebp, dword ptr ds : [ebx+0x18]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x18], ebp
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6b4f95e
        public_6b4fb03 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6b4f8d0)
    }
}

#undef public_6b4f8ef
#undef public_6b4f8f1
#undef public_6b4f90f
#undef public_6b4f916
#undef public_6b4f922
#undef public_6b4f95e
#undef public_6b4f970
#undef public_6b4f98a
#undef public_6b4f9b1
#undef public_6b4f9de
#undef public_6b4fa0a
#undef public_6b4fa38
#undef public_6b4fa62
#undef public_6b4fa8d
#undef public_6b4fac0
#undef public_6b4fb03
