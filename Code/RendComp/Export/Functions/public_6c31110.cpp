#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31110);

#define public_6c31132 _public_6c31132
#define public_6c3114b _public_6c3114b

PROC_DECLARE(0x6c31110, internal_6c31110, public_6c31110);
extern "C" NAKED register_t __cdecl internal_6c31110()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        push esi
        movzx esi, word ptr ds : [eax+0x12]
        push edi
        xor edi, edi
        test esi, esi
        jbe public_6c3114b
        movzx eax, word ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx+0x34]
        add eax, 2
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[edx+eax*4]
        public_6c31132 : nop
        movzx edx, word ptr ds : [ecx]
        mov eax, 0x55555556
        imul edx
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        add ecx, 0xC
        dec esi
        jne public_6c31132
        public_6c3114b : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c31110)
    }
}

#undef public_6c31132
#undef public_6c3114b
