#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c2a0);
CLANG_FORWARD_PROC_SYMBOL(public_632d550);
CLANG_FORWARD_PROC_SYMBOL(public_632d6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632c2b0 _public_632c2b0
#define public_632c2e1 _public_632c2e1
#define public_632c2f0 _public_632c2f0
#define public_632c305 _public_632c305
#define public_632c331 _public_632c331

PROC_DECLARE(0x632c2a0, internal_632c2a0, public_632c2a0);
extern "C" NAKED register_t __cdecl internal_632c2a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+4]
        mov ebx, dword ptr ss : [ebp]
        cmp ebx, ebp
        je public_632c2e1
        public_632c2b0 : nop
        mov esi, ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push 0
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_632d6e0
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp ebx, ebp
        mov dword ptr ds : [edi+8], ecx
        jne public_632c2b0
        public_632c2e1 : nop
        mov esi, dword ptr ss : [esp+0x14]
        cmp esi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [ecx]
        je public_632c331
        public_632c2f0 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_632c305
        mov ebp, eax
        public_632c305 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_632d550
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_632c2f0
        public_632c331 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x632c2a0)
    }
}

#undef public_632c2b0
#undef public_632c2e1
#undef public_632c2f0
#undef public_632c305
#undef public_632c331
