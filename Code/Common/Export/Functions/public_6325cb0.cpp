#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63272c0);
CLANG_FORWARD_PROC_SYMBOL(public_632d550);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6325ce0 _public_6325ce0
#define public_6325cf8 _public_6325cf8
#define public_6325d00 _public_6325d00
#define public_6325d38 _public_6325d38
#define public_6325d40 _public_6325d40
#define public_6325d55 _public_6325d55
#define public_6325d81 _public_6325d81

PROC_DECLARE(0x6325cb0, internal_6325cb0, public_6325cb0);
extern "C" NAKED register_t __cdecl internal_6325cb0()
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
        je public_6325d81
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], edi
        je public_6325cf8
        lea esp, ss:[esp]
        public_6325ce0 : nop
        cmp edi, ecx
        je public_6325cf8
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x18], edx
        mov edi, edx
        jne public_6325ce0
        public_6325cf8 : nop
        cmp eax, esi
        mov ebp, eax
        je public_6325d38
        mov edi, edi
        public_6325d00 : nop
        mov edi, ebp
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edx+4], eax
        call public_63272c0
        push edi
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp ebp, esi
        mov dword ptr ds : [ebx+8], ecx
        jne public_6325d00
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x18]
        public_6325d38 : nop
        cmp edi, ecx
        je public_6325d81
        lea esp, ss:[esp]
        public_6325d40 : nop
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6325d55
        mov ebp, eax
        public_6325d55 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[edi+8]
        push ecx
        add eax, 8
        push eax
        call public_632d550
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_6325d40
        public_6325d81 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6325cb0)
    }
}

#undef public_6325ce0
#undef public_6325cf8
#undef public_6325d00
#undef public_6325d38
#undef public_6325d40
#undef public_6325d55
#undef public_6325d81
