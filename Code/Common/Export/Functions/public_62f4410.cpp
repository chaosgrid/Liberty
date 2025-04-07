#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0910);
CLANG_FORWARD_PROC_SYMBOL(public_62f4410);

#define public_62f4429 _public_62f4429
#define public_62f4434 _public_62f4434
#define public_62f4447 _public_62f4447
#define public_62f4452 _public_62f4452

PROC_DECLARE(0x62f4410, internal_62f4410, public_62f4410);
extern "C" NAKED register_t __cdecl internal_62f4410()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f0910
        mov al, byte ptr ds : [edi+0x60]
        cmp al, byte ptr ds : [esi+0x60]
        je public_62f4429
        mov byte ptr ds : [esi+0x60], al
        public_62f4429 : nop
        mov eax, dword ptr ds : [edi+0x64]
        cmp eax, dword ptr ds : [esi+0x64]
        je public_62f4434
        mov dword ptr ds : [esi+0x64], eax
        public_62f4434 : nop
        fld dword ptr ds : [edi+0x5C]
        fcomp dword ptr ds : [esi+0x5C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f4447
        mov eax, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], eax
        public_62f4447 : nop
        mov al, byte ptr ds : [edi+0x6C]
        cmp al, byte ptr ds : [esi+0x6C]
        je public_62f4452
        mov byte ptr ds : [esi+0x6C], al
        public_62f4452 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f4410)
    }
}

#undef public_62f4429
#undef public_62f4434
#undef public_62f4447
#undef public_62f4452
