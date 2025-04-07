#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006920);
CLANG_FORWARD_PROC_SYMBOL(public_10009720);
CLANG_FORWARD_PROC_SYMBOL(public_10009880);
CLANG_FORWARD_PROC_SYMBOL(public_1000a424);
CLANG_FORWARD_PROC_SYMBOL(public_1000a46a);

#define public_100098a6 _public_100098a6
#define public_100098b1 _public_100098b1
#define public_10009934 _public_10009934
#define public_10009941 _public_10009941

PROC_DECLARE(0x10009880, internal_10009880, public_10009880);
extern "C" NAKED register_t __cdecl internal_10009880()
{
    __asm
    {
        mov eax, 0x4098
        call public_1000a424
        push esi
        mov esi, dword ptr ss : [esp+0x40AC]
        test esi, esi
        push edi
        jne public_100098a6
        lea eax, ss:[esp+8]
        push eax
        call public_10006920
        add esp, 4
        jmp public_100098b1
        public_100098a6 : nop
        mov ecx, 8
        lea edi, ss:[esp+8]
        rep movsd
        public_100098b1 : nop
        mov eax, dword ptr ss : [esp+0x40A8]
        mov edx, dword ptr ss : [esp+0x40A4]
        xor ecx, ecx
        test eax, eax
        mov eax, dword ptr ss : [esp+0x24]
        sete cl
        lea ecx, ds:[ecx*4+7]
        push ecx
        push edx
        push eax
        call dword ptr ss : [esp+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_10009934
        mov ecx, dword ptr ss : [esp+0x24]
        push eax
        push ecx
        call dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x4098], eax
        lea eax, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x409C], 0
        call public_10009720
        push 0x4098
        call public_1000a46a
        add esp, 4
        test eax, eax
        jne public_10009941
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push eax
        call dword ptr ss : [esp+0x24]
        public_10009934 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x4098
        ret 0x10
        public_10009941 : nop
        mov ecx, 0x1026
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x4098
        ret 0x10
        UNREACHABLE_TRAP(0x10009880)
    }
}

#undef public_100098a6
#undef public_100098b1
#undef public_10009934
#undef public_10009941
