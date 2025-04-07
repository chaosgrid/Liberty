#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac380);

#define public_62ac393 _public_62ac393
#define public_62ac39b _public_62ac39b
#define public_62ac3a0 _public_62ac3a0

PROC_DECLARE(0x62ac380, internal_62ac380, public_62ac380);
extern "C" NAKED register_t __cdecl internal_62ac380()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_62ac3a0
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+8]
        public_62ac393 : nop
        test eax, eax
        je public_62ac39b
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [eax], dl
        public_62ac39b : nop
        inc eax
        dec ecx
        jne public_62ac393
        pop esi
        public_62ac3a0 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x62ac380)
    }
}

#undef public_62ac393
#undef public_62ac39b
#undef public_62ac3a0
