#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_591150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_591180 _public_591180
#define public_591198 _public_591198
#define public_5911a0 _public_5911a0
#define public_5911d8 _public_5911d8
#define public_5911e0 _public_5911e0
#define public_5911f5 _public_5911f5
#define public_591221 _public_591221

PROC_DECLARE(0x591150, internal_591150, public_591150);
extern "C" NAKED register_t __cdecl internal_591150()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ebx, ecx
        push esi
        push edi
        je public_591221
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], edi
        je public_591198
        lea esp, ss:[esp]
        public_591180 : nop
        cmp edi, ecx
        je public_591198
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x18], edx
        mov edi, edx
        jne public_591180
        public_591198 : nop
        cmp eax, esi
        mov ebp, eax
        je public_5911d8
        mov edi, edi
        public_5911a0 : nop
        mov edi, ebp
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edx+4], eax
        call public_45eeb0
        push edi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp ebp, esi
        mov dword ptr ds : [ebx+8], ecx
        jne public_5911a0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x18]
        public_5911d8 : nop
        cmp edi, ecx
        je public_591221
        lea esp, ss:[esp]
        public_5911e0 : nop
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_5911f5
        mov ebp, eax
        public_5911f5 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[edi+8]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_5911e0
        public_591221 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x591150)
    }
}

#undef public_591180
#undef public_591198
#undef public_5911a0
#undef public_5911d8
#undef public_5911e0
#undef public_5911f5
#undef public_591221
