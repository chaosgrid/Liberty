#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402500);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_402510 _public_402510
#define public_402522 _public_402522
#define public_402532 _public_402532
#define public_402558 _public_402558
#define public_40255a _public_40255a
#define public_402563 _public_402563
#define public_402571 _public_402571

PROC_DECLARE(0x402500, internal_402500, public_402500);
extern "C" NAKED register_t __cdecl internal_402500()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        push edi
        je public_402522
        mov edi, edi
        public_402510 : nop
        mov edi, dword ptr ds : [eax+0x30]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_402510
        public_402522 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        xor ebp, ebp
        test ebx, ebx
        mov dword ptr ds : [esi], 0
        je public_402571
        public_402532 : nop
        push 0x34
        call public_5b7e84
        add esp, 4
        test eax, eax
        je public_402558
        mov ecx, 0xD
        mov esi, ebx
        mov edi, eax
        mov dword ptr ds : [eax+0x24], 0
        rep movsd
        mov esi, dword ptr ss : [esp+0x14]
        jmp public_40255a
        public_402558 : nop
        xor eax, eax
        public_40255a : nop
        test ebp, ebp
        mov dword ptr ds : [esi], eax
        je public_402563
        mov dword ptr ss : [ebp+0x30], eax
        public_402563 : nop
        mov ebp, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ebx+0x30]
        test ebx, ebx
        mov eax, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [esi], eax
        jne public_402532
        public_402571 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x402500)
    }
}

#undef public_402510
#undef public_402522
#undef public_402532
#undef public_402558
#undef public_40255a
#undef public_402563
#undef public_402571
