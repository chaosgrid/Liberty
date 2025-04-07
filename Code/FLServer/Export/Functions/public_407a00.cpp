#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418c54);
CLANG_FORWARD_PROC_SYMBOL(public_418c5a);
CLANG_FORWARD_PROC_SYMBOL(public_418c60);

#define public_407a15 _public_407a15
#define public_407a18 _public_407a18
#define public_407a30 _public_407a30
#define public_407a33 _public_407a33
#define public_407a9e _public_407a9e

PROC_DECLARE(0x407a00, internal_407a00, public_407a00);
extern "C" NAKED register_t __cdecl internal_407a00()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_418c54
        test esi, esi
        jne public_407a15
        xor eax, eax
        jmp public_407a18
        public_407a15 : nop
        mov eax, dword ptr ds : [esi+0x20]
        public_407a18 : nop
        mov ebx, dword ptr ds : [public_41bc0c]
        push eax
        call ebx
        test eax, eax
        je public_407a9e
        lea edi, ds:[esi+0x60]
        test edi, edi
        jne public_407a30
        xor eax, eax
        jmp public_407a33
        public_407a30 : nop
        mov eax, dword ptr ds : [edi+0x20]
        public_407a33 : nop
        push eax
        call ebx
        test eax, eax
        je public_407a9e
        mov ecx, dword ptr ds : [esi+0x20]
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        call dword ptr ds : [public_41bc10]
        mov eax, dword ptr ds : [esi+0x80]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [public_41bc14]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_418c60
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+edx]
        mov edx, dword ptr ss : [esp+0x1C]
        sub ecx, eax
        sub ecx, ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push 0x16
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[edx+edx]
        sub ecx, eax
        sub ecx, ebx
        push ecx
        push 0
        push 0
        push 0
        mov ecx, edi
        call public_418c5a
        public_407a9e : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x407a00)
    }
}

#undef public_407a15
#undef public_407a18
#undef public_407a30
#undef public_407a33
#undef public_407a9e
