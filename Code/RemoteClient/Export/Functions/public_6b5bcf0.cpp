#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5bd37 _public_6b5bd37
#define public_6b5bd4e _public_6b5bd4e
#define public_6b5bd60 _public_6b5bd60
#define public_6b5bd8b _public_6b5bd8b
#define public_6b5bdbc _public_6b5bdbc

PROC_DECLARE(0x6b5bcf0, internal_6b5bcf0, public_6b5bcf0);
extern "C" NAKED register_t __cdecl internal_6b5bcf0()
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
        je public_6b5bd37
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5bd37 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5bd4e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5bd4e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5bd60
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5bd60 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5bd8b
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5bd8b : nop
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
        jbe public_6b5bdbc
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5bdbc : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b5bcf0)
    }
}

#undef public_6b5bd37
#undef public_6b5bd4e
#undef public_6b5bd60
#undef public_6b5bd8b
#undef public_6b5bdbc
