#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6be2d99 _public_6be2d99
#define public_6be2db1 _public_6be2db1
#define public_6be2dc1 _public_6be2dc1
#define public_6be2de0 _public_6be2de0
#define public_6be2df0 _public_6be2df0
#define public_6be2e0f _public_6be2e0f
#define public_6be2e1f _public_6be2e1f
#define public_6be2e3d _public_6be2e3d
#define public_6be2e4d _public_6be2e4d
#define public_6be2e6a _public_6be2e6a
#define public_6be2e7a _public_6be2e7a
#define public_6be2e9f _public_6be2e9f
#define public_6be2eaf _public_6be2eaf
#define public_6be2ed9 _public_6be2ed9
#define public_6be2ef9 _public_6be2ef9
#define public_6be2f2a _public_6be2f2a

PROC_DECLARE(0x6be2d50, internal_6be2d50, public_6be2d50);
extern "C" NAKED register_t __cdecl internal_6be2d50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6bebe50
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6be2d99
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6be2d99 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6be2db1
        mov dword ptr ds : [ebx+0xC], edi
        public_6be2db1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be2dc1
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be2dc1 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6be2de0
        mov dword ptr ds : [ebx+0xC], edi
        public_6be2de0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be2df0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be2df0 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6be2e0f
        mov dword ptr ds : [ebx+0xC], edi
        public_6be2e0f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be2e1f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be2e1f : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ss : [ebp+0x2C]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6be2e3d
        mov dword ptr ds : [ebx+0xC], edi
        public_6be2e3d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be2e4d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be2e4d : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ss : [ebp+0x30]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6be2e6a
        mov dword ptr ds : [ebx+0xC], edi
        public_6be2e6a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be2e7a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be2e7a : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x28]
        test eax, eax
        jbe public_6be2ed9
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6be2e9f
        mov dword ptr ds : [ebx+0xC], edi
        public_6be2e9f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6be2eaf
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be2eaf : nop
        mov eax, dword ptr ss : [ebp+0x28]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x34]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x16
        public_6be2ed9 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6be2ef9
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6be2ef9 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6be2f2a
        mov dword ptr ds : [ecx+0x10], ebx
        public_6be2f2a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6be2d50)
    }
}

#undef public_6be2d99
#undef public_6be2db1
#undef public_6be2dc1
#undef public_6be2de0
#undef public_6be2df0
#undef public_6be2e0f
#undef public_6be2e1f
#undef public_6be2e3d
#undef public_6be2e4d
#undef public_6be2e6a
#undef public_6be2e7a
#undef public_6be2e9f
#undef public_6be2eaf
#undef public_6be2ed9
#undef public_6be2ef9
#undef public_6be2f2a
