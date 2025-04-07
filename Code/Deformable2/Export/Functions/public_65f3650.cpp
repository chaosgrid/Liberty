#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3650);

#define public_65f36ac _public_65f36ac

PROC_DECLARE(0x65f3650, internal_65f3650, public_65f3650);
extern "C" NAKED register_t __cdecl internal_65f3650()
{
    __asm
    {
        push ecx
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi], offset public_6601308
        fld dword ptr ds : [public_660314c]
        fcomp dword ptr ds : [public_6601318]
        fnstsw ax
        test ah, 0x41
        jne public_65f36ac
        call dword ptr ds : [public_6601038]
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        mov eax, esi
        fmul dword ptr ds : [public_660314c]
        fmul dword ptr ds : [public_6601314]
        fstp dword ptr ds : [esi+0x28]
        pop esi
        pop ecx
        ret 
        public_65f36ac : nop
        mov eax, dword ptr ds : [public_660314c]
        mov dword ptr ds : [esi+0x28], eax
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65f3650)
    }
}

#undef public_65f36ac
