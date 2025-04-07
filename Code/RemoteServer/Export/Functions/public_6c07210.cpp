#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c07254 _public_6c07254
#define public_6c0726b _public_6c0726b
#define public_6c07299 _public_6c07299
#define public_6c072d1 _public_6c072d1
#define public_6c0730f _public_6c0730f
#define public_6c0731b _public_6c0731b

PROC_DECLARE(0x6c07210, internal_6c07210, public_6c07210);
extern "C" NAKED register_t __cdecl internal_6c07210()
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
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c07254
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c07254 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c0726b
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c0726b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0731b
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi+0x20], edx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c07299
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c07299 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c0731b
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x24]
        call public_6bda4c0
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        add ebp, 0xC
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c072d1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c072d1 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
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
        jbe public_6c0730f
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6c0730f : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6c0731b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c07210)
    }
}

#undef public_6c07254
#undef public_6c0726b
#undef public_6c07299
#undef public_6c072d1
#undef public_6c0730f
#undef public_6c0731b
