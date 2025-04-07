#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63128e0);
CLANG_FORWARD_PROC_SYMBOL(public_6312a40);
CLANG_FORWARD_PROC_SYMBOL(public_6312b70);
CLANG_FORWARD_PROC_SYMBOL(public_6313680);

#define public_632dac5 _public_632dac5
#define public_632dad6 _public_632dad6

PROC_DECLARE(0x632da10, internal_632da10, public_632da10);
extern "C" NAKED register_t __cdecl internal_632da10()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        push 4
        lea eax, ss:[esp+0x48]
        mov esi, ecx
        push eax
        mov ecx, edi
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x44]
        push 4
        lea edx, ss:[esp+0x48]
        mov dword ptr ds : [esi], ecx
        push edx
        mov ecx, edi
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x44]
        push 4
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        call public_63128e0
        mov edx, dword ptr ss : [esp+0x44]
        push 4
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edi
        mov dword ptr ds : [esi+8], edx
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x44]
        push 4
        lea edx, ss:[esp+0x48]
        mov dword ptr ds : [esi+0xC], ecx
        push edx
        mov ecx, edi
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, edi
        mov dword ptr ds : [esi+0x10], eax
        call public_6312a40
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        mov dword ptr ds : [esi+0x14], eax
        call public_6313680
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x24]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        mov edx, dword ptr ds : [eax+0x30]
        xor ebx, ebx
        test edx, edx
        mov dword ptr ds : [ecx+0x30], edx
        jle public_632dad6
        lea edx, ds:[ecx+0x10]
        sub eax, ecx
        push ebp
        public_632dac5 : nop
        mov ebp, dword ptr ds : [eax+edx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ecx+0x30]
        inc ebx
        add edx, 4
        cmp ebx, ebp
        jl public_632dac5
        pop ebp
        public_632dad6 : nop
        mov ecx, edi
        call public_6312b70
        mov dword ptr ds : [esi+0x58], eax
        push 4
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edi
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [esi+0x5C], ecx
        mov ecx, edi
        call public_6312b70
        push 4
        lea edx, ss:[esp+0x48]
        push edx
        mov ecx, edi
        mov dword ptr ds : [esi+0x18], eax
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x44]
        push 4
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, edi
        mov dword ptr ds : [esi+0x1C], eax
        call public_63128e0
        mov edx, dword ptr ss : [esp+0x44]
        push 4
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edi
        mov dword ptr ds : [esi+0x20], edx
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        mov dword ptr ds : [esi+0x60], ecx
        pop esi
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x632da10)
    }
}

#undef public_632dac5
#undef public_632dad6
