#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eebb00);
CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f21210);

#define public_6eebb30 _public_6eebb30
#define public_6eebb40 _public_6eebb40
#define public_6eebb43 _public_6eebb43
#define public_6eebb47 _public_6eebb47
#define public_6eebb7a _public_6eebb7a
#define public_6eebb83 _public_6eebb83
#define public_6eebb90 _public_6eebb90
#define public_6eebba6 _public_6eebba6

PROC_DECLARE(0x6eebb00, internal_6eebb00, public_6eebb00);
extern "C" NAKED register_t __cdecl internal_6eebb00()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [public_6fcf12c]
        push ebx
        mov ebx, dword ptr ds : [public_6fcf130]
        push esi
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+8], ecx
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ebx
        push edi
        mov edi, edx
        mov al, 1
        je public_6eebb47
        lea ecx, ds:[ecx]
        public_6eebb30 : nop
        cmp ecx, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov edi, esi
        je public_6eebb40
        mov esi, dword ptr ds : [esi]
        jmp public_6eebb43
        public_6eebb40 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6eebb43 : nop
        cmp esi, ebx
        jne public_6eebb30
        public_6eebb47 : nop
        mov cl, byte ptr ds : [public_6fcf134]
        test cl, cl
        jne public_6eebb90
        test al, al
        mov dword ptr ss : [esp+0x18], edi
        je public_6eebb83
        cmp edi, dword ptr ds : [edx]
        jne public_6eebb7a
        lea eax, ss:[esp+0xC]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, offset public_6fcf128
        call public_6f21210
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_6eebb7a : nop
        lea ecx, ss:[esp+0x18]
        call public_6f00610
        public_6eebb83 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [eax+0xC], edx
        jge public_6eebba6
        public_6eebb90 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        push edi
        lea edx, ss:[esp+0x24]
        push esi
        push edx
        mov ecx, offset public_6fcf128
        call public_6f21210
        public_6eebba6 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6eebb00)
    }
}

#undef public_6eebb30
#undef public_6eebb40
#undef public_6eebb43
#undef public_6eebb47
#undef public_6eebb7a
#undef public_6eebb83
#undef public_6eebb90
#undef public_6eebba6
