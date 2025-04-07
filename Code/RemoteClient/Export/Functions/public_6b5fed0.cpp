#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5ff17 _public_6b5ff17
#define public_6b5ff2e _public_6b5ff2e
#define public_6b5ff40 _public_6b5ff40
#define public_6b5ff63 _public_6b5ff63
#define public_6b5ff75 _public_6b5ff75
#define public_6b5ffa0 _public_6b5ffa0
#define public_6b5ffd1 _public_6b5ffd1

PROC_DECLARE(0x6b5fed0, internal_6b5fed0, public_6b5fed0);
extern "C" NAKED register_t __cdecl internal_6b5fed0()
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
        je public_6b5ff17
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5ff17 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5ff2e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5ff2e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5ff40
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5ff40 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 8
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5ff63
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5ff63 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5ff75
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5ff75 : nop
        mov eax, dword ptr ds : [ebx]
        fld qword ptr ds : [edi+0x28]
        fstp qword ptr ds : [eax]
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 8
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5ffa0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5ffa0 : nop
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
        jbe public_6b5ffd1
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5ffd1 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b5fed0)
    }
}

#undef public_6b5ff17
#undef public_6b5ff2e
#undef public_6b5ff40
#undef public_6b5ff63
#undef public_6b5ff75
#undef public_6b5ffa0
#undef public_6b5ffd1
