#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40c30);
CLANG_FORWARD_PROC_SYMBOL(public_6f45a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f45eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46820);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f40c60 _public_6f40c60
#define public_6f40c7f _public_6f40c7f
#define public_6f40cab _public_6f40cab
#define public_6f40cb0 _public_6f40cb0
#define public_6f40cd0 _public_6f40cd0

PROC_DECLARE(0x6f40c30, internal_6f40c30, public_6f40c30);
extern "C" NAKED register_t __cdecl internal_6f40c30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6f40cab
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f40cab
        cmp ebx, eax
        jne public_6f40cab
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f40c7f
        lea esp, ss:[esp]
        public_6f40c60 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f45eb0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f40c60
        public_6f40c7f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_6f40cab : nop
        cmp ecx, ebx
        je public_6f40cd0
        nop 
        public_6f40cb0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f46820
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f45a60
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f40cb0
        public_6f40cd0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f40c30)
    }
}

#undef public_6f40c60
#undef public_6f40c7f
#undef public_6f40cab
#undef public_6f40cb0
#undef public_6f40cd0
