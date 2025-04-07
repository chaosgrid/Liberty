#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62be7d0);
CLANG_FORWARD_PROC_SYMBOL(public_62bea50);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62be800 _public_62be800
#define public_62be81f _public_62be81f
#define public_62be84b _public_62be84b
#define public_62be850 _public_62be850
#define public_62be870 _public_62be870

PROC_DECLARE(0x62be7d0, internal_62be7d0, public_62be7d0);
extern "C" NAKED register_t __cdecl internal_62be7d0()
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
        je public_62be84b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_62be84b
        cmp ebx, eax
        jne public_62be84b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62be81f
        lea esp, ss:[esp]
        public_62be800 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62bea50
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62be800
        public_62be81f : nop
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
        public_62be84b : nop
        cmp ecx, ebx
        je public_62be870
        nop 
        public_62be850 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_63429f0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62be400
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_62be850
        public_62be870 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62be7d0)
    }
}

#undef public_62be800
#undef public_62be81f
#undef public_62be84b
#undef public_62be850
#undef public_62be870
