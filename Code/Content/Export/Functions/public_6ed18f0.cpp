#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb66f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed18f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1f50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2330);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed1920 _public_6ed1920
#define public_6ed1947 _public_6ed1947
#define public_6ed1973 _public_6ed1973
#define public_6ed1977 _public_6ed1977
#define public_6ed1997 _public_6ed1997

PROC_DECLARE(0x6ed18f0, internal_6ed18f0, public_6ed18f0);
extern "C" NAKED register_t __cdecl internal_6ed18f0()
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
        je public_6ed1973
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ed1973
        cmp ebx, eax
        jne public_6ed1973
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ed1947
        lea esp, ss:[esp]
        public_6ed1920 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ed2330
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6ed3880
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ed1920
        public_6ed1947 : nop
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
        public_6ed1973 : nop
        cmp ecx, ebx
        je public_6ed1997
        public_6ed1977 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6eb66f0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ed1f50
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6ed1977
        public_6ed1997 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ed18f0)
    }
}

#undef public_6ed1920
#undef public_6ed1947
#undef public_6ed1973
#undef public_6ed1977
#undef public_6ed1997
