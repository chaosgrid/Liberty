#include "Common-PCH.h"


#define public_62d4b65 _public_62d4b65
#define public_62d4b67 _public_62d4b67
#define public_62d4b7e _public_62d4b7e

PROC_DECLARE(0x62d4b30, internal_62d4b30, public_62d4b30);
extern "C" NAKED register_t __cdecl internal_62d4b30()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0xC0], 7
        jne public_62d4b7e
        mov al, byte ptr ds : [ecx+0x169]
        test al, al
        je public_62d4b7e
        cmp dword ptr ds : [ecx+0x16C], 1
        jne public_62d4b7e
        mov eax, dword ptr ds : [ecx+0x190]
        test eax, eax
        je public_62d4b7e
        mov ecx, dword ptr ds : [eax+0x324]
        test ecx, ecx
        je public_62d4b65
        add ecx, 0xFFFFFFF8
        jmp public_62d4b67
        public_62d4b65 : nop
        xor ecx, ecx
        public_62d4b67 : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [eax+0x43C]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 8
        public_62d4b7e : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x62d4b30)
    }
}

#undef public_62d4b65
#undef public_62d4b67
#undef public_62d4b7e
