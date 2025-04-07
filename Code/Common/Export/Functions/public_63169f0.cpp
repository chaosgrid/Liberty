#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ffd0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_63169f0);
CLANG_FORWARD_PROC_SYMBOL(public_6318550);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6316a20 _public_6316a20
#define public_6316a3f _public_6316a3f
#define public_6316a6b _public_6316a6b
#define public_6316a70 _public_6316a70
#define public_6316a90 _public_6316a90

PROC_DECLARE(0x63169f0, internal_63169f0, public_63169f0);
extern "C" NAKED register_t __cdecl internal_63169f0()
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
        je public_6316a6b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6316a6b
        cmp ebx, eax
        jne public_6316a6b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6316a3f
        lea esp, ss:[esp]
        public_6316a20 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6318550
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6316a20
        public_6316a3f : nop
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
        public_6316a6b : nop
        cmp ecx, ebx
        je public_6316a90
        nop 
        public_6316a70 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_628ffd0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62b5ff0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6316a70
        public_6316a90 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x63169f0)
    }
}

#undef public_6316a20
#undef public_6316a3f
#undef public_6316a6b
#undef public_6316a70
#undef public_6316a90
