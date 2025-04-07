#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5b60);

#define public_62ac47d _public_62ac47d

PROC_DECLARE(0x62ac460, internal_62ac460, public_62ac460);
extern "C" NAKED register_t __cdecl internal_62ac460()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x5C]
        test edx, edx
        mov dword ptr ds : [ecx+0xE4], edx
        je public_62ac47d
        mov edx, dword ptr ds : [public_63ed188]
        mov dword ptr ds : [ecx+0xF8], edx
        public_62ac47d : nop
        mov edx, dword ptr ds : [eax+0x60]
        mov dword ptr ds : [ecx+0xE8], edx
        mov edx, dword ptr ds : [eax+0x64]
        mov dword ptr ds : [ecx+0xEC], edx
        mov edx, dword ptr ds : [eax+0x68]
        mov dword ptr ds : [ecx+0xF0], edx
        mov edx, dword ptr ds : [eax+0x6C]
        mov dword ptr ds : [ecx+0xF4], edx
        mov dl, byte ptr ds : [eax+0x70]
        mov byte ptr ds : [ecx+0xFC], dl
        mov dl, byte ptr ds : [eax+0x71]
        mov byte ptr ds : [ecx+0xFD], dl
        mov dword ptr ss : [esp+4], eax
        jmp public_62b5b60
        UNREACHABLE_TRAP(0x62ac460)
    }
}

#undef public_62ac47d
