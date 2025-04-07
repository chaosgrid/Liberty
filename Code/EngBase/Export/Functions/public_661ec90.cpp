#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661ec90);
CLANG_FORWARD_PROC_SYMBOL(public_661ed60);

#define public_661ecb9 _public_661ecb9
#define public_661ecbc _public_661ecbc

PROC_DECLARE(0x661ec90, internal_661ec90, public_661ec90);
extern "C" NAKED register_t __cdecl internal_661ec90()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[edx+0x5C]
        mov eax, ecx
        mov ecx, 0x17
        mov byte ptr ds : [edi+0x78], 1
        rep movsd
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [eax+0x20], edx
        test ecx, ecx
        jne public_661ecb9
        mov dword ptr ds : [eax+0x1C], edx
        jmp public_661ecbc
        public_661ecb9 : nop
        mov dword ptr ds : [ecx+0x14], edx
        public_661ecbc : nop
        mov dword ptr ds : [edx+0x14], 0
        mov dword ptr ds : [edx+0x18], ecx
        mov esi, dword ptr ds : [eax+0x24]
        push 1
        inc esi
        mov ecx, eax
        mov dword ptr ds : [eax+0x24], esi
        mov dword ptr ds : [edx+0x10], eax
        call public_661ed60
        pop edi
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x661ec90)
    }
}

#undef public_661ecb9
#undef public_661ecbc
