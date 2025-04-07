#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeba50);
CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f21210);

#define public_6eeba80 _public_6eeba80
#define public_6eeba90 _public_6eeba90
#define public_6eeba93 _public_6eeba93
#define public_6eeba97 _public_6eeba97
#define public_6eebaca _public_6eebaca
#define public_6eebad3 _public_6eebad3
#define public_6eebae0 _public_6eebae0
#define public_6eebaf6 _public_6eebaf6

PROC_DECLARE(0x6eeba50, internal_6eeba50, public_6eeba50);
extern "C" NAKED register_t __cdecl internal_6eeba50()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [public_6fcf144]
        push ebx
        mov ebx, dword ptr ds : [public_6fcf148]
        push esi
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+8], ecx
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ebx
        push edi
        mov edi, edx
        mov al, 1
        je public_6eeba97
        lea ecx, ds:[ecx]
        public_6eeba80 : nop
        cmp ecx, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov edi, esi
        je public_6eeba90
        mov esi, dword ptr ds : [esi]
        jmp public_6eeba93
        public_6eeba90 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6eeba93 : nop
        cmp esi, ebx
        jne public_6eeba80
        public_6eeba97 : nop
        mov cl, byte ptr ds : [public_6fcf14c]
        test cl, cl
        jne public_6eebae0
        test al, al
        mov dword ptr ss : [esp+0x18], edi
        je public_6eebad3
        cmp edi, dword ptr ds : [edx]
        jne public_6eebaca
        lea eax, ss:[esp+0xC]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, offset public_6fcf140
        call public_6f21210
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_6eebaca : nop
        lea ecx, ss:[esp+0x18]
        call public_6f00610
        public_6eebad3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [eax+0xC], edx
        jge public_6eebaf6
        public_6eebae0 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        push edi
        lea edx, ss:[esp+0x24]
        push esi
        push edx
        mov ecx, offset public_6fcf140
        call public_6f21210
        public_6eebaf6 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6eeba50)
    }
}

#undef public_6eeba80
#undef public_6eeba90
#undef public_6eeba93
#undef public_6eeba97
#undef public_6eebaca
#undef public_6eebad3
#undef public_6eebae0
#undef public_6eebaf6
