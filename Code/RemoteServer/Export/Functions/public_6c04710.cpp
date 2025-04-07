#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c04759 _public_6c04759
#define public_6c04771 _public_6c04771
#define public_6c04781 _public_6c04781
#define public_6c047a0 _public_6c047a0
#define public_6c047b0 _public_6c047b0
#define public_6c047cf _public_6c047cf
#define public_6c047df _public_6c047df
#define public_6c047fe _public_6c047fe
#define public_6c0480e _public_6c0480e
#define public_6c04837 _public_6c04837
#define public_6c0486a _public_6c0486a

PROC_DECLARE(0x6c04710, internal_6c04710, public_6c04710);
extern "C" NAKED register_t __cdecl internal_6c04710()
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
        je public_6c04759
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c04759 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6c04771
        mov dword ptr ds : [esi+0xC], ebp
        public_6c04771 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c04781
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c04781 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c047a0
        mov dword ptr ds : [esi+0xC], ebp
        public_6c047a0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c047b0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c047b0 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c047cf
        mov dword ptr ds : [esi+0xC], ebp
        public_6c047cf : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c047df
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c047df : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c047fe
        mov dword ptr ds : [esi+0xC], ebp
        public_6c047fe : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c0480e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c0480e : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [eax], edx
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
        je public_6c04837
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c04837 : nop
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
        jbe public_6c0486a
        mov dword ptr ds : [ecx+0x10], esi
        public_6c0486a : nop
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
        UNREACHABLE_TRAP(0x6c04710)
    }
}

#undef public_6c04759
#undef public_6c04771
#undef public_6c04781
#undef public_6c047a0
#undef public_6c047b0
#undef public_6c047cf
#undef public_6c047df
#undef public_6c047fe
#undef public_6c0480e
#undef public_6c04837
#undef public_6c0486a
