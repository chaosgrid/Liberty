#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c038f9 _public_6c038f9
#define public_6c0391a _public_6c0391a
#define public_6c03932 _public_6c03932
#define public_6c03942 _public_6c03942
#define public_6c03964 _public_6c03964
#define public_6c03974 _public_6c03974
#define public_6c03996 _public_6c03996
#define public_6c039a6 _public_6c039a6
#define public_6c039c8 _public_6c039c8
#define public_6c039d8 _public_6c039d8
#define public_6c03a04 _public_6c03a04
#define public_6c03a37 _public_6c03a37

PROC_DECLARE(0x6c038b0, internal_6c038b0, public_6c038b0);
extern "C" NAKED register_t __cdecl internal_6c038b0()
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
        je public_6c038f9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c038f9 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push ecx
        push esi
        lea edx, ds:[edi+0x20]
        push edx
        push ebx
        mov ecx, edi
        call public_6bebfe0
        test eax, eax
        je public_6c0391a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c0391a : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6c03932
        mov dword ptr ds : [esi+0xC], ebp
        public_6c03932 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c03942
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c03942 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c03964
        mov dword ptr ds : [esi+0xC], ebp
        public_6c03964 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c03974
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c03974 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0xA4]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c03996
        mov dword ptr ds : [esi+0xC], ebp
        public_6c03996 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c039a6
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c039a6 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0xA8]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c039c8
        mov dword ptr ds : [esi+0xC], ebp
        public_6c039c8 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c039d8
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c039d8 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0xAC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c03a04
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c03a04 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6c03a37
        mov dword ptr ds : [ecx+0x10], esi
        public_6c03a37 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c038b0)
    }
}

#undef public_6c038f9
#undef public_6c0391a
#undef public_6c03932
#undef public_6c03942
#undef public_6c03964
#undef public_6c03974
#undef public_6c03996
#undef public_6c039a6
#undef public_6c039c8
#undef public_6c039d8
#undef public_6c03a04
#undef public_6c03a37
