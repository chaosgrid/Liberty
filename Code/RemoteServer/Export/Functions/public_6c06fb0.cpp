#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c06ff2 _public_6c06ff2
#define public_6c07009 _public_6c07009
#define public_6c07037 _public_6c07037
#define public_6c07069 _public_6c07069
#define public_6c070a5 _public_6c070a5
#define public_6c070b1 _public_6c070b1

PROC_DECLARE(0x6c06fb0, internal_6c06fb0, public_6c06fb0);
extern "C" NAKED register_t __cdecl internal_6c06fb0()
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
        je public_6c06ff2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c06ff2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c07009
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c07009 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c070b1
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c07037
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c07037 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c070b1
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        push esi
        push ebp
        add eax, 2
        push ebx
        mov ecx, edi
        mov word ptr ds : [edi+0x24], dx
        mov dword ptr ds : [ebx], eax
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c07069
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c07069 : nop
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
        jbe public_6c070a5
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6c070a5 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6c070b1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c06fb0)
    }
}

#undef public_6c06ff2
#undef public_6c07009
#undef public_6c07037
#undef public_6c07069
#undef public_6c070a5
#undef public_6c070b1
