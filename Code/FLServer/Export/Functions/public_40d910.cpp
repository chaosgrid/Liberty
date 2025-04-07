#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d910);

#define public_40d940 _public_40d940
#define public_40d95e _public_40d95e
#define public_40d976 _public_40d976

PROC_DECLARE(0x40d910, internal_40d910, public_40d910);
extern "C" NAKED register_t __cdecl internal_40d910()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xF4]
        test eax, eax
        je public_40d976
        push edi
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_41b1b4]
        mov al, byte ptr ds : [esi+0xFC]
        test al, al
        je public_40d95e
        xor eax, eax
        lea ecx, ds:[esi+0x100]
        mov edx, 0x40
        mov edi, edi
        public_40d940 : nop
        add eax, dword ptr ds : [ecx]
        add ecx, 4
        dec edx
        jne public_40d940
        cdq 
        and edx, 0x3F
        add eax, edx
        sar eax, 6
        mov dword ptr ds : [esi+0x204], eax
        mov byte ptr ds : [esi+0xFC], 0
        public_40d95e : nop
        mov eax, dword ptr ds : [esi+0xF4]
        mov edi, dword ptr ds : [esi+0x204]
        push eax
        call dword ptr ds : [public_41b1a4]
        mov eax, edi
        pop edi
        pop esi
        ret 
        public_40d976 : nop
        mov eax, dword ptr ds : [esi+0x204]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40d910)
    }
}

#undef public_40d940
#undef public_40d95e
#undef public_40d976
