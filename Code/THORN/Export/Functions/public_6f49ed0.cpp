#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49d70);

#define public_6f49ef1 _public_6f49ef1

PROC_DECLARE(0x6f49ed0, internal_6f49ed0, public_6f49ed0);
extern "C" NAKED register_t __cdecl internal_6f49ed0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_6f49d70
        mov cl, byte ptr ds : [esi+0x30]
        mov al, 1
        test al, cl
        je public_6f49ef1
        mov dword ptr ds : [esi+0x1C], 0xFFFFFFFF
        pop esi
        ret 8
        public_6f49ef1 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        add ecx, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [esi+0x1C], ecx
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f49ed0)
    }
}

#undef public_6f49ef1
