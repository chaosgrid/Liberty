#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63165f0);
CLANG_FORWARD_PROC_SYMBOL(public_63177f0);
CLANG_FORWARD_PROC_SYMBOL(public_6317bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6318d60);
CLANG_FORWARD_PROC_SYMBOL(public_6319c30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6317c00 _public_6317c00
#define public_6317c27 _public_6317c27
#define public_6317c53 _public_6317c53
#define public_6317c57 _public_6317c57
#define public_6317c77 _public_6317c77

PROC_DECLARE(0x6317bd0, internal_6317bd0, public_6317bd0);
extern "C" NAKED register_t __cdecl internal_6317bd0()
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
        je public_6317c53
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6317c53
        cmp ebx, eax
        jne public_6317c53
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6317c27
        lea esp, ss:[esp]
        public_6317c00 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6318d60
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_63165f0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6317c00
        public_6317c27 : nop
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
        public_6317c53 : nop
        cmp ecx, ebx
        je public_6317c77
        public_6317c57 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6319c30
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_63177f0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6317c57
        public_6317c77 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6317bd0)
    }
}

#undef public_6317c00
#undef public_6317c27
#undef public_6317c53
#undef public_6317c57
#undef public_6317c77
