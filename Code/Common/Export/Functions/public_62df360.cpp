#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df360);

#define public_62df397 _public_62df397

PROC_DECLARE(0x62df360, internal_62df360, public_62df360);
extern "C" NAKED register_t __cdecl internal_62df360()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x2D4]
        test al, al
        je public_62df397
        mov edx, dword ptr ss : [esp+4]
        lea eax, ds:[ecx+0x2F4]
        push esi
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [ecx+0x2F0]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        mov al, 1
        pop esi
        ret 8
        public_62df397 : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x62df360)
    }
}

#undef public_62df397
