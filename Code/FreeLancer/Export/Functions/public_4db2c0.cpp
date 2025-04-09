#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_4de0a0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7890);
CLANG_FORWARD_PROC_SYMBOL(public_54bd40);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);

#define public_4db2f3 _public_4db2f3
#define public_4db308 _public_4db308
#define public_4db323 _public_4db323
#define public_4db333 _public_4db333

PROC_DECLARE(0x4db2c0, internal_4db2c0, public_4db2c0);
extern "C" NAKED register_t __cdecl internal_4db2c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_54bd40
        test al, al
        jne public_4db333
        call public_41a3e0
        test al, al
        jne public_4db333
        lea ecx, ds:[esi+0x32C]
        call public_55e280
        test al, al
        jne public_4db2f3
        lea ecx, ds:[esi+0x4A8]
        call public_55e280
        test al, al
        je public_4db308
        public_4db2f3 : nop
        mov ecx, dword ptr ds : [esi+0x5A0]
        test ecx, ecx
        je public_4db308
        test byte ptr ds : [ecx+0x6C], 2
        je public_4db308
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x34]
        public_4db308 : nop
        lea ecx, ds:[esi+0x4A8]
        call public_55e280
        test al, al
        je public_4db323
        mov ecx, dword ptr ds : [esi+0x494]
        mov edx, dword ptr ds : [ecx]
        pop esi
        jmp dword ptr ds : [edx+0x34]
        public_4db323 : nop
        lea ecx, ds:[esi-0x38]
        call public_4de0a0
        mov ecx, esi
        pop esi
        jmp public_4e7890
        public_4db333 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4db2c0)
    }
}

#undef public_4db2f3
#undef public_4db308
#undef public_4db323
#undef public_4db333
