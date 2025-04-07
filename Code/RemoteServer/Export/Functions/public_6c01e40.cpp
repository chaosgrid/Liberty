#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c01e89 _public_6c01e89
#define public_6c01ea1 _public_6c01ea1
#define public_6c01eb1 _public_6c01eb1
#define public_6c01ed0 _public_6c01ed0
#define public_6c01ee0 _public_6c01ee0
#define public_6c01f01 _public_6c01f01
#define public_6c01f11 _public_6c01f11
#define public_6c01f30 _public_6c01f30
#define public_6c01f40 _public_6c01f40
#define public_6c01f61 _public_6c01f61
#define public_6c01f71 _public_6c01f71
#define public_6c01f9a _public_6c01f9a
#define public_6c01fcd _public_6c01fcd

PROC_DECLARE(0x6c01e40, internal_6c01e40, public_6c01e40);
extern "C" NAKED register_t __cdecl internal_6c01e40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c01e89
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c01e89 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6c01ea1
        mov dword ptr ds : [esi+0xC], ebp
        public_6c01ea1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c01eb1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c01eb1 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c01ed0
        mov dword ptr ds : [esi+0xC], ebp
        public_6c01ed0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c01ee0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c01ee0 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x24]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c01f01
        mov dword ptr ds : [esi+0xC], ebp
        public_6c01f01 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c01f11
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c01f11 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c01f30
        mov dword ptr ds : [esi+0xC], ebp
        public_6c01f30 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c01f40
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c01f40 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c01f61
        mov dword ptr ds : [esi+0xC], ebp
        public_6c01f61 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c01f71
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c01f71 : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x30]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c01f9a
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c01f9a : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6c01fcd
        mov dword ptr ds : [ecx+0x10], esi
        public_6c01fcd : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c01e40)
    }
}

#undef public_6c01e89
#undef public_6c01ea1
#undef public_6c01eb1
#undef public_6c01ed0
#undef public_6c01ee0
#undef public_6c01f01
#undef public_6c01f11
#undef public_6c01f30
#undef public_6c01f40
#undef public_6c01f61
#undef public_6c01f71
#undef public_6c01f9a
#undef public_6c01fcd
