#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31390);

#define public_6f313e0 _public_6f313e0
#define public_6f31411 _public_6f31411
#define public_6f31424 _public_6f31424

PROC_DECLARE(0x6f31390, internal_6f31390, public_6f31390);
extern "C" NAKED register_t __cdecl internal_6f31390()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push 1
        push 0
        mov ecx, edi
        call ebx
        mov ebp, dword ptr ds : [public_6fb33b0]
        push eax
        call ebp
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 8
        push 0
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi], eax
        call ebx
        push eax
        call ebp
        add esp, 8
        mov ebx, 2
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f31411
        nop 
        lea esp, ss:[esp]
        public_6f313e0 : nop
        mov eax, ebx
        push eax
        mov ecx, edi
        inc ebx
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb33ac]
        mov ecx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [esi+ecx*4+0x10], eax
        mov ebp, dword ptr ds : [esi+0x30]
        add esp, 4
        inc ebp
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+0x30], ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f313e0
        public_6f31411 : nop
        cmp dword ptr ds : [esi], 0
        je public_6f31424
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f31424
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 
        public_6f31424 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f31390)
    }
}

#undef public_6f313e0
#undef public_6f31411
#undef public_6f31424
