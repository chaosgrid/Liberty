#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b31330);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b31340 _public_6b31340
#define public_6b31358 _public_6b31358
#define public_6b313a7 _public_6b313a7
#define public_6b313c0 _public_6b313c0
#define public_6b313cd _public_6b313cd

PROC_DECLARE(0x6b31330, internal_6b31330, public_6b31330);
extern "C" NAKED register_t __cdecl internal_6b31330()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6b313cd
        push ebp
        push edi
        public_6b31340 : nop
        mov edi, dword ptr ds : [esi+0xC]
        add edi, 4
        dec eax
        test eax, eax
        mov dword ptr ds : [esi+0xC], edi
        mov ecx, edi
        mov dword ptr ds : [esi+0x2C], eax
        je public_6b31358
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b313c0
        public_6b31358 : nop
        mov eax, dword ptr ds : [esi+0x10]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [eax]
        push edx
        call public_6b6a092
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        lea ebp, ds:[esi+4]
        jne public_6b313a7
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
        call public_6b6a092
        add esp, 4
        jmp public_6b313c0
        public_6b313a7 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ss : [ebp+4], edx
        mov edi, ecx
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], eax
        public_6b313c0 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        jne public_6b31340
        pop edi
        pop ebp
        public_6b313cd : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b31330)
    }
}

#undef public_6b31340
#undef public_6b31358
#undef public_6b313a7
#undef public_6b313c0
#undef public_6b313cd
