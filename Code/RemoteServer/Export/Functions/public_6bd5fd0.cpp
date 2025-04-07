#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd5fe0 _public_6bd5fe0
#define public_6bd5ff8 _public_6bd5ff8
#define public_6bd6047 _public_6bd6047
#define public_6bd6060 _public_6bd6060
#define public_6bd606d _public_6bd606d

PROC_DECLARE(0x6bd5fd0, internal_6bd5fd0, public_6bd5fd0);
extern "C" NAKED register_t __cdecl internal_6bd5fd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6bd606d
        push ebp
        push edi
        public_6bd5fe0 : nop
        mov edi, dword ptr ds : [esi+0xC]
        add edi, 4
        dec eax
        test eax, eax
        mov dword ptr ds : [esi+0xC], edi
        mov ecx, edi
        mov dword ptr ds : [esi+0x2C], eax
        je public_6bd5ff8
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6bd6060
        public_6bd5ff8 : nop
        mov eax, dword ptr ds : [esi+0x10]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [eax]
        push edx
        call public_6c09aaa
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        lea ebp, ds:[esi+4]
        jne public_6bd6047
        xor eax, eax
        mov dword ptr ss : [ebp], eax
        xor ecx, ecx
        mov dword ptr ss : [ebp+4], ecx
        xor edx, edx
        mov dword ptr ss : [ebp+8], edx
        xor edi, edi
        mov dword ptr ss : [ebp+0xC], edi
        lea ebp, ds:[esi+0x14]
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], edx
        push eax
        mov dword ptr ss : [ebp+0xC], edi
        call public_6c09aaa
        add esp, 4
        jmp public_6bd6060
        public_6bd6047 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ss : [ebp+4], edx
        mov edi, ecx
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], eax
        public_6bd6060 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        jne public_6bd5fe0
        pop edi
        pop ebp
        public_6bd606d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bd5fd0)
    }
}

#undef public_6bd5fe0
#undef public_6bd5ff8
#undef public_6bd6047
#undef public_6bd6060
#undef public_6bd606d
