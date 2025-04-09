#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41afd0);
CLANG_FORWARD_PROC_SYMBOL(public_425330);

#define public_407338 _public_407338
#define public_40734d _public_40734d
#define public_407375 _public_407375

PROC_DECLARE(0x407320, internal_407320, public_407320);
extern "C" NAKED register_t __cdecl internal_407320()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x50]
        test al, 2
        push edi
        jne public_40734d
        mov edi, dword ptr ds : [esi+0x34]
        or al, 2
        mov byte ptr ds : [esi+0x50], al
        cmp edi, dword ptr ds : [esi+0x38]
        je public_40734d
        public_407338 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        call public_41afd0
        mov eax, dword ptr ds : [esi+0x38]
        add edi, 4
        add esp, 4
        cmp edi, eax
        jne public_407338
        public_40734d : nop
        mov al, byte ptr ds : [esi+0x50]
        test al, 4
        jne public_407375
        mov ecx, dword ptr ds : [esi+0x14]
        or al, 4
        mov byte ptr ds : [esi+0x50], al
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_407375
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x40]
        push edx
        call public_425330
        add esp, 4
        public_407375 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x407320)
    }
}

#undef public_407338
#undef public_40734d
#undef public_407375
