#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c02797 _public_6c02797
#define public_6c027ae _public_6c027ae
#define public_6c027c0 _public_6c027c0
#define public_6c027e3 _public_6c027e3
#define public_6c027f5 _public_6c027f5
#define public_6c02816 _public_6c02816
#define public_6c02828 _public_6c02828
#define public_6c02851 _public_6c02851
#define public_6c02882 _public_6c02882

PROC_DECLARE(0x6c02750, internal_6c02750, public_6c02750);
extern "C" NAKED register_t __cdecl internal_6c02750()
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
        je public_6c02797
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c02797 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c027ae
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c027ae : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c027c0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c027c0 : nop
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
        jbe public_6c027e3
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c027e3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c027f5
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c027f5 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c02816
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c02816 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c02828
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c02828 : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x28]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c02851
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c02851 : nop
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
        jbe public_6c02882
        mov dword ptr ds : [ecx+0x10], esi
        public_6c02882 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c02750)
    }
}

#undef public_6c02797
#undef public_6c027ae
#undef public_6c027c0
#undef public_6c027e3
#undef public_6c027f5
#undef public_6c02816
#undef public_6c02828
#undef public_6c02851
#undef public_6c02882
