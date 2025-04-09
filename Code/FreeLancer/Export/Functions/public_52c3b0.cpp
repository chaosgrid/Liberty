#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52a680);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_52c3ed _public_52c3ed
#define public_52c3f5 _public_52c3f5
#define public_52c406 _public_52c406

PROC_DECLARE(0x52c3b0, internal_52c3b0, public_52c3b0);
extern "C" NAKED register_t __cdecl internal_52c3b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x2C]
        test al, al
        jne public_52c406
        push esi
        push edi
        mov byte ptr ds : [ebx+0x2C], 1
        call public_52a680
        mov esi, eax
        lea edi, ds:[ebx+0x28]
        push edi
        mov ecx, esi
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_52c3ed
        mov ecx, dword ptr ds : [edi]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_52c3ed
        lea eax, ss:[esp+0xC]
        jmp public_52c3f5
        public_52c3ed : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_52c3f5 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        pop edi
        pop esi
        je public_52c406
        call dword ptr ds : [public_5c68a4]
        public_52c406 : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c6854]
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x52c3b0)
    }
}

#undef public_52c3ed
#undef public_52c3f5
#undef public_52c406
