#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67155c0);

#define public_671264e _public_671264e
#define public_6712657 _public_6712657
#define public_6712675 _public_6712675
#define public_6712694 _public_6712694

PROC_DECLARE(0x6712640, internal_6712640, public_6712640);
extern "C" NAKED register_t __cdecl internal_6712640()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_67155c0
        test al, al
        jne public_671264e
        pop esi
        ret 
        public_671264e : nop
        cmp byte ptr ds : [esi], 0
        jne public_6712657
        xor al, al
        pop esi
        ret 
        public_6712657 : nop
        mov al, byte ptr ds : [esi+0x14]
        push edi
        test al, al
        je public_6712694
        call dword ptr ds : [public_67170a4]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jae public_6712675
        mov dword ptr ds : [esi+4], 0
        public_6712675 : nop
        call dword ptr ds : [public_6717100]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, edi
        sub ecx, edx
        cmp ecx, eax
        jbe public_6712694
        mov al, byte ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], edi
        test al, al
        sete dl
        mov byte ptr ds : [esi+8], dl
        public_6712694 : nop
        mov al, byte ptr ds : [esi+8]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6712640)
    }
}

#undef public_671264e
#undef public_6712657
#undef public_6712675
#undef public_6712694
