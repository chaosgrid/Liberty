#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b60da7 _public_6b60da7
#define public_6b60dbe _public_6b60dbe
#define public_6b60dd0 _public_6b60dd0
#define public_6b60df3 _public_6b60df3
#define public_6b60e05 _public_6b60e05
#define public_6b60e30 _public_6b60e30
#define public_6b60e63 _public_6b60e63

PROC_DECLARE(0x6b60d60, internal_6b60d60, public_6b60d60);
extern "C" NAKED register_t __cdecl internal_6b60d60()
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
        je public_6b60da7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b60da7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b60dbe
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b60dbe : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b60dd0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b60dd0 : nop
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
        jbe public_6b60df3
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b60df3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b60e05
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b60e05 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b60e30
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b60e30 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov edi, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6b60e63
        mov dword ptr ds : [ecx+0x10], esi
        public_6b60e63 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b60d60)
    }
}

#undef public_6b60da7
#undef public_6b60dbe
#undef public_6b60dd0
#undef public_6b60df3
#undef public_6b60e05
#undef public_6b60e30
#undef public_6b60e63
