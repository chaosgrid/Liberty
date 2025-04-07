#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_632c3a0);
CLANG_FORWARD_PROC_SYMBOL(public_632c420);

#define public_6325230 _public_6325230
#define public_632526e _public_632526e
#define public_632528e _public_632528e
#define public_63252a7 _public_63252a7
#define public_63252b9 _public_63252b9
#define public_63252d9 _public_63252d9

PROC_DECLARE(0x6325200, internal_6325200, public_6325200);
extern "C" NAKED register_t __cdecl internal_6325200()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push ebp
        lea edx, ds:[ecx+4]
        lea ebx, ds:[eax+4]
        cmp ebx, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], eax
        je public_632528e
        mov edi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ebp, dword ptr ds : [edx+4]
        mov esi, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x10], ebp
        je public_632526e
        mov edi, edi
        public_6325230 : nop
        cmp esi, ebp
        je public_632526e
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+0x14], ecx
        lea edx, ds:[esi+0x18]
        mov ebp, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x18]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_6325230
        public_632526e : nop
        push edi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_62728a0
        push ebp
        push esi
        push edi
        mov ecx, ebx
        call public_632c3a0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        public_632528e : nop
        lea edx, ds:[ecx+0x10]
        lea ebx, ds:[eax+0x10]
        cmp ebx, edx
        je public_63252d9
        mov edi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ebp, dword ptr ds : [edx+4]
        mov esi, dword ptr ss : [ebp]
        je public_63252b9
        public_63252a7 : nop
        cmp esi, ebp
        je public_63252b9
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_63252a7
        public_63252b9 : nop
        push edi
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_62728a0
        push ebp
        push esi
        push edi
        mov ecx, ebx
        call public_632c420
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        public_63252d9 : nop
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x1C], edx
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [eax+0x24], edx
        mov edx, dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [eax+0x2C], edx
        mov edx, dword ptr ds : [ecx+0x30]
        mov dword ptr ds : [eax+0x30], edx
        mov edx, dword ptr ds : [ecx+0x34]
        mov dword ptr ds : [eax+0x34], edx
        mov edx, dword ptr ds : [ecx+0x38]
        mov dword ptr ds : [eax+0x38], edx
        mov edx, dword ptr ds : [ecx+0x3C]
        mov dword ptr ds : [eax+0x3C], edx
        add ecx, 0x40
        mov esi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0x40]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ecx+8]
        pop edi
        mov dword ptr ds : [edx+8], esi
        mov ecx, dword ptr ds : [ecx+0xC]
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0xC], ecx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6325200)
    }
}

#undef public_6325230
#undef public_632526e
#undef public_632528e
#undef public_63252a7
#undef public_63252b9
#undef public_63252d9
