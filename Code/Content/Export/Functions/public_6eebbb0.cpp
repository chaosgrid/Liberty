#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eebbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f21210);

#define public_6eebbe0 _public_6eebbe0
#define public_6eebbf0 _public_6eebbf0
#define public_6eebbf3 _public_6eebbf3
#define public_6eebbf7 _public_6eebbf7
#define public_6eebc2a _public_6eebc2a
#define public_6eebc33 _public_6eebc33
#define public_6eebc40 _public_6eebc40
#define public_6eebc56 _public_6eebc56

PROC_DECLARE(0x6eebbb0, internal_6eebbb0, public_6eebbb0);
extern "C" NAKED register_t __cdecl internal_6eebbb0()
{
    __asm
    {
        sub esp, 0xC
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_6fcf100]
        push ebx
        mov ebx, dword ptr ds : [public_6fcf104]
        mov al, 1
        push esi
        mov dword ptr ss : [esp+0xC], ecx
        mov byte ptr ss : [esp+0x10], al
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ebx
        push edi
        mov edi, edx
        je public_6eebbf7
        lea esp, ss:[esp]
        public_6eebbe0 : nop
        cmp ecx, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov edi, esi
        je public_6eebbf0
        mov esi, dword ptr ds : [esi]
        jmp public_6eebbf3
        public_6eebbf0 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6eebbf3 : nop
        cmp esi, ebx
        jne public_6eebbe0
        public_6eebbf7 : nop
        mov cl, byte ptr ds : [public_6fcf108]
        test cl, cl
        jne public_6eebc40
        test al, al
        mov dword ptr ss : [esp+0x1C], edi
        je public_6eebc33
        cmp edi, dword ptr ds : [edx]
        jne public_6eebc2a
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_6fcf0fc
        call public_6f21210
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_6eebc2a : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f00610
        public_6eebc33 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [edx+0xC], ecx
        jge public_6eebc56
        public_6eebc40 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        lea ecx, ss:[esp+0x14]
        push esi
        push ecx
        mov ecx, offset public_6fcf0fc
        call public_6f21210
        public_6eebc56 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6eebbb0)
    }
}

#undef public_6eebbe0
#undef public_6eebbf0
#undef public_6eebbf3
#undef public_6eebbf7
#undef public_6eebc2a
#undef public_6eebc33
#undef public_6eebc40
#undef public_6eebc56
