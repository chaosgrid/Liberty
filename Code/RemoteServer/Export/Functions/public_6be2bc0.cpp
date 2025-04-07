#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6be2c02 _public_6be2c02
#define public_6be2c19 _public_6be2c19
#define public_6be2c47 _public_6be2c47
#define public_6be2c77 _public_6be2c77
#define public_6be2cb3 _public_6be2cb3
#define public_6be2cbf _public_6be2cbf

PROC_DECLARE(0x6be2bc0, internal_6be2bc0, public_6be2bc0);
extern "C" NAKED register_t __cdecl internal_6be2bc0()
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
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6be2c02
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6be2c02 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6be2c19
        mov dword ptr ds : [esi+0xC], 0x17
        public_6be2c19 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6be2cbf
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6be2c47
        mov dword ptr ds : [esi+0xC], 0x17
        public_6be2c47 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6be2cbf
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        push esi
        push ebp
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [edi+0x24], edx
        mov dword ptr ds : [ebx], eax
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6be2c77
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6be2c77 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6be2cb3
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6be2cb3 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6be2cbf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6be2bc0)
    }
}

#undef public_6be2c02
#undef public_6be2c19
#undef public_6be2c47
#undef public_6be2c77
#undef public_6be2cb3
#undef public_6be2cbf
