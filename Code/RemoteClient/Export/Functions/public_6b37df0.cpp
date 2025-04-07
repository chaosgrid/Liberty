#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b45a60);

#define public_6b37e17 _public_6b37e17
#define public_6b37e2d _public_6b37e2d
#define public_6b37e40 _public_6b37e40

PROC_DECLARE(0x6b37df0, internal_6b37df0, public_6b37df0);
extern "C" NAKED register_t __cdecl internal_6b37df0()
{
    __asm
    {
        push ecx
        push ebx
        lea eax, ss:[esp+4]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 0x54
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b37e40
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b37e2d
        public_6b37e17 : nop
        mov ecx, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        call public_6b45a60
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        cmp esi, eax
        jne public_6b37e17
        public_6b37e2d : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        public_6b37e40 : nop
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b37df0)
    }
}

#undef public_6b37e17
#undef public_6b37e2d
#undef public_6b37e40
