#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaecb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eaece7 _public_6eaece7
#define public_6eaecfc _public_6eaecfc
#define public_6eaed1f _public_6eaed1f
#define public_6eaed31 _public_6eaed31

PROC_DECLARE(0x6eaecb0, internal_6eaecb0, public_6eaecb0);
extern "C" NAKED register_t __cdecl internal_6eaecb0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi]
        push edi
        mov ebp, ecx
        push 0x14
        mov byte ptr ss : [ebp], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6eaed31
        push ebx
        public_6eaece7 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x14
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6eaecfc
        mov ebx, eax
        public_6eaecfc : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6eaed1f
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+8], edx
        public_6eaed1f : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6eaece7
        pop ebx
        public_6eaed31 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6eaecb0)
    }
}

#undef public_6eaece7
#undef public_6eaecfc
#undef public_6eaed1f
#undef public_6eaed31
