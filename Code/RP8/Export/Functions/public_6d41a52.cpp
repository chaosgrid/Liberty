#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d416f7);
CLANG_FORWARD_PROC_SYMBOL(public_6d41a52);

#define public_6d41a6b _public_6d41a6b
#define public_6d41aaa _public_6d41aaa
#define public_6d41abe _public_6d41abe
#define public_6d41acc _public_6d41acc

PROC_DECLARE(0x6d41a52, internal_6d41a52, public_6d41a52);
extern "C" NAKED register_t __cdecl internal_6d41a52()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+0x178], 0
        jne public_6d41a6b
        push esi
        call public_6d416f7
        test al, al
        pop ecx
        je public_6d41acc
        public_6d41a6b : nop
        mov eax, dword ptr ds : [esi+0x190]
        mov eax, dword ptr ds : [eax+0x54]
        lea ecx, ds:[eax+0xD0]
        cmp dword ptr ds : [esi+0x178], ecx
        jne public_6d41abe
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x61
        mov eax, dword ptr ds : [esi+0x190]
        mov eax, dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push 3
        push esi
        call dword ptr ds : [eax+4]
        and dword ptr ds : [esi+0x178], 0
        pop ecx
        pop ecx
        public_6d41aaa : nop
        mov esi, dword ptr ds : [esi+0x190]
        mov eax, dword ptr ds : [esi+0x54]
        inc eax
        and eax, 7
        mov dword ptr ds : [esi+0x54], eax
        mov al, 1
        pop esi
        ret 
        public_6d41abe : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push eax
        push esi
        call dword ptr ds : [ecx+0x14]
        test al, al
        pop ecx
        pop ecx
        jne public_6d41aaa
        public_6d41acc : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d41a52)
    }
}

#undef public_6d41a6b
#undef public_6d41aaa
#undef public_6d41abe
#undef public_6d41acc
