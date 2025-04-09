#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_516060);
CLANG_FORWARD_PROC_SYMBOL(public_5484c0);

#define public_5484d9 _public_5484d9
#define public_5484db _public_5484db
#define public_5484f8 _public_5484f8
#define public_54850e _public_54850e

PROC_DECLARE(0x5484c0, internal_5484c0, public_5484c0);
extern "C" NAKED register_t __cdecl internal_5484c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        test esi, esi
        push edi
        je public_5484d9
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        je public_5484db
        public_5484d9 : nop
        xor esi, esi
        public_5484db : nop
        mov al, byte ptr ds : [esi+0xE0]
        test al, al
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x10]
        jns public_5484f8
        push ebx
        push edi
        push ecx
        call public_516060
        add esp, 0xC
        public_5484f8 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_54850e
        mov edx, dword ptr ds : [esi]
        push edi
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0xB4]
        public_54850e : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x5484c0)
    }
}

#undef public_5484d9
#undef public_5484db
#undef public_5484f8
#undef public_54850e
