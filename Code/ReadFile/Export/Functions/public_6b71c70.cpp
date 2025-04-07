#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b760c0);

#define public_6b71c82 _public_6b71c82
#define public_6b71c94 _public_6b71c94
#define public_6b71cbd _public_6b71cbd
#define public_6b71ccf _public_6b71ccf
#define public_6b71ce9 _public_6b71ce9
#define public_6b71cfc _public_6b71cfc
#define public_6b71d25 _public_6b71d25
#define public_6b71d8e _public_6b71d8e
#define public_6b71dba _public_6b71dba

PROC_DECLARE(0x6b71c70, internal_6b71c70, public_6b71c70);
extern "C" NAKED register_t __cdecl internal_6b71c70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebp
        mov ebp, ecx
        dec eax
        push esi
        push edi
        cmp eax, 4
        lea edi, ss:[ebp+0x20]
        jb public_6b71c94
        public_6b71c82 : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        je public_6b71dba
        sub eax, 4
        cmp eax, 4
        jae public_6b71c82
        public_6b71c94 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        sub ecx, eax
        lea ecx, ds:[ecx+ecx*2]
        lea edi, ds:[edi+ecx*4+4]
        test edi, edi
        je public_6b71dba
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6b71dba
        mov edx, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6b71ccf
        public_6b71cbd : nop
        pop edi
        mov dword ptr ss : [ebp+0x474], 0x12
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        public_6b71ccf : nop
        mov cl, byte ptr ds : [edi+8]
        lea esi, ds:[edi+8]
        cmp cl, 0x2A
        jne public_6b71ce9
        mov cl, byte ptr ds : [esi+1]
        test cl, cl
        je public_6b71d25
        cmp dword ptr ds : [esi], 0x2A2E2A
        je public_6b71d25
        public_6b71ce9 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp+0xC]
        add ecx, edx
        mov edx, esi
        call public_6b760c0
        test eax, eax
        jne public_6b71d25
        public_6b71cfc : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        add eax, edx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6b71cbd
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp+0xC]
        add ecx, edx
        mov edx, esi
        call public_6b760c0
        test eax, eax
        je public_6b71cfc
        public_6b71d25 : nop
        mov edx, dword ptr ds : [edi]
        mov esi, dword ptr ss : [esp+0x14]
        push ebx
        mov ebx, dword ptr ds : [public_6b7901c]
        mov eax, dword ptr ds : [edx+8]
        lea edx, ds:[esi+4]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi]
        push edx
        mov eax, dword ptr ds : [ecx+0x20]
        mov ecx, eax
        shr ecx, 0x10
        push ecx
        push eax
        call ebx
        mov edx, dword ptr ds : [edi]
        lea ecx, ds:[esi+0xC]
        push ecx
        mov eax, dword ptr ds : [edx+0x24]
        mov edx, eax
        shr edx, 0x10
        push edx
        push eax
        call ebx
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[esi+0x14]
        push ecx
        mov eax, dword ptr ds : [eax+0x28]
        mov edx, eax
        shr edx, 0x10
        push edx
        push eax
        call ebx
        xor eax, eax
        pop ebx
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [esi+0x28], eax
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        lea ecx, ds:[esi+0x2C]
        add eax, edx
        public_6b71d8e : nop
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [ecx], dl
        inc ecx
        test dl, dl
        jne public_6b71d8e
        mov byte ptr ds : [esi+0x130], dl
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [eax]
        add ecx, edx
        mov eax, 1
        mov dword ptr ds : [edi], ecx
        pop edi
        pop esi
        pop ebp
        ret 8
        public_6b71dba : nop
        pop edi
        mov dword ptr ss : [ebp+0x474], 6
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6b71c70)
    }
}

#undef public_6b71c82
#undef public_6b71c94
#undef public_6b71cbd
#undef public_6b71ccf
#undef public_6b71ce9
#undef public_6b71cfc
#undef public_6b71d25
#undef public_6b71d8e
#undef public_6b71dba
