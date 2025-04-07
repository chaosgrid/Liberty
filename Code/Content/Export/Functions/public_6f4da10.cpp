#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4da10);

#define public_6f4da23 _public_6f4da23
#define public_6f4da3e _public_6f4da3e
#define public_6f4da42 _public_6f4da42
#define public_6f4da47 _public_6f4da47
#define public_6f4da79 _public_6f4da79

PROC_DECLARE(0x6f4da10, internal_6f4da10, public_6f4da10);
extern "C" NAKED register_t __cdecl internal_6f4da10()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4da47
        public_6f4da23 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        call dword ptr ds : [public_6fb32bc]
        add esp, 8
        test al, al
        je public_6f4da3e
        mov esi, dword ptr ds : [esi+8]
        jmp public_6f4da42
        public_6f4da3e : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_6f4da42 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6f4da23
        public_6f4da47 : nop
        cmp ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0xC], ebx
        je public_6f4da79
        mov edx, dword ptr ss : [esp+0x18]
        add ebx, 0xC
        push ebx
        push edx
        call dword ptr ds : [public_6fb32bc]
        add esp, 8
        test al, al
        jne public_6f4da79
        lea eax, ss:[esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6f4da79 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f4da10)
    }
}

#undef public_6f4da23
#undef public_6f4da3e
#undef public_6f4da42
#undef public_6f4da47
#undef public_6f4da79
