#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed0e50 _public_6ed0e50
#define public_6ed0e6f _public_6ed0e6f
#define public_6ed0e9b _public_6ed0e9b
#define public_6ed0ea0 _public_6ed0ea0
#define public_6ed0ec0 _public_6ed0ec0

PROC_DECLARE(0x6ed0e20, internal_6ed0e20, public_6ed0e20);
extern "C" NAKED register_t __cdecl internal_6ed0e20()
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
        je public_6ed0e9b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ed0e9b
        cmp ebx, eax
        jne public_6ed0e9b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ed0e6f
        lea esp, ss:[esp]
        public_6ed0e50 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ed1cd0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ed0e50
        public_6ed0e6f : nop
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
        public_6ed0e9b : nop
        cmp ecx, ebx
        je public_6ed0ec0
        nop 
        public_6ed0ea0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f1fa00
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f20e00
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6ed0ea0
        public_6ed0ec0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ed0e20)
    }
}

#undef public_6ed0e50
#undef public_6ed0e6f
#undef public_6ed0e9b
#undef public_6ed0ea0
#undef public_6ed0ec0
