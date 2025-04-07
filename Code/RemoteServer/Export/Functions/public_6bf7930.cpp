#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf7977 _public_6bf7977
#define public_6bf798e _public_6bf798e
#define public_6bf79a0 _public_6bf79a0
#define public_6bf79cb _public_6bf79cb
#define public_6bf79fc _public_6bf79fc

PROC_DECLARE(0x6bf7930, internal_6bf7930, public_6bf7930);
extern "C" NAKED register_t __cdecl internal_6bf7930()
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
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf7977
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf7977 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf798e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf798e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf79a0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf79a0 : nop
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
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf79cb
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf79cb : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
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
        jbe public_6bf79fc
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf79fc : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bf7930)
    }
}

#undef public_6bf7977
#undef public_6bf798e
#undef public_6bf79a0
#undef public_6bf79cb
#undef public_6bf79fc
