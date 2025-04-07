#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c190);
CLANG_FORWARD_PROC_SYMBOL(public_632d550);
CLANG_FORWARD_PROC_SYMBOL(public_632d6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632a421 _public_632a421
#define public_632a45a _public_632a45a
#define public_632a463 _public_632a463
#define public_632a478 _public_632a478
#define public_632a4a4 _public_632a4a4

PROC_DECLARE(0x632a3f0, internal_632a3f0, public_632a3f0);
extern "C" NAKED register_t __cdecl internal_632a3f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_6401950
        call public_632c190
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, eax
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ss : [ebp]
        cmp ebx, ebp
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x10], esi
        je public_632a45a
        public_632a421 : nop
        mov esi, ebx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        push 0
        lea ecx, ds:[esi+8]
        call public_632d6e0
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp ebx, ebp
        mov dword ptr ds : [edi+8], ecx
        jne public_632a421
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        public_632a45a : nop
        cmp esi, eax
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [ecx]
        je public_632a4a4
        public_632a463 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_632a478
        mov ebp, eax
        public_632a478 : nop
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
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_632a463
        public_632a4a4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x632a3f0)
    }
}

#undef public_632a421
#undef public_632a45a
#undef public_632a463
#undef public_632a478
#undef public_632a4a4
