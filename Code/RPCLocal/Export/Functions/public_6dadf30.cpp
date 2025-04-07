#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dadf72 _public_6dadf72
#define public_6dadf8a _public_6dadf8a
#define public_6dadfb2 _public_6dadfb2
#define public_6dadfda _public_6dadfda
#define public_6dae002 _public_6dae002
#define public_6dae028 _public_6dae028
#define public_6dae04e _public_6dae04e
#define public_6dae07e _public_6dae07e
#define public_6dae0bc _public_6dae0bc
#define public_6dae0c8 _public_6dae0c8

PROC_DECLARE(0x6dadf30, internal_6dadf30, public_6dadf30);
extern "C" NAKED register_t __cdecl internal_6dadf30()
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
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dadf72
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dadf72 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6dadf8a
        mov dword ptr ds : [esi+0xC], ecx
        public_6dadf8a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dae0c8
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
        jbe public_6dadfb2
        mov dword ptr ds : [esi+0xC], ecx
        public_6dadfb2 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dae0c8
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
        jbe public_6dadfda
        mov dword ptr ds : [esi+0xC], ecx
        public_6dadfda : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dae0c8
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
        jbe public_6dae002
        mov dword ptr ds : [esi+0xC], ecx
        public_6dae002 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dae0c8
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
        jbe public_6dae028
        mov dword ptr ds : [esi+0xC], ecx
        public_6dae028 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dae0c8
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
        jbe public_6dae04e
        mov dword ptr ds : [esi+0xC], ecx
        public_6dae04e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dae0c8
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        mov dword ptr ds : [edi+0x34], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dae07e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dae07e : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6da16b0
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
        jbe public_6dae0bc
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6dae0bc : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6dae0c8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6dadf30)
    }
}

#undef public_6dadf72
#undef public_6dadf8a
#undef public_6dadfb2
#undef public_6dadfda
#undef public_6dae002
#undef public_6dae028
#undef public_6dae04e
#undef public_6dae07e
#undef public_6dae0bc
#undef public_6dae0c8
