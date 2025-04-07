#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b647c2 _public_6b647c2
#define public_6b647da _public_6b647da
#define public_6b64802 _public_6b64802
#define public_6b6482a _public_6b6482a
#define public_6b64852 _public_6b64852
#define public_6b64878 _public_6b64878
#define public_6b6489e _public_6b6489e
#define public_6b648ce _public_6b648ce
#define public_6b6490c _public_6b6490c
#define public_6b64918 _public_6b64918

PROC_DECLARE(0x6b64780, internal_6b64780, public_6b64780);
extern "C" NAKED register_t __cdecl internal_6b64780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b647c2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b647c2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6b647da
        mov dword ptr ds : [esi+0xC], ecx
        public_6b647da : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b64918
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b64802
        mov dword ptr ds : [esi+0xC], ecx
        public_6b64802 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b64918
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b6482a
        mov dword ptr ds : [esi+0xC], ecx
        public_6b6482a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b64918
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b64852
        mov dword ptr ds : [esi+0xC], ecx
        public_6b64852 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b64918
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x2C], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b64878
        mov dword ptr ds : [esi+0xC], ecx
        public_6b64878 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b64918
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov byte ptr ds : [edi+0x30], dl
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b6489e
        mov dword ptr ds : [esi+0xC], ecx
        public_6b6489e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b64918
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        mov dword ptr ds : [edi+0x34], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b648ce
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b648ce : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6b4ecd0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6b6490c
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b6490c : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b64918 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b64780)
    }
}

#undef public_6b647c2
#undef public_6b647da
#undef public_6b64802
#undef public_6b6482a
#undef public_6b64852
#undef public_6b64878
#undef public_6b6489e
#undef public_6b648ce
#undef public_6b6490c
#undef public_6b64918
