#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6beecf7 _public_6beecf7
#define public_6beed0e _public_6beed0e
#define public_6beed20 _public_6beed20
#define public_6beed43 _public_6beed43
#define public_6beed55 _public_6beed55
#define public_6beed78 _public_6beed78
#define public_6beed8a _public_6beed8a
#define public_6beedb5 _public_6beedb5
#define public_6beede6 _public_6beede6

PROC_DECLARE(0x6beecb0, internal_6beecb0, public_6beecb0);
extern "C" NAKED register_t __cdecl internal_6beecb0()
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
        je public_6beecf7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6beecf7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6beed0e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6beed0e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6beed20
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6beed20 : nop
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
        jbe public_6beed43
        mov dword ptr ds : [esi+0xC], 0x16
        public_6beed43 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6beed55
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6beed55 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6beed78
        mov dword ptr ds : [esi+0xC], 0x16
        public_6beed78 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6beed8a
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6beed8a : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
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
        je public_6beedb5
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6beedb5 : nop
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
        jbe public_6beede6
        mov dword ptr ds : [ecx+0x10], esi
        public_6beede6 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6beecb0)
    }
}

#undef public_6beecf7
#undef public_6beed0e
#undef public_6beed20
#undef public_6beed43
#undef public_6beed55
#undef public_6beed78
#undef public_6beed8a
#undef public_6beedb5
#undef public_6beede6
