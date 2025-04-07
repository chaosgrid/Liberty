#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac350);

#define public_62ac361 _public_62ac361
#define public_62ac369 _public_62ac369
#define public_62ac36f _public_62ac36f

PROC_DECLARE(0x62ac350, internal_62ac350, public_62ac350);
extern "C" NAKED register_t __cdecl internal_62ac350()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp ecx, esi
        je public_62ac36f
        public_62ac361 : nop
        test eax, eax
        je public_62ac369
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        public_62ac369 : nop
        inc eax
        inc ecx
        cmp ecx, esi
        jne public_62ac361
        public_62ac36f : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62ac350)
    }
}

#undef public_62ac361
#undef public_62ac369
#undef public_62ac36f
