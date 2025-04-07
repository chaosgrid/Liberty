#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd92d1 _public_6bd92d1
#define public_6bd92e3 _public_6bd92e3
#define public_6bd92f0 _public_6bd92f0
#define public_6bd931f _public_6bd931f
#define public_6bd9323 _public_6bd9323
#define public_6bd9338 _public_6bd9338
#define public_6bd934f _public_6bd934f
#define public_6bd9364 _public_6bd9364

PROC_DECLARE(0x6bd92a0, internal_6bd92a0, public_6bd92a0);
extern "C" NAKED register_t __cdecl internal_6bd92a0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov edx, ecx
        push ebp
        lea ecx, ds:[eax+4]
        lea ebp, ds:[edx+4]
        cmp ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], edx
        je public_6bd9364
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6bd92e3
        public_6bd92d1 : nop
        cmp ebx, ecx
        je public_6bd92e3
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6bd92d1
        public_6bd92e3 : nop
        cmp eax, esi
        mov edi, eax
        je public_6bd931f
        lea esp, ss:[esp]
        public_6bd92f0 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6bd92f0
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6bd931f : nop
        cmp ebx, ecx
        je public_6bd9364
        public_6bd9323 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6c09d26
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6bd9338
        mov edi, eax
        public_6bd9338 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6bd934f
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6bd934f : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6bd9323
        mov edx, dword ptr ss : [esp+0x14]
        public_6bd9364 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea esi, ds:[eax+0x10]
        lea edi, ds:[edx+0x10]
        mov ecx, 6
        rep movsd
        pop edi
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+0x28]
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0x28], eax
        mov eax, edx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6bd92a0)
    }
}

#undef public_6bd92d1
#undef public_6bd92e3
#undef public_6bd92f0
#undef public_6bd931f
#undef public_6bd9323
#undef public_6bd9338
#undef public_6bd934f
#undef public_6bd9364
