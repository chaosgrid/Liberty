#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b62f27 _public_6b62f27
#define public_6b62f3e _public_6b62f3e
#define public_6b62f50 _public_6b62f50
#define public_6b62f73 _public_6b62f73
#define public_6b62f85 _public_6b62f85
#define public_6b62fa8 _public_6b62fa8
#define public_6b62fba _public_6b62fba
#define public_6b62fe7 _public_6b62fe7
#define public_6b63018 _public_6b63018

PROC_DECLARE(0x6b62ee0, internal_6b62ee0, public_6b62ee0);
extern "C" NAKED register_t __cdecl internal_6b62ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
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
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b62f27
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b62f27 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b62f3e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b62f3e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b62f50
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b62f50 : nop
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
        jbe public_6b62f73
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b62f73 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b62f85
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b62f85 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b62fa8
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b62fa8 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b62fba
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b62fba : nop
        mov eax, dword ptr ds : [ebx]
        mov cx, word ptr ds : [edi+0x28]
        mov word ptr ds : [eax], cx
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 2
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b62fe7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b62fe7 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6b63018
        mov dword ptr ds : [ecx+0x10], esi
        public_6b63018 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b62ee0)
    }
}

#undef public_6b62f27
#undef public_6b62f3e
#undef public_6b62f50
#undef public_6b62f73
#undef public_6b62f85
#undef public_6b62fa8
#undef public_6b62fba
#undef public_6b62fe7
#undef public_6b63018
