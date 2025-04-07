#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001d60);
CLANG_FORWARD_PROC_SYMBOL(public_100035e0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a400);

#define public_10003600 _public_10003600
#define public_10003630 _public_10003630
#define public_1000364e _public_1000364e
#define public_1000365f _public_1000365f
#define public_10003664 _public_10003664
#define public_10003670 _public_10003670
#define public_10003680 _public_10003680
#define public_1000368a _public_1000368a

PROC_DECLARE(0x100035e0, internal_100035e0, public_100035e0);
extern "C" NAKED register_t __cdecl internal_100035e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, eax
        xor ebx, ebx
        test esi, esi
        push edi
        je public_1000368a
        cmp byte ptr ds : [esi+0x5C], 0x77
        jne public_1000368a
        mov dword ptr ds : [esi+4], ebx
        lea esp, ss:[esp]
        public_10003600 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov edi, 0x4000
        sub edi, eax
        je public_10003630
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [esi+0x48]
        push eax
        push edi
        push 1
        push ecx
        call public_1000a400
        add esp, 0x10
        cmp eax, edi
        jne public_10003680
        mov edx, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ds : [esi+0x10], 0x4000
        public_10003630 : nop
        test ebx, ebx
        jne public_10003670
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        call public_10001d60
        test edi, edi
        mov dword ptr ds : [esi+0x38], eax
        jne public_1000364e
        cmp eax, 0xFFFFFFFB
        jne public_1000364e
        mov dword ptr ds : [esi+0x38], edi
        public_1000364e : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_1000365f
        cmp dword ptr ds : [esi+0x38], 1
        je public_1000365f
        xor ebx, ebx
        jmp public_10003664
        public_1000365f : nop
        mov ebx, 1
        public_10003664 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_10003600
        cmp eax, 1
        je public_10003600
        public_10003670 : nop
        mov esi, dword ptr ds : [esi+0x38]
        mov eax, esi
        dec eax
        neg eax
        sbb eax, eax
        pop edi
        and eax, esi
        pop esi
        pop ebx
        ret 
        public_10003680 : nop
        or eax, 0xFFFFFFFF
        pop edi
        mov dword ptr ds : [esi+0x38], eax
        pop esi
        pop ebx
        ret 
        public_1000368a : nop
        pop edi
        pop esi
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x100035e0)
    }
}

#undef public_10003600
#undef public_10003630
#undef public_1000364e
#undef public_1000365f
#undef public_10003664
#undef public_10003670
#undef public_10003680
#undef public_1000368a
