#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6200);
CLANG_FORWARD_PROC_SYMBOL(public_62ecb20);
CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);

#define public_62c6118 _public_62c6118
#define public_62c6151 _public_62c6151
#define public_62c6165 _public_62c6165

PROC_DECLARE(0x62c60f0, internal_62c60f0, public_62c60f0);
extern "C" NAKED register_t __cdecl internal_62c60f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x340]
        push edi
        fcomp dword ptr ds : [esi+0x33C]
        mov edi, 2
        fnstsw ax
        test ah, 1
        jne public_62c6118
        mov dword ptr ds : [esi+0x340], 0
        jmp public_62c6151
        public_62c6118 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        call public_62ecb20
        test al, al
        jne public_62c6151
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x142C
        call public_62ed5a0
        test eax, eax
        je public_62c6151
        push eax
        call public_62e6200
        add esp, 4
        test eax, 0x30000
        je public_62c6151
        mov edi, 1
        public_62c6151 : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62c6165
        mov eax, 3
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        public_62c6165 : nop
        mov dword ptr ds : [esi+0xC], edi
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c60f0)
    }
}

#undef public_62c6118
#undef public_62c6151
#undef public_62c6165
