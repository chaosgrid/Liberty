#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6344070);

#define public_634407b _public_634407b
#define public_6344090 _public_6344090
#define public_63440b7 _public_63440b7

PROC_DECLARE(0x6344070, internal_6344070, public_6344070);
extern "C" NAKED register_t __cdecl internal_6344070()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_6344090
        public_634407b : nop
        cmp eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [eax]
        je public_6344090
        push eax
        call public_6343fb0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_634407b
        public_6344090 : nop
        mov edx, dword ptr ds : [esi]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x12]
        lea eax, ds:[edx+0x23]
        and eax, 0xFFFFFFE0
        test cx, cx
        mov dword ptr ds : [esi+8], eax
        je public_63440b7
        and ecx, 0xFFFF
        add eax, ecx
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        ret 
        public_63440b7 : nop
        mov ecx, 0x7FE0
        add eax, ecx
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6344070)
    }
}

#undef public_634407b
#undef public_6344090
#undef public_63440b7
